// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: qddb_norm.proto

#ifndef PROTOBUF_qddb_5fnorm_2eproto__INCLUDED
#define PROTOBUF_qddb_5fnorm_2eproto__INCLUDED

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
namespace serp {
class QddbNorm;
class QddbNormDefaultTypeInternal;
extern QddbNormDefaultTypeInternal _QddbNorm_default_instance_;
class QddbNorm_Normalization;
class QddbNorm_NormalizationDefaultTypeInternal;
extern QddbNorm_NormalizationDefaultTypeInternal _QddbNorm_Normalization_default_instance_;
class QddbNorm_QddbEntry;
class QddbNorm_QddbEntryDefaultTypeInternal;
extern QddbNorm_QddbEntryDefaultTypeInternal _QddbNorm_QddbEntry_default_instance_;
}  // namespace serp
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace ru {
namespace mail {
namespace go {
namespace webbase {
namespace serp {

namespace protobuf_qddb_5fnorm_2eproto {
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
}  // namespace protobuf_qddb_5fnorm_2eproto

enum QddbNorm_Normalization_Type {
  QddbNorm_Normalization_Type_None = 0,
  QddbNorm_Normalization_Type_Lemm = 1,
  QddbNorm_Normalization_Type_Sort = 2
};
bool QddbNorm_Normalization_Type_IsValid(int value);
const QddbNorm_Normalization_Type QddbNorm_Normalization_Type_Type_MIN = QddbNorm_Normalization_Type_None;
const QddbNorm_Normalization_Type QddbNorm_Normalization_Type_Type_MAX = QddbNorm_Normalization_Type_Sort;
const int QddbNorm_Normalization_Type_Type_ARRAYSIZE = QddbNorm_Normalization_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* QddbNorm_Normalization_Type_descriptor();
inline const ::std::string& QddbNorm_Normalization_Type_Name(QddbNorm_Normalization_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    QddbNorm_Normalization_Type_descriptor(), value);
}
inline bool QddbNorm_Normalization_Type_Parse(
    const ::std::string& name, QddbNorm_Normalization_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<QddbNorm_Normalization_Type>(
    QddbNorm_Normalization_Type_descriptor(), name, value);
}
// ===================================================================

class QddbNorm_Normalization : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.serp.QddbNorm.Normalization) */ {
 public:
  QddbNorm_Normalization();
  virtual ~QddbNorm_Normalization();

  QddbNorm_Normalization(const QddbNorm_Normalization& from);

  inline QddbNorm_Normalization& operator=(const QddbNorm_Normalization& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QddbNorm_Normalization(QddbNorm_Normalization&& from) noexcept
    : QddbNorm_Normalization() {
    *this = ::std::move(from);
  }

  inline QddbNorm_Normalization& operator=(QddbNorm_Normalization&& from) noexcept {
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
  static const QddbNorm_Normalization& default_instance();

  static inline const QddbNorm_Normalization* internal_default_instance() {
    return reinterpret_cast<const QddbNorm_Normalization*>(
               &_QddbNorm_Normalization_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(QddbNorm_Normalization* other);
  friend void swap(QddbNorm_Normalization& a, QddbNorm_Normalization& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QddbNorm_Normalization* New() const PROTOBUF_FINAL { return New(NULL); }

  QddbNorm_Normalization* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const QddbNorm_Normalization& from);
  void MergeFrom(const QddbNorm_Normalization& from);
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
  void InternalSwap(QddbNorm_Normalization* other);
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

  typedef QddbNorm_Normalization_Type Type;
  static const Type None =
    QddbNorm_Normalization_Type_None;
  static const Type Lemm =
    QddbNorm_Normalization_Type_Lemm;
  static const Type Sort =
    QddbNorm_Normalization_Type_Sort;
  static inline bool Type_IsValid(int value) {
    return QddbNorm_Normalization_Type_IsValid(value);
  }
  static const Type Type_MIN =
    QddbNorm_Normalization_Type_Type_MIN;
  static const Type Type_MAX =
    QddbNorm_Normalization_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    QddbNorm_Normalization_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return QddbNorm_Normalization_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return QddbNorm_Normalization_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return QddbNorm_Normalization_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .ru.mail.go.webbase.serp.QddbNorm.Normalization.Type type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type type() const;
  void set_type(::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.serp.QddbNorm.Normalization)
 private:
  void set_has_type();
  void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  int type_;
  friend struct protobuf_qddb_5fnorm_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class QddbNorm_QddbEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.serp.QddbNorm.QddbEntry) */ {
 public:
  QddbNorm_QddbEntry();
  virtual ~QddbNorm_QddbEntry();

  QddbNorm_QddbEntry(const QddbNorm_QddbEntry& from);

  inline QddbNorm_QddbEntry& operator=(const QddbNorm_QddbEntry& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QddbNorm_QddbEntry(QddbNorm_QddbEntry&& from) noexcept
    : QddbNorm_QddbEntry() {
    *this = ::std::move(from);
  }

  inline QddbNorm_QddbEntry& operator=(QddbNorm_QddbEntry&& from) noexcept {
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
  static const QddbNorm_QddbEntry& default_instance();

  static inline const QddbNorm_QddbEntry* internal_default_instance() {
    return reinterpret_cast<const QddbNorm_QddbEntry*>(
               &_QddbNorm_QddbEntry_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(QddbNorm_QddbEntry* other);
  friend void swap(QddbNorm_QddbEntry& a, QddbNorm_QddbEntry& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QddbNorm_QddbEntry* New() const PROTOBUF_FINAL { return New(NULL); }

  QddbNorm_QddbEntry* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const QddbNorm_QddbEntry& from);
  void MergeFrom(const QddbNorm_QddbEntry& from);
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
  void InternalSwap(QddbNorm_QddbEntry* other);
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

  // required uint64 hash = 1;
  bool has_hash() const;
  void clear_hash();
  static const int kHashFieldNumber = 1;
  ::google::protobuf::uint64 hash() const;
  void set_hash(::google::protobuf::uint64 value);

  // optional uint32 sessions = 2;
  bool has_sessions() const;
  void clear_sessions();
  static const int kSessionsFieldNumber = 2;
  ::google::protobuf::uint32 sessions() const;
  void set_sessions(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.serp.QddbNorm.QddbEntry)
 private:
  void set_has_hash();
  void clear_has_hash();
  void set_has_sessions();
  void clear_has_sessions();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint64 hash_;
  ::google::protobuf::uint32 sessions_;
  friend struct protobuf_qddb_5fnorm_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class QddbNorm : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.serp.QddbNorm) */ {
 public:
  QddbNorm();
  virtual ~QddbNorm();

  QddbNorm(const QddbNorm& from);

  inline QddbNorm& operator=(const QddbNorm& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QddbNorm(QddbNorm&& from) noexcept
    : QddbNorm() {
    *this = ::std::move(from);
  }

  inline QddbNorm& operator=(QddbNorm&& from) noexcept {
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
  static const QddbNorm& default_instance();

  static inline const QddbNorm* internal_default_instance() {
    return reinterpret_cast<const QddbNorm*>(
               &_QddbNorm_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(QddbNorm* other);
  friend void swap(QddbNorm& a, QddbNorm& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QddbNorm* New() const PROTOBUF_FINAL { return New(NULL); }

  QddbNorm* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const QddbNorm& from);
  void MergeFrom(const QddbNorm& from);
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
  void InternalSwap(QddbNorm* other);
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

  typedef QddbNorm_Normalization Normalization;
  typedef QddbNorm_QddbEntry QddbEntry;

  // accessors -------------------------------------------------------

  // repeated .ru.mail.go.webbase.serp.QddbNorm.QddbEntry entries = 3;
  int entries_size() const;
  void clear_entries();
  static const int kEntriesFieldNumber = 3;
  const ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry& entries(int index) const;
  ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry* mutable_entries(int index);
  ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry* add_entries();
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry >*
      mutable_entries();
  const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry >&
      entries() const;

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

  // optional .ru.mail.go.webbase.serp.QddbNorm.Normalization norm = 2;
  bool has_norm() const;
  void clear_norm();
  static const int kNormFieldNumber = 2;
  const ::ru::mail::go::webbase::serp::QddbNorm_Normalization& norm() const;
  ::ru::mail::go::webbase::serp::QddbNorm_Normalization* mutable_norm();
  ::ru::mail::go::webbase::serp::QddbNorm_Normalization* release_norm();
  void set_allocated_norm(::ru::mail::go::webbase::serp::QddbNorm_Normalization* norm);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.serp.QddbNorm)
 private:
  void set_has_query_text();
  void clear_has_query_text();
  void set_has_norm();
  void clear_has_norm();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry > entries_;
  ::google::protobuf::internal::ArenaStringPtr query_text_;
  ::ru::mail::go::webbase::serp::QddbNorm_Normalization* norm_;
  friend struct protobuf_qddb_5fnorm_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// QddbNorm_Normalization

// required .ru.mail.go.webbase.serp.QddbNorm.Normalization.Type type = 1;
inline bool QddbNorm_Normalization::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QddbNorm_Normalization::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QddbNorm_Normalization::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QddbNorm_Normalization::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type QddbNorm_Normalization::type() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbNorm.Normalization.type)
  return static_cast< ::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type >(type_);
}
inline void QddbNorm_Normalization::set_type(::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type value) {
  assert(::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.serp.QddbNorm.Normalization.type)
}

// -------------------------------------------------------------------

// QddbNorm_QddbEntry

// required uint64 hash = 1;
inline bool QddbNorm_QddbEntry::has_hash() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QddbNorm_QddbEntry::set_has_hash() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QddbNorm_QddbEntry::clear_has_hash() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QddbNorm_QddbEntry::clear_hash() {
  hash_ = GOOGLE_ULONGLONG(0);
  clear_has_hash();
}
inline ::google::protobuf::uint64 QddbNorm_QddbEntry::hash() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbNorm.QddbEntry.hash)
  return hash_;
}
inline void QddbNorm_QddbEntry::set_hash(::google::protobuf::uint64 value) {
  set_has_hash();
  hash_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.serp.QddbNorm.QddbEntry.hash)
}

// optional uint32 sessions = 2;
inline bool QddbNorm_QddbEntry::has_sessions() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QddbNorm_QddbEntry::set_has_sessions() {
  _has_bits_[0] |= 0x00000002u;
}
inline void QddbNorm_QddbEntry::clear_has_sessions() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void QddbNorm_QddbEntry::clear_sessions() {
  sessions_ = 0u;
  clear_has_sessions();
}
inline ::google::protobuf::uint32 QddbNorm_QddbEntry::sessions() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbNorm.QddbEntry.sessions)
  return sessions_;
}
inline void QddbNorm_QddbEntry::set_sessions(::google::protobuf::uint32 value) {
  set_has_sessions();
  sessions_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.serp.QddbNorm.QddbEntry.sessions)
}

// -------------------------------------------------------------------

// QddbNorm

// optional string query_text = 1;
inline bool QddbNorm::has_query_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QddbNorm::set_has_query_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QddbNorm::clear_has_query_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QddbNorm::clear_query_text() {
  query_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query_text();
}
inline const ::std::string& QddbNorm::query_text() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbNorm.query_text)
  return query_text_.GetNoArena();
}
inline void QddbNorm::set_query_text(const ::std::string& value) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.serp.QddbNorm.query_text)
}
#if LANG_CXX11
inline void QddbNorm::set_query_text(::std::string&& value) {
  set_has_query_text();
  query_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.serp.QddbNorm.query_text)
}
#endif
inline void QddbNorm::set_query_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.serp.QddbNorm.query_text)
}
inline void QddbNorm::set_query_text(const char* value, size_t size) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.serp.QddbNorm.query_text)
}
inline ::std::string* QddbNorm::mutable_query_text() {
  set_has_query_text();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.serp.QddbNorm.query_text)
  return query_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* QddbNorm::release_query_text() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.serp.QddbNorm.query_text)
  clear_has_query_text();
  return query_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void QddbNorm::set_allocated_query_text(::std::string* query_text) {
  if (query_text != NULL) {
    set_has_query_text();
  } else {
    clear_has_query_text();
  }
  query_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query_text);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.serp.QddbNorm.query_text)
}

