// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_ata.proto

#ifndef PROTOBUF_category_5fata_2eproto__INCLUDED
#define PROTOBUF_category_5fata_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace protobuf_category_5fata_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsATA_ItemImpl();
void InitDefaultsATA_Item();
void InitDefaultsATAImpl();
void InitDefaultsATA();
inline void InitDefaults() {
  InitDefaultsATA_Item();
  InitDefaultsATA();
}
}  // namespace protobuf_category_5fata_2eproto
namespace aspia {
namespace proto {
class ATA;
class ATADefaultTypeInternal;
extern ATADefaultTypeInternal _ATA_default_instance_;
class ATA_Item;
class ATA_ItemDefaultTypeInternal;
extern ATA_ItemDefaultTypeInternal _ATA_Item_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

enum ATA_BusType {
  ATA_BusType_BUS_TYPE_UNKNOWN = 0,
  ATA_BusType_BUS_TYPE_SCSI = 1,
  ATA_BusType_BUS_TYPE_ATAPI = 2,
  ATA_BusType_BUS_TYPE_ATA = 3,
  ATA_BusType_BUS_TYPE_IEEE1394 = 4,
  ATA_BusType_BUS_TYPE_SSA = 5,
  ATA_BusType_BUS_TYPE_FIBRE = 6,
  ATA_BusType_BUS_TYPE_USB = 7,
  ATA_BusType_BUS_TYPE_RAID = 8,
  ATA_BusType_BUS_TYPE_ISCSI = 9,
  ATA_BusType_BUS_TYPE_SAS = 10,
  ATA_BusType_BUS_TYPE_SATA = 11,
  ATA_BusType_BUS_TYPE_SD = 12,
  ATA_BusType_BUS_TYPE_MMC = 13,
  ATA_BusType_BUS_TYPE_VIRTUAL = 14,
  ATA_BusType_BUS_TYPE_FILE_BACKED_VIRTUAL = 15,
  ATA_BusType_ATA_BusType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ATA_BusType_ATA_BusType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ATA_BusType_IsValid(int value);
const ATA_BusType ATA_BusType_BusType_MIN = ATA_BusType_BUS_TYPE_UNKNOWN;
const ATA_BusType ATA_BusType_BusType_MAX = ATA_BusType_BUS_TYPE_FILE_BACKED_VIRTUAL;
const int ATA_BusType_BusType_ARRAYSIZE = ATA_BusType_BusType_MAX + 1;

enum ATA_TransferMode {
  ATA_TransferMode_TRANSFER_MODE_UNKNOWN = 0,
  ATA_TransferMode_TRANSFER_MODE_PIO = 1,
  ATA_TransferMode_TRANSFER_MODE_PIO_DMA = 2,
  ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_133 = 3,
  ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_100 = 4,
  ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_66 = 5,
  ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_44 = 6,
  ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_33 = 7,
  ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_25 = 8,
  ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_16 = 9,
  ATA_TransferMode_TRANSFER_MODE_SATA_600 = 10,
  ATA_TransferMode_TRANSFER_MODE_SATA_300 = 11,
  ATA_TransferMode_TRANSFER_MODE_SATA_150 = 12,
  ATA_TransferMode_ATA_TransferMode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ATA_TransferMode_ATA_TransferMode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ATA_TransferMode_IsValid(int value);
const ATA_TransferMode ATA_TransferMode_TransferMode_MIN = ATA_TransferMode_TRANSFER_MODE_UNKNOWN;
const ATA_TransferMode ATA_TransferMode_TransferMode_MAX = ATA_TransferMode_TRANSFER_MODE_SATA_150;
const int ATA_TransferMode_TransferMode_ARRAYSIZE = ATA_TransferMode_TransferMode_MAX + 1;

enum ATA_Features {
  ATA_Features_FEATURE_UNKNOWN = 0,
  ATA_Features_FEATURE_48BIT_LBA = 1,
  ATA_Features_FEATURE_ADVANCED_POWER_MANAGEMENT = 2,
  ATA_Features_FEATURE_AUTOMATIC_ACOUSTIC_MANAGEMENT = 4,
  ATA_Features_FEATURE_SMART = 8,
  ATA_Features_FEATURE_SMART_ERROR_LOGGING = 16,
  ATA_Features_FEATURE_SMART_SELF_TEST = 32,
  ATA_Features_FEATURE_STREAMING = 64,
  ATA_Features_FEATURE_GENERAL_PURPOSE_LOGGING = 128,
  ATA_Features_FEATURE_SECURITY_MODE = 256,
  ATA_Features_FEATURE_POWER_MANAGEMENT = 512,
  ATA_Features_FEATURE_WRITE_CACHE = 1024,
  ATA_Features_FEATURE_READ_LOCK_AHEAD = 2048,
  ATA_Features_FEATURE_HOST_PROTECTED_AREA = 4096,
  ATA_Features_FEATURE_RELEASE_INTERRUPT = 8192,
  ATA_Features_FEATURE_POWER_UP_IN_STANDBY = 16384,
  ATA_Features_FEATURE_DEVICE_CONFIGURATION_OVERLAY = 32768,
  ATA_Features_FEATURE_SERVICE_INTERRUPT = 65536,
  ATA_Features_FEATURE_NATIVE_COMMAND_QUEUING = 131072,
  ATA_Features_FEATURE_TRIM = 262144,
  ATA_Features_ATA_Features_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ATA_Features_ATA_Features_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ATA_Features_IsValid(int value);
const ATA_Features ATA_Features_Features_MIN = ATA_Features_FEATURE_UNKNOWN;
const ATA_Features ATA_Features_Features_MAX = ATA_Features_FEATURE_TRIM;
const int ATA_Features_Features_ARRAYSIZE = ATA_Features_Features_MAX + 1;

// ===================================================================

class ATA_Item : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.ATA.Item) */ {
 public:
  ATA_Item();
  virtual ~ATA_Item();

