// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: document_dbctl.proto

#ifndef PROTOBUF_document_5fdbctl_2eproto__INCLUDED
#define PROTOBUF_document_5fdbctl_2eproto__INCLUDED

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
namespace webbase {
namespace migrate {
class DocDbctl;
class DocDbctlDefaultTypeInternal;
extern DocDbctlDefaultTypeInternal _DocDbctl_default_instance_;
class DocList;
class DocListDefaultTypeInternal;
extern DocListDefaultTypeInternal _DocList_default_instance_;
}  // namespace migrate
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace ru {
namespace mail {
namespace go {
namespace webbase {
namespace migrate {

namespace protobuf_document_5fdbctl_2eproto {
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
}  // namespace protobuf_document_5fdbctl_2eproto

// ===================================================================

class DocDbctl : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.migrate.DocDbctl) */ {
 public:
  DocDbctl();
  virtual ~DocDbctl();

  DocDbctl(const DocDbctl& from);

  inline DocDbctl& operator=(const DocDbctl& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DocDbctl(DocDbctl&& from) noexcept
    : DocDbctl() {
    *this = ::std::move(from);
  }

  inline DocDbctl& operator=(DocDbctl&& from) noexcept {
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
  static const DocDbctl& default_instance();

  static inline const DocDbctl* internal_default_instance() {
    return reinterpret_cast<const DocDbctl*>(
               &_DocDbctl_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(DocDbctl* other);
  friend void swap(DocDbctl& a, DocDbctl& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DocDbctl* New() const PROTOBUF_FINAL { return New(NULL); }

  DocDbctl* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DocDbctl& from);
  void MergeFrom(const DocDbctl& from);
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
  void InternalSwap(DocDbctl* other);
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

  // required string url = 1;
  bool has_url() const;
  void clear_url();
  static const int kUrlFieldNumber = 1;
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

  // required bytes data = 6;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 6;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // required uint64 time = 2;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 2;
  ::google::protobuf::uint64 time() const;
  void set_time(::google::protobuf::uint64 value);

  // required uint32 flag = 3;
  bool has_flag() const;
  void clear_flag();
  static const int kFlagFieldNumber = 3;
  ::google::protobuf::uint32 flag() const;
  void set_flag(::google::protobuf::uint32 value);

  // required uint32 type = 4;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  ::google::protobuf::uint32 type() const;
  void set_type(::google::protobuf::uint32 value);

  // required uint32 language = 5;
  bool has_language() const;
  void clear_language();
  static const int kLanguageFieldNumber = 5;
  ::google::protobuf::uint32 language() const;
  void set_language(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.migrate.DocDbctl)
 private:
  void set_has_url();
  void clear_has_url();
  void set_has_time();
  void clear_has_time();
  void set_has_flag();
  void clear_has_flag();
  void set_has_type();
  void clear_has_type();
  void set_has_language();
  void clear_has_language();
  void set_has_data();
  void clear_has_data();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::uint64 time_;
  ::google::protobuf::uint32 flag_;
  ::google::protobuf::uint32 type_;
  ::google::protobuf::uint32 language_;
  friend struct protobuf_document_5fdbctl_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DocList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.migrate.DocList) */ {
 public:
  DocList();
  virtual ~DocList();

  DocList(const DocList& from);

  inline DocList& operator=(const DocList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DocList(DocList&& from) noexcept
    : DocList() {
    *this = ::std::move(from);
  }

  inline DocList& operator=(DocList&& from) noexcept {
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
  static const DocList& default_instance();

  static inline const DocList* internal_default_instance() {
    return reinterpret_cast<const DocList*>(
               &_DocList_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(DocList* other);
  friend void swap(DocList& a, DocList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DocList* New() const PROTOBUF_FINAL { return New(NULL); }

  DocList* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DocList& from);
  void MergeFrom(const DocList& from);
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
  void InternalSwap(DocList* other);
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

  // repeated .ru.mail.go.webbase.migrate.DocDbctl docs = 1;
  int docs_size() const;
  void clear_docs();
  static const int kDocsFieldNumber = 1;
  const ::ru::mail::go::webbase::migrate::DocDbctl& docs(int index) const;
  ::ru::mail::go::webbase::migrate::DocDbctl* mutable_docs(int index);
  ::ru::mail::go::webbase::migrate::DocDbctl* add_docs();
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::migrate::DocDbctl >*
      mutable_docs();
  const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::migrate::DocDbctl >&
      docs() const;

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.migrate.DocList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::migrate::DocDbctl > docs_;
  friend struct protobuf_document_5fdbctl_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DocDbctl

// required string url = 1;
inline bool DocDbctl::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DocDbctl::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DocDbctl::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DocDbctl::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
inline const ::std::string& DocDbctl::url() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.migrate.DocDbctl.url)
  return url_.GetNoArena();
}
inline void DocDbctl::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.migrate.DocDbctl.url)
}
#if LANG_CXX11
inline void DocDbctl::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.migrate.DocDbctl.url)
}
#endif
inline void DocDbctl::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.migrate.DocDbctl.url)
}
inline void DocDbctl::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.migrate.DocDbctl.url)
}
inline ::std::string* DocDbctl::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.migrate.DocDbctl.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DocDbctl::release_url() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.migrate.DocDbctl.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DocDbctl::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.migrate.DocDbctl.url)
}

// required uint64 time = 2;
inline bool DocDbctl::has_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DocDbctl::set_has_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DocDbctl::clear_has_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DocDbctl::clear_time() {
  time_ = GOOGLE_ULONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::uint64 DocDbctl::time() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.migrate.DocDbctl.time)
  return time_;
}
inline void DocDbctl::set_time(::google::protobuf::uint64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.migrate.DocDbctl.time)
}

