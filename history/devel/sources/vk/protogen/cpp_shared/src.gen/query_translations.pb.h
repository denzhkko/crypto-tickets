// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: query_translations.proto

#ifndef PROTOBUF_query_5ftranslations_2eproto__INCLUDED
#define PROTOBUF_query_5ftranslations_2eproto__INCLUDED

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
namespace translator {
class Translation;
class TranslationDefaultTypeInternal;
extern TranslationDefaultTypeInternal _Translation_default_instance_;
class Translations;
class TranslationsDefaultTypeInternal;
extern TranslationsDefaultTypeInternal _Translations_default_instance_;
}  // namespace translator
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace ru {
namespace mail {
namespace go {
namespace webbase {
namespace translator {

namespace protobuf_query_5ftranslations_2eproto {
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
}  // namespace protobuf_query_5ftranslations_2eproto

// ===================================================================

class Translation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.translator.Translation) */ {
 public:
  Translation();
  virtual ~Translation();

  Translation(const Translation& from);

  inline Translation& operator=(const Translation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Translation(Translation&& from) noexcept
    : Translation() {
    *this = ::std::move(from);
  }

  inline Translation& operator=(Translation&& from) noexcept {
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
  static const Translation& default_instance();

  static inline const Translation* internal_default_instance() {
    return reinterpret_cast<const Translation*>(
               &_Translation_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Translation* other);
  friend void swap(Translation& a, Translation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Translation* New() const PROTOBUF_FINAL { return New(NULL); }

  Translation* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Translation& from);
  void MergeFrom(const Translation& from);
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
  void InternalSwap(Translation* other);
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

  // required string query = 1;
  bool has_query() const;
  void clear_query();
  static const int kQueryFieldNumber = 1;
  const ::std::string& query() const;
  void set_query(const ::std::string& value);
  #if LANG_CXX11
  void set_query(::std::string&& value);
  #endif
  void set_query(const char* value);
  void set_query(const char* value, size_t size);
  ::std::string* mutable_query();
  ::std::string* release_query();
  void set_allocated_query(::std::string* query);

  // optional double rank = 2;
  bool has_rank() const;
  void clear_rank();
  static const int kRankFieldNumber = 2;
  double rank() const;
  void set_rank(double value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.translator.Translation)
 private:
  void set_has_query();
  void clear_has_query();
  void set_has_rank();
  void clear_has_rank();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr query_;
  double rank_;
  friend struct protobuf_query_5ftranslations_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Translations : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.translator.Translations) */ {
 public:
  Translations();
  virtual ~Translations();

  Translations(const Translations& from);

  inline Translations& operator=(const Translations& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Translations(Translations&& from) noexcept
    : Translations() {
    *this = ::std::move(from);
  }

  inline Translations& operator=(Translations&& from) noexcept {
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
  static const Translations& default_instance();

  static inline const Translations* internal_default_instance() {
    return reinterpret_cast<const Translations*>(
               &_Translations_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Translations* other);
  friend void swap(Translations& a, Translations& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Translations* New() const PROTOBUF_FINAL { return New(NULL); }

  Translations* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Translations& from);
  void MergeFrom(const Translations& from);
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
  void InternalSwap(Translations* other);
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

  // repeated .ru.mail.go.webbase.translator.Translation translations = 1;
  int translations_size() const;
  void clear_translations();
  static const int kTranslationsFieldNumber = 1;
  const ::ru::mail::go::webbase::translator::Translation& translations(int index) const;
  ::ru::mail::go::webbase::translator::Translation* mutable_translations(int index);
  ::ru::mail::go::webbase::translator::Translation* add_translations();
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::translator::Translation >*
      mutable_translations();
  const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::translator::Translation >&
      translations() const;

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.translator.Translations)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::translator::Translation > translations_;
  friend struct protobuf_query_5ftranslations_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Translation

// required string query = 1;
inline bool Translation::has_query() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Translation::set_has_query() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Translation::clear_has_query() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Translation::clear_query() {
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query();
}
inline const ::std::string& Translation::query() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.translator.Translation.query)
  return query_.GetNoArena();
}
inline void Translation::set_query(const ::std::string& value) {
  set_has_query();
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.translator.Translation.query)
}
#if LANG_CXX11
inline void Translation::set_query(::std::string&& value) {
  set_has_query();
  query_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.translator.Translation.query)
}
#endif
inline void Translation::set_query(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query();
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.translator.Translation.query)
}
inline void Translation::set_query(const char* value, size_t size) {
  set_has_query();
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.translator.Translation.query)
}
inline ::std::string* Translation::mutable_query() {
  set_has_query();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.translator.Translation.query)
  return query_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Translation::release_query() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.translator.Translation.query)
  clear_has_query();
  return query_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Translation::set_allocated_query(::std::string* query) {
  if (query != NULL) {
    set_has_query();
  } else {
    clear_has_query();
  }
  query_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.translator.Translation.query)
}

// optional double rank = 2;
inline bool Translation::has_rank() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Translation::set_has_rank() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Translation::clear_has_rank() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Translation::clear_rank() {
  rank_ = 0;
  clear_has_rank();
}
inline double Translation::rank() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.translator.Translation.rank)
  return rank_;
}
inline void Translation::set_rank(double value) {
  set_has_rank();
  rank_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.translator.Translation.rank)
}

// -------------------------------------------------------------------

// Translations

// repeated .ru.mail.go.webbase.translator.Translation translations = 1;
inline int Translations::translations_size() const {
  return translations_.size();
}
inline void Translations::clear_translations() {
  translations_.Clear();
}
inline const ::ru::mail::go::webbase::translator::Translation& Translations::translations(int index) const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.translator.Translations.translations)
  return translations_.Get(index);
}
inline ::ru::mail::go::webbase::translator::Translation* Translations::mutable_translations(int index) {
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.translator.Translations.translations)
  return translations_.Mutable(index);
}
inline ::ru::mail::go::webbase::translator::Translation* Translations::add_translations() {
  // @@protoc_insertion_point(field_add:ru.mail.go.webbase.translator.Translations.translations)
  return translations_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::translator::Translation >*
Translations::mutable_translations() {
  // @@protoc_insertion_point(field_mutable_list:ru.mail.go.webbase.translator.Translations.translations)
  return &translations_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::translator::Translation >&
Translations::translations() const {
  // @@protoc_insertion_point(field_list:ru.mail.go.webbase.translator.Translations.translations)
  return translations_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace translator
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_query_5ftranslations_2eproto__INCLUDED