  ATA_Item(const ATA_Item& from);

  inline ATA_Item& operator=(const ATA_Item& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ATA_Item(ATA_Item&& from) noexcept
    : ATA_Item() {
    *this = ::std::move(from);
  }

  inline ATA_Item& operator=(ATA_Item&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ATA_Item& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ATA_Item* internal_default_instance() {
    return reinterpret_cast<const ATA_Item*>(
               &_ATA_Item_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ATA_Item* other);
  friend void swap(ATA_Item& a, ATA_Item& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ATA_Item* New() const PROTOBUF_FINAL { return New(NULL); }

  ATA_Item* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ATA_Item& from);
  void MergeFrom(const ATA_Item& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ATA_Item* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string model_number = 1;
  void clear_model_number();
  static const int kModelNumberFieldNumber = 1;
  const ::std::string& model_number() const;
  void set_model_number(const ::std::string& value);
  #if LANG_CXX11
  void set_model_number(::std::string&& value);
  #endif
  void set_model_number(const char* value);
  void set_model_number(const char* value, size_t size);
  ::std::string* mutable_model_number();
  ::std::string* release_model_number();
  void set_allocated_model_number(::std::string* model_number);

  // string serial_number = 2;
  void clear_serial_number();
  static const int kSerialNumberFieldNumber = 2;
  const ::std::string& serial_number() const;
  void set_serial_number(const ::std::string& value);
  #if LANG_CXX11
  void set_serial_number(::std::string&& value);
  #endif
  void set_serial_number(const char* value);
  void set_serial_number(const char* value, size_t size);
  ::std::string* mutable_serial_number();
  ::std::string* release_serial_number();
  void set_allocated_serial_number(::std::string* serial_number);

  // string firmware_revision = 3;
  void clear_firmware_revision();
  static const int kFirmwareRevisionFieldNumber = 3;
  const ::std::string& firmware_revision() const;
  void set_firmware_revision(const ::std::string& value);
  #if LANG_CXX11
  void set_firmware_revision(::std::string&& value);
  #endif
  void set_firmware_revision(const char* value);
  void set_firmware_revision(const char* value, size_t size);
  ::std::string* mutable_firmware_revision();
  ::std::string* release_firmware_revision();
  void set_allocated_firmware_revision(::std::string* firmware_revision);

  // .aspia.proto.ATA.BusType bus_type = 4;
  void clear_bus_type();
  static const int kBusTypeFieldNumber = 4;
  ::aspia::proto::ATA_BusType bus_type() const;
  void set_bus_type(::aspia::proto::ATA_BusType value);

  // .aspia.proto.ATA.TransferMode transfer_mode = 5;
  void clear_transfer_mode();
  static const int kTransferModeFieldNumber = 5;
  ::aspia::proto::ATA_TransferMode transfer_mode() const;
  void set_transfer_mode(::aspia::proto::ATA_TransferMode value);

  // uint64 drive_size = 7;
  void clear_drive_size();
  static const int kDriveSizeFieldNumber = 7;
  ::google::protobuf::uint64 drive_size() const;
  void set_drive_size(::google::protobuf::uint64 value);

  // uint32 rotation_rate = 6;
  void clear_rotation_rate();
  static const int kRotationRateFieldNumber = 6;
  ::google::protobuf::uint32 rotation_rate() const;
  void set_rotation_rate(::google::protobuf::uint32 value);

  // uint32 buffer_size = 8;
  void clear_buffer_size();
  static const int kBufferSizeFieldNumber = 8;
  ::google::protobuf::uint32 buffer_size() const;
  void set_buffer_size(::google::protobuf::uint32 value);

  // uint32 multisectors = 9;
  void clear_multisectors();
  static const int kMultisectorsFieldNumber = 9;
  ::google::protobuf::uint32 multisectors() const;
  void set_multisectors(::google::protobuf::uint32 value);

  // uint32 ecc_size = 10;
  void clear_ecc_size();
  static const int kEccSizeFieldNumber = 10;
  ::google::protobuf::uint32 ecc_size() const;
  void set_ecc_size(::google::protobuf::uint32 value);

  // uint64 cylinders_number = 12;
  void clear_cylinders_number();
  static const int kCylindersNumberFieldNumber = 12;
  ::google::protobuf::uint64 cylinders_number() const;
  void set_cylinders_number(::google::protobuf::uint64 value);

  // bool is_removable = 11;
  void clear_is_removable();
  static const int kIsRemovableFieldNumber = 11;
  bool is_removable() const;
  void set_is_removable(bool value);

  // uint32 tracks_per_cylinder = 13;
  void clear_tracks_per_cylinder();
  static const int kTracksPerCylinderFieldNumber = 13;
  ::google::protobuf::uint32 tracks_per_cylinder() const;
  void set_tracks_per_cylinder(::google::protobuf::uint32 value);

  // uint32 sectors_per_track = 14;
  void clear_sectors_per_track();
  static const int kSectorsPerTrackFieldNumber = 14;
  ::google::protobuf::uint32 sectors_per_track() const;
  void set_sectors_per_track(::google::protobuf::uint32 value);

  // uint32 bytes_per_sector = 15;
  void clear_bytes_per_sector();
  static const int kBytesPerSectorFieldNumber = 15;
  ::google::protobuf::uint32 bytes_per_sector() const;
  void set_bytes_per_sector(::google::protobuf::uint32 value);

  // uint64 supported_features = 17;
  void clear_supported_features();
  static const int kSupportedFeaturesFieldNumber = 17;
  ::google::protobuf::uint64 supported_features() const;
  void set_supported_features(::google::protobuf::uint64 value);

  // uint64 enabled_features = 18;
  void clear_enabled_features();
  static const int kEnabledFeaturesFieldNumber = 18;
  ::google::protobuf::uint64 enabled_features() const;
  void set_enabled_features(::google::protobuf::uint64 value);

  // uint32 heads_number = 16;
  void clear_heads_number();
  static const int kHeadsNumberFieldNumber = 16;
  ::google::protobuf::uint32 heads_number() const;
  void set_heads_number(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:aspia.proto.ATA.Item)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr model_number_;
  ::google::protobuf::internal::ArenaStringPtr serial_number_;
  ::google::protobuf::internal::ArenaStringPtr firmware_revision_;
  int bus_type_;
  int transfer_mode_;
  ::google::protobuf::uint64 drive_size_;
  ::google::protobuf::uint32 rotation_rate_;
  ::google::protobuf::uint32 buffer_size_;
  ::google::protobuf::uint32 multisectors_;
  ::google::protobuf::uint32 ecc_size_;
  ::google::protobuf::uint64 cylinders_number_;
  bool is_removable_;
  ::google::protobuf::uint32 tracks_per_cylinder_;
  ::google::protobuf::uint32 sectors_per_track_;
  ::google::protobuf::uint32 bytes_per_sector_;
  ::google::protobuf::uint64 supported_features_;
  ::google::protobuf::uint64 enabled_features_;
  ::google::protobuf::uint32 heads_number_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fata_2eproto::TableStruct;
  friend void ::protobuf_category_5fata_2eproto::InitDefaultsATA_ItemImpl();
};
// -------------------------------------------------------------------

class ATA : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.ATA) */ {
 public:
  ATA();
  virtual ~ATA();

  ATA(const ATA& from);

  inline ATA& operator=(const ATA& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ATA(ATA&& from) noexcept
    : ATA() {
    *this = ::std::move(from);
  }

  inline ATA& operator=(ATA&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ATA& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ATA* internal_default_instance() {
    return reinterpret_cast<const ATA*>(
               &_ATA_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ATA* other);
  friend void swap(ATA& a, ATA& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ATA* New() const PROTOBUF_FINAL { return New(NULL); }

  ATA* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ATA& from);
  void MergeFrom(const ATA& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ATA* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef ATA_Item Item;

  typedef ATA_BusType BusType;
  static const BusType BUS_TYPE_UNKNOWN =
    ATA_BusType_BUS_TYPE_UNKNOWN;
  static const BusType BUS_TYPE_SCSI =
    ATA_BusType_BUS_TYPE_SCSI;
  static const BusType BUS_TYPE_ATAPI =
    ATA_BusType_BUS_TYPE_ATAPI;
  static const BusType BUS_TYPE_ATA =
    ATA_BusType_BUS_TYPE_ATA;
  static const BusType BUS_TYPE_IEEE1394 =
    ATA_BusType_BUS_TYPE_IEEE1394;
  static const BusType BUS_TYPE_SSA =
    ATA_BusType_BUS_TYPE_SSA;
  static const BusType BUS_TYPE_FIBRE =
    ATA_BusType_BUS_TYPE_FIBRE;
  static const BusType BUS_TYPE_USB =
    ATA_BusType_BUS_TYPE_USB;
  static const BusType BUS_TYPE_RAID =
    ATA_BusType_BUS_TYPE_RAID;
  static const BusType BUS_TYPE_ISCSI =
    ATA_BusType_BUS_TYPE_ISCSI;
  static const BusType BUS_TYPE_SAS =
    ATA_BusType_BUS_TYPE_SAS;
  static const BusType BUS_TYPE_SATA =
    ATA_BusType_BUS_TYPE_SATA;
  static const BusType BUS_TYPE_SD =
    ATA_BusType_BUS_TYPE_SD;
  static const BusType BUS_TYPE_MMC =
    ATA_BusType_BUS_TYPE_MMC;
  static const BusType BUS_TYPE_VIRTUAL =
    ATA_BusType_BUS_TYPE_VIRTUAL;
  static const BusType BUS_TYPE_FILE_BACKED_VIRTUAL =
    ATA_BusType_BUS_TYPE_FILE_BACKED_VIRTUAL;
  static inline bool BusType_IsValid(int value) {
    return ATA_BusType_IsValid(value);
  }
  static const BusType BusType_MIN =
    ATA_BusType_BusType_MIN;
  static const BusType BusType_MAX =
    ATA_BusType_BusType_MAX;
  static const int BusType_ARRAYSIZE =
    ATA_BusType_BusType_ARRAYSIZE;

  typedef ATA_TransferMode TransferMode;
  static const TransferMode TRANSFER_MODE_UNKNOWN =
    ATA_TransferMode_TRANSFER_MODE_UNKNOWN;
  static const TransferMode TRANSFER_MODE_PIO =
    ATA_TransferMode_TRANSFER_MODE_PIO;
  static const TransferMode TRANSFER_MODE_PIO_DMA =
    ATA_TransferMode_TRANSFER_MODE_PIO_DMA;
  static const TransferMode TRANSFER_MODE_ULTRA_DMA_133 =
    ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_133;
  static const TransferMode TRANSFER_MODE_ULTRA_DMA_100 =
    ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_100;
  static const TransferMode TRANSFER_MODE_ULTRA_DMA_66 =
    ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_66;
  static const TransferMode TRANSFER_MODE_ULTRA_DMA_44 =
    ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_44;
  static const TransferMode TRANSFER_MODE_ULTRA_DMA_33 =
    ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_33;
  static const TransferMode TRANSFER_MODE_ULTRA_DMA_25 =
    ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_25;
  static const TransferMode TRANSFER_MODE_ULTRA_DMA_16 =
    ATA_TransferMode_TRANSFER_MODE_ULTRA_DMA_16;
  static const TransferMode TRANSFER_MODE_SATA_600 =
    ATA_TransferMode_TRANSFER_MODE_SATA_600;
  static const TransferMode TRANSFER_MODE_SATA_300 =
    ATA_TransferMode_TRANSFER_MODE_SATA_300;
  static const TransferMode TRANSFER_MODE_SATA_150 =
    ATA_TransferMode_TRANSFER_MODE_SATA_150;
  static inline bool TransferMode_IsValid(int value) {
    return ATA_TransferMode_IsValid(value);
  }
  static const TransferMode TransferMode_MIN =
    ATA_TransferMode_TransferMode_MIN;
  static const TransferMode TransferMode_MAX =
    ATA_TransferMode_TransferMode_MAX;
  static const int TransferMode_ARRAYSIZE =
    ATA_TransferMode_TransferMode_ARRAYSIZE;

  typedef ATA_Features Features;
  static const Features FEATURE_UNKNOWN =
    ATA_Features_FEATURE_UNKNOWN;
  static const Features FEATURE_48BIT_LBA =
    ATA_Features_FEATURE_48BIT_LBA;
  static const Features FEATURE_ADVANCED_POWER_MANAGEMENT =
    ATA_Features_FEATURE_ADVANCED_POWER_MANAGEMENT;
  static const Features FEATURE_AUTOMATIC_ACOUSTIC_MANAGEMENT =
    ATA_Features_FEATURE_AUTOMATIC_ACOUSTIC_MANAGEMENT;
  static const Features FEATURE_SMART =
    ATA_Features_FEATURE_SMART;
  static const Features FEATURE_SMART_ERROR_LOGGING =
    ATA_Features_FEATURE_SMART_ERROR_LOGGING;
  static const Features FEATURE_SMART_SELF_TEST =
    ATA_Features_FEATURE_SMART_SELF_TEST;
  static const Features FEATURE_STREAMING =
    ATA_Features_FEATURE_STREAMING;
  static const Features FEATURE_GENERAL_PURPOSE_LOGGING =
    ATA_Features_FEATURE_GENERAL_PURPOSE_LOGGING;
  static const Features FEATURE_SECURITY_MODE =
    ATA_Features_FEATURE_SECURITY_MODE;
  static const Features FEATURE_POWER_MANAGEMENT =
    ATA_Features_FEATURE_POWER_MANAGEMENT;
  static const Features FEATURE_WRITE_CACHE =
    ATA_Features_FEATURE_WRITE_CACHE;
  static const Features FEATURE_READ_LOCK_AHEAD =
    ATA_Features_FEATURE_READ_LOCK_AHEAD;
  static const Features FEATURE_HOST_PROTECTED_AREA =
    ATA_Features_FEATURE_HOST_PROTECTED_AREA;
  static const Features FEATURE_RELEASE_INTERRUPT =
    ATA_Features_FEATURE_RELEASE_INTERRUPT;
  static const Features FEATURE_POWER_UP_IN_STANDBY =
    ATA_Features_FEATURE_POWER_UP_IN_STANDBY;
  static const Features FEATURE_DEVICE_CONFIGURATION_OVERLAY =
    ATA_Features_FEATURE_DEVICE_CONFIGURATION_OVERLAY;
  static const Features FEATURE_SERVICE_INTERRUPT =
    ATA_Features_FEATURE_SERVICE_INTERRUPT;
  static const Features FEATURE_NATIVE_COMMAND_QUEUING =
    ATA_Features_FEATURE_NATIVE_COMMAND_QUEUING;
  static const Features FEATURE_TRIM =
    ATA_Features_FEATURE_TRIM;
  static inline bool Features_IsValid(int value) {
    return ATA_Features_IsValid(value);
  }
  static const Features Features_MIN =
    ATA_Features_Features_MIN;
  static const Features Features_MAX =
    ATA_Features_Features_MAX;
  static const int Features_ARRAYSIZE =
    ATA_Features_Features_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.ATA.Item item = 1;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::aspia::proto::ATA_Item& item(int index) const;
  ::aspia::proto::ATA_Item* mutable_item(int index);
  ::aspia::proto::ATA_Item* add_item();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::ATA_Item >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::ATA_Item >&
      item() const;

  // @@protoc_insertion_point(class_scope:aspia.proto.ATA)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::ATA_Item > item_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fata_2eproto::TableStruct;
  friend void ::protobuf_category_5fata_2eproto::InitDefaultsATAImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ATA_Item

// string model_number = 1;
inline void ATA_Item::clear_model_number() {
  model_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ATA_Item::model_number() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.model_number)
  return model_number_.GetNoArena();
}
inline void ATA_Item::set_model_number(const ::std::string& value) {
  
  model_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.model_number)
}
#if LANG_CXX11
inline void ATA_Item::set_model_number(::std::string&& value) {
  
  model_number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.ATA.Item.model_number)
}
#endif
inline void ATA_Item::set_model_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  model_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.ATA.Item.model_number)
}
inline void ATA_Item::set_model_number(const char* value, size_t size) {
  
  model_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.ATA.Item.model_number)
}
inline ::std::string* ATA_Item::mutable_model_number() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.ATA.Item.model_number)
  return model_number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ATA_Item::release_model_number() {
  // @@protoc_insertion_point(field_release:aspia.proto.ATA.Item.model_number)
  
  return model_number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ATA_Item::set_allocated_model_number(::std::string* model_number) {
  if (model_number != NULL) {
    
  } else {
    
  }
  model_number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_number);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.ATA.Item.model_number)
}

// string serial_number = 2;
inline void ATA_Item::clear_serial_number() {
  serial_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ATA_Item::serial_number() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.serial_number)
  return serial_number_.GetNoArena();
}
inline void ATA_Item::set_serial_number(const ::std::string& value) {
  
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.serial_number)
}
#if LANG_CXX11
inline void ATA_Item::set_serial_number(::std::string&& value) {
  
  serial_number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.ATA.Item.serial_number)
}
#endif
inline void ATA_Item::set_serial_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.ATA.Item.serial_number)
}
inline void ATA_Item::set_serial_number(const char* value, size_t size) {
  
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.ATA.Item.serial_number)
}
inline ::std::string* ATA_Item::mutable_serial_number() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.ATA.Item.serial_number)
  return serial_number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ATA_Item::release_serial_number() {
  // @@protoc_insertion_point(field_release:aspia.proto.ATA.Item.serial_number)
  
  return serial_number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ATA_Item::set_allocated_serial_number(::std::string* serial_number) {
  if (serial_number != NULL) {
    
  } else {
    
  }
  serial_number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serial_number);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.ATA.Item.serial_number)
}

