// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stepan_pixel_info.proto

#ifndef PROTOBUF_stepan_5fpixel_5finfo_2eproto__INCLUDED
#define PROTOBUF_stepan_5fpixel_5finfo_2eproto__INCLUDED

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
#include "cosmo_result.pb.h"
// @@protoc_insertion_point(includes)
namespace cosmo {
namespace pb {
class StepanPixelMetaInfo;
class StepanPixelMetaInfoDefaultTypeInternal;
extern StepanPixelMetaInfoDefaultTypeInternal _StepanPixelMetaInfo_default_instance_;
}  // namespace pb
}  // namespace cosmo

namespace cosmo {
namespace pb {

namespace protobuf_stepan_5fpixel_5finfo_2eproto {
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
}  // namespace protobuf_stepan_5fpixel_5finfo_2eproto

// ===================================================================

class StepanPixelMetaInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cosmo.pb.StepanPixelMetaInfo) */ {
 public:
  StepanPixelMetaInfo();
  virtual ~StepanPixelMetaInfo();

  StepanPixelMetaInfo(const StepanPixelMetaInfo& from);

  inline StepanPixelMetaInfo& operator=(const StepanPixelMetaInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StepanPixelMetaInfo(StepanPixelMetaInfo&& from) noexcept
    : StepanPixelMetaInfo() {
    *this = ::std::move(from);
  }

  inline StepanPixelMetaInfo& operator=(StepanPixelMetaInfo&& from) noexcept {
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
  static const StepanPixelMetaInfo& default_instance();

  static inline const StepanPixelMetaInfo* internal_default_instance() {
    return reinterpret_cast<const StepanPixelMetaInfo*>(
               &_StepanPixelMetaInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StepanPixelMetaInfo* other);
  friend void swap(StepanPixelMetaInfo& a, StepanPixelMetaInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StepanPixelMetaInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  StepanPixelMetaInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StepanPixelMetaInfo& from);
  void MergeFrom(const StepanPixelMetaInfo& from);
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
  void InternalSwap(StepanPixelMetaInfo* other);
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

  // optional .cosmo.pb.Metrics metrics = 1;
  bool has_metrics() const;
  void clear_metrics();
  static const int kMetricsFieldNumber = 1;
  const ::cosmo::pb::Metrics& metrics() const;
  ::cosmo::pb::Metrics* mutable_metrics();
  ::cosmo::pb::Metrics* release_metrics();
  void set_allocated_metrics(::cosmo::pb::Metrics* metrics);

  // optional .cosmo.pb.DocumentInfo document_info = 2;
  bool has_document_info() const;
  void clear_document_info();
  static const int kDocumentInfoFieldNumber = 2;
  const ::cosmo::pb::DocumentInfo& document_info() const;
  ::cosmo::pb::DocumentInfo* mutable_document_info();
  ::cosmo::pb::DocumentInfo* release_document_info();
  void set_allocated_document_info(::cosmo::pb::DocumentInfo* document_info);

  // optional .cosmo.pb.InterleavingInfo interleaving_info = 3;
  bool has_interleaving_info() const;
  void clear_interleaving_info();
  static const int kInterleavingInfoFieldNumber = 3;
  const ::cosmo::pb::InterleavingInfo& interleaving_info() const;
  ::cosmo::pb::InterleavingInfo* mutable_interleaving_info();
  ::cosmo::pb::InterleavingInfo* release_interleaving_info();
  void set_allocated_interleaving_info(::cosmo::pb::InterleavingInfo* interleaving_info);

  // @@protoc_insertion_point(class_scope:cosmo.pb.StepanPixelMetaInfo)
 private:
  void set_has_metrics();
  void clear_has_metrics();
  void set_has_document_info();
  void clear_has_document_info();
  void set_has_interleaving_info();
  void clear_has_interleaving_info();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::cosmo::pb::Metrics* metrics_;
  ::cosmo::pb::DocumentInfo* document_info_;
  ::cosmo::pb::InterleavingInfo* interleaving_info_;
  friend struct protobuf_stepan_5fpixel_5finfo_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StepanPixelMetaInfo

// optional .cosmo.pb.Metrics metrics = 1;
inline bool StepanPixelMetaInfo::has_metrics() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StepanPixelMetaInfo::set_has_metrics() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StepanPixelMetaInfo::clear_has_metrics() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StepanPixelMetaInfo::clear_metrics() {
  if (metrics_ != NULL) metrics_->::cosmo::pb::Metrics::Clear();
  clear_has_metrics();
}
inline const ::cosmo::pb::Metrics& StepanPixelMetaInfo::metrics() const {
  const ::cosmo::pb::Metrics* p = metrics_;
  // @@protoc_insertion_point(field_get:cosmo.pb.StepanPixelMetaInfo.metrics)
  return p != NULL ? *p : *reinterpret_cast<const ::cosmo::pb::Metrics*>(
      &::cosmo::pb::_Metrics_default_instance_);
}
inline ::cosmo::pb::Metrics* StepanPixelMetaInfo::mutable_metrics() {
  set_has_metrics();
  if (metrics_ == NULL) {
    metrics_ = new ::cosmo::pb::Metrics;
  }
  // @@protoc_insertion_point(field_mutable:cosmo.pb.StepanPixelMetaInfo.metrics)
  return metrics_;
}
inline ::cosmo::pb::Metrics* StepanPixelMetaInfo::release_metrics() {
  // @@protoc_insertion_point(field_release:cosmo.pb.StepanPixelMetaInfo.metrics)
  clear_has_metrics();
  ::cosmo::pb::Metrics* temp = metrics_;
  metrics_ = NULL;
  return temp;
}
inline void StepanPixelMetaInfo::set_allocated_metrics(::cosmo::pb::Metrics* metrics) {
  delete metrics_;
  metrics_ = metrics;
  if (metrics) {
    set_has_metrics();
  } else {
    clear_has_metrics();
  }
  // @@protoc_insertion_point(field_set_allocated:cosmo.pb.StepanPixelMetaInfo.metrics)
}

// optional .cosmo.pb.DocumentInfo document_info = 2;
inline bool StepanPixelMetaInfo::has_document_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StepanPixelMetaInfo::set_has_document_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StepanPixelMetaInfo::clear_has_document_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StepanPixelMetaInfo::clear_document_info() {
  if (document_info_ != NULL) document_info_->::cosmo::pb::DocumentInfo::Clear();
  clear_has_document_info();
}
inline const ::cosmo::pb::DocumentInfo& StepanPixelMetaInfo::document_info() const {
  const ::cosmo::pb::DocumentInfo* p = document_info_;
  // @@protoc_insertion_point(field_get:cosmo.pb.StepanPixelMetaInfo.document_info)
  return p != NULL ? *p : *reinterpret_cast<const ::cosmo::pb::DocumentInfo*>(
      &::cosmo::pb::_DocumentInfo_default_instance_);
}
inline ::cosmo::pb::DocumentInfo* StepanPixelMetaInfo::mutable_document_info() {
  set_has_document_info();
  if (document_info_ == NULL) {
    document_info_ = new ::cosmo::pb::DocumentInfo;
  }
  // @@protoc_insertion_point(field_mutable:cosmo.pb.StepanPixelMetaInfo.document_info)
  return document_info_;
}
inline ::cosmo::pb::DocumentInfo* StepanPixelMetaInfo::release_document_info() {
  // @@protoc_insertion_point(field_release:cosmo.pb.StepanPixelMetaInfo.document_info)
  clear_has_document_info();
  ::cosmo::pb::DocumentInfo* temp = document_info_;
  document_info_ = NULL;
  return temp;
}
inline void StepanPixelMetaInfo::set_allocated_document_info(::cosmo::pb::DocumentInfo* document_info) {
  delete document_info_;
  document_info_ = document_info;
  if (document_info) {
    set_has_document_info();
  } else {
    clear_has_document_info();
  }
  // @@protoc_insertion_point(field_set_allocated:cosmo.pb.StepanPixelMetaInfo.document_info)
}

// optional .cosmo.pb.InterleavingInfo interleaving_info = 3;
inline bool StepanPixelMetaInfo::has_interleaving_info() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void StepanPixelMetaInfo::set_has_interleaving_info() {
  _has_bits_[0] |= 0x00000004u;
}
inline void StepanPixelMetaInfo::clear_has_interleaving_info() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void StepanPixelMetaInfo::clear_interleaving_info() {
  if (interleaving_info_ != NULL) interleaving_info_->::cosmo::pb::InterleavingInfo::Clear();
  clear_has_interleaving_info();
}
inline const ::cosmo::pb::InterleavingInfo& StepanPixelMetaInfo::interleaving_info() const {
  const ::cosmo::pb::InterleavingInfo* p = interleaving_info_;
  // @@protoc_insertion_point(field_get:cosmo.pb.StepanPixelMetaInfo.interleaving_info)
  return p != NULL ? *p : *reinterpret_cast<const ::cosmo::pb::InterleavingInfo*>(
      &::cosmo::pb::_InterleavingInfo_default_instance_);
}
inline ::cosmo::pb::InterleavingInfo* StepanPixelMetaInfo::mutable_interleaving_info() {
  set_has_interleaving_info();
  if (interleaving_info_ == NULL) {
    interleaving_info_ = new ::cosmo::pb::InterleavingInfo;
  }
  // @@protoc_insertion_point(field_mutable:cosmo.pb.StepanPixelMetaInfo.interleaving_info)
  return interleaving_info_;
}
inline ::cosmo::pb::InterleavingInfo* StepanPixelMetaInfo::release_interleaving_info() {
  // @@protoc_insertion_point(field_release:cosmo.pb.StepanPixelMetaInfo.interleaving_info)
  clear_has_interleaving_info();
  ::cosmo::pb::InterleavingInfo* temp = interleaving_info_;
  interleaving_info_ = NULL;
  return temp;
}
inline void StepanPixelMetaInfo::set_allocated_interleaving_info(::cosmo::pb::InterleavingInfo* interleaving_info) {
  delete interleaving_info_;
  interleaving_info_ = interleaving_info;
  if (interleaving_info) {
    set_has_interleaving_info();
  } else {
    clear_has_interleaving_info();
  }
  // @@protoc_insertion_point(field_set_allocated:cosmo.pb.StepanPixelMetaInfo.interleaving_info)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace pb
}  // namespace cosmo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_stepan_5fpixel_5finfo_2eproto__INCLUDED
