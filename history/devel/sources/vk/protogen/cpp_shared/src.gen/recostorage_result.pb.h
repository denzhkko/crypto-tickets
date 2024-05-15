// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: recostorage_result.proto

#ifndef PROTOBUF_recostorage_5fresult_2eproto__INCLUDED
#define PROTOBUF_recostorage_5fresult_2eproto__INCLUDED

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
class Doc;
class DocDefaultTypeInternal;
extern DocDefaultTypeInternal _Doc_default_instance_;
class RecoStorageOutput;
class RecoStorageOutputDefaultTypeInternal;
extern RecoStorageOutputDefaultTypeInternal _RecoStorageOutput_default_instance_;

namespace protobuf_recostorage_5fresult_2eproto {
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
}  // namespace protobuf_recostorage_5fresult_2eproto

// ===================================================================

class Doc : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Doc) */ {
 public:
  Doc();
  virtual ~Doc();

  Doc(const Doc& from);

  inline Doc& operator=(const Doc& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Doc(Doc&& from) noexcept
    : Doc() {
    *this = ::std::move(from);
  }

  inline Doc& operator=(Doc&& from) noexcept {
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
  static const Doc& default_instance();

  static inline const Doc* internal_default_instance() {
    return reinterpret_cast<const Doc*>(
               &_Doc_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Doc* other);
  friend void swap(Doc& a, Doc& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Doc* New() const PROTOBUF_FINAL { return New(NULL); }

  Doc* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Doc& from);
  void MergeFrom(const Doc& from);
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
  void InternalSwap(Doc* other);
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

  // optional uint64 doc_id = 1;
  bool has_doc_id() const;
  void clear_doc_id();
  static const int kDocIdFieldNumber = 1;
  ::google::protobuf::uint64 doc_id() const;
  void set_doc_id(::google::protobuf::uint64 value);

  // optional uint64 gid = 2;
  bool has_gid() const;
  void clear_gid();
  static const int kGidFieldNumber = 2;
  ::google::protobuf::uint64 gid() const;
  void set_gid(::google::protobuf::uint64 value);

  // optional uint64 hash = 3;
  bool has_hash() const;
  void clear_hash();
  static const int kHashFieldNumber = 3;
  ::google::protobuf::uint64 hash() const;
  void set_hash(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:Doc)
 private:
  void set_has_doc_id();
  void clear_has_doc_id();
  void set_has_gid();
  void clear_has_gid();
  void set_has_hash();
  void clear_has_hash();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint64 doc_id_;
  ::google::protobuf::uint64 gid_;
  ::google::protobuf::uint64 hash_;
  friend struct protobuf_recostorage_5fresult_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class RecoStorageOutput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RecoStorageOutput) */ {
 public:
  RecoStorageOutput();
  virtual ~RecoStorageOutput();

  RecoStorageOutput(const RecoStorageOutput& from);

  inline RecoStorageOutput& operator=(const RecoStorageOutput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RecoStorageOutput(RecoStorageOutput&& from) noexcept
    : RecoStorageOutput() {
    *this = ::std::move(from);
  }

  inline RecoStorageOutput& operator=(RecoStorageOutput&& from) noexcept {
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
  static const RecoStorageOutput& default_instance();

  static inline const RecoStorageOutput* internal_default_instance() {
    return reinterpret_cast<const RecoStorageOutput*>(
               &_RecoStorageOutput_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(RecoStorageOutput* other);
  friend void swap(RecoStorageOutput& a, RecoStorageOutput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RecoStorageOutput* New() const PROTOBUF_FINAL { return New(NULL); }

  RecoStorageOutput* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RecoStorageOutput& from);
  void MergeFrom(const RecoStorageOutput& from);
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
  void InternalSwap(RecoStorageOutput* other);
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

  // repeated .Doc docs = 4;
  int docs_size() const;
  void clear_docs();
  static const int kDocsFieldNumber = 4;
  const ::Doc& docs(int index) const;
  ::Doc* mutable_docs(int index);
  ::Doc* add_docs();
  ::google::protobuf::RepeatedPtrField< ::Doc >*
      mutable_docs();
  const ::google::protobuf::RepeatedPtrField< ::Doc >&
      docs() const;

  // required uint64 uid = 1;
  bool has_uid() const;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::uint64 uid() const;
  void set_uid(::google::protobuf::uint64 value);

  // required uint64 cid = 2;
  bool has_cid() const;
  void clear_cid();
  static const int kCidFieldNumber = 2;
  ::google::protobuf::uint64 cid() const;
  void set_cid(::google::protobuf::uint64 value);

  // required uint32 version = 3;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 3;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:RecoStorageOutput)
 private:
  void set_has_uid();
  void clear_has_uid();
  void set_has_cid();
  void clear_has_cid();
  void set_has_version();
  void clear_has_version();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Doc > docs_;
  ::google::protobuf::uint64 uid_;
  ::google::protobuf::uint64 cid_;
  ::google::protobuf::uint32 version_;
  friend struct protobuf_recostorage_5fresult_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Doc

// optional uint64 doc_id = 1;
inline bool Doc::has_doc_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Doc::set_has_doc_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Doc::clear_has_doc_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Doc::clear_doc_id() {
  doc_id_ = GOOGLE_ULONGLONG(0);
  clear_has_doc_id();
}
inline ::google::protobuf::uint64 Doc::doc_id() const {
  // @@protoc_insertion_point(field_get:Doc.doc_id)
  return doc_id_;
}
inline void Doc::set_doc_id(::google::protobuf::uint64 value) {
  set_has_doc_id();
  doc_id_ = value;
  // @@protoc_insertion_point(field_set:Doc.doc_id)
}

// optional uint64 gid = 2;
inline bool Doc::has_gid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Doc::set_has_gid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Doc::clear_has_gid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Doc::clear_gid() {
  gid_ = GOOGLE_ULONGLONG(0);
  clear_has_gid();
}
inline ::google::protobuf::uint64 Doc::gid() const {
  // @@protoc_insertion_point(field_get:Doc.gid)
  return gid_;
}
inline void Doc::set_gid(::google::protobuf::uint64 value) {
  set_has_gid();
  gid_ = value;
  // @@protoc_insertion_point(field_set:Doc.gid)
}

// optional uint64 hash = 3;
inline bool Doc::has_hash() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Doc::set_has_hash() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Doc::clear_has_hash() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Doc::clear_hash() {
  hash_ = GOOGLE_ULONGLONG(0);
  clear_has_hash();
}
inline ::google::protobuf::uint64 Doc::hash() const {
  // @@protoc_insertion_point(field_get:Doc.hash)
  return hash_;
}
inline void Doc::set_hash(::google::protobuf::uint64 value) {
  set_has_hash();
  hash_ = value;
  // @@protoc_insertion_point(field_set:Doc.hash)
}

// -------------------------------------------------------------------

// RecoStorageOutput

// required uint64 uid = 1;
inline bool RecoStorageOutput::has_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RecoStorageOutput::set_has_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RecoStorageOutput::clear_has_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RecoStorageOutput::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
  clear_has_uid();
}
inline ::google::protobuf::uint64 RecoStorageOutput::uid() const {
  // @@protoc_insertion_point(field_get:RecoStorageOutput.uid)
  return uid_;
}
inline void RecoStorageOutput::set_uid(::google::protobuf::uint64 value) {
  set_has_uid();
  uid_ = value;
  // @@protoc_insertion_point(field_set:RecoStorageOutput.uid)
}

// required uint64 cid = 2;
inline bool RecoStorageOutput::has_cid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RecoStorageOutput::set_has_cid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RecoStorageOutput::clear_has_cid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RecoStorageOutput::clear_cid() {
  cid_ = GOOGLE_ULONGLONG(0);
  clear_has_cid();
}
inline ::google::protobuf::uint64 RecoStorageOutput::cid() const {
  // @@protoc_insertion_point(field_get:RecoStorageOutput.cid)
  return cid_;
}
inline void RecoStorageOutput::set_cid(::google::protobuf::uint64 value) {
  set_has_cid();
  cid_ = value;
  // @@protoc_insertion_point(field_set:RecoStorageOutput.cid)
}

// required uint32 version = 3;
inline bool RecoStorageOutput::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RecoStorageOutput::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RecoStorageOutput::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RecoStorageOutput::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 RecoStorageOutput::version() const {
  // @@protoc_insertion_point(field_get:RecoStorageOutput.version)
  return version_;
}
inline void RecoStorageOutput::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:RecoStorageOutput.version)
}

// repeated .Doc docs = 4;
inline int RecoStorageOutput::docs_size() const {
  return docs_.size();
}
inline void RecoStorageOutput::clear_docs() {
  docs_.Clear();
}
inline const ::Doc& RecoStorageOutput::docs(int index) const {
  // @@protoc_insertion_point(field_get:RecoStorageOutput.docs)
  return docs_.Get(index);
}
inline ::Doc* RecoStorageOutput::mutable_docs(int index) {
  // @@protoc_insertion_point(field_mutable:RecoStorageOutput.docs)
  return docs_.Mutable(index);
}
inline ::Doc* RecoStorageOutput::add_docs() {
  // @@protoc_insertion_point(field_add:RecoStorageOutput.docs)
  return docs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Doc >*
RecoStorageOutput::mutable_docs() {
  // @@protoc_insertion_point(field_mutable_list:RecoStorageOutput.docs)
  return &docs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Doc >&
RecoStorageOutput::docs() const {
  // @@protoc_insertion_point(field_list:RecoStorageOutput.docs)
  return docs_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_recostorage_5fresult_2eproto__INCLUDED