// string firmware_revision = 3;
inline void ATA_Item::clear_firmware_revision() {
  firmware_revision_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ATA_Item::firmware_revision() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.firmware_revision)
  return firmware_revision_.GetNoArena();
}
inline void ATA_Item::set_firmware_revision(const ::std::string& value) {
  
  firmware_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.firmware_revision)
}
#if LANG_CXX11
inline void ATA_Item::set_firmware_revision(::std::string&& value) {
  
  firmware_revision_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.ATA.Item.firmware_revision)
}
#endif
inline void ATA_Item::set_firmware_revision(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  firmware_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.ATA.Item.firmware_revision)
}
inline void ATA_Item::set_firmware_revision(const char* value, size_t size) {
  
  firmware_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.ATA.Item.firmware_revision)
}
inline ::std::string* ATA_Item::mutable_firmware_revision() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.ATA.Item.firmware_revision)
  return firmware_revision_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ATA_Item::release_firmware_revision() {
  // @@protoc_insertion_point(field_release:aspia.proto.ATA.Item.firmware_revision)
  
  return firmware_revision_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ATA_Item::set_allocated_firmware_revision(::std::string* firmware_revision) {
  if (firmware_revision != NULL) {
    
  } else {
    
  }
  firmware_revision_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), firmware_revision);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.ATA.Item.firmware_revision)
}