// required uint32 flag = 3;
inline bool DocDbctl::has_flag() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DocDbctl::set_has_flag() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DocDbctl::clear_has_flag() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DocDbctl::clear_flag() {
  flag_ = 0u;
  clear_has_flag();
}
inline ::google::protobuf::uint32 DocDbctl::flag() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.migrate.DocDbctl.flag)
  return flag_;
}
inline void DocDbctl::set_flag(::google::protobuf::uint32 value) {
  set_has_flag();
  flag_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.migrate.DocDbctl.flag)
}

// required uint32 type = 4;
inline bool DocDbctl::has_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DocDbctl::set_has_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DocDbctl::clear_has_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DocDbctl::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 DocDbctl::type() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.migrate.DocDbctl.type)
  return type_;
}
inline void DocDbctl::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.migrate.DocDbctl.type)
}

// required uint32 language = 5;
inline bool DocDbctl::has_language() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DocDbctl::set_has_language() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DocDbctl::clear_has_language() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DocDbctl::clear_language() {
  language_ = 0u;
  clear_has_language();
}
inline ::google::protobuf::uint32 DocDbctl::language() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.migrate.DocDbctl.language)
  return language_;
}
inline void DocDbctl::set_language(::google::protobuf::uint32 value) {
  set_has_language();
  language_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.migrate.DocDbctl.language)
}

// required bytes data = 6;
inline bool DocDbctl::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DocDbctl::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DocDbctl::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DocDbctl::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_data();
}
inline const ::std::string& DocDbctl::data() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.migrate.DocDbctl.data)
  return data_.GetNoArena();
}
inline void DocDbctl::set_data(const ::std::string& value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.migrate.DocDbctl.data)
}
#if LANG_CXX11
inline void DocDbctl::set_data(::std::string&& value) {
  set_has_data();
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.migrate.DocDbctl.data)
}
#endif
inline void DocDbctl::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.migrate.DocDbctl.data)
}
inline void DocDbctl::set_data(const void* value, size_t size) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.migrate.DocDbctl.data)
}
inline ::std::string* DocDbctl::mutable_data() {
  set_has_data();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.migrate.DocDbctl.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DocDbctl::release_data() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.migrate.DocDbctl.data)
  clear_has_data();
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DocDbctl::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    set_has_data();
  } else {
    clear_has_data();
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.migrate.DocDbctl.data)
}

// -------------------------------------------------------------------

// DocList

// repeated .ru.mail.go.webbase.migrate.DocDbctl docs = 1;
inline int DocList::docs_size() const {
  return docs_.size();
}
inline void DocList::clear_docs() {
  docs_.Clear();
}
inline const ::ru::mail::go::webbase::migrate::DocDbctl& DocList::docs(int index) const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.migrate.DocList.docs)
  return docs_.Get(index);
}
inline ::ru::mail::go::webbase::migrate::DocDbctl* DocList::mutable_docs(int index) {
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.migrate.DocList.docs)
  return docs_.Mutable(index);
}
inline ::ru::mail::go::webbase::migrate::DocDbctl* DocList::add_docs() {
  // @@protoc_insertion_point(field_add:ru.mail.go.webbase.migrate.DocList.docs)
  return docs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::migrate::DocDbctl >*
DocList::mutable_docs() {
  // @@protoc_insertion_point(field_mutable_list:ru.mail.go.webbase.migrate.DocList.docs)
  return &docs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::migrate::DocDbctl >&
DocList::docs() const {
  // @@protoc_insertion_point(field_list:ru.mail.go.webbase.migrate.DocList.docs)
  return docs_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace migrate
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_document_5fdbctl_2eproto__INCLUDED
