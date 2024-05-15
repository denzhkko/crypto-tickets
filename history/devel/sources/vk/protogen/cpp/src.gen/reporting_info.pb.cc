// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: reporting_info.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "reporting_info.pb.h"

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
class ReportingInfoDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ReportingInfo>
     _instance;
} _ReportingInfo_default_instance_;

namespace protobuf_reporting_5finfo_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportingInfo, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportingInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportingInfo, attempt_count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportingInfo, last_response_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportingInfo, last_error_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReportingInfo, last_attempt_was_https_),
  0,
  1,
  2,
  3,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(ReportingInfo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ReportingInfo_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "reporting_info.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _ReportingInfo_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ReportingInfo_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024reporting_info.proto\022\007metrics\"{\n\rRepor"
      "tingInfo\022\025\n\rattempt_count\030\001 \001(\005\022\032\n\022last_"
      "response_code\030\002 \001(\005\022\027\n\017last_error_code\030\003"
      " \001(\005\022\036\n\026last_attempt_was_https\030\004 \001(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 156);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "reporting_info.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_reporting_5finfo_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReportingInfo::kAttemptCountFieldNumber;
const int ReportingInfo::kLastResponseCodeFieldNumber;
const int ReportingInfo::kLastErrorCodeFieldNumber;
const int ReportingInfo::kLastAttemptWasHttpsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReportingInfo::ReportingInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_reporting_5finfo_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.ReportingInfo)
}
ReportingInfo::ReportingInfo(const ReportingInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&attempt_count_, &from.attempt_count_,
    static_cast<size_t>(reinterpret_cast<char*>(&last_attempt_was_https_) -
    reinterpret_cast<char*>(&attempt_count_)) + sizeof(last_attempt_was_https_));
  // @@protoc_insertion_point(copy_constructor:metrics.ReportingInfo)
}

void ReportingInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&attempt_count_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&last_attempt_was_https_) -
      reinterpret_cast<char*>(&attempt_count_)) + sizeof(last_attempt_was_https_));
}

ReportingInfo::~ReportingInfo() {
  // @@protoc_insertion_point(destructor:metrics.ReportingInfo)
  SharedDtor();
}

void ReportingInfo::SharedDtor() {
}

void ReportingInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReportingInfo::descriptor() {
  protobuf_reporting_5finfo_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_reporting_5finfo_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ReportingInfo& ReportingInfo::default_instance() {
  protobuf_reporting_5finfo_2eproto::InitDefaults();
  return *internal_default_instance();
}

ReportingInfo* ReportingInfo::New(::google::protobuf::Arena* arena) const {
  ReportingInfo* n = new ReportingInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ReportingInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.ReportingInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    ::memset(&attempt_count_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&last_attempt_was_https_) -
        reinterpret_cast<char*>(&attempt_count_)) + sizeof(last_attempt_was_https_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ReportingInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metrics.ReportingInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 attempt_count = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_attempt_count();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &attempt_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 last_response_code = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_last_response_code();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_response_code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 last_error_code = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_last_error_code();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_error_code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool last_attempt_was_https = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_last_attempt_was_https();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &last_attempt_was_https_)));
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
  // @@protoc_insertion_point(parse_success:metrics.ReportingInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.ReportingInfo)
  return false;
#undef DO_
}

void ReportingInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.ReportingInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 attempt_count = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->attempt_count(), output);
  }

  // optional int32 last_response_code = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->last_response_code(), output);
  }

  // optional int32 last_error_code = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->last_error_code(), output);
  }

  // optional bool last_attempt_was_https = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->last_attempt_was_https(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:metrics.ReportingInfo)
}

::google::protobuf::uint8* ReportingInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metrics.ReportingInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 attempt_count = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->attempt_count(), target);
  }

  // optional int32 last_response_code = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->last_response_code(), target);
  }

  // optional int32 last_error_code = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->last_error_code(), target);
  }

  // optional bool last_attempt_was_https = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->last_attempt_was_https(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metrics.ReportingInfo)
  return target;
}

size_t ReportingInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.ReportingInfo)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional int32 attempt_count = 1;
    if (has_attempt_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->attempt_count());
    }

    // optional int32 last_response_code = 2;
    if (has_last_response_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_response_code());
    }

    // optional int32 last_error_code = 3;
    if (has_last_error_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_error_code());
    }

    // optional bool last_attempt_was_https = 4;
    if (has_last_attempt_was_https()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReportingInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metrics.ReportingInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ReportingInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReportingInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metrics.ReportingInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metrics.ReportingInfo)
    MergeFrom(*source);
  }
}

