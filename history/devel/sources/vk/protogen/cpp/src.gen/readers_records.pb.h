// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: readers_records.proto

#ifndef PROTOBUF_readers_5frecords_2eproto__INCLUDED
#define PROTOBUF_readers_5frecords_2eproto__INCLUDED

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
namespace readers {
class LogmanLogRecord;
class LogmanLogRecordDefaultTypeInternal;
extern LogmanLogRecordDefaultTypeInternal _LogmanLogRecord_default_instance_;
}  // namespace readers
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace ru {
namespace mail {
namespace go {
namespace webbase {
namespace readers {

namespace protobuf_readers_5frecords_2eproto {
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
}  // namespace protobuf_readers_5frecords_2eproto

enum HTTPMethod {
  GET = 0,
  POST = 1,
  HEAD = 2,
  PUT = 3,
  DELETE = 4,
  TRACE = 5,
  OPTIONS = 6,
  CONNECT = 7,
  PATCH = 8
};
bool HTTPMethod_IsValid(int value);
const HTTPMethod HTTPMethod_MIN = GET;
const HTTPMethod HTTPMethod_MAX = PATCH;
const int HTTPMethod_ARRAYSIZE = HTTPMethod_MAX + 1;

const ::google::protobuf::EnumDescriptor* HTTPMethod_descriptor();
inline const ::std::string& HTTPMethod_Name(HTTPMethod value) {
  return ::google::protobuf::internal::NameOfEnum(
    HTTPMethod_descriptor(), value);
}
inline bool HTTPMethod_Parse(
    const ::std::string& name, HTTPMethod* value) {
  return ::google::protobuf::internal::ParseNamedEnum<HTTPMethod>(
    HTTPMethod_descriptor(), name, value);
}
// ===================================================================

class LogmanLogRecord : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.readers.LogmanLogRecord) */ {
 public:
  LogmanLogRecord();
  virtual ~LogmanLogRecord();

  LogmanLogRecord(const LogmanLogRecord& from);

  inline LogmanLogRecord& operator=(const LogmanLogRecord& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LogmanLogRecord(LogmanLogRecord&& from) noexcept
    : LogmanLogRecord() {
    *this = ::std::move(from);
  }

  inline LogmanLogRecord& operator=(LogmanLogRecord&& from) noexcept {
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
  static const LogmanLogRecord& default_instance();

  static inline const LogmanLogRecord* internal_default_instance() {
    return reinterpret_cast<const LogmanLogRecord*>(
               &_LogmanLogRecord_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LogmanLogRecord* other);
  friend void swap(LogmanLogRecord& a, LogmanLogRecord& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LogmanLogRecord* New() const PROTOBUF_FINAL { return New(NULL); }

  LogmanLogRecord* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LogmanLogRecord& from);
  void MergeFrom(const LogmanLogRecord& from);
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
  void InternalSwap(LogmanLogRecord* other);
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

  // required string remote_addr = 1;
  bool has_remote_addr() const;
  void clear_remote_addr();
  static const int kRemoteAddrFieldNumber = 1;
  const ::std::string& remote_addr() const;
  void set_remote_addr(const ::std::string& value);
  #if LANG_CXX11
  void set_remote_addr(::std::string&& value);
  #endif
  void set_remote_addr(const char* value);
  void set_remote_addr(const char* value, size_t size);
  ::std::string* mutable_remote_addr();
  ::std::string* release_remote_addr();
  void set_allocated_remote_addr(::std::string* remote_addr);

  // required string request_path = 4;
  bool has_request_path() const;
  void clear_request_path();
  static const int kRequestPathFieldNumber = 4;
  const ::std::string& request_path() const;
  void set_request_path(const ::std::string& value);
  #if LANG_CXX11
  void set_request_path(::std::string&& value);
  #endif
  void set_request_path(const char* value);
  void set_request_path(const char* value, size_t size);
  ::std::string* mutable_request_path();
  ::std::string* release_request_path();
  void set_allocated_request_path(::std::string* request_path);

  // optional string query_string = 5;
  bool has_query_string() const;
  void clear_query_string();
  static const int kQueryStringFieldNumber = 5;
  const ::std::string& query_string() const;
  void set_query_string(const ::std::string& value);
  #if LANG_CXX11
  void set_query_string(::std::string&& value);
  #endif
  void set_query_string(const char* value);
  void set_query_string(const char* value, size_t size);
  ::std::string* mutable_query_string();
  ::std::string* release_query_string();
  void set_allocated_query_string(::std::string* query_string);

  // optional string http_referrer = 6;
  bool has_http_referrer() const;
  void clear_http_referrer();
  static const int kHttpReferrerFieldNumber = 6;
  const ::std::string& http_referrer() const;
  void set_http_referrer(const ::std::string& value);
  #if LANG_CXX11
  void set_http_referrer(::std::string&& value);
  #endif
  void set_http_referrer(const char* value);
  void set_http_referrer(const char* value, size_t size);
  ::std::string* mutable_http_referrer();
  ::std::string* release_http_referrer();
  void set_allocated_http_referrer(::std::string* http_referrer);

  // optional string user_agent = 7;
  bool has_user_agent() const;
  void clear_user_agent();
  static const int kUserAgentFieldNumber = 7;
  const ::std::string& user_agent() const;
  void set_user_agent(const ::std::string& value);
  #if LANG_CXX11
  void set_user_agent(::std::string&& value);
  #endif
  void set_user_agent(const char* value);
  void set_user_agent(const char* value, size_t size);
  ::std::string* mutable_user_agent();
  ::std::string* release_user_agent();
  void set_allocated_user_agent(::std::string* user_agent);

  // optional string cookies = 8;
  bool has_cookies() const;
  void clear_cookies();
  static const int kCookiesFieldNumber = 8;
  const ::std::string& cookies() const;
  void set_cookies(const ::std::string& value);
  #if LANG_CXX11
  void set_cookies(::std::string&& value);
  #endif
  void set_cookies(const char* value);
  void set_cookies(const char* value, size_t size);
  ::std::string* mutable_cookies();
  ::std::string* release_cookies();
  void set_allocated_cookies(::std::string* cookies);

  // required fixed32 unixts = 2;
  bool has_unixts() const;
  void clear_unixts();
  static const int kUnixtsFieldNumber = 2;
  ::google::protobuf::uint32 unixts() const;
  void set_unixts(::google::protobuf::uint32 value);

  // required .ru.mail.go.webbase.readers.HTTPMethod request_method = 3;
  bool has_request_method() const;
  void clear_request_method();
  static const int kRequestMethodFieldNumber = 3;
  ::ru::mail::go::webbase::readers::HTTPMethod request_method() const;
  void set_request_method(::ru::mail::go::webbase::readers::HTTPMethod value);

  // optional uint32 response_code = 9;
  bool has_response_code() const;
  void clear_response_code();
  static const int kResponseCodeFieldNumber = 9;
  ::google::protobuf::uint32 response_code() const;
  void set_response_code(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.readers.LogmanLogRecord)
 private:
  void set_has_remote_addr();
  void clear_has_remote_addr();
  void set_has_unixts();
  void clear_has_unixts();
  void set_has_request_method();
  void clear_has_request_method();
  void set_has_request_path();
  void clear_has_request_path();
  void set_has_query_string();
  void clear_has_query_string();
  void set_has_http_referrer();
  void clear_has_http_referrer();
  void set_has_user_agent();
  void clear_has_user_agent();
  void set_has_cookies();
  void clear_has_cookies();
  void set_has_response_code();
  void clear_has_response_code();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr remote_addr_;
  ::google::protobuf::internal::ArenaStringPtr request_path_;
  ::google::protobuf::internal::ArenaStringPtr query_string_;
  ::google::protobuf::internal::ArenaStringPtr http_referrer_;
  ::google::protobuf::internal::ArenaStringPtr user_agent_;
  ::google::protobuf::internal::ArenaStringPtr cookies_;
  ::google::protobuf::uint32 unixts_;
  int request_method_;
  ::google::protobuf::uint32 response_code_;
  friend struct protobuf_readers_5frecords_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogmanLogRecord

// required string remote_addr = 1;
inline bool LogmanLogRecord::has_remote_addr() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogmanLogRecord::set_has_remote_addr() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogmanLogRecord::clear_has_remote_addr() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogmanLogRecord::clear_remote_addr() {
  remote_addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_remote_addr();
}
inline const ::std::string& LogmanLogRecord::remote_addr() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr)
  return remote_addr_.GetNoArena();
}
inline void LogmanLogRecord::set_remote_addr(const ::std::string& value) {
  set_has_remote_addr();
  remote_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr)
}
#if LANG_CXX11
inline void LogmanLogRecord::set_remote_addr(::std::string&& value) {
  set_has_remote_addr();
  remote_addr_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr)
}
#endif
inline void LogmanLogRecord::set_remote_addr(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_remote_addr();
  remote_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr)
}
inline void LogmanLogRecord::set_remote_addr(const char* value, size_t size) {
  set_has_remote_addr();
  remote_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr)
}
inline ::std::string* LogmanLogRecord::mutable_remote_addr() {
  set_has_remote_addr();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr)
  return remote_addr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogmanLogRecord::release_remote_addr() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr)
  clear_has_remote_addr();
  return remote_addr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogmanLogRecord::set_allocated_remote_addr(::std::string* remote_addr) {
  if (remote_addr != NULL) {
    set_has_remote_addr();
  } else {
    clear_has_remote_addr();
  }
  remote_addr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), remote_addr);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr)
}