// .aspia.proto.ATA.BusType bus_type = 4;
inline void ATA_Item::clear_bus_type() {
  bus_type_ = 0;
}
inline ::aspia::proto::ATA_BusType ATA_Item::bus_type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.bus_type)
  return static_cast< ::aspia::proto::ATA_BusType >(bus_type_);
}
inline void ATA_Item::set_bus_type(::aspia::proto::ATA_BusType value) {
  
  bus_type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.bus_type)
}

// .aspia.proto.ATA.TransferMode transfer_mode = 5;
inline void ATA_Item::clear_transfer_mode() {
  transfer_mode_ = 0;
}
inline ::aspia::proto::ATA_TransferMode ATA_Item::transfer_mode() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.transfer_mode)
  return static_cast< ::aspia::proto::ATA_TransferMode >(transfer_mode_);
}
inline void ATA_Item::set_transfer_mode(::aspia::proto::ATA_TransferMode value) {
  
  transfer_mode_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.transfer_mode)
}

// uint32 rotation_rate = 6;
inline void ATA_Item::clear_rotation_rate() {
  rotation_rate_ = 0u;
}
inline ::google::protobuf::uint32 ATA_Item::rotation_rate() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.rotation_rate)
  return rotation_rate_;
}
inline void ATA_Item::set_rotation_rate(::google::protobuf::uint32 value) {
  
  rotation_rate_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.rotation_rate)
}

