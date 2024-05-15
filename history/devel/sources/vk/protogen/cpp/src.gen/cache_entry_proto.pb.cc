// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cache_entry_proto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cache_entry_proto.pb.h"

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

namespace smanager {
class CacheEntryProtoDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<CacheEntryProto>
     _instance;
} _CacheEntryProto_default_instance_;

namespace protobuf_cache_5fentry_5fproto_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, quality_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, set_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, expiration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, bad_url_hash_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, banned_urls_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, result_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, ban_all_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CacheEntryProto, idx_versions_),
  1,
  2,
  3,
  4,
  5,
  0,
  6,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(CacheEntryProto)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_CacheEntryProto_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cache_entry_proto.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _CacheEntryProto_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_CacheEntryProto_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\027cache_entry_proto.proto\022\010smanager\"\252\001\n\017"
      "CacheEntryProto\022\017\n\007quality\030\001 \002(\001\022\020\n\010set_"
      "time\030\002 \001(\r\022\022\n\nexpiration\030\003 \001(\r\022\024\n\014bad_ur"
      "l_hash\030\004 \001(\004\022\023\n\013banned_urls\030\005 \001(\r\022\016\n\006res"
      "ult\030\017 \002(\014\022\017\n\007ban_all\030\020 \001(\010\022\024\n\014idx_versio"
      "ns\030\021 \003(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 208);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cache_entry_proto.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_cache_5fentry_5fproto_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CacheEntryProto::kQualityFieldNumber;
const int CacheEntryProto::kSetTimeFieldNumber;
const int CacheEntryProto::kExpirationFieldNumber;
const int CacheEntryProto::kBadUrlHashFieldNumber;
const int CacheEntryProto::kBannedUrlsFieldNumber;
const int CacheEntryProto::kResultFieldNumber;
const int CacheEntryProto::kBanAllFieldNumber;
const int CacheEntryProto::kIdxVersionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CacheEntryProto::CacheEntryProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cache_5fentry_5fproto_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:smanager.CacheEntryProto)
}
CacheEntryProto::CacheEntryProto(const CacheEntryProto& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      idx_versions_(from.idx_versions_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_result()) {
    result_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.result_);
  }
  ::memcpy(&quality_, &from.quality_,
    static_cast<size_t>(reinterpret_cast<char*>(&ban_all_) -
    reinterpret_cast<char*>(&quality_)) + sizeof(ban_all_));
  // @@protoc_insertion_point(copy_constructor:smanager.CacheEntryProto)
}

void CacheEntryProto::SharedCtor() {
  _cached_size_ = 0;
  result_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&quality_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&ban_all_) -
      reinterpret_cast<char*>(&quality_)) + sizeof(ban_all_));
}

CacheEntryProto::~CacheEntryProto() {
  // @@protoc_insertion_point(destructor:smanager.CacheEntryProto)
  SharedDtor();
}