void ReportingInfo::MergeFrom(const ReportingInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.ReportingInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      attempt_count_ = from.attempt_count_;
    }
    if (cached_has_bits & 0x00000002u) {
      last_response_code_ = from.last_response_code_;
    }
    if (cached_has_bits & 0x00000004u) {
      last_error_code_ = from.last_error_code_;
    }
    if (cached_has_bits & 0x00000008u) {
      last_attempt_was_https_ = from.last_attempt_was_https_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ReportingInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metrics.ReportingInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReportingInfo::CopyFrom(const ReportingInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.ReportingInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReportingInfo::IsInitialized() const {
  return true;
}

void ReportingInfo::Swap(ReportingInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReportingInfo::InternalSwap(ReportingInfo* other) {
  using std::swap;
  swap(attempt_count_, other->attempt_count_);
  swap(last_response_code_, other->last_response_code_);
  swap(last_error_code_, other->last_error_code_);
  swap(last_attempt_was_https_, other->last_attempt_was_https_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ReportingInfo::GetMetadata() const {
  protobuf_reporting_5finfo_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_reporting_5finfo_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ReportingInfo

// optional int32 attempt_count = 1;
bool ReportingInfo::has_attempt_count() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ReportingInfo::set_has_attempt_count() {
  _has_bits_[0] |= 0x00000001u;
}
void ReportingInfo::clear_has_attempt_count() {
  _has_bits_[0] &= ~0x00000001u;
}
void ReportingInfo::clear_attempt_count() {
  attempt_count_ = 0;
  clear_has_attempt_count();
}
::google::protobuf::int32 ReportingInfo::attempt_count() const {
  // @@protoc_insertion_point(field_get:metrics.ReportingInfo.attempt_count)
  return attempt_count_;
}
void ReportingInfo::set_attempt_count(::google::protobuf::int32 value) {
  set_has_attempt_count();
  attempt_count_ = value;
  // @@protoc_insertion_point(field_set:metrics.ReportingInfo.attempt_count)
}

// optional int32 last_response_code = 2;
bool ReportingInfo::has_last_response_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ReportingInfo::set_has_last_response_code() {
  _has_bits_[0] |= 0x00000002u;
}
void ReportingInfo::clear_has_last_response_code() {
  _has_bits_[0] &= ~0x00000002u;
}
void ReportingInfo::clear_last_response_code() {
  last_response_code_ = 0;
  clear_has_last_response_code();
}
::google::protobuf::int32 ReportingInfo::last_response_code() const {
  // @@protoc_insertion_point(field_get:metrics.ReportingInfo.last_response_code)
  return last_response_code_;
}
void ReportingInfo::set_last_response_code(::google::protobuf::int32 value) {
  set_has_last_response_code();
  last_response_code_ = value;
  // @@protoc_insertion_point(field_set:metrics.ReportingInfo.last_response_code)
}

// optional int32 last_error_code = 3;
bool ReportingInfo::has_last_error_code() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ReportingInfo::set_has_last_error_code() {
  _has_bits_[0] |= 0x00000004u;
}
void ReportingInfo::clear_has_last_error_code() {
  _has_bits_[0] &= ~0x00000004u;
}
void ReportingInfo::clear_last_error_code() {
  last_error_code_ = 0;
  clear_has_last_error_code();
}
::google::protobuf::int32 ReportingInfo::last_error_code() const {
  // @@protoc_insertion_point(field_get:metrics.ReportingInfo.last_error_code)
  return last_error_code_;
}
void ReportingInfo::set_last_error_code(::google::protobuf::int32 value) {
  set_has_last_error_code();
  last_error_code_ = value;
  // @@protoc_insertion_point(field_set:metrics.ReportingInfo.last_error_code)
}

// optional bool last_attempt_was_https = 4;
bool ReportingInfo::has_last_attempt_was_https() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ReportingInfo::set_has_last_attempt_was_https() {
  _has_bits_[0] |= 0x00000008u;
}
void ReportingInfo::clear_has_last_attempt_was_https() {
  _has_bits_[0] &= ~0x00000008u;
}
void ReportingInfo::clear_last_attempt_was_https() {
  last_attempt_was_https_ = false;
  clear_has_last_attempt_was_https();
}
bool ReportingInfo::last_attempt_was_https() const {
  // @@protoc_insertion_point(field_get:metrics.ReportingInfo.last_attempt_was_https)
  return last_attempt_was_https_;
}
void ReportingInfo::set_last_attempt_was_https(bool value) {
  set_has_last_attempt_was_https();
  last_attempt_was_https_ = value;
  // @@protoc_insertion_point(field_set:metrics.ReportingInfo.last_attempt_was_https)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

// @@protoc_insertion_point(global_scope)