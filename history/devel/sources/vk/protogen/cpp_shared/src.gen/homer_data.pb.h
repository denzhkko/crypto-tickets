// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: homer_data.proto

#ifndef PROTOBUF_homer_5fdata_2eproto__INCLUDED
#define PROTOBUF_homer_5fdata_2eproto__INCLUDED

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
namespace ru {
namespace mail {
namespace go {
namespace webbase {
namespace logsParsers {
class HomerStat;
class HomerStatDefaultTypeInternal;
extern HomerStatDefaultTypeInternal _HomerStat_default_instance_;
class HomerStat_Statistic;
class HomerStat_StatisticDefaultTypeInternal;
extern HomerStat_StatisticDefaultTypeInternal _HomerStat_Statistic_default_instance_;
}  // namespace logsParsers
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace ru {
namespace mail {
namespace go {
namespace webbase {
namespace logsParsers {

namespace protobuf_homer_5fdata_2eproto {
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
}  // namespace protobuf_homer_5fdata_2eproto

enum SearcherType {
  CMS = 1,
  RECIPE_BY_TITLE = 2,
  RECIPE_BY_CONSIST = 3,
  TOPIC_BY_TITLE = 4,
  TOPIC_BY_CONSIST = 5,
  TOPIC_BY_ID = 6,
  NEWS = 7,
  SIMPLE9 = 8,
  NEWS_CLASSIFIER = 9,
  ITEM2ITEM = 10,
  SIMPLE9_LOW_FREQ = 11,
  TOPIC_BY_ID_SPLIT = 12,
  NEWS_BY_URL_HEALTH = 13,
  NEWS_BY_TEXT_HEALTH = 14,
  NEWS_BY_URL_ANTIMAIDAN = 15,
  NEWS_BY_TEXT_ANTIMAIDAN = 16,
  NEWS_BY_RUBRIC_HEALTH = 17,
  NEWS_SIMPLE9_HEALTH = 18,
  NEWS_SIMPLE9_ANTIMAIDAN = 19
};
bool SearcherType_IsValid(int value);
const SearcherType SearcherType_MIN = CMS;
const SearcherType SearcherType_MAX = NEWS_SIMPLE9_ANTIMAIDAN;
const int SearcherType_ARRAYSIZE = SearcherType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SearcherType_descriptor();
inline const ::std::string& SearcherType_Name(SearcherType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SearcherType_descriptor(), value);
}
inline bool SearcherType_Parse(
    const ::std::string& name, SearcherType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SearcherType>(
    SearcherType_descriptor(), name, value);
}
// ===================================================================

class HomerStat_Statistic : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.logsParsers.HomerStat.Statistic) */ {
 public:
  HomerStat_Statistic();
  virtual ~HomerStat_Statistic();

  HomerStat_Statistic(const HomerStat_Statistic& from);

  inline HomerStat_Statistic& operator=(const HomerStat_Statistic& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HomerStat_Statistic(HomerStat_Statistic&& from) noexcept
    : HomerStat_Statistic() {
    *this = ::std::move(from);
  }

  inline HomerStat_Statistic& operator=(HomerStat_Statistic&& from) noexcept {
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
  static const HomerStat_Statistic& default_instance();

  static inline const HomerStat_Statistic* internal_default_instance() {
    return reinterpret_cast<const HomerStat_Statistic*>(
               &_HomerStat_Statistic_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HomerStat_Statistic* other);
  friend void swap(HomerStat_Statistic& a, HomerStat_Statistic& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HomerStat_Statistic* New() const PROTOBUF_FINAL { return New(NULL); }

  HomerStat_Statistic* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HomerStat_Statistic& from);
  void MergeFrom(const HomerStat_Statistic& from);
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
  void InternalSwap(HomerStat_Statistic* other);
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

  // accessors -------------------------------------------------------

  // optional uint32 views = 2 [default = 0];
  bool has_views() const;
  void clear_views();
  static const int kViewsFieldNumber = 2;
  ::google::protobuf::uint32 views() const;
  void set_views(::google::protobuf::uint32 value);

  // optional uint32 clicks = 3 [default = 0];
  bool has_clicks() const;
  void clear_clicks();
  static const int kClicksFieldNumber = 3;
  ::google::protobuf::uint32 clicks() const;
  void set_clicks(::google::protobuf::uint32 value);

  // optional uint32 cancels = 4 [default = 0];
  bool has_cancels() const;
  void clear_cancels();
  static const int kCancelsFieldNumber = 4;
  ::google::protobuf::uint32 cancels() const;
  void set_cancels(::google::protobuf::uint32 value);

  // optional .ru.mail.go.webbase.logsParsers.SearcherType searcher_type = 1;
  bool has_searcher_type() const;
  void clear_searcher_type();
  static const int kSearcherTypeFieldNumber = 1;
  ::ru::mail::go::webbase::logsParsers::SearcherType searcher_type() const;
  void set_searcher_type(::ru::mail::go::webbase::logsParsers::SearcherType value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.logsParsers.HomerStat.Statistic)
 private:
  void set_has_searcher_type();
  void clear_has_searcher_type();
  void set_has_views();
  void clear_has_views();
  void set_has_clicks();
  void clear_has_clicks();
  void set_has_cancels();
  void clear_has_cancels();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 views_;
  ::google::protobuf::uint32 clicks_;
  ::google::protobuf::uint32 cancels_;
  int searcher_type_;
  friend struct protobuf_homer_5fdata_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class HomerStat : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.logsParsers.HomerStat) */ {
 public:
  HomerStat();
  virtual ~HomerStat();

  HomerStat(const HomerStat& from);

  inline HomerStat& operator=(const HomerStat& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HomerStat(HomerStat&& from) noexcept
    : HomerStat() {
    *this = ::std::move(from);
  }

  inline HomerStat& operator=(HomerStat&& from) noexcept {
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
  static const HomerStat& default_instance();

  static inline const HomerStat* internal_default_instance() {
    return reinterpret_cast<const HomerStat*>(
               &_HomerStat_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(HomerStat* other);
  friend void swap(HomerStat& a, HomerStat& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HomerStat* New() const PROTOBUF_FINAL { return New(NULL); }

  HomerStat* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HomerStat& from);
  void MergeFrom(const HomerStat& from);
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
  void InternalSwap(HomerStat* other);
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

  typedef HomerStat_Statistic Statistic;

  // accessors -------------------------------------------------------

  // repeated .ru.mail.go.webbase.logsParsers.HomerStat.Statistic stats = 2;
  int stats_size() const;
  void clear_stats();
  static const int kStatsFieldNumber = 2;
  const ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic& stats(int index) const;
  ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic* mutable_stats(int index);
  ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic* add_stats();
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic >*
      mutable_stats();
  const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic >&
      stats() const;

  // optional uint64 hash = 1;
  bool has_hash() const;
  void clear_hash();
  static const int kHashFieldNumber = 1;
  ::google::protobuf::uint64 hash() const;
  void set_hash(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.logsParsers.HomerStat)
 private:
  void set_has_hash();
  void clear_has_hash();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic > stats_;
  ::google::protobuf::uint64 hash_;
  friend struct protobuf_homer_5fdata_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HomerStat_Statistic

// optional .ru.mail.go.webbase.logsParsers.SearcherType searcher_type = 1;
inline bool HomerStat_Statistic::has_searcher_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HomerStat_Statistic::set_has_searcher_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HomerStat_Statistic::clear_has_searcher_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HomerStat_Statistic::clear_searcher_type() {
  searcher_type_ = 1;
  clear_has_searcher_type();
}
inline ::ru::mail::go::webbase::logsParsers::SearcherType HomerStat_Statistic::searcher_type() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.logsParsers.HomerStat.Statistic.searcher_type)
  return static_cast< ::ru::mail::go::webbase::logsParsers::SearcherType >(searcher_type_);
}
inline void HomerStat_Statistic::set_searcher_type(::ru::mail::go::webbase::logsParsers::SearcherType value) {
  assert(::ru::mail::go::webbase::logsParsers::SearcherType_IsValid(value));
  set_has_searcher_type();
  searcher_type_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.logsParsers.HomerStat.Statistic.searcher_type)
}

// optional uint32 views = 2 [default = 0];
inline bool HomerStat_Statistic::has_views() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HomerStat_Statistic::set_has_views() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HomerStat_Statistic::clear_has_views() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HomerStat_Statistic::clear_views() {
  views_ = 0u;
  clear_has_views();
}
inline ::google::protobuf::uint32 HomerStat_Statistic::views() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.logsParsers.HomerStat.Statistic.views)
  return views_;
}
inline void HomerStat_Statistic::set_views(::google::protobuf::uint32 value) {
  set_has_views();
  views_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.logsParsers.HomerStat.Statistic.views)
}

// optional uint32 clicks = 3 [default = 0];
inline bool HomerStat_Statistic::has_clicks() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HomerStat_Statistic::set_has_clicks() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HomerStat_Statistic::clear_has_clicks() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HomerStat_Statistic::clear_clicks() {
  clicks_ = 0u;
  clear_has_clicks();
}
inline ::google::protobuf::uint32 HomerStat_Statistic::clicks() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.logsParsers.HomerStat.Statistic.clicks)
  return clicks_;
}
inline void HomerStat_Statistic::set_clicks(::google::protobuf::uint32 value) {
  set_has_clicks();
  clicks_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.logsParsers.HomerStat.Statistic.clicks)
}

// optional uint32 cancels = 4 [default = 0];
inline bool HomerStat_Statistic::has_cancels() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HomerStat_Statistic::set_has_cancels() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HomerStat_Statistic::clear_has_cancels() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HomerStat_Statistic::clear_cancels() {
  cancels_ = 0u;
  clear_has_cancels();
}
inline ::google::protobuf::uint32 HomerStat_Statistic::cancels() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.logsParsers.HomerStat.Statistic.cancels)
  return cancels_;
}
inline void HomerStat_Statistic::set_cancels(::google::protobuf::uint32 value) {
  set_has_cancels();
  cancels_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.logsParsers.HomerStat.Statistic.cancels)
}

// -------------------------------------------------------------------

// HomerStat

// optional uint64 hash = 1;
inline bool HomerStat::has_hash() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HomerStat::set_has_hash() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HomerStat::clear_has_hash() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HomerStat::clear_hash() {
  hash_ = GOOGLE_ULONGLONG(0);
  clear_has_hash();
}
inline ::google::protobuf::uint64 HomerStat::hash() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.logsParsers.HomerStat.hash)
  return hash_;
}
inline void HomerStat::set_hash(::google::protobuf::uint64 value) {
  set_has_hash();
  hash_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.logsParsers.HomerStat.hash)
}