// optional .ru.mail.go.webbase.serp.QddbNorm.Normalization norm = 2;
inline bool QddbNorm::has_norm() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QddbNorm::set_has_norm() {
  _has_bits_[0] |= 0x00000002u;
}
inline void QddbNorm::clear_has_norm() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void QddbNorm::clear_norm() {
  if (norm_ != NULL) norm_->::ru::mail::go::webbase::serp::QddbNorm_Normalization::Clear();
  clear_has_norm();
}
inline const ::ru::mail::go::webbase::serp::QddbNorm_Normalization& QddbNorm::norm() const {
  const ::ru::mail::go::webbase::serp::QddbNorm_Normalization* p = norm_;
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbNorm.norm)
  return p != NULL ? *p : *reinterpret_cast<const ::ru::mail::go::webbase::serp::QddbNorm_Normalization*>(
      &::ru::mail::go::webbase::serp::_QddbNorm_Normalization_default_instance_);
}
inline ::ru::mail::go::webbase::serp::QddbNorm_Normalization* QddbNorm::mutable_norm() {
  set_has_norm();
  if (norm_ == NULL) {
    norm_ = new ::ru::mail::go::webbase::serp::QddbNorm_Normalization;
  }
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.serp.QddbNorm.norm)
  return norm_;
}
inline ::ru::mail::go::webbase::serp::QddbNorm_Normalization* QddbNorm::release_norm() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.serp.QddbNorm.norm)
  clear_has_norm();
  ::ru::mail::go::webbase::serp::QddbNorm_Normalization* temp = norm_;
  norm_ = NULL;
  return temp;
}
inline void QddbNorm::set_allocated_norm(::ru::mail::go::webbase::serp::QddbNorm_Normalization* norm) {
  delete norm_;
  norm_ = norm;
  if (norm) {
    set_has_norm();
  } else {
    clear_has_norm();
  }
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.serp.QddbNorm.norm)
}

// repeated .ru.mail.go.webbase.serp.QddbNorm.QddbEntry entries = 3;
inline int QddbNorm::entries_size() const {
  return entries_.size();
}
inline void QddbNorm::clear_entries() {
  entries_.Clear();
}
inline const ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry& QddbNorm::entries(int index) const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbNorm.entries)
  return entries_.Get(index);
}
inline ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry* QddbNorm::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.serp.QddbNorm.entries)
  return entries_.Mutable(index);
}
inline ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry* QddbNorm::add_entries() {
  // @@protoc_insertion_point(field_add:ru.mail.go.webbase.serp.QddbNorm.entries)
  return entries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry >*
QddbNorm::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:ru.mail.go.webbase.serp.QddbNorm.entries)
  return &entries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbNorm_QddbEntry >&
QddbNorm::entries() const {
  // @@protoc_insertion_point(field_list:ru.mail.go.webbase.serp.QddbNorm.entries)
  return entries_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace serp
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type>() {
  return ::ru::mail::go::webbase::serp::QddbNorm_Normalization_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_qddb_5fnorm_2eproto__INCLUDED