// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: entry_proto_content.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "entry_proto_content.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace memcached {
class EntryProtoContentDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<EntryProtoContent>
     _instance;
} _EntryProtoContent_default_instance_;

namespace protobuf_entry_5fproto_5fcontent_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntryProtoContent, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntryProtoContent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntryProtoContent, value_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(EntryProtoContent)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_EntryProtoContent_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "entry_proto_content.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _EntryProtoContent_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_EntryProtoContent_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\031entry_proto_content.proto\022\tmemcached\"\""
      "\n\021EntryProtoContent\022\r\n\005value\030\001 \002(\014"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 74);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "entry_proto_content.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_entry_5fproto_5fcontent_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EntryProtoContent::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EntryProtoContent::EntryProtoContent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_entry_5fproto_5fcontent_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:memcached.EntryProtoContent)
}
EntryProtoContent::EntryProtoContent(const EntryProtoContent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_value()) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:memcached.EntryProtoContent)
}

void EntryProtoContent::SharedCtor() {
  _cached_size_ = 0;
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EntryProtoContent::~EntryProtoContent() {
  // @@protoc_insertion_point(destructor:memcached.EntryProtoContent)
  SharedDtor();
}

void EntryProtoContent::SharedDtor() {
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EntryProtoContent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EntryProtoContent::descriptor() {
  protobuf_entry_5fproto_5fcontent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_entry_5fproto_5fcontent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EntryProtoContent& EntryProtoContent::default_instance() {
  protobuf_entry_5fproto_5fcontent_2eproto::InitDefaults();
  return *internal_default_instance();
}

EntryProtoContent* EntryProtoContent::New(::google::protobuf::Arena* arena) const {
  EntryProtoContent* n = new EntryProtoContent;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EntryProtoContent::Clear() {
// @@protoc_insertion_point(message_clear_start:memcached.EntryProtoContent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (has_value()) {
    GOOGLE_DCHECK(!value_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*value_.UnsafeRawStringPointer())->clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool EntryProtoContent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:memcached.EntryProtoContent)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes value = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:memcached.EntryProtoContent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:memcached.EntryProtoContent)
  return false;
#undef DO_
}

void EntryProtoContent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:memcached.EntryProtoContent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bytes value = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->value(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:memcached.EntryProtoContent)
}

::google::protobuf::uint8* EntryProtoContent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:memcached.EntryProtoContent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bytes value = 1;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->value(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:memcached.EntryProtoContent)
  return target;
}

size_t EntryProtoContent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:memcached.EntryProtoContent)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required bytes value = 1;
  if (has_value()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EntryProtoContent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:memcached.EntryProtoContent)
  GOOGLE_DCHECK_NE(&from, this);
  const EntryProtoContent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EntryProtoContent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:memcached.EntryProtoContent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:memcached.EntryProtoContent)
    MergeFrom(*source);
  }
}

void EntryProtoContent::MergeFrom(const EntryProtoContent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:memcached.EntryProtoContent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_value()) {
    set_has_value();
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
}

void EntryProtoContent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:memcached.EntryProtoContent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntryProtoContent::CopyFrom(const EntryProtoContent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:memcached.EntryProtoContent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntryProtoContent::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void EntryProtoContent::Swap(EntryProtoContent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EntryProtoContent::InternalSwap(EntryProtoContent* other) {
  using std::swap;
  value_.Swap(&other->value_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EntryProtoContent::GetMetadata() const {
  protobuf_entry_5fproto_5fcontent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_entry_5fproto_5fcontent_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EntryProtoContent

// required bytes value = 1;
bool EntryProtoContent::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void EntryProtoContent::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
void EntryProtoContent::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
void EntryProtoContent::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
const ::std::string& EntryProtoContent::value() const {
  // @@protoc_insertion_point(field_get:memcached.EntryProtoContent.value)
  return value_.GetNoArena();
}
void EntryProtoContent::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:memcached.EntryProtoContent.value)
}
#if LANG_CXX11
void EntryProtoContent::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:memcached.EntryProtoContent.value)
}
#endif
void EntryProtoContent::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:memcached.EntryProtoContent.value)
}
void EntryProtoContent::set_value(const void* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:memcached.EntryProtoContent.value)
}
::std::string* EntryProtoContent::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:memcached.EntryProtoContent.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* EntryProtoContent::release_value() {
  // @@protoc_insertion_point(field_release:memcached.EntryProtoContent.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void EntryProtoContent::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:memcached.EntryProtoContent.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace memcached

// @@protoc_insertion_point(global_scope)