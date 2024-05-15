// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chrome_os_app_list_launch_event.proto

#ifndef PROTOBUF_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto__INCLUDED
#define PROTOBUF_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace metrics {
class ChromeOSAppListLaunchEventProto;
class ChromeOSAppListLaunchEventProtoDefaultTypeInternal;
extern ChromeOSAppListLaunchEventProtoDefaultTypeInternal _ChromeOSAppListLaunchEventProto_default_instance_;
}  // namespace metrics

namespace metrics {

namespace protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto

enum ChromeOSAppListLaunchEventProto_LaunchType {
  ChromeOSAppListLaunchEventProto_LaunchType_LAUNCH_TYPE_UNSPECIFIED = 0,
  ChromeOSAppListLaunchEventProto_LaunchType_APP_TILES = 1,
  ChromeOSAppListLaunchEventProto_LaunchType_RESULTS_LIST = 2
};
bool ChromeOSAppListLaunchEventProto_LaunchType_IsValid(int value);
const ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto_LaunchType_LaunchType_MIN = ChromeOSAppListLaunchEventProto_LaunchType_LAUNCH_TYPE_UNSPECIFIED;
const ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto_LaunchType_LaunchType_MAX = ChromeOSAppListLaunchEventProto_LaunchType_RESULTS_LIST;
const int ChromeOSAppListLaunchEventProto_LaunchType_LaunchType_ARRAYSIZE = ChromeOSAppListLaunchEventProto_LaunchType_LaunchType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ChromeOSAppListLaunchEventProto_LaunchType_descriptor();
inline const ::std::string& ChromeOSAppListLaunchEventProto_LaunchType_Name(ChromeOSAppListLaunchEventProto_LaunchType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ChromeOSAppListLaunchEventProto_LaunchType_descriptor(), value);
}
inline bool ChromeOSAppListLaunchEventProto_LaunchType_Parse(
    const ::std::string& name, ChromeOSAppListLaunchEventProto_LaunchType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ChromeOSAppListLaunchEventProto_LaunchType>(
    ChromeOSAppListLaunchEventProto_LaunchType_descriptor(), name, value);
}
enum ChromeOSAppListLaunchEventProto_SearchProviderType {
  ChromeOSAppListLaunchEventProto_SearchProviderType_PROVIDER_UNSPECIFIED = 0,
  ChromeOSAppListLaunchEventProto_SearchProviderType_OMNIBOX = 1,
  ChromeOSAppListLaunchEventProto_SearchProviderType_ZERO_STATE_FILE = 2,
  ChromeOSAppListLaunchEventProto_SearchProviderType_DRIVE_QUICK_ACCESS = 3
};
bool ChromeOSAppListLaunchEventProto_SearchProviderType_IsValid(int value);
const ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto_SearchProviderType_SearchProviderType_MIN = ChromeOSAppListLaunchEventProto_SearchProviderType_PROVIDER_UNSPECIFIED;
const ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto_SearchProviderType_SearchProviderType_MAX = ChromeOSAppListLaunchEventProto_SearchProviderType_DRIVE_QUICK_ACCESS;
const int ChromeOSAppListLaunchEventProto_SearchProviderType_SearchProviderType_ARRAYSIZE = ChromeOSAppListLaunchEventProto_SearchProviderType_SearchProviderType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ChromeOSAppListLaunchEventProto_SearchProviderType_descriptor();
inline const ::std::string& ChromeOSAppListLaunchEventProto_SearchProviderType_Name(ChromeOSAppListLaunchEventProto_SearchProviderType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ChromeOSAppListLaunchEventProto_SearchProviderType_descriptor(), value);
}
inline bool ChromeOSAppListLaunchEventProto_SearchProviderType_Parse(
    const ::std::string& name, ChromeOSAppListLaunchEventProto_SearchProviderType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ChromeOSAppListLaunchEventProto_SearchProviderType>(
    ChromeOSAppListLaunchEventProto_SearchProviderType_descriptor(), name, value);
}
// ===================================================================

class ChromeOSAppListLaunchEventProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metrics.ChromeOSAppListLaunchEventProto) */ {
 public:
  ChromeOSAppListLaunchEventProto();
  virtual ~ChromeOSAppListLaunchEventProto();

  ChromeOSAppListLaunchEventProto(const ChromeOSAppListLaunchEventProto& from);

  inline ChromeOSAppListLaunchEventProto& operator=(const ChromeOSAppListLaunchEventProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ChromeOSAppListLaunchEventProto(ChromeOSAppListLaunchEventProto&& from) noexcept
    : ChromeOSAppListLaunchEventProto() {
    *this = ::std::move(from);
  }

  inline ChromeOSAppListLaunchEventProto& operator=(ChromeOSAppListLaunchEventProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ChromeOSAppListLaunchEventProto& default_instance();

  static inline const ChromeOSAppListLaunchEventProto* internal_default_instance() {
    return reinterpret_cast<const ChromeOSAppListLaunchEventProto*>(
               &_ChromeOSAppListLaunchEventProto_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ChromeOSAppListLaunchEventProto* other);
  friend void swap(ChromeOSAppListLaunchEventProto& a, ChromeOSAppListLaunchEventProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ChromeOSAppListLaunchEventProto* New() const PROTOBUF_FINAL { return New(NULL); }

  ChromeOSAppListLaunchEventProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ChromeOSAppListLaunchEventProto& from);
  void MergeFrom(const ChromeOSAppListLaunchEventProto& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ChromeOSAppListLaunchEventProto* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef ChromeOSAppListLaunchEventProto_LaunchType LaunchType;
  static const LaunchType LAUNCH_TYPE_UNSPECIFIED =
    ChromeOSAppListLaunchEventProto_LaunchType_LAUNCH_TYPE_UNSPECIFIED;
  static const LaunchType APP_TILES =
    ChromeOSAppListLaunchEventProto_LaunchType_APP_TILES;
  static const LaunchType RESULTS_LIST =
    ChromeOSAppListLaunchEventProto_LaunchType_RESULTS_LIST;
  static inline bool LaunchType_IsValid(int value) {
    return ChromeOSAppListLaunchEventProto_LaunchType_IsValid(value);
  }
  static const LaunchType LaunchType_MIN =
    ChromeOSAppListLaunchEventProto_LaunchType_LaunchType_MIN;
  static const LaunchType LaunchType_MAX =
    ChromeOSAppListLaunchEventProto_LaunchType_LaunchType_MAX;
  static const int LaunchType_ARRAYSIZE =
    ChromeOSAppListLaunchEventProto_LaunchType_LaunchType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  LaunchType_descriptor() {
    return ChromeOSAppListLaunchEventProto_LaunchType_descriptor();
  }
  static inline const ::std::string& LaunchType_Name(LaunchType value) {
    return ChromeOSAppListLaunchEventProto_LaunchType_Name(value);
  }
  static inline bool LaunchType_Parse(const ::std::string& name,
      LaunchType* value) {
    return ChromeOSAppListLaunchEventProto_LaunchType_Parse(name, value);
  }

  typedef ChromeOSAppListLaunchEventProto_SearchProviderType SearchProviderType;
  static const SearchProviderType PROVIDER_UNSPECIFIED =
    ChromeOSAppListLaunchEventProto_SearchProviderType_PROVIDER_UNSPECIFIED;
  static const SearchProviderType OMNIBOX =
    ChromeOSAppListLaunchEventProto_SearchProviderType_OMNIBOX;
  static const SearchProviderType ZERO_STATE_FILE =
    ChromeOSAppListLaunchEventProto_SearchProviderType_ZERO_STATE_FILE;
  static const SearchProviderType DRIVE_QUICK_ACCESS =
    ChromeOSAppListLaunchEventProto_SearchProviderType_DRIVE_QUICK_ACCESS;
  static inline bool SearchProviderType_IsValid(int value) {
    return ChromeOSAppListLaunchEventProto_SearchProviderType_IsValid(value);
  }
  static const SearchProviderType SearchProviderType_MIN =
    ChromeOSAppListLaunchEventProto_SearchProviderType_SearchProviderType_MIN;
  static const SearchProviderType SearchProviderType_MAX =
    ChromeOSAppListLaunchEventProto_SearchProviderType_SearchProviderType_MAX;
  static const int SearchProviderType_ARRAYSIZE =
    ChromeOSAppListLaunchEventProto_SearchProviderType_SearchProviderType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  SearchProviderType_descriptor() {
    return ChromeOSAppListLaunchEventProto_SearchProviderType_descriptor();
  }
  static inline const ::std::string& SearchProviderType_Name(SearchProviderType value) {
    return ChromeOSAppListLaunchEventProto_SearchProviderType_Name(value);
  }
  static inline bool SearchProviderType_Parse(const ::std::string& name,
      SearchProviderType* value) {
    return ChromeOSAppListLaunchEventProto_SearchProviderType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional fixed64 recurrence_ranker_user_id = 1;
  bool has_recurrence_ranker_user_id() const;
  void clear_recurrence_ranker_user_id();
  static const int kRecurrenceRankerUserIdFieldNumber = 1;
  ::google::protobuf::uint64 recurrence_ranker_user_id() const;
  void set_recurrence_ranker_user_id(::google::protobuf::uint64 value);

  // optional .metrics.ChromeOSAppListLaunchEventProto.LaunchType launch_type = 2;
  bool has_launch_type() const;
  void clear_launch_type();
  static const int kLaunchTypeFieldNumber = 2;
  ::metrics::ChromeOSAppListLaunchEventProto_LaunchType launch_type() const;
  void set_launch_type(::metrics::ChromeOSAppListLaunchEventProto_LaunchType value);

  // optional int32 hour = 3;
  bool has_hour() const;
  void clear_hour();
  static const int kHourFieldNumber = 3;
  ::google::protobuf::int32 hour() const;
  void set_hour(::google::protobuf::int32 value);

  // optional fixed64 hashed_target = 5;
  bool has_hashed_target() const;
  void clear_hashed_target();
  static const int kHashedTargetFieldNumber = 5;
  ::google::protobuf::uint64 hashed_target() const;
  void set_hashed_target(::google::protobuf::uint64 value);

  // optional fixed64 hashed_query = 6;
  bool has_hashed_query() const;
  void clear_hashed_query();
  static const int kHashedQueryFieldNumber = 6;
  ::google::protobuf::uint64 hashed_query() const;
  void set_hashed_query(::google::protobuf::uint64 value);

  // optional int32 search_query_length = 4;
  bool has_search_query_length() const;
  void clear_search_query_length();
  static const int kSearchQueryLengthFieldNumber = 4;
  ::google::protobuf::int32 search_query_length() const;
  void set_search_query_length(::google::protobuf::int32 value);

  // optional .metrics.ChromeOSAppListLaunchEventProto.SearchProviderType search_provider_type = 9;
  bool has_search_provider_type() const;
  void clear_search_provider_type();
  static const int kSearchProviderTypeFieldNumber = 9;
  ::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType search_provider_type() const;
  void set_search_provider_type(::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType value);

  // optional fixed64 hashed_domain = 7;
  bool has_hashed_domain() const;
  void clear_hashed_domain();
  static const int kHashedDomainFieldNumber = 7;
  ::google::protobuf::uint64 hashed_domain() const;
  void set_hashed_domain(::google::protobuf::uint64 value);

  // optional fixed64 hashed_app = 8;
  bool has_hashed_app() const;
  void clear_hashed_app();
  static const int kHashedAppFieldNumber = 8;
  ::google::protobuf::uint64 hashed_app() const;
  void set_hashed_app(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:metrics.ChromeOSAppListLaunchEventProto)
 private:
  void set_has_recurrence_ranker_user_id();
  void clear_has_recurrence_ranker_user_id();
  void set_has_launch_type();
  void clear_has_launch_type();
  void set_has_hour();
  void clear_has_hour();
  void set_has_search_query_length();
  void clear_has_search_query_length();
  void set_has_hashed_target();
  void clear_has_hashed_target();
  void set_has_hashed_query();
  void clear_has_hashed_query();
  void set_has_hashed_domain();
  void clear_has_hashed_domain();
  void set_has_hashed_app();
  void clear_has_hashed_app();
  void set_has_search_provider_type();
  void clear_has_search_provider_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint64 recurrence_ranker_user_id_;
  int launch_type_;
  ::google::protobuf::int32 hour_;
  ::google::protobuf::uint64 hashed_target_;
  ::google::protobuf::uint64 hashed_query_;
  ::google::protobuf::int32 search_query_length_;
  int search_provider_type_;
  ::google::protobuf::uint64 hashed_domain_;
  ::google::protobuf::uint64 hashed_app_;
  friend struct protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChromeOSAppListLaunchEventProto

// optional fixed64 recurrence_ranker_user_id = 1;
inline bool ChromeOSAppListLaunchEventProto::has_recurrence_ranker_user_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_recurrence_ranker_user_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_recurrence_ranker_user_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChromeOSAppListLaunchEventProto::clear_recurrence_ranker_user_id() {
  recurrence_ranker_user_id_ = GOOGLE_ULONGLONG(0);
  clear_has_recurrence_ranker_user_id();
}
inline ::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::recurrence_ranker_user_id() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.recurrence_ranker_user_id)
  return recurrence_ranker_user_id_;
}
inline void ChromeOSAppListLaunchEventProto::set_recurrence_ranker_user_id(::google::protobuf::uint64 value) {
  set_has_recurrence_ranker_user_id();
  recurrence_ranker_user_id_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.recurrence_ranker_user_id)
}

// optional .metrics.ChromeOSAppListLaunchEventProto.LaunchType launch_type = 2;
inline bool ChromeOSAppListLaunchEventProto::has_launch_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_launch_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_launch_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChromeOSAppListLaunchEventProto::clear_launch_type() {
  launch_type_ = 0;
  clear_has_launch_type();
}
inline ::metrics::ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto::launch_type() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.launch_type)
  return static_cast< ::metrics::ChromeOSAppListLaunchEventProto_LaunchType >(launch_type_);
}
inline void ChromeOSAppListLaunchEventProto::set_launch_type(::metrics::ChromeOSAppListLaunchEventProto_LaunchType value) {
  assert(::metrics::ChromeOSAppListLaunchEventProto_LaunchType_IsValid(value));
  set_has_launch_type();
  launch_type_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.launch_type)
}

