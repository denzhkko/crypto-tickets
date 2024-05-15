// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: telekafka.proto

#ifndef PROTOBUF_telekafka_2eproto__INCLUDED
#define PROTOBUF_telekafka_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace tkf {
namespace pb {
class HttpHeader;
class HttpHeaderDefaultTypeInternal;
extern HttpHeaderDefaultTypeInternal _HttpHeader_default_instance_;
class TelemeterEvent;
class TelemeterEventDefaultTypeInternal;
extern TelemeterEventDefaultTypeInternal _TelemeterEvent_default_instance_;
}  // namespace pb
}  // namespace tkf

namespace tkf {
namespace pb {

namespace protobuf_telekafka_2eproto {
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
}  // namespace protobuf_telekafka_2eproto

// ===================================================================

class HttpHeader : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tkf.pb.HttpHeader) */ {
 public:
  HttpHeader();
  virtual ~HttpHeader();

  HttpHeader(const HttpHeader& from);

  inline HttpHeader& operator=(const HttpHeader& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HttpHeader(HttpHeader&& from) noexcept
    : HttpHeader() {
    *this = ::std::move(from);
  }

  inline HttpHeader& operator=(HttpHeader&& from) noexcept {
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
  static const HttpHeader& default_instance();

  static inline const HttpHeader* internal_default_instance() {
    return reinterpret_cast<const HttpHeader*>(
               &_HttpHeader_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HttpHeader* other);
  friend void swap(HttpHeader& a, HttpHeader& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HttpHeader* New() const PROTOBUF_FINAL { return New(NULL); }

  HttpHeader* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HttpHeader& from);
  void MergeFrom(const HttpHeader& from);
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
  void InternalSwap(HttpHeader* other);
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

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // required string value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:tkf.pb.HttpHeader)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_value();
  void clear_has_value();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  friend struct protobuf_telekafka_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TelemeterEvent : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tkf.pb.TelemeterEvent) */ {
 public:
  TelemeterEvent();
  virtual ~TelemeterEvent();

  TelemeterEvent(const TelemeterEvent& from);

  inline TelemeterEvent& operator=(const TelemeterEvent& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TelemeterEvent(TelemeterEvent&& from) noexcept
    : TelemeterEvent() {
    *this = ::std::move(from);
  }

  inline TelemeterEvent& operator=(TelemeterEvent&& from) noexcept {
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
  static const TelemeterEvent& default_instance();

  static inline const TelemeterEvent* internal_default_instance() {
    return reinterpret_cast<const TelemeterEvent*>(
               &_TelemeterEvent_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(TelemeterEvent* other);
  friend void swap(TelemeterEvent& a, TelemeterEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TelemeterEvent* New() const PROTOBUF_FINAL { return New(NULL); }

  TelemeterEvent* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TelemeterEvent& from);
  void MergeFrom(const TelemeterEvent& from);
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
  void InternalSwap(TelemeterEvent* other);
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

  // repeated .tkf.pb.HttpHeader headers = 3;
  int headers_size() const;
  void clear_headers();
  static const int kHeadersFieldNumber = 3;
  const ::tkf::pb::HttpHeader& headers(int index) const;
  ::tkf::pb::HttpHeader* mutable_headers(int index);
  ::tkf::pb::HttpHeader* add_headers();
  ::google::protobuf::RepeatedPtrField< ::tkf::pb::HttpHeader >*
      mutable_headers();
  const ::google::protobuf::RepeatedPtrField< ::tkf::pb::HttpHeader >&
      headers() const;

  // required bytes body = 1;
  bool has_body() const;
  void clear_body();
  static const int kBodyFieldNumber = 1;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  #if LANG_CXX11
  void set_body(::std::string&& value);
  #endif
  void set_body(const char* value);
  void set_body(const void* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);

  // optional string ip = 4;
  bool has_ip() const;
  void clear_ip();
  static const int kIpFieldNumber = 4;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_ip(::std::string&& value);
  #endif
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // required uint64 timestamp = 2;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:tkf.pb.TelemeterEvent)
 private:
  void set_has_body();
  void clear_has_body();
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_ip();
  void clear_has_ip();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::tkf::pb::HttpHeader > headers_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::uint64 timestamp_;
  friend struct protobuf_telekafka_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HttpHeader

// required string name = 1;
inline bool HttpHeader::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HttpHeader::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HttpHeader::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HttpHeader::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& HttpHeader::name() const {
  // @@protoc_insertion_point(field_get:tkf.pb.HttpHeader.name)
  return name_.GetNoArena();
}
inline void HttpHeader::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tkf.pb.HttpHeader.name)
}
#if LANG_CXX11
inline void HttpHeader::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tkf.pb.HttpHeader.name)
}
#endif
inline void HttpHeader::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tkf.pb.HttpHeader.name)
}
inline void HttpHeader::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tkf.pb.HttpHeader.name)
}
inline ::std::string* HttpHeader::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:tkf.pb.HttpHeader.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpHeader::release_name() {
  // @@protoc_insertion_point(field_release:tkf.pb.HttpHeader.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpHeader::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tkf.pb.HttpHeader.name)
}

// required string value = 2;
inline bool HttpHeader::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HttpHeader::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HttpHeader::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HttpHeader::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& HttpHeader::value() const {
  // @@protoc_insertion_point(field_get:tkf.pb.HttpHeader.value)
  return value_.GetNoArena();
}
inline void HttpHeader::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tkf.pb.HttpHeader.value)
}
#if LANG_CXX11
inline void HttpHeader::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tkf.pb.HttpHeader.value)
}
#endif
inline void HttpHeader::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tkf.pb.HttpHeader.value)
}
inline void HttpHeader::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tkf.pb.HttpHeader.value)
}
inline ::std::string* HttpHeader::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:tkf.pb.HttpHeader.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpHeader::release_value() {
  // @@protoc_insertion_point(field_release:tkf.pb.HttpHeader.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpHeader::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:tkf.pb.HttpHeader.value)
}

