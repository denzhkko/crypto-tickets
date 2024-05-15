// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: qddb_fast.proto

#ifndef PROTOBUF_qddb_5ffast_2eproto__INCLUDED
#define PROTOBUF_qddb_5ffast_2eproto__INCLUDED

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
#include "result.pb.h"
// @@protoc_insertion_point(includes)
namespace ru {
namespace mail {
namespace go {
namespace webbase {
namespace serp {
class QddbFast;
class QddbFastDefaultTypeInternal;
extern QddbFastDefaultTypeInternal _QddbFast_default_instance_;
class QddbFast_DocInfo;
class QddbFast_DocInfoDefaultTypeInternal;
extern QddbFast_DocInfoDefaultTypeInternal _QddbFast_DocInfo_default_instance_;
class QddbFast_GeoInfo;
class QddbFast_GeoInfoDefaultTypeInternal;
extern QddbFast_GeoInfoDefaultTypeInternal _QddbFast_GeoInfo_default_instance_;
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

namespace protobuf_qddb_5ffast_2eproto {
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
}  // namespace protobuf_qddb_5ffast_2eproto

// ===================================================================

class QddbFast_DocInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.serp.QddbFast.DocInfo) */ {
 public:
  QddbFast_DocInfo();
  virtual ~QddbFast_DocInfo();

  QddbFast_DocInfo(const QddbFast_DocInfo& from);

