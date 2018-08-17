//
// Aspia Project
// Copyright (C) 2018 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#include "codec/video_decoder_vpx.h"

#include <libyuv/convert_from.h>
#include <libyuv/convert_argb.h>

#include <QDebug>

#include "codec/video_util.h"

namespace aspia {

namespace {

bool convertImage(const proto::desktop::VideoPacket& packet,
                  vpx_image_t* image,
                  DesktopFrame* frame)
{
    DesktopRect frame_rect = DesktopRect::makeSize(frame->size());

    uint8_t* y_data = image->planes[0];
    uint8_t* u_data = image->planes[1];
    uint8_t* v_data = image->planes[2];

    int y_stride = image->stride[0];

    switch (image->fmt)
    {
        case VPX_IMG_FMT_I420:
        {
            int uv_stride = image->stride[1];

            for (int i = 0; i < packet.dirty_rect_size(); ++i)
            {
                DesktopRect rect = VideoUtil::fromVideoRect(packet.dirty_rect(i));

                if (!frame_rect.containsRect(rect))
                {
                    qWarning("The rectangle is outside the screen area");
                    return false;
                }

                int y_offset = y_stride * rect.y() + rect.x();
                int uv_offset = uv_stride * rect.y() / 2 + rect.x() / 2;

                libyuv::I420ToARGB(y_data + y_offset, y_stride,
                                   u_data + uv_offset, uv_stride,
                                   v_data + uv_offset, uv_stride,
                                   frame->frameDataAtPos(rect.topLeft()),
                                   frame->stride(),
                                   rect.width(),
                                   rect.height());
            }
        }
        break;

        case VPX_IMG_FMT_I444:
        {
            int u_stride = image->stride[1];
            int v_stride = image->stride[2];

            for (int i = 0; i < packet.dirty_rect_size(); ++i)
            {
                DesktopRect rect = VideoUtil::fromVideoRect(packet.dirty_rect(i));

                if (!frame_rect.containsRect(rect))
                {
                    qWarning("The rectangle is outside the screen area");
                    return false;
                }

                int y_offset = y_stride * rect.y() + rect.x();
                int u_offset = u_stride * rect.y() + rect.x();
                int v_offset = v_stride * rect.y() + rect.x();

                libyuv::I444ToARGB(y_data + y_offset, y_stride,
                                   u_data + u_offset, u_stride,
                                   v_data + v_offset, v_stride,
                                   frame->frameDataAtPos(rect.topLeft()),
                                   frame->stride(),
                                   rect.width(),
                                   rect.height());
            }
        }
        break;

        default:
        {
            qWarning() << "Unsupported image format: " << image->fmt;
            return false;
        }
    }

    return true;
}

} // namespace

// static
std::unique_ptr<VideoDecoderVPX> VideoDecoderVPX::createVP8()
{
    return std::unique_ptr<VideoDecoderVPX>(
        new VideoDecoderVPX(proto::desktop::VIDEO_ENCODING_VP8));
}

// static
std::unique_ptr<VideoDecoderVPX> VideoDecoderVPX::createVP9()
{
    return std::unique_ptr<VideoDecoderVPX>(
        new VideoDecoderVPX(proto::desktop::VIDEO_ENCODING_VP9));
}

VideoDecoderVPX::VideoDecoderVPX(proto::desktop::VideoEncoding encoding)
{
    codec_.reset(new vpx_codec_ctx_t());

    vpx_codec_dec_cfg_t config;

    config.w = 0;
    config.h = 0;
    config.threads = 2;

    vpx_codec_iface_t* algo;

    switch (encoding)
    {
        case proto::desktop::VIDEO_ENCODING_VP8:
            algo = vpx_codec_vp8_dx();
            break;

        case proto::desktop::VIDEO_ENCODING_VP9:
            algo = vpx_codec_vp9_dx();
            break;

        default:
            qFatal("Unsupported video encoding: %d", encoding);
            return;
    }

    if (vpx_codec_dec_init(codec_.get(), algo, &config, 0) != VPX_CODEC_OK)
        qFatal("vpx_codec_dec_init failed");
}

bool VideoDecoderVPX::decode(const proto::desktop::VideoPacket& packet, DesktopFrame* frame)
{
    // Do the actual decoding.
    vpx_codec_err_t ret =
        vpx_codec_decode(codec_.get(),
                         reinterpret_cast<const uint8_t*>(packet.data().data()),
                         static_cast<unsigned int>(packet.data().size()),
                         nullptr,
                         0);
    if (ret != VPX_CODEC_OK)
    {
        const char* error = vpx_codec_error(codec_.get());
        const char* error_detail = vpx_codec_error_detail(codec_.get());

        qWarning() << "Decoding failed:" << (error ? error : "(NULL)") << "\n"
                   << "Details: " << (error_detail ? error_detail : "(NULL)");
        return false;
    }

    vpx_codec_iter_t iter = nullptr;

    // Gets the decoded data.
    vpx_image_t* image = vpx_codec_get_frame(codec_.get(), &iter);
    if (!image)
    {
        qWarning("No video frame decoded");
        return false;
    }

    if (DesktopSize(image->d_w, image->d_h) != frame->size())
    {
        qWarning("Size of the encoded frame doesn't match size in the header");
        return false;
    }

    return convertImage(packet, image, frame);
}

} // namespace aspia