// optional int32 hour = 3;
inline bool ChromeOSAppListLaunchEventProto::has_hour() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_hour() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_hour() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChromeOSAppListLaunchEventProto::clear_hour() {
  hour_ = 0;
  clear_has_hour();
}
inline ::google::protobuf::int32 ChromeOSAppListLaunchEventProto::hour() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hour)
  return hour_;
}
inline void ChromeOSAppListLaunchEventProto::set_hour(::google::protobuf::int32 value) {
  set_has_hour();
  hour_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hour)
}

// optional int32 search_query_length = 4;
inline bool ChromeOSAppListLaunchEventProto::has_search_query_length() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_search_query_length() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_search_query_length() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ChromeOSAppListLaunchEventProto::clear_search_query_length() {
  search_query_length_ = 0;
  clear_has_search_query_length();
}
inline ::google::protobuf::int32 ChromeOSAppListLaunchEventProto::search_query_length() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.search_query_length)
  return search_query_length_;
}
inline void ChromeOSAppListLaunchEventProto::set_search_query_length(::google::protobuf::int32 value) {
  set_has_search_query_length();
  search_query_length_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.search_query_length)
}

// optional fixed64 hashed_target = 5;
inline bool ChromeOSAppListLaunchEventProto::has_hashed_target() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_hashed_target() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_hashed_target() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ChromeOSAppListLaunchEventProto::clear_hashed_target() {
  hashed_target_ = GOOGLE_ULONGLONG(0);
  clear_has_hashed_target();
}
inline ::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::hashed_target() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hashed_target)
  return hashed_target_;
}
inline void ChromeOSAppListLaunchEventProto::set_hashed_target(::google::protobuf::uint64 value) {
  set_has_hashed_target();
  hashed_target_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hashed_target)
}

