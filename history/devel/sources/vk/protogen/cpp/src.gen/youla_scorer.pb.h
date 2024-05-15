// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: youla_scorer.proto

#ifndef PROTOBUF_youla_5fscorer_2eproto__INCLUDED
#define PROTOBUF_youla_5fscorer_2eproto__INCLUDED

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
class YoulaAeOnwerConversionEntry;
class YoulaAeOnwerConversionEntryDefaultTypeInternal;
extern YoulaAeOnwerConversionEntryDefaultTypeInternal _YoulaAeOnwerConversionEntry_default_instance_;
class YoulaAeScoreEntry;
class YoulaAeScoreEntryDefaultTypeInternal;
extern YoulaAeScoreEntryDefaultTypeInternal _YoulaAeScoreEntry_default_instance_;
class YoulaScoreEntry;
class YoulaScoreEntryDefaultTypeInternal;
extern YoulaScoreEntryDefaultTypeInternal _YoulaScoreEntry_default_instance_;
class YoulaScoreList;
class YoulaScoreListDefaultTypeInternal;
extern YoulaScoreListDefaultTypeInternal _YoulaScoreList_default_instance_;

namespace protobuf_youla_5fscorer_2eproto {
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
}  // namespace protobuf_youla_5fscorer_2eproto

// ===================================================================

class YoulaScoreEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:YoulaScoreEntry) */ {
 public:
  YoulaScoreEntry();
  virtual ~YoulaScoreEntry();

  YoulaScoreEntry(const YoulaScoreEntry& from);