// uint64 drive_size = 7;
inline void ATA_Item::clear_drive_size() {
  drive_size_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ATA_Item::drive_size() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.drive_size)
  return drive_size_;
}
inline void ATA_Item::set_drive_size(::google::protobuf::uint64 value) {
  
  drive_size_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.drive_size)
}

// uint32 buffer_size = 8;
inline void ATA_Item::clear_buffer_size() {
  buffer_size_ = 0u;
}
inline ::google::protobuf::uint32 ATA_Item::buffer_size() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.buffer_size)
  return buffer_size_;
}
inline void ATA_Item::set_buffer_size(::google::protobuf::uint32 value) {
  
  buffer_size_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.buffer_size)
}

// uint32 multisectors = 9;
inline void ATA_Item::clear_multisectors() {
  multisectors_ = 0u;
}
inline ::google::protobuf::uint32 ATA_Item::multisectors() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.multisectors)
  return multisectors_;
}
inline void ATA_Item::set_multisectors(::google::protobuf::uint32 value) {
  
  multisectors_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.multisectors)
}

// uint32 ecc_size = 10;
inline void ATA_Item::clear_ecc_size() {
  ecc_size_ = 0u;
}
inline ::google::protobuf::uint32 ATA_Item::ecc_size() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.ecc_size)
  return ecc_size_;
}
inline void ATA_Item::set_ecc_size(::google::protobuf::uint32 value) {
  
  ecc_size_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.ecc_size)
}