// required fixed32 unixts = 2;
inline bool LogmanLogRecord::has_unixts() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void LogmanLogRecord::set_has_unixts() {
  _has_bits_[0] |= 0x00000040u;
}
inline void LogmanLogRecord::clear_has_unixts() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void LogmanLogRecord::clear_unixts() {
  unixts_ = 0u;
  clear_has_unixts();
}
inline ::google::protobuf::uint32 LogmanLogRecord::unixts() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.unixts)
  return unixts_;
}
inline void LogmanLogRecord::set_unixts(::google::protobuf::uint32 value) {
  set_has_unixts();
  unixts_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.unixts)
}

// required .ru.mail.go.webbase.readers.HTTPMethod request_method = 3;
inline bool LogmanLogRecord::has_request_method() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void LogmanLogRecord::set_has_request_method() {
  _has_bits_[0] |= 0x00000080u;
}
inline void LogmanLogRecord::clear_has_request_method() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void LogmanLogRecord::clear_request_method() {
  request_method_ = 0;
  clear_has_request_method();
}
inline ::ru::mail::go::webbase::readers::HTTPMethod LogmanLogRecord::request_method() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.request_method)
  return static_cast< ::ru::mail::go::webbase::readers::HTTPMethod >(request_method_);
}
inline void LogmanLogRecord::set_request_method(::ru::mail::go::webbase::readers::HTTPMethod value) {
  assert(::ru::mail::go::webbase::readers::HTTPMethod_IsValid(value));
  set_has_request_method();
  request_method_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.request_method)
}

