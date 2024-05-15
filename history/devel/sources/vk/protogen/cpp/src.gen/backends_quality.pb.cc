// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: backends_quality.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "backends_quality.pb.h"

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

namespace backends_quality {
namespace pb {
class FailedBackendDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<FailedBackend>
     _instance;
} _FailedBackend_default_instance_;
class BackendsQualityDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<BackendsQuality>
     _instance;
} _BackendsQuality_default_instance_;

namespace protobuf_backends_5fquality_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

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
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FailedBackend, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FailedBackend, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FailedBackend, host_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FailedBackend, description_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BackendsQuality, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BackendsQuality, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BackendsQuality, successful_backends_count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BackendsQuality, failed_backends_),
  0,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(FailedBackend)},
  { 9, 16, sizeof(BackendsQuality)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_FailedBackend_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_BackendsQuality_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "backends_quality.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _FailedBackend_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_FailedBackend_default_instance_);_BackendsQuality_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_BackendsQuality_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026backends_quality.proto\022\023backends_quali"
      "ty.pb\"2\n\rFailedBackend\022\014\n\004host\030\001 \001(\t\022\023\n\013"
      "description\030\002 \001(\t\"q\n\017BackendsQuality\022!\n\031"
      "successful_backends_count\030\001 \001(\004\022;\n\017faile"
      "d_backends\030\002 \003(\0132\".backends_quality.pb.F"
      "ailedBackendB;\n#ru.mail.go.webbase.backe"
      "nds_qualityB\024BackendsQualityProto"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 273);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "backends_quality.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_backends_5fquality_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FailedBackend::kHostFieldNumber;
const int FailedBackend::kDescriptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FailedBackend::FailedBackend()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_backends_5fquality_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:backends_quality.pb.FailedBackend)
}
FailedBackend::FailedBackend(const FailedBackend& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  host_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_host()) {
    host_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_);
  }
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_description()) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  // @@protoc_insertion_point(copy_constructor:backends_quality.pb.FailedBackend)
}

void FailedBackend::SharedCtor() {
  _cached_size_ = 0;
  host_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

FailedBackend::~FailedBackend() {
  // @@protoc_insertion_point(destructor:backends_quality.pb.FailedBackend)
  SharedDtor();
}

void FailedBackend::SharedDtor() {
  host_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void FailedBackend::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FailedBackend::descriptor() {
  protobuf_backends_5fquality_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_backends_5fquality_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FailedBackend& FailedBackend::default_instance() {
  protobuf_backends_5fquality_2eproto::InitDefaults();
  return *internal_default_instance();
}

FailedBackend* FailedBackend::New(::google::protobuf::Arena* arena) const {
  FailedBackend* n = new FailedBackend;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FailedBackend::Clear() {
// @@protoc_insertion_point(message_clear_start:backends_quality.pb.FailedBackend)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!host_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*host_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!description_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*description_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool FailedBackend::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:backends_quality.pb.FailedBackend)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string host = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_host()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->host().data(), static_cast<int>(this->host().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "backends_quality.pb.FailedBackend.host");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string description = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "backends_quality.pb.FailedBackend.description");
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
  // @@protoc_insertion_point(parse_success:backends_quality.pb.FailedBackend)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:backends_quality.pb.FailedBackend)
  return false;
#undef DO_
}

void FailedBackend::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:backends_quality.pb.FailedBackend)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string host = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->host().data(), static_cast<int>(this->host().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "backends_quality.pb.FailedBackend.host");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->host(), output);
  }

  // optional string description = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "backends_quality.pb.FailedBackend.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->description(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:backends_quality.pb.FailedBackend)
}

::google::protobuf::uint8* FailedBackend::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:backends_quality.pb.FailedBackend)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string host = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->host().data(), static_cast<int>(this->host().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "backends_quality.pb.FailedBackend.host");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->host(), target);
  }

  // optional string description = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "backends_quality.pb.FailedBackend.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->description(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:backends_quality.pb.FailedBackend)
  return target;
}

size_t FailedBackend::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:backends_quality.pb.FailedBackend)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional string host = 1;
    if (has_host()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->host());
    }

    // optional string description = 2;
    if (has_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->description());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FailedBackend::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:backends_quality.pb.FailedBackend)
  GOOGLE_DCHECK_NE(&from, this);
  const FailedBackend* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FailedBackend>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:backends_quality.pb.FailedBackend)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:backends_quality.pb.FailedBackend)
    MergeFrom(*source);
  }
}

void FailedBackend::MergeFrom(const FailedBackend& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:backends_quality.pb.FailedBackend)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_host();
      host_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_description();
      description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
    }
  }
}

void FailedBackend::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:backends_quality.pb.FailedBackend)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FailedBackend::CopyFrom(const FailedBackend& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:backends_quality.pb.FailedBackend)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FailedBackend::IsInitialized() const {
  return true;
}