  inline YoulaScoreEntry& operator=(const YoulaScoreEntry& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  YoulaScoreEntry(YoulaScoreEntry&& from) noexcept
    : YoulaScoreEntry() {
    *this = ::std::move(from);
  }

  inline YoulaScoreEntry& operator=(YoulaScoreEntry&& from) noexcept {
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
  static const YoulaScoreEntry& default_instance();

  static inline const YoulaScoreEntry* internal_default_instance() {
    return reinterpret_cast<const YoulaScoreEntry*>(
               &_YoulaScoreEntry_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(YoulaScoreEntry* other);
  friend void swap(YoulaScoreEntry& a, YoulaScoreEntry& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline YoulaScoreEntry* New() const PROTOBUF_FINAL { return New(NULL); }

  YoulaScoreEntry* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const YoulaScoreEntry& from);
  void MergeFrom(const YoulaScoreEntry& from);
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
  void InternalSwap(YoulaScoreEntry* other);
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

  // optional int32 score1 = 2;
  bool has_score1() const;
  void clear_score1();
  static const int kScore1FieldNumber = 2;
  ::google::protobuf::int32 score1() const;
  void set_score1(::google::protobuf::int32 value);

  // optional int32 score2 = 3;
  bool has_score2() const;
  void clear_score2();
  static const int kScore2FieldNumber = 3;
  ::google::protobuf::int32 score2() const;
  void set_score2(::google::protobuf::int32 value);

  // optional int32 score3 = 4;
  bool has_score3() const;
  void clear_score3();
  static const int kScore3FieldNumber = 4;
  ::google::protobuf::int32 score3() const;
  void set_score3(::google::protobuf::int32 value);

  // optional int32 score4 = 5;
  bool has_score4() const;
  void clear_score4();
  static const int kScore4FieldNumber = 5;
  ::google::protobuf::int32 score4() const;
  void set_score4(::google::protobuf::int32 value);

  // optional int32 owner_conversion = 6;
  bool has_owner_conversion() const;
  void clear_owner_conversion();
  static const int kOwnerConversionFieldNumber = 6;
  ::google::protobuf::int32 owner_conversion() const;
  void set_owner_conversion(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:YoulaScoreEntry)
 private:
  void set_has_product_id();
  void clear_has_product_id();
  void set_has_score1();
  void clear_has_score1();
  void set_has_score2();
  void clear_has_score2();
  void set_has_score3();
  void clear_has_score3();
  void set_has_score4();
  void clear_has_score4();
  void set_has_owner_conversion();
  void clear_has_owner_conversion();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr product_id_;
  ::google::protobuf::int32 score1_;
  ::google::protobuf::int32 score2_;
  ::google::protobuf::int32 score3_;
  ::google::protobuf::int32 score4_;
  ::google::protobuf::int32 owner_conversion_;
  friend struct protobuf_youla_5fscorer_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class YoulaScoreList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:YoulaScoreList) */ {
 public:
  YoulaScoreList();
  virtual ~YoulaScoreList();

  YoulaScoreList(const YoulaScoreList& from);

  inline YoulaScoreList& operator=(const YoulaScoreList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  YoulaScoreList(YoulaScoreList&& from) noexcept
    : YoulaScoreList() {
    *this = ::std::move(from);
  }

  inline YoulaScoreList& operator=(YoulaScoreList&& from) noexcept {
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
  static const YoulaScoreList& default_instance();

  static inline const YoulaScoreList* internal_default_instance() {
    return reinterpret_cast<const YoulaScoreList*>(
               &_YoulaScoreList_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(YoulaScoreList* other);
  friend void swap(YoulaScoreList& a, YoulaScoreList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline YoulaScoreList* New() const PROTOBUF_FINAL { return New(NULL); }

  YoulaScoreList* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const YoulaScoreList& from);
  void MergeFrom(const YoulaScoreList& from);
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
  void InternalSwap(YoulaScoreList* other);
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

  // repeated .YoulaScoreEntry entries = 1;
  int entries_size() const;
  void clear_entries();
  static const int kEntriesFieldNumber = 1;
  const ::YoulaScoreEntry& entries(int index) const;
  ::YoulaScoreEntry* mutable_entries(int index);
  ::YoulaScoreEntry* add_entries();
  ::google::protobuf::RepeatedPtrField< ::YoulaScoreEntry >*
      mutable_entries();
  const ::google::protobuf::RepeatedPtrField< ::YoulaScoreEntry >&
      entries() const;

  // @@protoc_insertion_point(class_scope:YoulaScoreList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::YoulaScoreEntry > entries_;
  friend struct protobuf_youla_5fscorer_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class YoulaAeScoreEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:YoulaAeScoreEntry) */ {
 public:
  YoulaAeScoreEntry();
  virtual ~YoulaAeScoreEntry();

  YoulaAeScoreEntry(const YoulaAeScoreEntry& from);

  inline YoulaAeScoreEntry& operator=(const YoulaAeScoreEntry& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  YoulaAeScoreEntry(YoulaAeScoreEntry&& from) noexcept
    : YoulaAeScoreEntry() {
    *this = ::std::move(from);
  }

  inline YoulaAeScoreEntry& operator=(YoulaAeScoreEntry&& from) noexcept {
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
  static const YoulaAeScoreEntry& default_instance();

  static inline const YoulaAeScoreEntry* internal_default_instance() {
    return reinterpret_cast<const YoulaAeScoreEntry*>(
               &_YoulaAeScoreEntry_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(YoulaAeScoreEntry* other);
  friend void swap(YoulaAeScoreEntry& a, YoulaAeScoreEntry& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline YoulaAeScoreEntry* New() const PROTOBUF_FINAL { return New(NULL); }

  YoulaAeScoreEntry* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const YoulaAeScoreEntry& from);
  void MergeFrom(const YoulaAeScoreEntry& from);
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
  void InternalSwap(YoulaAeScoreEntry* other);
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

  // optional int32 score = 1;
  bool has_score() const;
  void clear_score();
  static const int kScoreFieldNumber = 1;
  ::google::protobuf::int32 score() const;
  void set_score(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:YoulaAeScoreEntry)
 private:
  void set_has_score();
  void clear_has_score();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 score_;
  friend struct protobuf_youla_5fscorer_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class YoulaAeOnwerConversionEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:YoulaAeOnwerConversionEntry) */ {
 public:
  YoulaAeOnwerConversionEntry();
  virtual ~YoulaAeOnwerConversionEntry();

  YoulaAeOnwerConversionEntry(const YoulaAeOnwerConversionEntry& from);

  inline YoulaAeOnwerConversionEntry& operator=(const YoulaAeOnwerConversionEntry& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  YoulaAeOnwerConversionEntry(YoulaAeOnwerConversionEntry&& from) noexcept
    : YoulaAeOnwerConversionEntry() {
    *this = ::std::move(from);
  }

  inline YoulaAeOnwerConversionEntry& operator=(YoulaAeOnwerConversionEntry&& from) noexcept {
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
  static const YoulaAeOnwerConversionEntry& default_instance();

  static inline const YoulaAeOnwerConversionEntry* internal_default_instance() {
    return reinterpret_cast<const YoulaAeOnwerConversionEntry*>(
               &_YoulaAeOnwerConversionEntry_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(YoulaAeOnwerConversionEntry* other);
  friend void swap(YoulaAeOnwerConversionEntry& a, YoulaAeOnwerConversionEntry& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline YoulaAeOnwerConversionEntry* New() const PROTOBUF_FINAL { return New(NULL); }

  YoulaAeOnwerConversionEntry* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const YoulaAeOnwerConversionEntry& from);
  void MergeFrom(const YoulaAeOnwerConversionEntry& from);
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
  void InternalSwap(YoulaAeOnwerConversionEntry* other);
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

  // optional int32 owner_conversion = 1;
  bool has_owner_conversion() const;
  void clear_owner_conversion();
  static const int kOwnerConversionFieldNumber = 1;
  ::google::protobuf::int32 owner_conversion() const;
  void set_owner_conversion(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:YoulaAeOnwerConversionEntry)
 private:
  void set_has_owner_conversion();
  void clear_has_owner_conversion();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 owner_conversion_;
  friend struct protobuf_youla_5fscorer_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// YoulaScoreEntry

// required string product_id = 1;
inline bool YoulaScoreEntry::has_product_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void YoulaScoreEntry::set_has_product_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void YoulaScoreEntry::clear_has_product_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void YoulaScoreEntry::clear_product_id() {
  product_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_product_id();
}
inline const ::std::string& YoulaScoreEntry::product_id() const {
  // @@protoc_insertion_point(field_get:YoulaScoreEntry.product_id)
  return product_id_.GetNoArena();
}
inline void YoulaScoreEntry::set_product_id(const ::std::string& value) {
  set_has_product_id();
  product_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YoulaScoreEntry.product_id)
}
#if LANG_CXX11
inline void YoulaScoreEntry::set_product_id(::std::string&& value) {
  set_has_product_id();
  product_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:YoulaScoreEntry.product_id)
}
#endif
inline void YoulaScoreEntry::set_product_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_product_id();
  product_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YoulaScoreEntry.product_id)
}
inline void YoulaScoreEntry::set_product_id(const char* value, size_t size) {
  set_has_product_id();
  product_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YoulaScoreEntry.product_id)
}
inline ::std::string* YoulaScoreEntry::mutable_product_id() {
  set_has_product_id();
  // @@protoc_insertion_point(field_mutable:YoulaScoreEntry.product_id)
  return product_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* YoulaScoreEntry::release_product_id() {
  // @@protoc_insertion_point(field_release:YoulaScoreEntry.product_id)
  clear_has_product_id();
  return product_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void YoulaScoreEntry::set_allocated_product_id(::std::string* product_id) {
  if (product_id != NULL) {
    set_has_product_id();
  } else {
    clear_has_product_id();
  }
  product_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), product_id);
  // @@protoc_insertion_point(field_set_allocated:YoulaScoreEntry.product_id)
}

// optional int32 score1 = 2;
inline bool YoulaScoreEntry::has_score1() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void YoulaScoreEntry::set_has_score1() {
  _has_bits_[0] |= 0x00000002u;
}
inline void YoulaScoreEntry::clear_has_score1() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void YoulaScoreEntry::clear_score1() {
  score1_ = 0;
  clear_has_score1();
}
inline ::google::protobuf::int32 YoulaScoreEntry::score1() const {
  // @@protoc_insertion_point(field_get:YoulaScoreEntry.score1)
  return score1_;
}
inline void YoulaScoreEntry::set_score1(::google::protobuf::int32 value) {
  set_has_score1();
  score1_ = value;
  // @@protoc_insertion_point(field_set:YoulaScoreEntry.score1)
}

// optional int32 score2 = 3;
inline bool YoulaScoreEntry::has_score2() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void YoulaScoreEntry::set_has_score2() {
  _has_bits_[0] |= 0x00000004u;
}
inline void YoulaScoreEntry::clear_has_score2() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void YoulaScoreEntry::clear_score2() {
  score2_ = 0;
  clear_has_score2();
}
inline ::google::protobuf::int32 YoulaScoreEntry::score2() const {
  // @@protoc_insertion_point(field_get:YoulaScoreEntry.score2)
  return score2_;
}
inline void YoulaScoreEntry::set_score2(::google::protobuf::int32 value) {
  set_has_score2();
  score2_ = value;
  // @@protoc_insertion_point(field_set:YoulaScoreEntry.score2)
}

// optional int32 score3 = 4;
inline bool YoulaScoreEntry::has_score3() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void YoulaScoreEntry::set_has_score3() {
  _has_bits_[0] |= 0x00000008u;
}
inline void YoulaScoreEntry::clear_has_score3() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void YoulaScoreEntry::clear_score3() {
  score3_ = 0;
  clear_has_score3();
}
inline ::google::protobuf::int32 YoulaScoreEntry::score3() const {
  // @@protoc_insertion_point(field_get:YoulaScoreEntry.score3)
  return score3_;
}
inline void YoulaScoreEntry::set_score3(::google::protobuf::int32 value) {
  set_has_score3();
  score3_ = value;
  // @@protoc_insertion_point(field_set:YoulaScoreEntry.score3)
}

// optional int32 score4 = 5;
inline bool YoulaScoreEntry::has_score4() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void YoulaScoreEntry::set_has_score4() {
  _has_bits_[0] |= 0x00000010u;
}
inline void YoulaScoreEntry::clear_has_score4() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void YoulaScoreEntry::clear_score4() {
  score4_ = 0;
  clear_has_score4();
}
inline ::google::protobuf::int32 YoulaScoreEntry::score4() const {
  // @@protoc_insertion_point(field_get:YoulaScoreEntry.score4)
  return score4_;
}
inline void YoulaScoreEntry::set_score4(::google::protobuf::int32 value) {
  set_has_score4();
  score4_ = value;
  // @@protoc_insertion_point(field_set:YoulaScoreEntry.score4)
}

// optional int32 owner_conversion = 6;
inline bool YoulaScoreEntry::has_owner_conversion() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void YoulaScoreEntry::set_has_owner_conversion() {
  _has_bits_[0] |= 0x00000020u;
}
inline void YoulaScoreEntry::clear_has_owner_conversion() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void YoulaScoreEntry::clear_owner_conversion() {
  owner_conversion_ = 0;
  clear_has_owner_conversion();
}
inline ::google::protobuf::int32 YoulaScoreEntry::owner_conversion() const {
  // @@protoc_insertion_point(field_get:YoulaScoreEntry.owner_conversion)
  return owner_conversion_;
}
inline void YoulaScoreEntry::set_owner_conversion(::google::protobuf::int32 value) {
  set_has_owner_conversion();
  owner_conversion_ = value;
  // @@protoc_insertion_point(field_set:YoulaScoreEntry.owner_conversion)
}

// -------------------------------------------------------------------

// YoulaScoreList

// repeated .YoulaScoreEntry entries = 1;
inline int YoulaScoreList::entries_size() const {
  return entries_.size();
}
inline void YoulaScoreList::clear_entries() {
  entries_.Clear();
}
inline const ::YoulaScoreEntry& YoulaScoreList::entries(int index) const {
  // @@protoc_insertion_point(field_get:YoulaScoreList.entries)
  return entries_.Get(index);
}
inline ::YoulaScoreEntry* YoulaScoreList::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:YoulaScoreList.entries)
  return entries_.Mutable(index);
}
inline ::YoulaScoreEntry* YoulaScoreList::add_entries() {
  // @@protoc_insertion_point(field_add:YoulaScoreList.entries)
  return entries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::YoulaScoreEntry >*
YoulaScoreList::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:YoulaScoreList.entries)
  return &entries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::YoulaScoreEntry >&
YoulaScoreList::entries() const {
  // @@protoc_insertion_point(field_list:YoulaScoreList.entries)
  return entries_;
}

// -------------------------------------------------------------------

// YoulaAeScoreEntry

// optional int32 score = 1;
inline bool YoulaAeScoreEntry::has_score() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void YoulaAeScoreEntry::set_has_score() {
  _has_bits_[0] |= 0x00000001u;
}
inline void YoulaAeScoreEntry::clear_has_score() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void YoulaAeScoreEntry::clear_score() {
  score_ = 0;
  clear_has_score();
}
inline ::google::protobuf::int32 YoulaAeScoreEntry::score() const {
  // @@protoc_insertion_point(field_get:YoulaAeScoreEntry.score)
  return score_;
}
inline void YoulaAeScoreEntry::set_score(::google::protobuf::int32 value) {
  set_has_score();
  score_ = value;
  // @@protoc_insertion_point(field_set:YoulaAeScoreEntry.score)
}

// -------------------------------------------------------------------

// YoulaAeOnwerConversionEntry

// optional int32 owner_conversion = 1;
inline bool YoulaAeOnwerConversionEntry::has_owner_conversion() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void YoulaAeOnwerConversionEntry::set_has_owner_conversion() {
  _has_bits_[0] |= 0x00000001u;
}
inline void YoulaAeOnwerConversionEntry::clear_has_owner_conversion() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void YoulaAeOnwerConversionEntry::clear_owner_conversion() {
  owner_conversion_ = 0;
  clear_has_owner_conversion();
}
inline ::google::protobuf::int32 YoulaAeOnwerConversionEntry::owner_conversion() const {
  // @@protoc_insertion_point(field_get:YoulaAeOnwerConversionEntry.owner_conversion)
  return owner_conversion_;
}
inline void YoulaAeOnwerConversionEntry::set_owner_conversion(::google::protobuf::int32 value) {
  set_has_owner_conversion();
  owner_conversion_ = value;
  // @@protoc_insertion_point(field_set:YoulaAeOnwerConversionEntry.owner_conversion)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_youla_5fscorer_2eproto__INCLUDED