// required string request_path = 4;
inline bool LogmanLogRecord::has_request_path() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogmanLogRecord::set_has_request_path() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LogmanLogRecord::clear_has_request_path() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LogmanLogRecord::clear_request_path() {
  request_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_request_path();
}
inline const ::std::string& LogmanLogRecord::request_path() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.request_path)
  return request_path_.GetNoArena();
}
inline void LogmanLogRecord::set_request_path(const ::std::string& value) {
  set_has_request_path();
  request_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.request_path)
}
#if LANG_CXX11
inline void LogmanLogRecord::set_request_path(::std::string&& value) {
  set_has_request_path();
  request_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.readers.LogmanLogRecord.request_path)
}
#endif
inline void LogmanLogRecord::set_request_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_request_path();
  request_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.readers.LogmanLogRecord.request_path)
}
inline void LogmanLogRecord::set_request_path(const char* value, size_t size) {
  set_has_request_path();
  request_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.readers.LogmanLogRecord.request_path)
}
inline ::std::string* LogmanLogRecord::mutable_request_path() {
  set_has_request_path();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.readers.LogmanLogRecord.request_path)
  return request_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogmanLogRecord::release_request_path() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.readers.LogmanLogRecord.request_path)
  clear_has_request_path();
  return request_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogmanLogRecord::set_allocated_request_path(::std::string* request_path) {
  if (request_path != NULL) {
    set_has_request_path();
  } else {
    clear_has_request_path();
  }
  request_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_path);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.readers.LogmanLogRecord.request_path)
}

