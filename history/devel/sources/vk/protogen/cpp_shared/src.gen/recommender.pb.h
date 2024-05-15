// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: recommender.proto

#ifndef PROTOBUF_recommender_2eproto__INCLUDED
#define PROTOBUF_recommender_2eproto__INCLUDED

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
namespace ru {
namespace mail {
namespace go {
namespace recobase {
class WebLikeMessage;
class WebLikeMessageDefaultTypeInternal;
extern WebLikeMessageDefaultTypeInternal _WebLikeMessage_default_instance_;
}  // namespace recobase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace ru {
namespace mail {
namespace go {
namespace recobase {

namespace protobuf_recommender_2eproto {
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
}  // namespace protobuf_recommender_2eproto

// ===================================================================

class WebLikeMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.recobase.WebLikeMessage) */ {
 public:
  WebLikeMessage();
  virtual ~WebLikeMessage();

  WebLikeMessage(const WebLikeMessage& from);

  inline WebLikeMessage& operator=(const WebLikeMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WebLikeMessage(WebLikeMessage&& from) noexcept
    : WebLikeMessage() {
    *this = ::std::move(from);
  }

  inline WebLikeMessage& operator=(WebLikeMessage&& from) noexcept {
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
  static const WebLikeMessage& default_instance();

  static inline const WebLikeMessage* internal_default_instance() {
    return reinterpret_cast<const WebLikeMessage*>(
               &_WebLikeMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(WebLikeMessage* other);
  friend void swap(WebLikeMessage& a, WebLikeMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WebLikeMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  WebLikeMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const WebLikeMessage& from);
  void MergeFrom(const WebLikeMessage& from);
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
  void InternalSwap(WebLikeMessage* other);
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

  // required string url = 2;
  bool has_url() const;
  void clear_url();
  static const int kUrlFieldNumber = 2;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  #if LANG_CXX11
  void set_url(::std::string&& value);
  #endif
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // required uint64 uid = 1;
  bool has_uid() const;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::uint64 uid() const;
  void set_uid(::google::protobuf::uint64 value);

  // required double prop = 3;
  bool has_prop() const;
  void clear_prop();
  static const int kPropFieldNumber = 3;
  double prop() const;
  void set_prop(double value);

  // required int32 dwelTime = 4;
  bool has_dweltime() const;
  void clear_dweltime();
  static const int kDwelTimeFieldNumber = 4;
  ::google::protobuf::int32 dweltime() const;
  void set_dweltime(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.recobase.WebLikeMessage)
 private:
  void set_has_uid();
  void clear_has_uid();
  void set_has_url();
  void clear_has_url();
  void set_has_prop();
  void clear_has_prop();
  void set_has_dweltime();
  void clear_has_dweltime();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::uint64 uid_;
  double prop_;
  ::google::protobuf::int32 dweltime_;
  friend struct protobuf_recommender_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WebLikeMessage

// required uint64 uid = 1;
inline bool WebLikeMessage::has_uid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WebLikeMessage::set_has_uid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WebLikeMessage::clear_has_uid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WebLikeMessage::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
  clear_has_uid();
}
inline ::google::protobuf::uint64 WebLikeMessage::uid() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.recobase.WebLikeMessage.uid)
  return uid_;
}
inline void WebLikeMessage::set_uid(::google::protobuf::uint64 value) {
  set_has_uid();
  uid_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.recobase.WebLikeMessage.uid)
}

// required string url = 2;
inline bool WebLikeMessage::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WebLikeMessage::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WebLikeMessage::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WebLikeMessage::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
inline const ::std::string& WebLikeMessage::url() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.recobase.WebLikeMessage.url)
  return url_.GetNoArena();
}
inline void WebLikeMessage::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.recobase.WebLikeMessage.url)
}
#if LANG_CXX11
inline void WebLikeMessage::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.recobase.WebLikeMessage.url)
}
#endif
inline void WebLikeMessage::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.recobase.WebLikeMessage.url)
}
inline void WebLikeMessage::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.recobase.WebLikeMessage.url)
}
inline ::std::string* WebLikeMessage::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.recobase.WebLikeMessage.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WebLikeMessage::release_url() {
  // @@protoc_insertion_point(field_release:ru.mail.go.recobase.WebLikeMessage.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WebLikeMessage::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.recobase.WebLikeMessage.url)
}

// required double prop = 3;
inline bool WebLikeMessage::has_prop() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WebLikeMessage::set_has_prop() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WebLikeMessage::clear_has_prop() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WebLikeMessage::clear_prop() {
  prop_ = 0;
  clear_has_prop();
}
inline double WebLikeMessage::prop() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.recobase.WebLikeMessage.prop)
  return prop_;
}
inline void WebLikeMessage::set_prop(double value) {
  set_has_prop();
  prop_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.recobase.WebLikeMessage.prop)
}

// required int32 dwelTime = 4;
inline bool WebLikeMessage::has_dweltime() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WebLikeMessage::set_has_dweltime() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WebLikeMessage::clear_has_dweltime() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WebLikeMessage::clear_dweltime() {
  dweltime_ = 0;
  clear_has_dweltime();
}
inline ::google::protobuf::int32 WebLikeMessage::dweltime() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.recobase.WebLikeMessage.dwelTime)
  return dweltime_;
}
inline void WebLikeMessage::set_dweltime(::google::protobuf::int32 value) {
  set_has_dweltime();
  dweltime_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.recobase.WebLikeMessage.dwelTime)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace recobase
}  // namespace go
}  // namespace mail
}  // namespace ru

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_recommender_2eproto__INCLUDED
