// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: structured_event.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "structured_event.pb.h"

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

namespace metrics {
class StructuredEventProto_MetricDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<StructuredEventProto_Metric>
     _instance;
  ::google::protobuf::uint64 value_hmac_;
  ::google::protobuf::int64 value_int64_;
} _StructuredEventProto_Metric_default_instance_;
class StructuredEventProtoDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<StructuredEventProto>
     _instance;
} _StructuredEventProto_default_instance_;

namespace protobuf_structured_5fevent_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto_Metric, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto_Metric, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto_Metric, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto_Metric, name_hash_),
  offsetof(StructuredEventProto_MetricDefaultTypeInternal, value_hmac_),
  offsetof(StructuredEventProto_MetricDefaultTypeInternal, value_int64_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto_Metric, value_),
  0,
  ~0u,
  ~0u,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto, profile_event_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto, event_name_hash_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructuredEventProto, metrics_),
  0,
  1,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(StructuredEventProto_Metric)},
  { 12, 20, sizeof(StructuredEventProto)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_StructuredEventProto_Metric_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_StructuredEventProto_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "structured_event.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _StructuredEventProto_Metric_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_StructuredEventProto_Metric_default_instance_);_StructuredEventProto_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_StructuredEventProto_default_instance_);_StructuredEventProto_Metric_default_instance_.value_hmac_ = GOOGLE_ULONGLONG(0);
  _StructuredEventProto_Metric_default_instance_.value_int64_ = GOOGLE_LONGLONG(0);
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026structured_event.proto\022\007metrics\"\323\001\n\024St"
      "ructuredEventProto\022\030\n\020profile_event_id\030\001"
      " \001(\006\022\027\n\017event_name_hash\030\002 \001(\006\0225\n\007metrics"
      "\030\003 \003(\0132$.metrics.StructuredEventProto.Me"
      "tric\032Q\n\006Metric\022\021\n\tname_hash\030\001 \001(\006\022\024\n\nval"
      "ue_hmac\030\002 \001(\006H\000\022\025\n\013value_int64\030\003 \001(\003H\000B\007"
      "\n\005value"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 247);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "structured_event.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_structured_5fevent_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StructuredEventProto_Metric::kNameHashFieldNumber;
const int StructuredEventProto_Metric::kValueHmacFieldNumber;
const int StructuredEventProto_Metric::kValueInt64FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StructuredEventProto_Metric::StructuredEventProto_Metric()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_structured_5fevent_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.StructuredEventProto.Metric)
}
StructuredEventProto_Metric::StructuredEventProto_Metric(const StructuredEventProto_Metric& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_hash_ = from.name_hash_;
  clear_has_value();
  switch (from.value_case()) {
    case kValueHmac: {
      set_value_hmac(from.value_hmac());
      break;
    }
    case kValueInt64: {
      set_value_int64(from.value_int64());
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:metrics.StructuredEventProto.Metric)
}

void StructuredEventProto_Metric::SharedCtor() {
  _cached_size_ = 0;
  name_hash_ = GOOGLE_ULONGLONG(0);
  clear_has_value();
}

StructuredEventProto_Metric::~StructuredEventProto_Metric() {
  // @@protoc_insertion_point(destructor:metrics.StructuredEventProto.Metric)
  SharedDtor();
}

void StructuredEventProto_Metric::SharedDtor() {
  if (has_value()) {
    clear_value();
  }
}

void StructuredEventProto_Metric::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StructuredEventProto_Metric::descriptor() {
  protobuf_structured_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_structured_5fevent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const StructuredEventProto_Metric& StructuredEventProto_Metric::default_instance() {
  protobuf_structured_5fevent_2eproto::InitDefaults();
  return *internal_default_instance();
}

StructuredEventProto_Metric* StructuredEventProto_Metric::New(::google::protobuf::Arena* arena) const {
  StructuredEventProto_Metric* n = new StructuredEventProto_Metric;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StructuredEventProto_Metric::clear_value() {
// @@protoc_insertion_point(one_of_clear_start:metrics.StructuredEventProto.Metric)
  switch (value_case()) {
    case kValueHmac: {
      // No need to clear
      break;
    }
    case kValueInt64: {
      // No need to clear
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = VALUE_NOT_SET;
}


void StructuredEventProto_Metric::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.StructuredEventProto.Metric)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_hash_ = GOOGLE_ULONGLONG(0);
  clear_value();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StructuredEventProto_Metric::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metrics.StructuredEventProto.Metric)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed64 name_hash = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_name_hash();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &name_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional fixed64 value_hmac = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {
          clear_value();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &value_.value_hmac_)));
          set_has_value_hmac();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 value_int64 = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          clear_value();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &value_.value_int64_)));
          set_has_value_int64();
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
  // @@protoc_insertion_point(parse_success:metrics.StructuredEventProto.Metric)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.StructuredEventProto.Metric)
  return false;