// optional string query_string = 5;
inline bool LogmanLogRecord::has_query_string() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LogmanLogRecord::set_has_query_string() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LogmanLogRecord::clear_has_query_string() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LogmanLogRecord::clear_query_string() {
  query_string_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query_string();
}
inline const ::std::string& LogmanLogRecord::query_string() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.query_string)
  return query_string_.GetNoArena();
}
inline void LogmanLogRecord::set_query_string(const ::std::string& value) {
  set_has_query_string();
  query_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.query_string)
}
#if LANG_CXX11
inline void LogmanLogRecord::set_query_string(::std::string&& value) {
  set_has_query_string();
  query_string_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.readers.LogmanLogRecord.query_string)
}
#endif
inline void LogmanLogRecord::set_query_string(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query_string();
  query_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.readers.LogmanLogRecord.query_string)
}
inline void LogmanLogRecord::set_query_string(const char* value, size_t size) {
  set_has_query_string();
  query_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.readers.LogmanLogRecord.query_string)
}
inline ::std::string* LogmanLogRecord::mutable_query_string() {
  set_has_query_string();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.readers.LogmanLogRecord.query_string)
  return query_string_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogmanLogRecord::release_query_string() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.readers.LogmanLogRecord.query_string)
  clear_has_query_string();
  return query_string_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogmanLogRecord::set_allocated_query_string(::std::string* query_string) {
  if (query_string != NULL) {
    set_has_query_string();
  } else {
    clear_has_query_string();
  }
  query_string_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query_string);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.readers.LogmanLogRecord.query_string)
}

// optional string http_referrer = 6;
inline bool LogmanLogRecord::has_http_referrer() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LogmanLogRecord::set_has_http_referrer() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LogmanLogRecord::clear_has_http_referrer() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LogmanLogRecord::clear_http_referrer() {
  http_referrer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_http_referrer();
}
inline const ::std::string& LogmanLogRecord::http_referrer() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer)
  return http_referrer_.GetNoArena();
}
inline void LogmanLogRecord::set_http_referrer(const ::std::string& value) {
  set_has_http_referrer();
  http_referrer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer)
}
#if LANG_CXX11
inline void LogmanLogRecord::set_http_referrer(::std::string&& value) {
  set_has_http_referrer();
  http_referrer_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer)
}
#endif
inline void LogmanLogRecord::set_http_referrer(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_http_referrer();
  http_referrer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer)
}
inline void LogmanLogRecord::set_http_referrer(const char* value, size_t size) {
  set_has_http_referrer();
  http_referrer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer)
}
inline ::std::string* LogmanLogRecord::mutable_http_referrer() {
  set_has_http_referrer();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer)
  return http_referrer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogmanLogRecord::release_http_referrer() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer)
  clear_has_http_referrer();
  return http_referrer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogmanLogRecord::set_allocated_http_referrer(::std::string* http_referrer) {
  if (http_referrer != NULL) {
    set_has_http_referrer();
  } else {
    clear_has_http_referrer();
  }
  http_referrer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), http_referrer);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer)
}