void CacheEntryProto::SharedDtor() {
  result_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CacheEntryProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CacheEntryProto::descriptor() {
  protobuf_cache_5fentry_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cache_5fentry_5fproto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CacheEntryProto& CacheEntryProto::default_instance() {
  protobuf_cache_5fentry_5fproto_2eproto::InitDefaults();
  return *internal_default_instance();
}

CacheEntryProto* CacheEntryProto::New(::google::protobuf::Arena* arena) const {
  CacheEntryProto* n = new CacheEntryProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CacheEntryProto::Clear() {
// @@protoc_insertion_point(message_clear_start:smanager.CacheEntryProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  idx_versions_.Clear();
  if (has_result()) {
    GOOGLE_DCHECK(!result_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*result_.UnsafeRawStringPointer())->clear();
  }
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 126u) {
    ::memset(&quality_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&ban_all_) -
        reinterpret_cast<char*>(&quality_)) + sizeof(ban_all_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CacheEntryProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:smanager.CacheEntryProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double quality = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_quality();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &quality_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 set_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_set_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &set_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 expiration = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_expiration();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &expiration_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 bad_url_hash = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_bad_url_hash();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &bad_url_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 banned_urls = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_banned_urls();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &banned_urls_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bytes result = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_result()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool ban_all = 16;
      case 16: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(128u /* 128 & 0xFF */)) {
          set_has_ban_all();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ban_all_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string idx_versions = 17;
      case 17: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(138u /* 138 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_idx_versions()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->idx_versions(this->idx_versions_size() - 1).data(),
            static_cast<int>(this->idx_versions(this->idx_versions_size() - 1).length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "smanager.CacheEntryProto.idx_versions");
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
  // @@protoc_insertion_point(parse_success:smanager.CacheEntryProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:smanager.CacheEntryProto)
  return false;
#undef DO_
}

void CacheEntryProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:smanager.CacheEntryProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double quality = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->quality(), output);
  }

  // optional uint32 set_time = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->set_time(), output);
  }

  // optional uint32 expiration = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->expiration(), output);
  }

  // optional uint64 bad_url_hash = 4;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->bad_url_hash(), output);
  }

  // optional uint32 banned_urls = 5;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->banned_urls(), output);
  }

  // required bytes result = 15;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      15, this->result(), output);
  }

  // optional bool ban_all = 16;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(16, this->ban_all(), output);
  }

  // repeated string idx_versions = 17;
  for (int i = 0, n = this->idx_versions_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->idx_versions(i).data(), static_cast<int>(this->idx_versions(i).length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "smanager.CacheEntryProto.idx_versions");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      17, this->idx_versions(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:smanager.CacheEntryProto)
}

::google::protobuf::uint8* CacheEntryProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:smanager.CacheEntryProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double quality = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->quality(), target);
  }

  // optional uint32 set_time = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->set_time(), target);
  }

  // optional uint32 expiration = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->expiration(), target);
  }

  // optional uint64 bad_url_hash = 4;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->bad_url_hash(), target);
  }

  // optional uint32 banned_urls = 5;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->banned_urls(), target);
  }

  // required bytes result = 15;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        15, this->result(), target);
  }

  // optional bool ban_all = 16;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(16, this->ban_all(), target);
  }

  // repeated string idx_versions = 17;
  for (int i = 0, n = this->idx_versions_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->idx_versions(i).data(), static_cast<int>(this->idx_versions(i).length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "smanager.CacheEntryProto.idx_versions");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(17, this->idx_versions(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:smanager.CacheEntryProto)
  return target;
}

size_t CacheEntryProto::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:smanager.CacheEntryProto)
  size_t total_size = 0;

  if (has_result()) {
    // required bytes result = 15;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->result());
  }

  if (has_quality()) {
    // required double quality = 1;
    total_size += 1 + 8;
  }

  return total_size;
}
size_t CacheEntryProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:smanager.CacheEntryProto)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required bytes result = 15;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->result());

    // required double quality = 1;
    total_size += 1 + 8;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated string idx_versions = 17;
  total_size += 2 *
      ::google::protobuf::internal::FromIntSize(this->idx_versions_size());
  for (int i = 0, n = this->idx_versions_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->idx_versions(i));
  }

  if (_has_bits_[0 / 32] & 124u) {
    // optional uint32 set_time = 2;
    if (has_set_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->set_time());
    }

    // optional uint32 expiration = 3;
    if (has_expiration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->expiration());
    }

    // optional uint64 bad_url_hash = 4;
    if (has_bad_url_hash()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->bad_url_hash());
    }

    // optional uint32 banned_urls = 5;
    if (has_banned_urls()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->banned_urls());
    }

    // optional bool ban_all = 16;
    if (has_ban_all()) {
      total_size += 2 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CacheEntryProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:smanager.CacheEntryProto)
  GOOGLE_DCHECK_NE(&from, this);
  const CacheEntryProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CacheEntryProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:smanager.CacheEntryProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:smanager.CacheEntryProto)
    MergeFrom(*source);
  }
}

void CacheEntryProto::MergeFrom(const CacheEntryProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:smanager.CacheEntryProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  idx_versions_.MergeFrom(from.idx_versions_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 127u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_result();
      result_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.result_);
    }
    if (cached_has_bits & 0x00000002u) {
      quality_ = from.quality_;
    }
    if (cached_has_bits & 0x00000004u) {
      set_time_ = from.set_time_;
    }
    if (cached_has_bits & 0x00000008u) {
      expiration_ = from.expiration_;
    }
    if (cached_has_bits & 0x00000010u) {
      bad_url_hash_ = from.bad_url_hash_;
    }
    if (cached_has_bits & 0x00000020u) {
      banned_urls_ = from.banned_urls_;
    }
    if (cached_has_bits & 0x00000040u) {
      ban_all_ = from.ban_all_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CacheEntryProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:smanager.CacheEntryProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CacheEntryProto::CopyFrom(const CacheEntryProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:smanager.CacheEntryProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CacheEntryProto::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void CacheEntryProto::Swap(CacheEntryProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CacheEntryProto::InternalSwap(CacheEntryProto* other) {
  using std::swap;
  idx_versions_.InternalSwap(&other->idx_versions_);
  result_.Swap(&other->result_);
  swap(quality_, other->quality_);
  swap(set_time_, other->set_time_);
  swap(expiration_, other->expiration_);
  swap(bad_url_hash_, other->bad_url_hash_);
  swap(banned_urls_, other->banned_urls_);
  swap(ban_all_, other->ban_all_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CacheEntryProto::GetMetadata() const {
  protobuf_cache_5fentry_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cache_5fentry_5fproto_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CacheEntryProto

// required double quality = 1;
bool CacheEntryProto::has_quality() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CacheEntryProto::set_has_quality() {
  _has_bits_[0] |= 0x00000002u;
}
void CacheEntryProto::clear_has_quality() {
  _has_bits_[0] &= ~0x00000002u;
}
void CacheEntryProto::clear_quality() {
  quality_ = 0;
  clear_has_quality();
}
double CacheEntryProto::quality() const {
  // @@protoc_insertion_point(field_get:smanager.CacheEntryProto.quality)
  return quality_;
}
void CacheEntryProto::set_quality(double value) {
  set_has_quality();
  quality_ = value;
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.quality)
}

// optional uint32 set_time = 2;
bool CacheEntryProto::has_set_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void CacheEntryProto::set_has_set_time() {
  _has_bits_[0] |= 0x00000004u;
}
void CacheEntryProto::clear_has_set_time() {
  _has_bits_[0] &= ~0x00000004u;
}
void CacheEntryProto::clear_set_time() {
  set_time_ = 0u;
  clear_has_set_time();
}
::google::protobuf::uint32 CacheEntryProto::set_time() const {
  // @@protoc_insertion_point(field_get:smanager.CacheEntryProto.set_time)
  return set_time_;
}
void CacheEntryProto::set_set_time(::google::protobuf::uint32 value) {
  set_has_set_time();
  set_time_ = value;
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.set_time)
}

// optional uint32 expiration = 3;
bool CacheEntryProto::has_expiration() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void CacheEntryProto::set_has_expiration() {
  _has_bits_[0] |= 0x00000008u;
}
void CacheEntryProto::clear_has_expiration() {
  _has_bits_[0] &= ~0x00000008u;
}
void CacheEntryProto::clear_expiration() {
  expiration_ = 0u;
  clear_has_expiration();
}
::google::protobuf::uint32 CacheEntryProto::expiration() const {
  // @@protoc_insertion_point(field_get:smanager.CacheEntryProto.expiration)
  return expiration_;
}
void CacheEntryProto::set_expiration(::google::protobuf::uint32 value) {
  set_has_expiration();
  expiration_ = value;
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.expiration)
}

// optional uint64 bad_url_hash = 4;
bool CacheEntryProto::has_bad_url_hash() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void CacheEntryProto::set_has_bad_url_hash() {
  _has_bits_[0] |= 0x00000010u;
}
void CacheEntryProto::clear_has_bad_url_hash() {
  _has_bits_[0] &= ~0x00000010u;
}
void CacheEntryProto::clear_bad_url_hash() {
  bad_url_hash_ = GOOGLE_ULONGLONG(0);
  clear_has_bad_url_hash();
}
::google::protobuf::uint64 CacheEntryProto::bad_url_hash() const {
  // @@protoc_insertion_point(field_get:smanager.CacheEntryProto.bad_url_hash)
  return bad_url_hash_;
}
void CacheEntryProto::set_bad_url_hash(::google::protobuf::uint64 value) {
  set_has_bad_url_hash();
  bad_url_hash_ = value;
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.bad_url_hash)
}

// optional uint32 banned_urls = 5;
bool CacheEntryProto::has_banned_urls() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void CacheEntryProto::set_has_banned_urls() {
  _has_bits_[0] |= 0x00000020u;
}
void CacheEntryProto::clear_has_banned_urls() {
  _has_bits_[0] &= ~0x00000020u;
}
void CacheEntryProto::clear_banned_urls() {
  banned_urls_ = 0u;
  clear_has_banned_urls();
}
::google::protobuf::uint32 CacheEntryProto::banned_urls() const {
  // @@protoc_insertion_point(field_get:smanager.CacheEntryProto.banned_urls)
  return banned_urls_;
}
void CacheEntryProto::set_banned_urls(::google::protobuf::uint32 value) {
  set_has_banned_urls();
  banned_urls_ = value;
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.banned_urls)
}

// required bytes result = 15;
bool CacheEntryProto::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CacheEntryProto::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
void CacheEntryProto::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
void CacheEntryProto::clear_result() {
  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_result();
}
const ::std::string& CacheEntryProto::result() const {
  // @@protoc_insertion_point(field_get:smanager.CacheEntryProto.result)
  return result_.GetNoArena();
}
void CacheEntryProto::set_result(const ::std::string& value) {
  set_has_result();
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.result)
}
#if LANG_CXX11
void CacheEntryProto::set_result(::std::string&& value) {
  set_has_result();
  result_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:smanager.CacheEntryProto.result)
}
#endif
void CacheEntryProto::set_result(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_result();
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:smanager.CacheEntryProto.result)
}
void CacheEntryProto::set_result(const void* value, size_t size) {
  set_has_result();
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:smanager.CacheEntryProto.result)
}
::std::string* CacheEntryProto::mutable_result() {
  set_has_result();
  // @@protoc_insertion_point(field_mutable:smanager.CacheEntryProto.result)
  return result_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CacheEntryProto::release_result() {
  // @@protoc_insertion_point(field_release:smanager.CacheEntryProto.result)
  clear_has_result();
  return result_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CacheEntryProto::set_allocated_result(::std::string* result) {
  if (result != NULL) {
    set_has_result();
  } else {
    clear_has_result();
  }
  result_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), result);
  // @@protoc_insertion_point(field_set_allocated:smanager.CacheEntryProto.result)
}

// optional bool ban_all = 16;
bool CacheEntryProto::has_ban_all() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void CacheEntryProto::set_has_ban_all() {
  _has_bits_[0] |= 0x00000040u;
}
void CacheEntryProto::clear_has_ban_all() {
  _has_bits_[0] &= ~0x00000040u;
}
void CacheEntryProto::clear_ban_all() {
  ban_all_ = false;
  clear_has_ban_all();
}
bool CacheEntryProto::ban_all() const {
  // @@protoc_insertion_point(field_get:smanager.CacheEntryProto.ban_all)
  return ban_all_;
}
void CacheEntryProto::set_ban_all(bool value) {
  set_has_ban_all();
  ban_all_ = value;
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.ban_all)
}

// repeated string idx_versions = 17;
int CacheEntryProto::idx_versions_size() const {
  return idx_versions_.size();
}
void CacheEntryProto::clear_idx_versions() {
  idx_versions_.Clear();
}
const ::std::string& CacheEntryProto::idx_versions(int index) const {
  // @@protoc_insertion_point(field_get:smanager.CacheEntryProto.idx_versions)
  return idx_versions_.Get(index);
}
::std::string* CacheEntryProto::mutable_idx_versions(int index) {
  // @@protoc_insertion_point(field_mutable:smanager.CacheEntryProto.idx_versions)
  return idx_versions_.Mutable(index);
}
void CacheEntryProto::set_idx_versions(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.idx_versions)
  idx_versions_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void CacheEntryProto::set_idx_versions(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:smanager.CacheEntryProto.idx_versions)
  idx_versions_.Mutable(index)->assign(std::move(value));
}
#endif
void CacheEntryProto::set_idx_versions(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  idx_versions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:smanager.CacheEntryProto.idx_versions)
}
void CacheEntryProto::set_idx_versions(int index, const char* value, size_t size) {
  idx_versions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:smanager.CacheEntryProto.idx_versions)
}
::std::string* CacheEntryProto::add_idx_versions() {
  // @@protoc_insertion_point(field_add_mutable:smanager.CacheEntryProto.idx_versions)
  return idx_versions_.Add();
}
void CacheEntryProto::add_idx_versions(const ::std::string& value) {
  idx_versions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:smanager.CacheEntryProto.idx_versions)
}
#if LANG_CXX11
void CacheEntryProto::add_idx_versions(::std::string&& value) {
  idx_versions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:smanager.CacheEntryProto.idx_versions)
}
#endif
void CacheEntryProto::add_idx_versions(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  idx_versions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:smanager.CacheEntryProto.idx_versions)
}
void CacheEntryProto::add_idx_versions(const char* value, size_t size) {
  idx_versions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:smanager.CacheEntryProto.idx_versions)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
CacheEntryProto::idx_versions() const {
  // @@protoc_insertion_point(field_list:smanager.CacheEntryProto.idx_versions)
  return idx_versions_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
CacheEntryProto::mutable_idx_versions() {
  // @@protoc_insertion_point(field_mutable_list:smanager.CacheEntryProto.idx_versions)
  return &idx_versions_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace smanager

// @@protoc_insertion_point(global_scope)