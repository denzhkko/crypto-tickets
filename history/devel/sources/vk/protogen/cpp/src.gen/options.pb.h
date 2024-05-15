// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: options.proto

#ifndef PROTOBUF_options_2eproto__INCLUDED
#define PROTOBUF_options_2eproto__INCLUDED

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
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
namespace gogo {
class JsonOptions;
class JsonOptionsDefaultTypeInternal;
extern JsonOptionsDefaultTypeInternal _JsonOptions_default_instance_;
class QueryOptions;
class QueryOptionsDefaultTypeInternal;
extern QueryOptionsDefaultTypeInternal _QueryOptions_default_instance_;
class XmlOptions;
class XmlOptionsDefaultTypeInternal;
extern XmlOptionsDefaultTypeInternal _XmlOptions_default_instance_;
}  // namespace gogo

namespace gogo {

namespace protobuf_options_2eproto {
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
}  // namespace protobuf_options_2eproto

// ===================================================================

class XmlOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gogo.XmlOptions) */ {
 public:
  XmlOptions();
  virtual ~XmlOptions();

  XmlOptions(const XmlOptions& from);

  inline XmlOptions& operator=(const XmlOptions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XmlOptions(XmlOptions&& from) noexcept
    : XmlOptions() {
    *this = ::std::move(from);
  }

  inline XmlOptions& operator=(XmlOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XmlOptions& default_instance();

  static inline const XmlOptions* internal_default_instance() {
    return reinterpret_cast<const XmlOptions*>(
               &_XmlOptions_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(XmlOptions* other);
  friend void swap(XmlOptions& a, XmlOptions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XmlOptions* New() const PROTOBUF_FINAL { return New(NULL); }

  XmlOptions* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const XmlOptions& from);
  void MergeFrom(const XmlOptions& from);
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
  void InternalSwap(XmlOptions* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string list = 2;
  void clear_list();
  static const int kListFieldNumber = 2;
  const ::std::string& list() const;
  void set_list(const ::std::string& value);
  #if LANG_CXX11
  void set_list(::std::string&& value);
  #endif
  void set_list(const char* value);
  void set_list(const char* value, size_t size);
  ::std::string* mutable_list();
  ::std::string* release_list();
  void set_allocated_list(::std::string* list);

  // @@protoc_insertion_point(class_scope:gogo.XmlOptions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr list_;
  mutable int _cached_size_;
  friend struct protobuf_options_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class QueryOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gogo.QueryOptions) */ {
 public:
  QueryOptions();
  virtual ~QueryOptions();

  QueryOptions(const QueryOptions& from);

  inline QueryOptions& operator=(const QueryOptions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QueryOptions(QueryOptions&& from) noexcept
    : QueryOptions() {
    *this = ::std::move(from);
  }

  inline QueryOptions& operator=(QueryOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const QueryOptions& default_instance();

  static inline const QueryOptions* internal_default_instance() {
    return reinterpret_cast<const QueryOptions*>(
               &_QueryOptions_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(QueryOptions* other);
  friend void swap(QueryOptions& a, QueryOptions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QueryOptions* New() const PROTOBUF_FINAL { return New(NULL); }

  QueryOptions* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const QueryOptions& from);
  void MergeFrom(const QueryOptions& from);
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
  void InternalSwap(QueryOptions* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:gogo.QueryOptions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable int _cached_size_;
  friend struct protobuf_options_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class JsonOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gogo.JsonOptions) */ {
 public:
  JsonOptions();
  virtual ~JsonOptions();

  JsonOptions(const JsonOptions& from);

  inline JsonOptions& operator=(const JsonOptions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  JsonOptions(JsonOptions&& from) noexcept
    : JsonOptions() {
    *this = ::std::move(from);
  }

  inline JsonOptions& operator=(JsonOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const JsonOptions& default_instance();

  static inline const JsonOptions* internal_default_instance() {
    return reinterpret_cast<const JsonOptions*>(
               &_JsonOptions_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(JsonOptions* other);
  friend void swap(JsonOptions& a, JsonOptions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline JsonOptions* New() const PROTOBUF_FINAL { return New(NULL); }

  JsonOptions* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const JsonOptions& from);
  void MergeFrom(const JsonOptions& from);
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
  void InternalSwap(JsonOptions* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // bool force_print = 2;
  void clear_force_print();
  static const int kForcePrintFieldNumber = 2;
  bool force_print() const;
  void set_force_print(bool value);

  // @@protoc_insertion_point(class_scope:gogo.JsonOptions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  bool force_print_;
  mutable int _cached_size_;
  friend struct protobuf_options_2eproto::TableStruct;
};
// ===================================================================

static const int kXmlFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::gogo::XmlOptions >, 11, false >
  xml;
static const int kQueryFieldNumber = 50001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::gogo::QueryOptions >, 11, false >
  query;
static const int kJsonFieldNumber = 50002;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::gogo::JsonOptions >, 11, false >
  json;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// XmlOptions

// string name = 1;
inline void XmlOptions::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XmlOptions::name() const {
  // @@protoc_insertion_point(field_get:gogo.XmlOptions.name)
  return name_.GetNoArena();
}
inline void XmlOptions::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gogo.XmlOptions.name)
}
#if LANG_CXX11
inline void XmlOptions::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gogo.XmlOptions.name)
}
#endif
inline void XmlOptions::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gogo.XmlOptions.name)
}
inline void XmlOptions::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gogo.XmlOptions.name)
}
inline ::std::string* XmlOptions::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:gogo.XmlOptions.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XmlOptions::release_name() {
  // @@protoc_insertion_point(field_release:gogo.XmlOptions.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XmlOptions::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gogo.XmlOptions.name)
}

// string list = 2;
inline void XmlOptions::clear_list() {
  list_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XmlOptions::list() const {
  // @@protoc_insertion_point(field_get:gogo.XmlOptions.list)
  return list_.GetNoArena();
}
inline void XmlOptions::set_list(const ::std::string& value) {
  
  list_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gogo.XmlOptions.list)
}
#if LANG_CXX11
inline void XmlOptions::set_list(::std::string&& value) {
  
  list_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gogo.XmlOptions.list)
}
#endif
inline void XmlOptions::set_list(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  list_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gogo.XmlOptions.list)
}
inline void XmlOptions::set_list(const char* value, size_t size) {
  
  list_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gogo.XmlOptions.list)
}
inline ::std::string* XmlOptions::mutable_list() {
  
  // @@protoc_insertion_point(field_mutable:gogo.XmlOptions.list)
  return list_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XmlOptions::release_list() {
  // @@protoc_insertion_point(field_release:gogo.XmlOptions.list)
  
  return list_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XmlOptions::set_allocated_list(::std::string* list) {
  if (list != NULL) {
    
  } else {
    
  }
  list_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), list);
  // @@protoc_insertion_point(field_set_allocated:gogo.XmlOptions.list)
}

// -------------------------------------------------------------------

// QueryOptions

// string name = 1;
inline void QueryOptions::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& QueryOptions::name() const {
  // @@protoc_insertion_point(field_get:gogo.QueryOptions.name)
  return name_.GetNoArena();
}
inline void QueryOptions::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gogo.QueryOptions.name)
}
#if LANG_CXX11
inline void QueryOptions::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gogo.QueryOptions.name)
}
#endif
inline void QueryOptions::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gogo.QueryOptions.name)
}
inline void QueryOptions::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gogo.QueryOptions.name)
}
inline ::std::string* QueryOptions::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:gogo.QueryOptions.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* QueryOptions::release_name() {
  // @@protoc_insertion_point(field_release:gogo.QueryOptions.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void QueryOptions::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gogo.QueryOptions.name)
}