void FailedBackend::Swap(FailedBackend* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FailedBackend::InternalSwap(FailedBackend* other) {
  using std::swap;
  host_.Swap(&other->host_);
  description_.Swap(&other->description_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FailedBackend::GetMetadata() const {
  protobuf_backends_5fquality_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_backends_5fquality_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FailedBackend

// optional string host = 1;
bool FailedBackend::has_host() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void FailedBackend::set_has_host() {
  _has_bits_[0] |= 0x00000001u;
}
void FailedBackend::clear_has_host() {
  _has_bits_[0] &= ~0x00000001u;
}
void FailedBackend::clear_host() {
  host_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_host();
}
const ::std::string& FailedBackend::host() const {
  // @@protoc_insertion_point(field_get:backends_quality.pb.FailedBackend.host)
  return host_.GetNoArena();
}
void FailedBackend::set_host(const ::std::string& value) {
  set_has_host();
  host_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:backends_quality.pb.FailedBackend.host)
}
#if LANG_CXX11
void FailedBackend::set_host(::std::string&& value) {
  set_has_host();
  host_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:backends_quality.pb.FailedBackend.host)
}
#endif
void FailedBackend::set_host(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_host();
  host_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:backends_quality.pb.FailedBackend.host)
}
void FailedBackend::set_host(const char* value, size_t size) {
  set_has_host();
  host_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:backends_quality.pb.FailedBackend.host)
}
::std::string* FailedBackend::mutable_host() {
  set_has_host();
  // @@protoc_insertion_point(field_mutable:backends_quality.pb.FailedBackend.host)
  return host_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* FailedBackend::release_host() {
  // @@protoc_insertion_point(field_release:backends_quality.pb.FailedBackend.host)
  clear_has_host();
  return host_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void FailedBackend::set_allocated_host(::std::string* host) {
  if (host != NULL) {
    set_has_host();
  } else {
    clear_has_host();
  }
  host_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), host);
  // @@protoc_insertion_point(field_set_allocated:backends_quality.pb.FailedBackend.host)
}

// optional string description = 2;
bool FailedBackend::has_description() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void FailedBackend::set_has_description() {
  _has_bits_[0] |= 0x00000002u;
}
void FailedBackend::clear_has_description() {
  _has_bits_[0] &= ~0x00000002u;
}
void FailedBackend::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_description();
}
const ::std::string& FailedBackend::description() const {
  // @@protoc_insertion_point(field_get:backends_quality.pb.FailedBackend.description)
  return description_.GetNoArena();
}
void FailedBackend::set_description(const ::std::string& value) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:backends_quality.pb.FailedBackend.description)
}
#if LANG_CXX11
void FailedBackend::set_description(::std::string&& value) {
  set_has_description();
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:backends_quality.pb.FailedBackend.description)
}
#endif
void FailedBackend::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:backends_quality.pb.FailedBackend.description)
}
void FailedBackend::set_description(const char* value, size_t size) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:backends_quality.pb.FailedBackend.description)
}
::std::string* FailedBackend::mutable_description() {
  set_has_description();
  // @@protoc_insertion_point(field_mutable:backends_quality.pb.FailedBackend.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* FailedBackend::release_description() {
  // @@protoc_insertion_point(field_release:backends_quality.pb.FailedBackend.description)
  clear_has_description();
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void FailedBackend::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    set_has_description();
  } else {
    clear_has_description();
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:backends_quality.pb.FailedBackend.description)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BackendsQuality::kSuccessfulBackendsCountFieldNumber;
const int BackendsQuality::kFailedBackendsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BackendsQuality::BackendsQuality()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_backends_5fquality_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:backends_quality.pb.BackendsQuality)
}
BackendsQuality::BackendsQuality(const BackendsQuality& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      failed_backends_(from.failed_backends_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  successful_backends_count_ = from.successful_backends_count_;
  // @@protoc_insertion_point(copy_constructor:backends_quality.pb.BackendsQuality)
}

void BackendsQuality::SharedCtor() {
  _cached_size_ = 0;
  successful_backends_count_ = GOOGLE_ULONGLONG(0);
}

BackendsQuality::~BackendsQuality() {
  // @@protoc_insertion_point(destructor:backends_quality.pb.BackendsQuality)
  SharedDtor();
}

void BackendsQuality::SharedDtor() {
}

void BackendsQuality::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BackendsQuality::descriptor() {
  protobuf_backends_5fquality_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_backends_5fquality_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BackendsQuality& BackendsQuality::default_instance() {
  protobuf_backends_5fquality_2eproto::InitDefaults();
  return *internal_default_instance();
}

BackendsQuality* BackendsQuality::New(::google::protobuf::Arena* arena) const {
  BackendsQuality* n = new BackendsQuality;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BackendsQuality::Clear() {
// @@protoc_insertion_point(message_clear_start:backends_quality.pb.BackendsQuality)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  failed_backends_.Clear();
  successful_backends_count_ = GOOGLE_ULONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool BackendsQuality::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:backends_quality.pb.BackendsQuality)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 successful_backends_count = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_successful_backends_count();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &successful_backends_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .backends_quality.pb.FailedBackend failed_backends = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_failed_backends()));
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
  // @@protoc_insertion_point(parse_success:backends_quality.pb.BackendsQuality)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:backends_quality.pb.BackendsQuality)
  return false;
#undef DO_
}

