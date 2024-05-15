// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: youla_paid_ad.proto

#ifndef PROTOBUF_youla_5fpaid_5fad_2eproto__INCLUDED
#define PROTOBUF_youla_5fpaid_5fad_2eproto__INCLUDED

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
namespace youla {
namespace paidad {
namespace pb {
class PaidAdUserViews;
class PaidAdUserViewsDefaultTypeInternal;
extern PaidAdUserViewsDefaultTypeInternal _PaidAdUserViews_default_instance_;
class ViewInfo;
class ViewInfoDefaultTypeInternal;
extern ViewInfoDefaultTypeInternal _ViewInfo_default_instance_;
}  // namespace pb
}  // namespace paidad
}  // namespace youla

namespace youla {
namespace paidad {
namespace pb {

namespace protobuf_youla_5fpaid_5fad_2eproto {
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
}  // namespace protobuf_youla_5fpaid_5fad_2eproto

// ===================================================================

class ViewInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:youla.paidad.pb.ViewInfo) */ {
 public:
  ViewInfo();
  virtual ~ViewInfo();

  ViewInfo(const ViewInfo& from);

  inline ViewInfo& operator=(const ViewInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ViewInfo(ViewInfo&& from) noexcept
    : ViewInfo() {
    *this = ::std::move(from);
  }

  inline ViewInfo& operator=(ViewInfo&& from) noexcept {
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
  static const ViewInfo& default_instance();

  static inline const ViewInfo* internal_default_instance() {
    return reinterpret_cast<const ViewInfo*>(
               &_ViewInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ViewInfo* other);
  friend void swap(ViewInfo& a, ViewInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ViewInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  ViewInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ViewInfo& from);
  void MergeFrom(const ViewInfo& from);
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
  void InternalSwap(ViewInfo* other);
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

  // required string product_id = 1;
  bool has_product_id() const;
  void clear_product_id();
  static const int kProductIdFieldNumber = 1;
  const ::std::string& product_id() const;
  void set_product_id(const ::std::string& value);
  #if LANG_CXX11
  void set_product_id(::std::string&& value);
  #endif
  void set_product_id(const char* value);
  void set_product_id(const char* value, size_t size);
  ::std::string* mutable_product_id();
  ::std::string* release_product_id();
  void set_allocated_product_id(::std::string* product_id);

  // optional uint64 time = 2;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 2;
  ::google::protobuf::uint64 time() const;
  void set_time(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:youla.paidad.pb.ViewInfo)
 private:
  void set_has_product_id();
  void clear_has_product_id();
  void set_has_time();
  void clear_has_time();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr product_id_;
  ::google::protobuf::uint64 time_;
  friend struct protobuf_youla_5fpaid_5fad_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PaidAdUserViews : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:youla.paidad.pb.PaidAdUserViews) */ {
 public:
  PaidAdUserViews();
  virtual ~PaidAdUserViews();

  PaidAdUserViews(const PaidAdUserViews& from);

  inline PaidAdUserViews& operator=(const PaidAdUserViews& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PaidAdUserViews(PaidAdUserViews&& from) noexcept
    : PaidAdUserViews() {
    *this = ::std::move(from);
  }

  inline PaidAdUserViews& operator=(PaidAdUserViews&& from) noexcept {
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
  static const PaidAdUserViews& default_instance();

  static inline const PaidAdUserViews* internal_default_instance() {
    return reinterpret_cast<const PaidAdUserViews*>(
               &_PaidAdUserViews_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(PaidAdUserViews* other);
  friend void swap(PaidAdUserViews& a, PaidAdUserViews& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PaidAdUserViews* New() const PROTOBUF_FINAL { return New(NULL); }

  PaidAdUserViews* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PaidAdUserViews& from);
  void MergeFrom(const PaidAdUserViews& from);
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
  void InternalSwap(PaidAdUserViews* other);
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

  // repeated .youla.paidad.pb.ViewInfo view_info = 1;
  int view_info_size() const;
  void clear_view_info();
  static const int kViewInfoFieldNumber = 1;
  const ::youla::paidad::pb::ViewInfo& view_info(int index) const;
  ::youla::paidad::pb::ViewInfo* mutable_view_info(int index);
  ::youla::paidad::pb::ViewInfo* add_view_info();
  ::google::protobuf::RepeatedPtrField< ::youla::paidad::pb::ViewInfo >*
      mutable_view_info();
  const ::google::protobuf::RepeatedPtrField< ::youla::paidad::pb::ViewInfo >&
      view_info() const;

  // @@protoc_insertion_point(class_scope:youla.paidad.pb.PaidAdUserViews)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::youla::paidad::pb::ViewInfo > view_info_;
  friend struct protobuf_youla_5fpaid_5fad_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ViewInfo

// required string product_id = 1;
inline bool ViewInfo::has_product_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ViewInfo::set_has_product_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ViewInfo::clear_has_product_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ViewInfo::clear_product_id() {
  product_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_product_id();
}
inline const ::std::string& ViewInfo::product_id() const {
  // @@protoc_insertion_point(field_get:youla.paidad.pb.ViewInfo.product_id)
  return product_id_.GetNoArena();
}
inline void ViewInfo::set_product_id(const ::std::string& value) {
  set_has_product_id();
  product_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:youla.paidad.pb.ViewInfo.product_id)
}
#if LANG_CXX11
inline void ViewInfo::set_product_id(::std::string&& value) {
  set_has_product_id();
  product_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:youla.paidad.pb.ViewInfo.product_id)
}
#endif
inline void ViewInfo::set_product_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_product_id();
  product_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:youla.paidad.pb.ViewInfo.product_id)
}
inline void ViewInfo::set_product_id(const char* value, size_t size) {
  set_has_product_id();
  product_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:youla.paidad.pb.ViewInfo.product_id)
}
inline ::std::string* ViewInfo::mutable_product_id() {
  set_has_product_id();
  // @@protoc_insertion_point(field_mutable:youla.paidad.pb.ViewInfo.product_id)
  return product_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ViewInfo::release_product_id() {
  // @@protoc_insertion_point(field_release:youla.paidad.pb.ViewInfo.product_id)
  clear_has_product_id();
  return product_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ViewInfo::set_allocated_product_id(::std::string* product_id) {
  if (product_id != NULL) {
    set_has_product_id();
  } else {
    clear_has_product_id();
  }
  product_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), product_id);
  // @@protoc_insertion_point(field_set_allocated:youla.paidad.pb.ViewInfo.product_id)
}

// optional uint64 time = 2;
inline bool ViewInfo::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ViewInfo::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ViewInfo::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ViewInfo::clear_time() {
  time_ = GOOGLE_ULONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::uint64 ViewInfo::time() const {
  // @@protoc_insertion_point(field_get:youla.paidad.pb.ViewInfo.time)
  return time_;
}
inline void ViewInfo::set_time(::google::protobuf::uint64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:youla.paidad.pb.ViewInfo.time)
}

// -------------------------------------------------------------------

// PaidAdUserViews

// repeated .youla.paidad.pb.ViewInfo view_info = 1;
inline int PaidAdUserViews::view_info_size() const {
  return view_info_.size();
}
inline void PaidAdUserViews::clear_view_info() {
  view_info_.Clear();
}
inline const ::youla::paidad::pb::ViewInfo& PaidAdUserViews::view_info(int index) const {
  // @@protoc_insertion_point(field_get:youla.paidad.pb.PaidAdUserViews.view_info)
  return view_info_.Get(index);
}
inline ::youla::paidad::pb::ViewInfo* PaidAdUserViews::mutable_view_info(int index) {
  // @@protoc_insertion_point(field_mutable:youla.paidad.pb.PaidAdUserViews.view_info)
  return view_info_.Mutable(index);
}
inline ::youla::paidad::pb::ViewInfo* PaidAdUserViews::add_view_info() {
  // @@protoc_insertion_point(field_add:youla.paidad.pb.PaidAdUserViews.view_info)
  return view_info_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::youla::paidad::pb::ViewInfo >*
PaidAdUserViews::mutable_view_info() {
  // @@protoc_insertion_point(field_mutable_list:youla.paidad.pb.PaidAdUserViews.view_info)
  return &view_info_;
}
inline const ::google::protobuf::RepeatedPtrField< ::youla::paidad::pb::ViewInfo >&
PaidAdUserViews::view_info() const {
  // @@protoc_insertion_point(field_list:youla.paidad.pb.PaidAdUserViews.view_info)
  return view_info_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace pb
}  // namespace paidad
}  // namespace youla

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_youla_5fpaid_5fad_2eproto__INCLUDED