// bool is_removable = 11;
inline void ATA_Item::clear_is_removable() {
  is_removable_ = false;
}
inline bool ATA_Item::is_removable() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.is_removable)
  return is_removable_;
}
inline void ATA_Item::set_is_removable(bool value) {
  
  is_removable_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.is_removable)
}

// uint64 cylinders_number = 12;
inline void ATA_Item::clear_cylinders_number() {
  cylinders_number_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ATA_Item::cylinders_number() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.cylinders_number)
  return cylinders_number_;
}
inline void ATA_Item::set_cylinders_number(::google::protobuf::uint64 value) {
  
  cylinders_number_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.cylinders_number)
}

// uint32 tracks_per_cylinder = 13;
inline void ATA_Item::clear_tracks_per_cylinder() {
  tracks_per_cylinder_ = 0u;
}
inline ::google::protobuf::uint32 ATA_Item::tracks_per_cylinder() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.tracks_per_cylinder)
  return tracks_per_cylinder_;
}
inline void ATA_Item::set_tracks_per_cylinder(::google::protobuf::uint32 value) {
  
  tracks_per_cylinder_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.tracks_per_cylinder)
}

// uint32 sectors_per_track = 14;
inline void ATA_Item::clear_sectors_per_track() {
  sectors_per_track_ = 0u;
}
inline ::google::protobuf::uint32 ATA_Item::sectors_per_track() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.sectors_per_track)
  return sectors_per_track_;
}
inline void ATA_Item::set_sectors_per_track(::google::protobuf::uint32 value) {
  
  sectors_per_track_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.sectors_per_track)
}