#undef DO_
}

void StructuredEventProto_Metric::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.StructuredEventProto.Metric)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 name_hash = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->name_hash(), output);
  }

  switch (value_case()) {
    case kValueHmac:
      ::google::protobuf::internal::WireFormatLite::WriteFixed64(2, this->value_hmac(), output);
      break;
    case kValueInt64:
      ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->value_int64(), output);
      break;
    default: ;
  }
  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:metrics.StructuredEventProto.Metric)
}

::google::protobuf::uint8* StructuredEventProto_Metric::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metrics.StructuredEventProto.Metric)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 name_hash = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->name_hash(), target);
  }

  switch (value_case()) {
    case kValueHmac:
      target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(2, this->value_hmac(), target);
      break;
    case kValueInt64:
      target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->value_int64(), target);
      break;
    default: ;
  }
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metrics.StructuredEventProto.Metric)
  return target;
}

size_t StructuredEventProto_Metric::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.StructuredEventProto.Metric)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional fixed64 name_hash = 1;
  if (has_name_hash()) {
    total_size += 1 + 8;
  }

  switch (value_case()) {
    // optional fixed64 value_hmac = 2;
    case kValueHmac: {
      total_size += 1 + 8;
      break;
    }
    // optional int64 value_int64 = 3;
    case kValueInt64: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->value_int64());
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StructuredEventProto_Metric::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metrics.StructuredEventProto.Metric)
  GOOGLE_DCHECK_NE(&from, this);
  const StructuredEventProto_Metric* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StructuredEventProto_Metric>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metrics.StructuredEventProto.Metric)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metrics.StructuredEventProto.Metric)
    MergeFrom(*source);
  }
}

void StructuredEventProto_Metric::MergeFrom(const StructuredEventProto_Metric& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.StructuredEventProto.Metric)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_name_hash()) {
    set_name_hash(from.name_hash());
  }
  switch (from.value_case()) {
    case kValueHmac: {
      set_value_hmac(from.value_hmac());
      break;
    }
    case kValueInt64: {
      set_value_int64(from.value_int64());
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
}

void StructuredEventProto_Metric::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metrics.StructuredEventProto.Metric)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StructuredEventProto_Metric::CopyFrom(const StructuredEventProto_Metric& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.StructuredEventProto.Metric)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StructuredEventProto_Metric::IsInitialized() const {
  return true;
}

