// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: youla_embed_recom.proto

#ifndef PROTOBUF_youla_5fembed_5frecom_2eproto__INCLUDED
#define PROTOBUF_youla_5fembed_5frecom_2eproto__INCLUDED

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
namespace embed_recom {
namespace pb {
class Embedding;
class EmbeddingDefaultTypeInternal;
extern EmbeddingDefaultTypeInternal _Embedding_default_instance_;
class SubcatWeight;
class SubcatWeightDefaultTypeInternal;
extern SubcatWeightDefaultTypeInternal _SubcatWeight_default_instance_;
class SubcatWeights;
class SubcatWeightsDefaultTypeInternal;
extern SubcatWeightsDefaultTypeInternal _SubcatWeights_default_instance_;
}  // namespace pb
}  // namespace embed_recom
}  // namespace youla

namespace youla {
namespace embed_recom {
namespace pb {

namespace protobuf_youla_5fembed_5frecom_2eproto {
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
}  // namespace protobuf_youla_5fembed_5frecom_2eproto

// ===================================================================

class Embedding : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:youla.embed_recom.pb.Embedding) */ {
 public:
  Embedding();
  virtual ~Embedding();

  Embedding(const Embedding& from);

  inline Embedding& operator=(const Embedding& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Embedding(Embedding&& from) noexcept
    : Embedding() {
    *this = ::std::move(from);
  }

  inline Embedding& operator=(Embedding&& from) noexcept {
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
  static const Embedding& default_instance();

  static inline const Embedding* internal_default_instance() {
    return reinterpret_cast<const Embedding*>(
               &_Embedding_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Embedding* other);
  friend void swap(Embedding& a, Embedding& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Embedding* New() const PROTOBUF_FINAL { return New(NULL); }

  Embedding* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Embedding& from);
  void MergeFrom(const Embedding& from);
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
  void InternalSwap(Embedding* other);
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

  // repeated float components = 1;
  int components_size() const;
  void clear_components();
  static const int kComponentsFieldNumber = 1;
  float components(int index) const;
  void set_components(int index, float value);
  void add_components(float value);
  const ::google::protobuf::RepeatedField< float >&
      components() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_components();

  // @@protoc_insertion_point(class_scope:youla.embed_recom.pb.Embedding)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< float > components_;
  friend struct protobuf_youla_5fembed_5frecom_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SubcatWeight : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:youla.embed_recom.pb.SubcatWeight) */ {
 public:
  SubcatWeight();
  virtual ~SubcatWeight();

  SubcatWeight(const SubcatWeight& from);

  inline SubcatWeight& operator=(const SubcatWeight& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SubcatWeight(SubcatWeight&& from) noexcept
    : SubcatWeight() {
    *this = ::std::move(from);
  }

  inline SubcatWeight& operator=(SubcatWeight&& from) noexcept {
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
  static const SubcatWeight& default_instance();

  static inline const SubcatWeight* internal_default_instance() {
    return reinterpret_cast<const SubcatWeight*>(
               &_SubcatWeight_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SubcatWeight* other);
  friend void swap(SubcatWeight& a, SubcatWeight& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SubcatWeight* New() const PROTOBUF_FINAL { return New(NULL); }

  SubcatWeight* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SubcatWeight& from);
  void MergeFrom(const SubcatWeight& from);
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
  void InternalSwap(SubcatWeight* other);
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

  // required uint32 subcat_id = 1;
  bool has_subcat_id() const;
  void clear_subcat_id();
  static const int kSubcatIdFieldNumber = 1;
  ::google::protobuf::uint32 subcat_id() const;
  void set_subcat_id(::google::protobuf::uint32 value);

  // required float weight = 2;
  bool has_weight() const;
  void clear_weight();
  static const int kWeightFieldNumber = 2;
  float weight() const;
  void set_weight(float value);

  // @@protoc_insertion_point(class_scope:youla.embed_recom.pb.SubcatWeight)
 private:
  void set_has_subcat_id();
  void clear_has_subcat_id();
  void set_has_weight();
  void clear_has_weight();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 subcat_id_;
  float weight_;
  friend struct protobuf_youla_5fembed_5frecom_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SubcatWeights : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:youla.embed_recom.pb.SubcatWeights) */ {
 public:
  SubcatWeights();
  virtual ~SubcatWeights();

  SubcatWeights(const SubcatWeights& from);

  inline SubcatWeights& operator=(const SubcatWeights& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SubcatWeights(SubcatWeights&& from) noexcept
    : SubcatWeights() {
    *this = ::std::move(from);
  }

  inline SubcatWeights& operator=(SubcatWeights&& from) noexcept {
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
  static const SubcatWeights& default_instance();

  static inline const SubcatWeights* internal_default_instance() {
    return reinterpret_cast<const SubcatWeights*>(
               &_SubcatWeights_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(SubcatWeights* other);
  friend void swap(SubcatWeights& a, SubcatWeights& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SubcatWeights* New() const PROTOBUF_FINAL { return New(NULL); }

  SubcatWeights* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SubcatWeights& from);
  void MergeFrom(const SubcatWeights& from);
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
  void InternalSwap(SubcatWeights* other);
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

  // repeated .youla.embed_recom.pb.SubcatWeight weights = 1;
  int weights_size() const;
  void clear_weights();
  static const int kWeightsFieldNumber = 1;
  const ::youla::embed_recom::pb::SubcatWeight& weights(int index) const;
  ::youla::embed_recom::pb::SubcatWeight* mutable_weights(int index);
  ::youla::embed_recom::pb::SubcatWeight* add_weights();
  ::google::protobuf::RepeatedPtrField< ::youla::embed_recom::pb::SubcatWeight >*
      mutable_weights();
  const ::google::protobuf::RepeatedPtrField< ::youla::embed_recom::pb::SubcatWeight >&
      weights() const;

  // @@protoc_insertion_point(class_scope:youla.embed_recom.pb.SubcatWeights)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::youla::embed_recom::pb::SubcatWeight > weights_;
  friend struct protobuf_youla_5fembed_5frecom_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Embedding

// repeated float components = 1;
inline int Embedding::components_size() const {
  return components_.size();
}
inline void Embedding::clear_components() {
  components_.Clear();
}
inline float Embedding::components(int index) const {
  // @@protoc_insertion_point(field_get:youla.embed_recom.pb.Embedding.components)
  return components_.Get(index);
}
inline void Embedding::set_components(int index, float value) {
  components_.Set(index, value);
  // @@protoc_insertion_point(field_set:youla.embed_recom.pb.Embedding.components)
}
inline void Embedding::add_components(float value) {
  components_.Add(value);
  // @@protoc_insertion_point(field_add:youla.embed_recom.pb.Embedding.components)
}
inline const ::google::protobuf::RepeatedField< float >&
Embedding::components() const {
  // @@protoc_insertion_point(field_list:youla.embed_recom.pb.Embedding.components)
  return components_;
}
inline ::google::protobuf::RepeatedField< float >*
Embedding::mutable_components() {
  // @@protoc_insertion_point(field_mutable_list:youla.embed_recom.pb.Embedding.components)
  return &components_;
}

// -------------------------------------------------------------------

// SubcatWeight

// required uint32 subcat_id = 1;
inline bool SubcatWeight::has_subcat_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SubcatWeight::set_has_subcat_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SubcatWeight::clear_has_subcat_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SubcatWeight::clear_subcat_id() {
  subcat_id_ = 0u;
  clear_has_subcat_id();
}
inline ::google::protobuf::uint32 SubcatWeight::subcat_id() const {
  // @@protoc_insertion_point(field_get:youla.embed_recom.pb.SubcatWeight.subcat_id)
  return subcat_id_;
}
inline void SubcatWeight::set_subcat_id(::google::protobuf::uint32 value) {
  set_has_subcat_id();
  subcat_id_ = value;
  // @@protoc_insertion_point(field_set:youla.embed_recom.pb.SubcatWeight.subcat_id)
}

// required float weight = 2;
inline bool SubcatWeight::has_weight() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SubcatWeight::set_has_weight() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SubcatWeight::clear_has_weight() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SubcatWeight::clear_weight() {
  weight_ = 0;
  clear_has_weight();
}
inline float SubcatWeight::weight() const {
  // @@protoc_insertion_point(field_get:youla.embed_recom.pb.SubcatWeight.weight)
  return weight_;
}
inline void SubcatWeight::set_weight(float value) {
  set_has_weight();
  weight_ = value;
  // @@protoc_insertion_point(field_set:youla.embed_recom.pb.SubcatWeight.weight)
}

// -------------------------------------------------------------------

// SubcatWeights

// repeated .youla.embed_recom.pb.SubcatWeight weights = 1;
inline int SubcatWeights::weights_size() const {
  return weights_.size();
}
inline void SubcatWeights::clear_weights() {
  weights_.Clear();
}
inline const ::youla::embed_recom::pb::SubcatWeight& SubcatWeights::weights(int index) const {
  // @@protoc_insertion_point(field_get:youla.embed_recom.pb.SubcatWeights.weights)
  return weights_.Get(index);
}
inline ::youla::embed_recom::pb::SubcatWeight* SubcatWeights::mutable_weights(int index) {
  // @@protoc_insertion_point(field_mutable:youla.embed_recom.pb.SubcatWeights.weights)
  return weights_.Mutable(index);
}
inline ::youla::embed_recom::pb::SubcatWeight* SubcatWeights::add_weights() {
  // @@protoc_insertion_point(field_add:youla.embed_recom.pb.SubcatWeights.weights)
  return weights_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::youla::embed_recom::pb::SubcatWeight >*
SubcatWeights::mutable_weights() {
  // @@protoc_insertion_point(field_mutable_list:youla.embed_recom.pb.SubcatWeights.weights)
  return &weights_;
}
inline const ::google::protobuf::RepeatedPtrField< ::youla::embed_recom::pb::SubcatWeight >&
SubcatWeights::weights() const {
  // @@protoc_insertion_point(field_list:youla.embed_recom.pb.SubcatWeights.weights)
  return weights_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace pb
}  // namespace embed_recom
}  // namespace youla

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_youla_5fembed_5frecom_2eproto__INCLUDED