// optional fixed64 hashed_query = 6;
inline bool ChromeOSAppListLaunchEventProto::has_hashed_query() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_hashed_query() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_hashed_query() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ChromeOSAppListLaunchEventProto::clear_hashed_query() {
  hashed_query_ = GOOGLE_ULONGLONG(0);
  clear_has_hashed_query();
}
inline ::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::hashed_query() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hashed_query)
  return hashed_query_;
}
inline void ChromeOSAppListLaunchEventProto::set_hashed_query(::google::protobuf::uint64 value) {
  set_has_hashed_query();
  hashed_query_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hashed_query)
}

// optional fixed64 hashed_domain = 7;
inline bool ChromeOSAppListLaunchEventProto::has_hashed_domain() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_hashed_domain() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_hashed_domain() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ChromeOSAppListLaunchEventProto::clear_hashed_domain() {
  hashed_domain_ = GOOGLE_ULONGLONG(0);
  clear_has_hashed_domain();
}
inline ::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::hashed_domain() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hashed_domain)
  return hashed_domain_;
}
inline void ChromeOSAppListLaunchEventProto::set_hashed_domain(::google::protobuf::uint64 value) {
  set_has_hashed_domain();
  hashed_domain_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hashed_domain)
}

// optional fixed64 hashed_app = 8;
inline bool ChromeOSAppListLaunchEventProto::has_hashed_app() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_hashed_app() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_hashed_app() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ChromeOSAppListLaunchEventProto::clear_hashed_app() {
  hashed_app_ = GOOGLE_ULONGLONG(0);
  clear_has_hashed_app();
}
inline ::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::hashed_app() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hashed_app)
  return hashed_app_;
}
inline void ChromeOSAppListLaunchEventProto::set_hashed_app(::google::protobuf::uint64 value) {
  set_has_hashed_app();
  hashed_app_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hashed_app)
}

// optional .metrics.ChromeOSAppListLaunchEventProto.SearchProviderType search_provider_type = 9;
inline bool ChromeOSAppListLaunchEventProto::has_search_provider_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ChromeOSAppListLaunchEventProto::set_has_search_provider_type() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ChromeOSAppListLaunchEventProto::clear_has_search_provider_type() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ChromeOSAppListLaunchEventProto::clear_search_provider_type() {
  search_provider_type_ = 0;
  clear_has_search_provider_type();
}
inline ::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto::search_provider_type() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.search_provider_type)
  return static_cast< ::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType >(search_provider_type_);
}
inline void ChromeOSAppListLaunchEventProto::set_search_provider_type(::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType value) {
  assert(::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType_IsValid(value));
  set_has_search_provider_type();
  search_provider_type_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.search_provider_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace metrics

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metrics::ChromeOSAppListLaunchEventProto_LaunchType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metrics::ChromeOSAppListLaunchEventProto_LaunchType>() {
  return ::metrics::ChromeOSAppListLaunchEventProto_LaunchType_descriptor();
}
template <> struct is_proto_enum< ::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType>() {
  return ::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto__INCLUDED