// uint32 bytes_per_sector = 15;
inline void ATA_Item::clear_bytes_per_sector() {
  bytes_per_sector_ = 0u;
}
inline ::google::protobuf::uint32 ATA_Item::bytes_per_sector() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.bytes_per_sector)
  return bytes_per_sector_;
}
inline void ATA_Item::set_bytes_per_sector(::google::protobuf::uint32 value) {
  
  bytes_per_sector_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.bytes_per_sector)
}

// uint32 heads_number = 16;
inline void ATA_Item::clear_heads_number() {
  heads_number_ = 0u;
}
inline ::google::protobuf::uint32 ATA_Item::heads_number() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.heads_number)
  return heads_number_;
}
inline void ATA_Item::set_heads_number(::google::protobuf::uint32 value) {
  
  heads_number_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.heads_number)
}

// uint64 supported_features = 17;
inline void ATA_Item::clear_supported_features() {
  supported_features_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ATA_Item::supported_features() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.supported_features)
  return supported_features_;
}
inline void ATA_Item::set_supported_features(::google::protobuf::uint64 value) {
  
  supported_features_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.supported_features)
}

// uint64 enabled_features = 18;
inline void ATA_Item::clear_enabled_features() {
  enabled_features_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ATA_Item::enabled_features() const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.Item.enabled_features)
  return enabled_features_;
}
inline void ATA_Item::set_enabled_features(::google::protobuf::uint64 value) {
  
  enabled_features_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.ATA.Item.enabled_features)
}

// -------------------------------------------------------------------

// ATA

// repeated .aspia.proto.ATA.Item item = 1;
inline int ATA::item_size() const {
  return item_.size();
}
inline void ATA::clear_item() {
  item_.Clear();
}
inline const ::aspia::proto::ATA_Item& ATA::item(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.ATA.item)
  return item_.Get(index);
}
inline ::aspia::proto::ATA_Item* ATA::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.ATA.item)
  return item_.Mutable(index);
}
inline ::aspia::proto::ATA_Item* ATA::add_item() {
  // @@protoc_insertion_point(field_add:aspia.proto.ATA.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::ATA_Item >*
ATA::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.ATA.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::ATA_Item >&
ATA::item() const {
  // @@protoc_insertion_point(field_list:aspia.proto.ATA.item)
  return item_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::aspia::proto::ATA_BusType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::aspia::proto::ATA_TransferMode> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::aspia::proto::ATA_Features> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5fata_2eproto__INCLUDED