void BackendsQuality::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:backends_quality.pb.BackendsQuality)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 successful_backends_count = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->successful_backends_count(), output);
  }

  // repeated .backends_quality.pb.FailedBackend failed_backends = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->failed_backends_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->failed_backends(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:backends_quality.pb.BackendsQuality)
}

::google::protobuf::uint8* BackendsQuality::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:backends_quality.pb.BackendsQuality)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 successful_backends_count = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->successful_backends_count(), target);
  }

  // repeated .backends_quality.pb.FailedBackend failed_backends = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->failed_backends_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->failed_backends(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:backends_quality.pb.BackendsQuality)
  return target;
}

size_t BackendsQuality::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:backends_quality.pb.BackendsQuality)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .backends_quality.pb.FailedBackend failed_backends = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->failed_backends_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->failed_backends(static_cast<int>(i)));
    }
  }

  // optional uint64 successful_backends_count = 1;
  if (has_successful_backends_count()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->successful_backends_count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BackendsQuality::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:backends_quality.pb.BackendsQuality)
  GOOGLE_DCHECK_NE(&from, this);
  const BackendsQuality* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BackendsQuality>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:backends_quality.pb.BackendsQuality)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:backends_quality.pb.BackendsQuality)
    MergeFrom(*source);
  }
}

void BackendsQuality::MergeFrom(const BackendsQuality& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:backends_quality.pb.BackendsQuality)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  failed_backends_.MergeFrom(from.failed_backends_);
  if (from.has_successful_backends_count()) {
    set_successful_backends_count(from.successful_backends_count());
  }
}

void BackendsQuality::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:backends_quality.pb.BackendsQuality)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BackendsQuality::CopyFrom(const BackendsQuality& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:backends_quality.pb.BackendsQuality)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BackendsQuality::IsInitialized() const {
  return true;
}

void BackendsQuality::Swap(BackendsQuality* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BackendsQuality::InternalSwap(BackendsQuality* other) {
  using std::swap;
  failed_backends_.InternalSwap(&other->failed_backends_);
  swap(successful_backends_count_, other->successful_backends_count_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BackendsQuality::GetMetadata() const {
  protobuf_backends_5fquality_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_backends_5fquality_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BackendsQuality

// optional uint64 successful_backends_count = 1;
bool BackendsQuality::has_successful_backends_count() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void BackendsQuality::set_has_successful_backends_count() {
  _has_bits_[0] |= 0x00000001u;
}
void BackendsQuality::clear_has_successful_backends_count() {
  _has_bits_[0] &= ~0x00000001u;
}
void BackendsQuality::clear_successful_backends_count() {
  successful_backends_count_ = GOOGLE_ULONGLONG(0);
  clear_has_successful_backends_count();
}
::google::protobuf::uint64 BackendsQuality::successful_backends_count() const {
  // @@protoc_insertion_point(field_get:backends_quality.pb.BackendsQuality.successful_backends_count)
  return successful_backends_count_;
}
void BackendsQuality::set_successful_backends_count(::google::protobuf::uint64 value) {
  set_has_successful_backends_count();
  successful_backends_count_ = value;
  // @@protoc_insertion_point(field_set:backends_quality.pb.BackendsQuality.successful_backends_count)
}

// repeated .backends_quality.pb.FailedBackend failed_backends = 2;
int BackendsQuality::failed_backends_size() const {
  return failed_backends_.size();
}
void BackendsQuality::clear_failed_backends() {
  failed_backends_.Clear();
}
const ::backends_quality::pb::FailedBackend& BackendsQuality::failed_backends(int index) const {
  // @@protoc_insertion_point(field_get:backends_quality.pb.BackendsQuality.failed_backends)
  return failed_backends_.Get(index);
}
::backends_quality::pb::FailedBackend* BackendsQuality::mutable_failed_backends(int index) {
  // @@protoc_insertion_point(field_mutable:backends_quality.pb.BackendsQuality.failed_backends)
  return failed_backends_.Mutable(index);
}
::backends_quality::pb::FailedBackend* BackendsQuality::add_failed_backends() {
  // @@protoc_insertion_point(field_add:backends_quality.pb.BackendsQuality.failed_backends)
  return failed_backends_.Add();
}
::google::protobuf::RepeatedPtrField< ::backends_quality::pb::FailedBackend >*
BackendsQuality::mutable_failed_backends() {
  // @@protoc_insertion_point(field_mutable_list:backends_quality.pb.BackendsQuality.failed_backends)
  return &failed_backends_;
}
const ::google::protobuf::RepeatedPtrField< ::backends_quality::pb::FailedBackend >&
BackendsQuality::failed_backends() const {
  // @@protoc_insertion_point(field_list:backends_quality.pb.BackendsQuality.failed_backends)
  return failed_backends_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace backends_quality

// @@protoc_insertion_point(global_scope)