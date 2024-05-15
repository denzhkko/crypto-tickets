// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wiki_page.proto

#ifndef PROTOBUF_wiki_5fpage_2eproto__INCLUDED
#define PROTOBUF_wiki_5fpage_2eproto__INCLUDED

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
namespace wiki_page {
namespace pb {
class WikiPage;
class WikiPageDefaultTypeInternal;
extern WikiPageDefaultTypeInternal _WikiPage_default_instance_;
}  // namespace pb
}  // namespace wiki_page

namespace wiki_page {
namespace pb {

namespace protobuf_wiki_5fpage_2eproto {
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
}  // namespace protobuf_wiki_5fpage_2eproto

// ===================================================================

class WikiPage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:wiki_page.pb.WikiPage) */ {
 public:
  WikiPage();
  virtual ~WikiPage();

  WikiPage(const WikiPage& from);

  inline WikiPage& operator=(const WikiPage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WikiPage(WikiPage&& from) noexcept
    : WikiPage() {
    *this = ::std::move(from);
  }

  inline WikiPage& operator=(WikiPage&& from) noexcept {
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
  static const WikiPage& default_instance();

  static inline const WikiPage* internal_default_instance() {
    return reinterpret_cast<const WikiPage*>(
               &_WikiPage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(WikiPage* other);
  friend void swap(WikiPage& a, WikiPage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WikiPage* New() const PROTOBUF_FINAL { return New(NULL); }

  WikiPage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const WikiPage& from);
  void MergeFrom(const WikiPage& from);
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
  void InternalSwap(WikiPage* other);
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

  // optional string query_text = 1;
  bool has_query_text() const;
  void clear_query_text();
  static const int kQueryTextFieldNumber = 1;
  const ::std::string& query_text() const;
  void set_query_text(const ::std::string& value);
  #if LANG_CXX11
  void set_query_text(::std::string&& value);
  #endif
  void set_query_text(const char* value);
  void set_query_text(const char* value, size_t size);
  ::std::string* mutable_query_text();
  ::std::string* release_query_text();
  void set_allocated_query_text(::std::string* query_text);

  // optional string page_content = 2;
  bool has_page_content() const;
  void clear_page_content();
  static const int kPageContentFieldNumber = 2;
  const ::std::string& page_content() const;
  void set_page_content(const ::std::string& value);
  #if LANG_CXX11
  void set_page_content(::std::string&& value);
  #endif
  void set_page_content(const char* value);
  void set_page_content(const char* value, size_t size);
  ::std::string* mutable_page_content();
  ::std::string* release_page_content();
  void set_allocated_page_content(::std::string* page_content);

  // optional string error_msg = 3;
  bool has_error_msg() const;
  void clear_error_msg();
  static const int kErrorMsgFieldNumber = 3;
  const ::std::string& error_msg() const;
  void set_error_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_error_msg(::std::string&& value);
  #endif
  void set_error_msg(const char* value);
  void set_error_msg(const char* value, size_t size);
  ::std::string* mutable_error_msg();
  ::std::string* release_error_msg();
  void set_allocated_error_msg(::std::string* error_msg);

  // @@protoc_insertion_point(class_scope:wiki_page.pb.WikiPage)
 private:
  void set_has_query_text();
  void clear_has_query_text();
  void set_has_page_content();
  void clear_has_page_content();
  void set_has_error_msg();
  void clear_has_error_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr query_text_;
  ::google::protobuf::internal::ArenaStringPtr page_content_;
  ::google::protobuf::internal::ArenaStringPtr error_msg_;
  friend struct protobuf_wiki_5fpage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WikiPage

// optional string query_text = 1;
inline bool WikiPage::has_query_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WikiPage::set_has_query_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WikiPage::clear_has_query_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WikiPage::clear_query_text() {
  query_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query_text();
}
inline const ::std::string& WikiPage::query_text() const {
  // @@protoc_insertion_point(field_get:wiki_page.pb.WikiPage.query_text)
  return query_text_.GetNoArena();
}
inline void WikiPage::set_query_text(const ::std::string& value) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:wiki_page.pb.WikiPage.query_text)
}
#if LANG_CXX11
inline void WikiPage::set_query_text(::std::string&& value) {
  set_has_query_text();
  query_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:wiki_page.pb.WikiPage.query_text)
}
#endif
inline void WikiPage::set_query_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:wiki_page.pb.WikiPage.query_text)
}
inline void WikiPage::set_query_text(const char* value, size_t size) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:wiki_page.pb.WikiPage.query_text)
}
inline ::std::string* WikiPage::mutable_query_text() {
  set_has_query_text();
  // @@protoc_insertion_point(field_mutable:wiki_page.pb.WikiPage.query_text)
  return query_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WikiPage::release_query_text() {
  // @@protoc_insertion_point(field_release:wiki_page.pb.WikiPage.query_text)
  clear_has_query_text();
  return query_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WikiPage::set_allocated_query_text(::std::string* query_text) {
  if (query_text != NULL) {
    set_has_query_text();
  } else {
    clear_has_query_text();
  }
  query_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query_text);
  // @@protoc_insertion_point(field_set_allocated:wiki_page.pb.WikiPage.query_text)
}

// optional string page_content = 2;
inline bool WikiPage::has_page_content() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WikiPage::set_has_page_content() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WikiPage::clear_has_page_content() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WikiPage::clear_page_content() {
  page_content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_page_content();
}
inline const ::std::string& WikiPage::page_content() const {
  // @@protoc_insertion_point(field_get:wiki_page.pb.WikiPage.page_content)
  return page_content_.GetNoArena();
}
inline void WikiPage::set_page_content(const ::std::string& value) {
  set_has_page_content();
  page_content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:wiki_page.pb.WikiPage.page_content)
}
#if LANG_CXX11
inline void WikiPage::set_page_content(::std::string&& value) {
  set_has_page_content();
  page_content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:wiki_page.pb.WikiPage.page_content)
}
#endif
inline void WikiPage::set_page_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_page_content();
  page_content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:wiki_page.pb.WikiPage.page_content)
}
inline void WikiPage::set_page_content(const char* value, size_t size) {
  set_has_page_content();
  page_content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:wiki_page.pb.WikiPage.page_content)
}
inline ::std::string* WikiPage::mutable_page_content() {
  set_has_page_content();
  // @@protoc_insertion_point(field_mutable:wiki_page.pb.WikiPage.page_content)
  return page_content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WikiPage::release_page_content() {
  // @@protoc_insertion_point(field_release:wiki_page.pb.WikiPage.page_content)
  clear_has_page_content();
  return page_content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WikiPage::set_allocated_page_content(::std::string* page_content) {
  if (page_content != NULL) {
    set_has_page_content();
  } else {
    clear_has_page_content();
  }
  page_content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), page_content);
  // @@protoc_insertion_point(field_set_allocated:wiki_page.pb.WikiPage.page_content)
}