  inline QddbFast_DocInfo& operator=(const QddbFast_DocInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QddbFast_DocInfo(QddbFast_DocInfo&& from) noexcept
    : QddbFast_DocInfo() {
    *this = ::std::move(from);
  }

  inline QddbFast_DocInfo& operator=(QddbFast_DocInfo&& from) noexcept {
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
  static const QddbFast_DocInfo& default_instance();

  static inline const QddbFast_DocInfo* internal_default_instance() {
    return reinterpret_cast<const QddbFast_DocInfo*>(
               &_QddbFast_DocInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(QddbFast_DocInfo* other);
  friend void swap(QddbFast_DocInfo& a, QddbFast_DocInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QddbFast_DocInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  QddbFast_DocInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const QddbFast_DocInfo& from);
  void MergeFrom(const QddbFast_DocInfo& from);
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
  void InternalSwap(QddbFast_DocInfo* other);
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

  // optional .ru.mail.go.webbase.BBResult result = 2;
  bool has_result() const;
  void clear_result();
  static const int kResultFieldNumber = 2;
  const ::ru::mail::go::webbase::BBResult& result() const;
  ::ru::mail::go::webbase::BBResult* mutable_result();
  ::ru::mail::go::webbase::BBResult* release_result();
  void set_allocated_result(::ru::mail::go::webbase::BBResult* result);

  // required uint32 doc_id = 1;
  bool has_doc_id() const;
  void clear_doc_id();
  static const int kDocIdFieldNumber = 1;
  ::google::protobuf::uint32 doc_id() const;
  void set_doc_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.serp.QddbFast.DocInfo)
 private:
  void set_has_doc_id();
  void clear_has_doc_id();
  void set_has_result();
  void clear_has_result();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::ru::mail::go::webbase::BBResult* result_;
  ::google::protobuf::uint32 doc_id_;
  friend struct protobuf_qddb_5ffast_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class QddbFast_GeoInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.serp.QddbFast.GeoInfo) */ {
 public:
  QddbFast_GeoInfo();
  virtual ~QddbFast_GeoInfo();

  QddbFast_GeoInfo(const QddbFast_GeoInfo& from);

  inline QddbFast_GeoInfo& operator=(const QddbFast_GeoInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QddbFast_GeoInfo(QddbFast_GeoInfo&& from) noexcept
    : QddbFast_GeoInfo() {
    *this = ::std::move(from);
  }

  inline QddbFast_GeoInfo& operator=(QddbFast_GeoInfo&& from) noexcept {
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
  static const QddbFast_GeoInfo& default_instance();

  static inline const QddbFast_GeoInfo* internal_default_instance() {
    return reinterpret_cast<const QddbFast_GeoInfo*>(
               &_QddbFast_GeoInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(QddbFast_GeoInfo* other);
  friend void swap(QddbFast_GeoInfo& a, QddbFast_GeoInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QddbFast_GeoInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  QddbFast_GeoInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const QddbFast_GeoInfo& from);
  void MergeFrom(const QddbFast_GeoInfo& from);
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
  void InternalSwap(QddbFast_GeoInfo* other);
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

  // repeated .ru.mail.go.webbase.serp.QddbFast.DocInfo doc_infos = 2;
  int doc_infos_size() const;
  void clear_doc_infos();
  static const int kDocInfosFieldNumber = 2;
  const ::ru::mail::go::webbase::serp::QddbFast_DocInfo& doc_infos(int index) const;
  ::ru::mail::go::webbase::serp::QddbFast_DocInfo* mutable_doc_infos(int index);
  ::ru::mail::go::webbase::serp::QddbFast_DocInfo* add_doc_infos();
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_DocInfo >*
      mutable_doc_infos();
  const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_DocInfo >&
      doc_infos() const;

  // required uint32 geo = 1;
  bool has_geo() const;
  void clear_geo();
  static const int kGeoFieldNumber = 1;
  ::google::protobuf::uint32 geo() const;
  void set_geo(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.serp.QddbFast.GeoInfo)
 private:
  void set_has_geo();
  void clear_has_geo();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_DocInfo > doc_infos_;
  ::google::protobuf::uint32 geo_;
  friend struct protobuf_qddb_5ffast_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class QddbFast : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ru.mail.go.webbase.serp.QddbFast) */ {
 public:
  QddbFast();
  virtual ~QddbFast();

  QddbFast(const QddbFast& from);

  inline QddbFast& operator=(const QddbFast& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QddbFast(QddbFast&& from) noexcept
    : QddbFast() {
    *this = ::std::move(from);
  }

  inline QddbFast& operator=(QddbFast&& from) noexcept {
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
  static const QddbFast& default_instance();

  static inline const QddbFast* internal_default_instance() {
    return reinterpret_cast<const QddbFast*>(
               &_QddbFast_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(QddbFast* other);
  friend void swap(QddbFast& a, QddbFast& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QddbFast* New() const PROTOBUF_FINAL { return New(NULL); }

  QddbFast* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const QddbFast& from);
  void MergeFrom(const QddbFast& from);
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
  void InternalSwap(QddbFast* other);
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

  typedef QddbFast_DocInfo DocInfo;
  typedef QddbFast_GeoInfo GeoInfo;

  // accessors -------------------------------------------------------

  // repeated .ru.mail.go.webbase.serp.QddbFast.GeoInfo geo_infos = 1;
  int geo_infos_size() const;
  void clear_geo_infos();
  static const int kGeoInfosFieldNumber = 1;
  const ::ru::mail::go::webbase::serp::QddbFast_GeoInfo& geo_infos(int index) const;
  ::ru::mail::go::webbase::serp::QddbFast_GeoInfo* mutable_geo_infos(int index);
  ::ru::mail::go::webbase::serp::QddbFast_GeoInfo* add_geo_infos();
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_GeoInfo >*
      mutable_geo_infos();
  const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_GeoInfo >&
      geo_infos() const;

  // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.serp.QddbFast)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_GeoInfo > geo_infos_;
  friend struct protobuf_qddb_5ffast_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// QddbFast_DocInfo

// required uint32 doc_id = 1;
inline bool QddbFast_DocInfo::has_doc_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QddbFast_DocInfo::set_has_doc_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void QddbFast_DocInfo::clear_has_doc_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void QddbFast_DocInfo::clear_doc_id() {
  doc_id_ = 0u;
  clear_has_doc_id();
}
inline ::google::protobuf::uint32 QddbFast_DocInfo::doc_id() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbFast.DocInfo.doc_id)
  return doc_id_;
}
inline void QddbFast_DocInfo::set_doc_id(::google::protobuf::uint32 value) {
  set_has_doc_id();
  doc_id_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.serp.QddbFast.DocInfo.doc_id)
}

// optional .ru.mail.go.webbase.BBResult result = 2;
inline bool QddbFast_DocInfo::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QddbFast_DocInfo::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QddbFast_DocInfo::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QddbFast_DocInfo::clear_result() {
  if (result_ != NULL) result_->::ru::mail::go::webbase::BBResult::Clear();
  clear_has_result();
}
inline const ::ru::mail::go::webbase::BBResult& QddbFast_DocInfo::result() const {
  const ::ru::mail::go::webbase::BBResult* p = result_;
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbFast.DocInfo.result)
  return p != NULL ? *p : *reinterpret_cast<const ::ru::mail::go::webbase::BBResult*>(
      &::ru::mail::go::webbase::_BBResult_default_instance_);
}
inline ::ru::mail::go::webbase::BBResult* QddbFast_DocInfo::mutable_result() {
  set_has_result();
  if (result_ == NULL) {
    result_ = new ::ru::mail::go::webbase::BBResult;
  }
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.serp.QddbFast.DocInfo.result)
  return result_;
}
inline ::ru::mail::go::webbase::BBResult* QddbFast_DocInfo::release_result() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.serp.QddbFast.DocInfo.result)
  clear_has_result();
  ::ru::mail::go::webbase::BBResult* temp = result_;
  result_ = NULL;
  return temp;
}
inline void QddbFast_DocInfo::set_allocated_result(::ru::mail::go::webbase::BBResult* result) {
  delete result_;
  result_ = result;
  if (result) {
    set_has_result();
  } else {
    clear_has_result();
  }
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.serp.QddbFast.DocInfo.result)
}

// -------------------------------------------------------------------

// QddbFast_GeoInfo

// required uint32 geo = 1;
inline bool QddbFast_GeoInfo::has_geo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QddbFast_GeoInfo::set_has_geo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QddbFast_GeoInfo::clear_has_geo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QddbFast_GeoInfo::clear_geo() {
  geo_ = 0u;
  clear_has_geo();
}
inline ::google::protobuf::uint32 QddbFast_GeoInfo::geo() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbFast.GeoInfo.geo)
  return geo_;
}
inline void QddbFast_GeoInfo::set_geo(::google::protobuf::uint32 value) {
  set_has_geo();
  geo_ = value;
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.serp.QddbFast.GeoInfo.geo)
}

// repeated .ru.mail.go.webbase.serp.QddbFast.DocInfo doc_infos = 2;
inline int QddbFast_GeoInfo::doc_infos_size() const {
  return doc_infos_.size();
}
inline void QddbFast_GeoInfo::clear_doc_infos() {
  doc_infos_.Clear();
}
inline const ::ru::mail::go::webbase::serp::QddbFast_DocInfo& QddbFast_GeoInfo::doc_infos(int index) const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbFast.GeoInfo.doc_infos)
  return doc_infos_.Get(index);
}
inline ::ru::mail::go::webbase::serp::QddbFast_DocInfo* QddbFast_GeoInfo::mutable_doc_infos(int index) {
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.serp.QddbFast.GeoInfo.doc_infos)
  return doc_infos_.Mutable(index);
}
inline ::ru::mail::go::webbase::serp::QddbFast_DocInfo* QddbFast_GeoInfo::add_doc_infos() {
  // @@protoc_insertion_point(field_add:ru.mail.go.webbase.serp.QddbFast.GeoInfo.doc_infos)
  return doc_infos_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_DocInfo >*
QddbFast_GeoInfo::mutable_doc_infos() {
  // @@protoc_insertion_point(field_mutable_list:ru.mail.go.webbase.serp.QddbFast.GeoInfo.doc_infos)
  return &doc_infos_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_DocInfo >&
QddbFast_GeoInfo::doc_infos() const {
  // @@protoc_insertion_point(field_list:ru.mail.go.webbase.serp.QddbFast.GeoInfo.doc_infos)
  return doc_infos_;
}

// -------------------------------------------------------------------

// QddbFast

// repeated .ru.mail.go.webbase.serp.QddbFast.GeoInfo geo_infos = 1;
inline int QddbFast::geo_infos_size() const {
  return geo_infos_.size();
}
inline void QddbFast::clear_geo_infos() {
  geo_infos_.Clear();
}
inline const ::ru::mail::go::webbase::serp::QddbFast_GeoInfo& QddbFast::geo_infos(int index) const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.serp.QddbFast.geo_infos)
  return geo_infos_.Get(index);
}
inline ::ru::mail::go::webbase::serp::QddbFast_GeoInfo* QddbFast::mutable_geo_infos(int index) {
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.serp.QddbFast.geo_infos)
  return geo_infos_.Mutable(index);
}
inline ::ru::mail::go::webbase::serp::QddbFast_GeoInfo* QddbFast::add_geo_infos() {
  // @@protoc_insertion_point(field_add:ru.mail.go.webbase.serp.QddbFast.geo_infos)
  return geo_infos_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_GeoInfo >*
QddbFast::mutable_geo_infos() {
  // @@protoc_insertion_point(field_mutable_list:ru.mail.go.webbase.serp.QddbFast.geo_infos)
  return &geo_infos_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ru::mail::go::webbase::serp::QddbFast_GeoInfo >&
QddbFast::geo_infos() const {
  // @@protoc_insertion_point(field_list:ru.mail.go.webbase.serp.QddbFast.geo_infos)
  return geo_infos_;
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

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_qddb_5ffast_2eproto__INCLUDED