// -------------------------------------------------------------------

// JsonOptions

// string name = 1;
inline void JsonOptions::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& JsonOptions::name() const {
  // @@protoc_insertion_point(field_get:gogo.JsonOptions.name)
  return name_.GetNoArena();
}
inline void JsonOptions::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gogo.JsonOptions.name)
}
#if LANG_CXX11
inline void JsonOptions::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gogo.JsonOptions.name)
}
#endif
inline void JsonOptions::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gogo.JsonOptions.name)
}
inline void JsonOptions::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gogo.JsonOptions.name)
}
inline ::std::string* JsonOptions::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:gogo.JsonOptions.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* JsonOptions::release_name() {
  // @@protoc_insertion_point(field_release:gogo.JsonOptions.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void JsonOptions::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gogo.JsonOptions.name)
}

// bool force_print = 2;
inline void JsonOptions::clear_force_print() {
  force_print_ = false;
}
inline bool JsonOptions::force_print() const {
  // @@protoc_insertion_point(field_get:gogo.JsonOptions.force_print)
  return force_print_;
}
inline void JsonOptions::set_force_print(bool value) {
  
  force_print_ = value;
  // @@protoc_insertion_point(field_set:gogo.JsonOptions.force_print)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace gogo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_options_2eproto__INCLUDED