void StructuredEventProto_Metric::Swap(StructuredEventProto_Metric* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StructuredEventProto_Metric::InternalSwap(StructuredEventProto_Metric* other) {
  using std::swap;
  swap(name_hash_, other->name_hash_);
  swap(value_, other->value_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StructuredEventProto_Metric::GetMetadata() const {
  protobuf_structured_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_structured_5fevent_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StructuredEventProto_Metric

// optional fixed64 name_hash = 1;
bool StructuredEventProto_Metric::has_name_hash() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void StructuredEventProto_Metric::set_has_name_hash() {
  _has_bits_[0] |= 0x00000001u;
}
void StructuredEventProto_Metric::clear_has_name_hash() {
  _has_bits_[0] &= ~0x00000001u;
}
void StructuredEventProto_Metric::clear_name_hash() {
  name_hash_ = GOOGLE_ULONGLONG(0);
  clear_has_name_hash();
}
::google::protobuf::uint64 StructuredEventProto_Metric::name_hash() const {
  // @@protoc_insertion_point(field_get:metrics.StructuredEventProto.Metric.name_hash)
  return name_hash_;
}
void StructuredEventProto_Metric::set_name_hash(::google::protobuf::uint64 value) {
  set_has_name_hash();
  name_hash_ = value;
  // @@protoc_insertion_point(field_set:metrics.StructuredEventProto.Metric.name_hash)
}

// optional fixed64 value_hmac = 2;
bool StructuredEventProto_Metric::has_value_hmac() const {
  return value_case() == kValueHmac;
}
void StructuredEventProto_Metric::set_has_value_hmac() {
  _oneof_case_[0] = kValueHmac;
}
void StructuredEventProto_Metric::clear_value_hmac() {
  if (has_value_hmac()) {
    value_.value_hmac_ = GOOGLE_ULONGLONG(0);
    clear_has_value();
  }
}
::google::protobuf::uint64 StructuredEventProto_Metric::value_hmac() const {
  // @@protoc_insertion_point(field_get:metrics.StructuredEventProto.Metric.value_hmac)
  if (has_value_hmac()) {
    return value_.value_hmac_;
  }
  return GOOGLE_ULONGLONG(0);
}
void StructuredEventProto_Metric::set_value_hmac(::google::protobuf::uint64 value) {
  if (!has_value_hmac()) {
    clear_value();
    set_has_value_hmac();
  }
  value_.value_hmac_ = value;
  // @@protoc_insertion_point(field_set:metrics.StructuredEventProto.Metric.value_hmac)
}

// optional int64 value_int64 = 3;
bool StructuredEventProto_Metric::has_value_int64() const {
  return value_case() == kValueInt64;
}
void StructuredEventProto_Metric::set_has_value_int64() {
  _oneof_case_[0] = kValueInt64;
}
void StructuredEventProto_Metric::clear_value_int64() {
  if (has_value_int64()) {
    value_.value_int64_ = GOOGLE_LONGLONG(0);
    clear_has_value();
  }
}
::google::protobuf::int64 StructuredEventProto_Metric::value_int64() const {
  // @@protoc_insertion_point(field_get:metrics.StructuredEventProto.Metric.value_int64)
  if (has_value_int64()) {
    return value_.value_int64_;
  }
  return GOOGLE_LONGLONG(0);
}
void StructuredEventProto_Metric::set_value_int64(::google::protobuf::int64 value) {
  if (!has_value_int64()) {
    clear_value();
    set_has_value_int64();
  }
  value_.value_int64_ = value;
  // @@protoc_insertion_point(field_set:metrics.StructuredEventProto.Metric.value_int64)
}

bool StructuredEventProto_Metric::has_value() const {
  return value_case() != VALUE_NOT_SET;
}
void StructuredEventProto_Metric::clear_has_value() {
  _oneof_case_[0] = VALUE_NOT_SET;
}
StructuredEventProto_Metric::ValueCase StructuredEventProto_Metric::value_case() const {
  return StructuredEventProto_Metric::ValueCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StructuredEventProto::kProfileEventIdFieldNumber;
const int StructuredEventProto::kEventNameHashFieldNumber;
const int StructuredEventProto::kMetricsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StructuredEventProto::StructuredEventProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_structured_5fevent_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.StructuredEventProto)
}
StructuredEventProto::StructuredEventProto(const StructuredEventProto& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      metrics_(from.metrics_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&profile_event_id_, &from.profile_event_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&event_name_hash_) -
    reinterpret_cast<char*>(&profile_event_id_)) + sizeof(event_name_hash_));
  // @@protoc_insertion_point(copy_constructor:metrics.StructuredEventProto)
}

void StructuredEventProto::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&profile_event_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&event_name_hash_) -
      reinterpret_cast<char*>(&profile_event_id_)) + sizeof(event_name_hash_));
}

StructuredEventProto::~StructuredEventProto() {
  // @@protoc_insertion_point(destructor:metrics.StructuredEventProto)
  SharedDtor();
}

void StructuredEventProto::SharedDtor() {
}

void StructuredEventProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StructuredEventProto::descriptor() {
  protobuf_structured_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_structured_5fevent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const StructuredEventProto& StructuredEventProto::default_instance() {
  protobuf_structured_5fevent_2eproto::InitDefaults();
  return *internal_default_instance();
}

StructuredEventProto* StructuredEventProto::New(::google::protobuf::Arena* arena) const {
  StructuredEventProto* n = new StructuredEventProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StructuredEventProto::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.StructuredEventProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metrics_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&profile_event_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&event_name_hash_) -
        reinterpret_cast<char*>(&profile_event_id_)) + sizeof(event_name_hash_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StructuredEventProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metrics.StructuredEventProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed64 profile_event_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_profile_event_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &profile_event_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional fixed64 event_name_hash = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {
          set_has_event_name_hash();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &event_name_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.StructuredEventProto.Metric metrics = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_metrics()));
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
  // @@protoc_insertion_point(parse_success:metrics.StructuredEventProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.StructuredEventProto)
  return false;
#undef DO_
}

void StructuredEventProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.StructuredEventProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 profile_event_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->profile_event_id(), output);
  }

  // optional fixed64 event_name_hash = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(2, this->event_name_hash(), output);
  }

  // repeated .metrics.StructuredEventProto.Metric metrics = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->metrics_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->metrics(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:metrics.StructuredEventProto)
}

::google::protobuf::uint8* StructuredEventProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metrics.StructuredEventProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 profile_event_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->profile_event_id(), target);
  }

  // optional fixed64 event_name_hash = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(2, this->event_name_hash(), target);
  }

  // repeated .metrics.StructuredEventProto.Metric metrics = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->metrics_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->metrics(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metrics.StructuredEventProto)
  return target;
}