// optional string user_agent = 7;
inline bool LogmanLogRecord::has_user_agent() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LogmanLogRecord::set_has_user_agent() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LogmanLogRecord::clear_has_user_agent() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LogmanLogRecord::clear_user_agent() {
  user_agent_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_agent();
}
inline const ::std::string& LogmanLogRecord::user_agent() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.user_agent)
  return user_agent_.GetNoArena();
}
inline void LogmanLogRecord::set_user_agent(const ::std::string& value) {
  set_has_user_agent();
  user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.user_agent)
}
#if LANG_CXX11
inline void LogmanLogRecord::set_user_agent(::std::string&& value) {
  set_has_user_agent();
  user_agent_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.readers.LogmanLogRecord.user_agent)
}
#endif
inline void LogmanLogRecord::set_user_agent(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_user_agent();
  user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.readers.LogmanLogRecord.user_agent)
}
inline void LogmanLogRecord::set_user_agent(const char* value, size_t size) {
  set_has_user_agent();
  user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.readers.LogmanLogRecord.user_agent)
}
inline ::std::string* LogmanLogRecord::mutable_user_agent() {
  set_has_user_agent();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.readers.LogmanLogRecord.user_agent)
  return user_agent_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogmanLogRecord::release_user_agent() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.readers.LogmanLogRecord.user_agent)
  clear_has_user_agent();
  return user_agent_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogmanLogRecord::set_allocated_user_agent(::std::string* user_agent) {
  if (user_agent != NULL) {
    set_has_user_agent();
  } else {
    clear_has_user_agent();
  }
  user_agent_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_agent);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.readers.LogmanLogRecord.user_agent)
}

// optional string cookies = 8;
inline bool LogmanLogRecord::has_cookies() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LogmanLogRecord::set_has_cookies() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LogmanLogRecord::clear_has_cookies() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LogmanLogRecord::clear_cookies() {
  cookies_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_cookies();
}
inline const ::std::string& LogmanLogRecord::cookies() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.cookies)
  return cookies_.GetNoArena();
}
inline void LogmanLogRecord::set_cookies(const ::std::string& value) {
  set_has_cookies();
  cookies_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.cookies)
}
#if LANG_CXX11
inline void LogmanLogRecord::set_cookies(::std::string&& value) {
  set_has_cookies();
  cookies_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.readers.LogmanLogRecord.cookies)
}
#endif
inline void LogmanLogRecord::set_cookies(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_cookies();
  cookies_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.readers.LogmanLogRecord.cookies)
}
inline void LogmanLogRecord::set_cookies(const char* value, size_t size) {
  set_has_cookies();
  cookies_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.readers.LogmanLogRecord.cookies)
}
inline ::std::string* LogmanLogRecord::mutable_cookies() {
  set_has_cookies();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.readers.LogmanLogRecord.cookies)
  return cookies_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogmanLogRecord::release_cookies() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.readers.LogmanLogRecord.cookies)
  clear_has_cookies();
  return cookies_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogmanLogRecord::set_allocated_cookies(::std::string* cookies) {
  if (cookies != NULL) {
    set_has_cookies();
  } else {
    clear_has_cookies();
  }
  cookies_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cookies);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.readers.LogmanLogRecord.cookies)
}

// optional uint32 response_code = 9;
inline bool LogmanLogRecord::has_response_code() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void LogmanLogRecord::set_has_response_code() {
  _has_bits_[0] |= 0x00000100u;
}
inline void LogmanLogRecord::clear_has_response_code() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void LogmanLogRecord::clear_response_code() {
  response_code_ = 0u;
  clear_has_response_code();
}
inline ::google::protobuf::uint32 LogmanLogRecord::response_code() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.readers.LogmanLogRecord.response_code)
  return response_code_;
}
inline void LogmanLogRecord::set_response_code(::google::protobuf::uint32 value) {
  set_has_response_code();
  response_code_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.readers.LogmanLogRecord.response_code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace readers
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ru::mail::go::webbase::readers::HTTPMethod> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ru::mail::go::webbase::readers::HTTPMethod>() {
  return ::ru::mail::go::webbase::readers::HTTPMethod_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_readers_5frecords_2eproto__INCLUDED