// optional string error_msg = 3;
inline bool WikiPage::has_error_msg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WikiPage::set_has_error_msg() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WikiPage::clear_has_error_msg() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WikiPage::clear_error_msg() {
  error_msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_error_msg();
}
inline const ::std::string& WikiPage::error_msg() const {
  // @@protoc_insertion_point(field_get:wiki_page.pb.WikiPage.error_msg)
  return error_msg_.GetNoArena();
}
inline void WikiPage::set_error_msg(const ::std::string& value) {
  set_has_error_msg();
  error_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:wiki_page.pb.WikiPage.error_msg)
}
#if LANG_CXX11
inline void WikiPage::set_error_msg(::std::string&& value) {
  set_has_error_msg();
  error_msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:wiki_page.pb.WikiPage.error_msg)
}
#endif
inline void WikiPage::set_error_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_error_msg();
  error_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:wiki_page.pb.WikiPage.error_msg)
}
inline void WikiPage::set_error_msg(const char* value, size_t size) {
  set_has_error_msg();
  error_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:wiki_page.pb.WikiPage.error_msg)
}
inline ::std::string* WikiPage::mutable_error_msg() {
  set_has_error_msg();
  // @@protoc_insertion_point(field_mutable:wiki_page.pb.WikiPage.error_msg)
  return error_msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WikiPage::release_error_msg() {
  // @@protoc_insertion_point(field_release:wiki_page.pb.WikiPage.error_msg)
  clear_has_error_msg();
  return error_msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WikiPage::set_allocated_error_msg(::std::string* error_msg) {
  if (error_msg != NULL) {
    set_has_error_msg();
  } else {
    clear_has_error_msg();
  }
  error_msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_msg);
  // @@protoc_insertion_point(field_set_allocated:wiki_page.pb.WikiPage.error_msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace pb
}  // namespace wiki_page

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_wiki_5fpage_2eproto__INCLUDED