size_t StructuredEventProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.StructuredEventProto)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .metrics.StructuredEventProto.Metric metrics = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->metrics_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->metrics(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional fixed64 profile_event_id = 1;
    if (has_profile_event_id()) {
      total_size += 1 + 8;
    }

    // optional fixed64 event_name_hash = 2;
    if (has_event_name_hash()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StructuredEventProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metrics.StructuredEventProto)
  GOOGLE_DCHECK_NE(&from, this);
  const StructuredEventProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StructuredEventProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metrics.StructuredEventProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metrics.StructuredEventProto)
    MergeFrom(*source);
  }
}

void StructuredEventProto::MergeFrom(const StructuredEventProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.StructuredEventProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  metrics_.MergeFrom(from.metrics_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      profile_event_id_ = from.profile_event_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      event_name_hash_ = from.event_name_hash_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void StructuredEventProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metrics.StructuredEventProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StructuredEventProto::CopyFrom(const StructuredEventProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.StructuredEventProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StructuredEventProto::IsInitialized() const {
  return true;
}

void StructuredEventProto::Swap(StructuredEventProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StructuredEventProto::InternalSwap(StructuredEventProto* other) {
  using std::swap;
  metrics_.InternalSwap(&other->metrics_);
  swap(profile_event_id_, other->profile_event_id_);
  swap(event_name_hash_, other->event_name_hash_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StructuredEventProto::GetMetadata() const {
  protobuf_structured_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_structured_5fevent_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StructuredEventProto

// optional fixed64 profile_event_id = 1;
bool StructuredEventProto::has_profile_event_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void StructuredEventProto::set_has_profile_event_id() {
  _has_bits_[0] |= 0x00000001u;
}
void StructuredEventProto::clear_has_profile_event_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void StructuredEventProto::clear_profile_event_id() {
  profile_event_id_ = GOOGLE_ULONGLONG(0);
  clear_has_profile_event_id();
}
::google::protobuf::uint64 StructuredEventProto::profile_event_id() const {
  // @@protoc_insertion_point(field_get:metrics.StructuredEventProto.profile_event_id)
  return profile_event_id_;
}
void StructuredEventProto::set_profile_event_id(::google::protobuf::uint64 value) {
  set_has_profile_event_id();
  profile_event_id_ = value;
  // @@protoc_insertion_point(field_set:metrics.StructuredEventProto.profile_event_id)
}

// optional fixed64 event_name_hash = 2;
bool StructuredEventProto::has_event_name_hash() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void StructuredEventProto::set_has_event_name_hash() {
  _has_bits_[0] |= 0x00000002u;
}
void StructuredEventProto::clear_has_event_name_hash() {
  _has_bits_[0] &= ~0x00000002u;
}
void StructuredEventProto::clear_event_name_hash() {
  event_name_hash_ = GOOGLE_ULONGLONG(0);
  clear_has_event_name_hash();
}
::google::protobuf::uint64 StructuredEventProto::event_name_hash() const {
  // @@protoc_insertion_point(field_get:metrics.StructuredEventProto.event_name_hash)
  return event_name_hash_;
}
void StructuredEventProto::set_event_name_hash(::google::protobuf::uint64 value) {
  set_has_event_name_hash();
  event_name_hash_ = value;
  // @@protoc_insertion_point(field_set:metrics.StructuredEventProto.event_name_hash)
}

// repeated .metrics.StructuredEventProto.Metric metrics = 3;
int StructuredEventProto::metrics_size() const {
  return metrics_.size();
}
void StructuredEventProto::clear_metrics() {
  metrics_.Clear();
}
const ::metrics::StructuredEventProto_Metric& StructuredEventProto::metrics(int index) const {
  // @@protoc_insertion_point(field_get:metrics.StructuredEventProto.metrics)
  return metrics_.Get(index);
}
::metrics::StructuredEventProto_Metric* StructuredEventProto::mutable_metrics(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.StructuredEventProto.metrics)
  return metrics_.Mutable(index);
}
::metrics::StructuredEventProto_Metric* StructuredEventProto::add_metrics() {
  // @@protoc_insertion_point(field_add:metrics.StructuredEventProto.metrics)
  return metrics_.Add();
}
::google::protobuf::RepeatedPtrField< ::metrics::StructuredEventProto_Metric >*
StructuredEventProto::mutable_metrics() {
  // @@protoc_insertion_point(field_mutable_list:metrics.StructuredEventProto.metrics)
  return &metrics_;
}
const ::google::protobuf::RepeatedPtrField< ::metrics::StructuredEventProto_Metric >&
StructuredEventProto::metrics() const {
  // @@protoc_insertion_point(field_list:metrics.StructuredEventProto.metrics)
  return metrics_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

// @@protoc_insertion_point(global_scope)