// repeated .ru.mail.go.webbase.logsParsers.HomerStat.Statistic stats = 2;
inline int HomerStat::stats_size() const {
  return stats_.size();
}
inline void HomerStat::clear_stats() {
  stats_.Clear();
}
inline const ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic& HomerStat::stats(int index) const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.logsParsers.HomerStat.stats)
  return stats_.Get(index);
}
inline ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic* HomerStat::mutable_stats(int index) {
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.logsParsers.HomerStat.stats)
  return stats_.Mutable(index);
}
inline ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic* HomerStat::add_stats() {
  // @@protoc_insertion_point(field_add:ru.mail.go.webbase.logsParsers.HomerStat.stats)
  return stats_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic >*
HomerStat::mutable_stats() {
  // @@protoc_insertion_point(field_mutable_list:ru.mail.go.webbase.logsParsers.HomerStat.stats)
  return &stats_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::logsParsers::HomerStat_Statistic >&
HomerStat::stats() const {
  // @@protoc_insertion_point(field_list:ru.mail.go.webbase.logsParsers.HomerStat.stats)
  return stats_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace logsParsers
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ru::mail::go::webbase::logsParsers::SearcherType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ru::mail::go::webbase::logsParsers::SearcherType>() {
  return ::ru::mail::go::webbase::logsParsers::SearcherType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_homer_5fdata_2eproto__INCLUDED