// -------------------------------------------------------------------

// TelemeterEvent

// required bytes body = 1;
inline bool TelemeterEvent::has_body() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TelemeterEvent::set_has_body() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TelemeterEvent::clear_has_body() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TelemeterEvent::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_body();
}
inline const ::std::string& TelemeterEvent::body() const {
  // @@protoc_insertion_point(field_get:tkf.pb.TelemeterEvent.body)
  return body_.GetNoArena();
}
inline void TelemeterEvent::set_body(const ::std::string& value) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tkf.pb.TelemeterEvent.body)
}
#if LANG_CXX11
inline void TelemeterEvent::set_body(::std::string&& value) {
  set_has_body();
  body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tkf.pb.TelemeterEvent.body)
}
#endif
inline void TelemeterEvent::set_body(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tkf.pb.TelemeterEvent.body)
}
inline void TelemeterEvent::set_body(const void* value, size_t size) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tkf.pb.TelemeterEvent.body)
}
inline ::std::string* TelemeterEvent::mutable_body() {
  set_has_body();
  // @@protoc_insertion_point(field_mutable:tkf.pb.TelemeterEvent.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TelemeterEvent::release_body() {
  // @@protoc_insertion_point(field_release:tkf.pb.TelemeterEvent.body)
  clear_has_body();
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TelemeterEvent::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    set_has_body();
  } else {
    clear_has_body();
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:tkf.pb.TelemeterEvent.body)
}

// required uint64 timestamp = 2;
inline bool TelemeterEvent::has_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TelemeterEvent::set_has_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TelemeterEvent::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TelemeterEvent::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 TelemeterEvent::timestamp() const {
  // @@protoc_insertion_point(field_get:tkf.pb.TelemeterEvent.timestamp)
  return timestamp_;
}
inline void TelemeterEvent::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:tkf.pb.TelemeterEvent.timestamp)
}

// repeated .tkf.pb.HttpHeader headers = 3;
inline int TelemeterEvent::headers_size() const {
  return headers_.size();
}
inline void TelemeterEvent::clear_headers() {
  headers_.Clear();
}
inline const ::tkf::pb::HttpHeader& TelemeterEvent::headers(int index) const {
  // @@protoc_insertion_point(field_get:tkf.pb.TelemeterEvent.headers)
  return headers_.Get(index);
}
inline ::tkf::pb::HttpHeader* TelemeterEvent::mutable_headers(int index) {
  // @@protoc_insertion_point(field_mutable:tkf.pb.TelemeterEvent.headers)
  return headers_.Mutable(index);
}
inline ::tkf::pb::HttpHeader* TelemeterEvent::add_headers() {
  // @@protoc_insertion_point(field_add:tkf.pb.TelemeterEvent.headers)
  return headers_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tkf::pb::HttpHeader >*
TelemeterEvent::mutable_headers() {
  // @@protoc_insertion_point(field_mutable_list:tkf.pb.TelemeterEvent.headers)
  return &headers_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tkf::pb::HttpHeader >&
TelemeterEvent::headers() const {
  // @@protoc_insertion_point(field_list:tkf.pb.TelemeterEvent.headers)
  return headers_;
}

// optional string ip = 4;
inline bool TelemeterEvent::has_ip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TelemeterEvent::set_has_ip() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TelemeterEvent::clear_has_ip() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TelemeterEvent::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ip();
}
inline const ::std::string& TelemeterEvent::ip() const {
  // @@protoc_insertion_point(field_get:tkf.pb.TelemeterEvent.ip)
  return ip_.GetNoArena();
}
inline void TelemeterEvent::set_ip(const ::std::string& value) {
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tkf.pb.TelemeterEvent.ip)
}
#if LANG_CXX11
inline void TelemeterEvent::set_ip(::std::string&& value) {
  set_has_ip();
  ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tkf.pb.TelemeterEvent.ip)
}
#endif
inline void TelemeterEvent::set_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tkf.pb.TelemeterEvent.ip)
}
inline void TelemeterEvent::set_ip(const char* value, size_t size) {
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tkf.pb.TelemeterEvent.ip)
}
inline ::std::string* TelemeterEvent::mutable_ip() {
  set_has_ip();
  // @@protoc_insertion_point(field_mutable:tkf.pb.TelemeterEvent.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TelemeterEvent::release_ip() {
  // @@protoc_insertion_point(field_release:tkf.pb.TelemeterEvent.ip)
  clear_has_ip();
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TelemeterEvent::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    set_has_ip();
  } else {
    clear_has_ip();
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:tkf.pb.TelemeterEvent.ip)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace pb
}  // namespace tkf

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_telekafka_2eproto__INCLUDED
