// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chrome_os_app_list_launch_event.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "chrome_os_app_list_launch_event.pb.h"

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
class ChromeOSAppListLaunchEventProtoDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ChromeOSAppListLaunchEventProto>
     _instance;
} _ChromeOSAppListLaunchEventProto_default_instance_;

namespace protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, recurrence_ranker_user_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, launch_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, hour_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, search_query_length_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, hashed_target_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, hashed_query_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, hashed_domain_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, hashed_app_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChromeOSAppListLaunchEventProto, search_provider_type_),
  0,
  1,
  2,
  5,
  3,
  4,
  7,
  8,
  6,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 14, sizeof(ChromeOSAppListLaunchEventProto)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ChromeOSAppListLaunchEventProto_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "chrome_os_app_list_launch_event.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
  _ChromeOSAppListLaunchEventProto_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ChromeOSAppListLaunchEventProto_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n%chrome_os_app_list_launch_event.proto\022"
      "\007metrics\"\242\004\n\037ChromeOSAppListLaunchEventP"
      "roto\022!\n\031recurrence_ranker_user_id\030\001 \001(\006\022"
      "H\n\013launch_type\030\002 \001(\01623.metrics.ChromeOSA"
      "ppListLaunchEventProto.LaunchType\022\014\n\004hou"
      "r\030\003 \001(\005\022\033\n\023search_query_length\030\004 \001(\005\022\025\n\r"
      "hashed_target\030\005 \001(\006\022\024\n\014hashed_query\030\006 \001("
      "\006\022\025\n\rhashed_domain\030\007 \001(\006\022\022\n\nhashed_app\030\010"
      " \001(\006\022Y\n\024search_provider_type\030\t \001(\0162;.met"
      "rics.ChromeOSAppListLaunchEventProto.Sea"
      "rchProviderType\"J\n\nLaunchType\022\033\n\027LAUNCH_"
      "TYPE_UNSPECIFIED\020\000\022\r\n\tAPP_TILES\020\001\022\020\n\014RES"
      "ULTS_LIST\020\002\"h\n\022SearchProviderType\022\030\n\024PRO"
      "VIDER_UNSPECIFIED\020\000\022\013\n\007OMNIBOX\020\001\022\023\n\017ZERO"
      "_STATE_FILE\020\002\022\026\n\022DRIVE_QUICK_ACCESS\020\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 597);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "chrome_os_app_list_launch_event.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto

const ::google::protobuf::EnumDescriptor* ChromeOSAppListLaunchEventProto_LaunchType_descriptor() {
  protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::file_level_enum_descriptors[0];
}
bool ChromeOSAppListLaunchEventProto_LaunchType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto::LAUNCH_TYPE_UNSPECIFIED;
const ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto::APP_TILES;
const ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto::RESULTS_LIST;
const ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto::LaunchType_MIN;
const ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto::LaunchType_MAX;
const int ChromeOSAppListLaunchEventProto::LaunchType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* ChromeOSAppListLaunchEventProto_SearchProviderType_descriptor() {
  protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::file_level_enum_descriptors[1];
}
bool ChromeOSAppListLaunchEventProto_SearchProviderType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto::PROVIDER_UNSPECIFIED;
const ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto::OMNIBOX;
const ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto::ZERO_STATE_FILE;
const ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto::DRIVE_QUICK_ACCESS;
const ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto::SearchProviderType_MIN;
const ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto::SearchProviderType_MAX;
const int ChromeOSAppListLaunchEventProto::SearchProviderType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChromeOSAppListLaunchEventProto::kRecurrenceRankerUserIdFieldNumber;
const int ChromeOSAppListLaunchEventProto::kLaunchTypeFieldNumber;
const int ChromeOSAppListLaunchEventProto::kHourFieldNumber;
const int ChromeOSAppListLaunchEventProto::kSearchQueryLengthFieldNumber;
const int ChromeOSAppListLaunchEventProto::kHashedTargetFieldNumber;
const int ChromeOSAppListLaunchEventProto::kHashedQueryFieldNumber;
const int ChromeOSAppListLaunchEventProto::kHashedDomainFieldNumber;
const int ChromeOSAppListLaunchEventProto::kHashedAppFieldNumber;
const int ChromeOSAppListLaunchEventProto::kSearchProviderTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChromeOSAppListLaunchEventProto::ChromeOSAppListLaunchEventProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.ChromeOSAppListLaunchEventProto)
}
ChromeOSAppListLaunchEventProto::ChromeOSAppListLaunchEventProto(const ChromeOSAppListLaunchEventProto& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&recurrence_ranker_user_id_, &from.recurrence_ranker_user_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&hashed_app_) -
    reinterpret_cast<char*>(&recurrence_ranker_user_id_)) + sizeof(hashed_app_));
  // @@protoc_insertion_point(copy_constructor:metrics.ChromeOSAppListLaunchEventProto)
}

void ChromeOSAppListLaunchEventProto::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&recurrence_ranker_user_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&hashed_app_) -
      reinterpret_cast<char*>(&recurrence_ranker_user_id_)) + sizeof(hashed_app_));
}

ChromeOSAppListLaunchEventProto::~ChromeOSAppListLaunchEventProto() {
  // @@protoc_insertion_point(destructor:metrics.ChromeOSAppListLaunchEventProto)
  SharedDtor();
}

void ChromeOSAppListLaunchEventProto::SharedDtor() {
}

void ChromeOSAppListLaunchEventProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChromeOSAppListLaunchEventProto::descriptor() {
  protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ChromeOSAppListLaunchEventProto& ChromeOSAppListLaunchEventProto::default_instance() {
  protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::InitDefaults();
  return *internal_default_instance();
}

ChromeOSAppListLaunchEventProto* ChromeOSAppListLaunchEventProto::New(::google::protobuf::Arena* arena) const {
  ChromeOSAppListLaunchEventProto* n = new ChromeOSAppListLaunchEventProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChromeOSAppListLaunchEventProto::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.ChromeOSAppListLaunchEventProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 255u) {
    ::memset(&recurrence_ranker_user_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&hashed_domain_) -
        reinterpret_cast<char*>(&recurrence_ranker_user_id_)) + sizeof(hashed_domain_));
  }
  hashed_app_ = GOOGLE_ULONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChromeOSAppListLaunchEventProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metrics.ChromeOSAppListLaunchEventProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed64 recurrence_ranker_user_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_recurrence_ranker_user_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &recurrence_ranker_user_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .metrics.ChromeOSAppListLaunchEventProto.LaunchType launch_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::metrics::ChromeOSAppListLaunchEventProto_LaunchType_IsValid(value)) {
            set_launch_type(static_cast< ::metrics::ChromeOSAppListLaunchEventProto_LaunchType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 hour = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_hour();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hour_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 search_query_length = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_search_query_length();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &search_query_length_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional fixed64 hashed_target = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {
          set_has_hashed_target();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &hashed_target_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional fixed64 hashed_query = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {
          set_has_hashed_query();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &hashed_query_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional fixed64 hashed_domain = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {
          set_has_hashed_domain();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &hashed_domain_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional fixed64 hashed_app = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {
          set_has_hashed_app();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &hashed_app_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .metrics.ChromeOSAppListLaunchEventProto.SearchProviderType search_provider_type = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType_IsValid(value)) {
            set_search_provider_type(static_cast< ::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                9, static_cast< ::google::protobuf::uint64>(value));
          }
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
  // @@protoc_insertion_point(parse_success:metrics.ChromeOSAppListLaunchEventProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.ChromeOSAppListLaunchEventProto)
  return false;
#undef DO_
}

void ChromeOSAppListLaunchEventProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.ChromeOSAppListLaunchEventProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 recurrence_ranker_user_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->recurrence_ranker_user_id(), output);
  }

  // optional .metrics.ChromeOSAppListLaunchEventProto.LaunchType launch_type = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->launch_type(), output);
  }

  // optional int32 hour = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->hour(), output);
  }

  // optional int32 search_query_length = 4;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->search_query_length(), output);
  }

  // optional fixed64 hashed_target = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(5, this->hashed_target(), output);
  }

  // optional fixed64 hashed_query = 6;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(6, this->hashed_query(), output);
  }

  // optional fixed64 hashed_domain = 7;
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(7, this->hashed_domain(), output);
  }

  // optional fixed64 hashed_app = 8;
  if (cached_has_bits & 0x00000100u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(8, this->hashed_app(), output);
  }

  // optional .metrics.ChromeOSAppListLaunchEventProto.SearchProviderType search_provider_type = 9;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      9, this->search_provider_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:metrics.ChromeOSAppListLaunchEventProto)
}

::google::protobuf::uint8* ChromeOSAppListLaunchEventProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metrics.ChromeOSAppListLaunchEventProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 recurrence_ranker_user_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->recurrence_ranker_user_id(), target);
  }

  // optional .metrics.ChromeOSAppListLaunchEventProto.LaunchType launch_type = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->launch_type(), target);
  }

  // optional int32 hour = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->hour(), target);
  }

  // optional int32 search_query_length = 4;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->search_query_length(), target);
  }

  // optional fixed64 hashed_target = 5;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(5, this->hashed_target(), target);
  }

  // optional fixed64 hashed_query = 6;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(6, this->hashed_query(), target);
  }

  // optional fixed64 hashed_domain = 7;
  if (cached_has_bits & 0x00000080u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(7, this->hashed_domain(), target);
  }

  // optional fixed64 hashed_app = 8;
  if (cached_has_bits & 0x00000100u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(8, this->hashed_app(), target);
  }

  // optional .metrics.ChromeOSAppListLaunchEventProto.SearchProviderType search_provider_type = 9;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      9, this->search_provider_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metrics.ChromeOSAppListLaunchEventProto)
  return target;
}

size_t ChromeOSAppListLaunchEventProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.ChromeOSAppListLaunchEventProto)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 255u) {
    // optional fixed64 recurrence_ranker_user_id = 1;
    if (has_recurrence_ranker_user_id()) {
      total_size += 1 + 8;
    }

    // optional .metrics.ChromeOSAppListLaunchEventProto.LaunchType launch_type = 2;
    if (has_launch_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->launch_type());
    }

    // optional int32 hour = 3;
    if (has_hour()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->hour());
    }

    // optional fixed64 hashed_target = 5;
    if (has_hashed_target()) {
      total_size += 1 + 8;
    }

    // optional fixed64 hashed_query = 6;
    if (has_hashed_query()) {
      total_size += 1 + 8;
    }

    // optional int32 search_query_length = 4;
    if (has_search_query_length()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->search_query_length());
    }

    // optional .metrics.ChromeOSAppListLaunchEventProto.SearchProviderType search_provider_type = 9;
    if (has_search_provider_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->search_provider_type());
    }

    // optional fixed64 hashed_domain = 7;
    if (has_hashed_domain()) {
      total_size += 1 + 8;
    }

  }
  // optional fixed64 hashed_app = 8;
  if (has_hashed_app()) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChromeOSAppListLaunchEventProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metrics.ChromeOSAppListLaunchEventProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ChromeOSAppListLaunchEventProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ChromeOSAppListLaunchEventProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metrics.ChromeOSAppListLaunchEventProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metrics.ChromeOSAppListLaunchEventProto)
    MergeFrom(*source);
  }
}

void ChromeOSAppListLaunchEventProto::MergeFrom(const ChromeOSAppListLaunchEventProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.ChromeOSAppListLaunchEventProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      recurrence_ranker_user_id_ = from.recurrence_ranker_user_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      launch_type_ = from.launch_type_;
    }
    if (cached_has_bits & 0x00000004u) {
      hour_ = from.hour_;
    }
    if (cached_has_bits & 0x00000008u) {
      hashed_target_ = from.hashed_target_;
    }
    if (cached_has_bits & 0x00000010u) {
      hashed_query_ = from.hashed_query_;
    }
    if (cached_has_bits & 0x00000020u) {
      search_query_length_ = from.search_query_length_;
    }
    if (cached_has_bits & 0x00000040u) {
      search_provider_type_ = from.search_provider_type_;
    }
    if (cached_has_bits & 0x00000080u) {
      hashed_domain_ = from.hashed_domain_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    set_hashed_app(from.hashed_app());
  }
}

void ChromeOSAppListLaunchEventProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metrics.ChromeOSAppListLaunchEventProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChromeOSAppListLaunchEventProto::CopyFrom(const ChromeOSAppListLaunchEventProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.ChromeOSAppListLaunchEventProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeOSAppListLaunchEventProto::IsInitialized() const {
  return true;
}

void ChromeOSAppListLaunchEventProto::Swap(ChromeOSAppListLaunchEventProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChromeOSAppListLaunchEventProto::InternalSwap(ChromeOSAppListLaunchEventProto* other) {
  using std::swap;
  swap(recurrence_ranker_user_id_, other->recurrence_ranker_user_id_);
  swap(launch_type_, other->launch_type_);
  swap(hour_, other->hour_);
  swap(hashed_target_, other->hashed_target_);
  swap(hashed_query_, other->hashed_query_);
  swap(search_query_length_, other->search_query_length_);
  swap(search_provider_type_, other->search_provider_type_);
  swap(hashed_domain_, other->hashed_domain_);
  swap(hashed_app_, other->hashed_app_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChromeOSAppListLaunchEventProto::GetMetadata() const {
  protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_chrome_5fos_5fapp_5flist_5flaunch_5fevent_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChromeOSAppListLaunchEventProto

// optional fixed64 recurrence_ranker_user_id = 1;
bool ChromeOSAppListLaunchEventProto::has_recurrence_ranker_user_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_recurrence_ranker_user_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ChromeOSAppListLaunchEventProto::clear_has_recurrence_ranker_user_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ChromeOSAppListLaunchEventProto::clear_recurrence_ranker_user_id() {
  recurrence_ranker_user_id_ = GOOGLE_ULONGLONG(0);
  clear_has_recurrence_ranker_user_id();
}
::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::recurrence_ranker_user_id() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.recurrence_ranker_user_id)
  return recurrence_ranker_user_id_;
}
void ChromeOSAppListLaunchEventProto::set_recurrence_ranker_user_id(::google::protobuf::uint64 value) {
  set_has_recurrence_ranker_user_id();
  recurrence_ranker_user_id_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.recurrence_ranker_user_id)
}

// optional .metrics.ChromeOSAppListLaunchEventProto.LaunchType launch_type = 2;
bool ChromeOSAppListLaunchEventProto::has_launch_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_launch_type() {
  _has_bits_[0] |= 0x00000002u;
}
void ChromeOSAppListLaunchEventProto::clear_has_launch_type() {
  _has_bits_[0] &= ~0x00000002u;
}
void ChromeOSAppListLaunchEventProto::clear_launch_type() {
  launch_type_ = 0;
  clear_has_launch_type();
}
::metrics::ChromeOSAppListLaunchEventProto_LaunchType ChromeOSAppListLaunchEventProto::launch_type() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.launch_type)
  return static_cast< ::metrics::ChromeOSAppListLaunchEventProto_LaunchType >(launch_type_);
}
void ChromeOSAppListLaunchEventProto::set_launch_type(::metrics::ChromeOSAppListLaunchEventProto_LaunchType value) {
  assert(::metrics::ChromeOSAppListLaunchEventProto_LaunchType_IsValid(value));
  set_has_launch_type();
  launch_type_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.launch_type)
}

// optional int32 hour = 3;
bool ChromeOSAppListLaunchEventProto::has_hour() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_hour() {
  _has_bits_[0] |= 0x00000004u;
}
void ChromeOSAppListLaunchEventProto::clear_has_hour() {
  _has_bits_[0] &= ~0x00000004u;
}
void ChromeOSAppListLaunchEventProto::clear_hour() {
  hour_ = 0;
  clear_has_hour();
}
::google::protobuf::int32 ChromeOSAppListLaunchEventProto::hour() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hour)
  return hour_;
}
void ChromeOSAppListLaunchEventProto::set_hour(::google::protobuf::int32 value) {
  set_has_hour();
  hour_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hour)
}

// optional int32 search_query_length = 4;
bool ChromeOSAppListLaunchEventProto::has_search_query_length() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_search_query_length() {
  _has_bits_[0] |= 0x00000020u;
}
void ChromeOSAppListLaunchEventProto::clear_has_search_query_length() {
  _has_bits_[0] &= ~0x00000020u;
}
void ChromeOSAppListLaunchEventProto::clear_search_query_length() {
  search_query_length_ = 0;
  clear_has_search_query_length();
}
::google::protobuf::int32 ChromeOSAppListLaunchEventProto::search_query_length() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.search_query_length)
  return search_query_length_;
}
void ChromeOSAppListLaunchEventProto::set_search_query_length(::google::protobuf::int32 value) {
  set_has_search_query_length();
  search_query_length_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.search_query_length)
}

// optional fixed64 hashed_target = 5;
bool ChromeOSAppListLaunchEventProto::has_hashed_target() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_hashed_target() {
  _has_bits_[0] |= 0x00000008u;
}
void ChromeOSAppListLaunchEventProto::clear_has_hashed_target() {
  _has_bits_[0] &= ~0x00000008u;
}
void ChromeOSAppListLaunchEventProto::clear_hashed_target() {
  hashed_target_ = GOOGLE_ULONGLONG(0);
  clear_has_hashed_target();
}
::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::hashed_target() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hashed_target)
  return hashed_target_;
}
void ChromeOSAppListLaunchEventProto::set_hashed_target(::google::protobuf::uint64 value) {
  set_has_hashed_target();
  hashed_target_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hashed_target)
}

// optional fixed64 hashed_query = 6;
bool ChromeOSAppListLaunchEventProto::has_hashed_query() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_hashed_query() {
  _has_bits_[0] |= 0x00000010u;
}
void ChromeOSAppListLaunchEventProto::clear_has_hashed_query() {
  _has_bits_[0] &= ~0x00000010u;
}
void ChromeOSAppListLaunchEventProto::clear_hashed_query() {
  hashed_query_ = GOOGLE_ULONGLONG(0);
  clear_has_hashed_query();
}
::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::hashed_query() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hashed_query)
  return hashed_query_;
}
void ChromeOSAppListLaunchEventProto::set_hashed_query(::google::protobuf::uint64 value) {
  set_has_hashed_query();
  hashed_query_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hashed_query)
}

// optional fixed64 hashed_domain = 7;
bool ChromeOSAppListLaunchEventProto::has_hashed_domain() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_hashed_domain() {
  _has_bits_[0] |= 0x00000080u;
}
void ChromeOSAppListLaunchEventProto::clear_has_hashed_domain() {
  _has_bits_[0] &= ~0x00000080u;
}
void ChromeOSAppListLaunchEventProto::clear_hashed_domain() {
  hashed_domain_ = GOOGLE_ULONGLONG(0);
  clear_has_hashed_domain();
}
::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::hashed_domain() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hashed_domain)
  return hashed_domain_;
}
void ChromeOSAppListLaunchEventProto::set_hashed_domain(::google::protobuf::uint64 value) {
  set_has_hashed_domain();
  hashed_domain_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hashed_domain)
}

// optional fixed64 hashed_app = 8;
bool ChromeOSAppListLaunchEventProto::has_hashed_app() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_hashed_app() {
  _has_bits_[0] |= 0x00000100u;
}
void ChromeOSAppListLaunchEventProto::clear_has_hashed_app() {
  _has_bits_[0] &= ~0x00000100u;
}
void ChromeOSAppListLaunchEventProto::clear_hashed_app() {
  hashed_app_ = GOOGLE_ULONGLONG(0);
  clear_has_hashed_app();
}
::google::protobuf::uint64 ChromeOSAppListLaunchEventProto::hashed_app() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.hashed_app)
  return hashed_app_;
}
void ChromeOSAppListLaunchEventProto::set_hashed_app(::google::protobuf::uint64 value) {
  set_has_hashed_app();
  hashed_app_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.hashed_app)
}

// optional .metrics.ChromeOSAppListLaunchEventProto.SearchProviderType search_provider_type = 9;
bool ChromeOSAppListLaunchEventProto::has_search_provider_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void ChromeOSAppListLaunchEventProto::set_has_search_provider_type() {
  _has_bits_[0] |= 0x00000040u;
}
void ChromeOSAppListLaunchEventProto::clear_has_search_provider_type() {
  _has_bits_[0] &= ~0x00000040u;
}
void ChromeOSAppListLaunchEventProto::clear_search_provider_type() {
  search_provider_type_ = 0;
  clear_has_search_provider_type();
}
::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType ChromeOSAppListLaunchEventProto::search_provider_type() const {
  // @@protoc_insertion_point(field_get:metrics.ChromeOSAppListLaunchEventProto.search_provider_type)
  return static_cast< ::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType >(search_provider_type_);
}
void ChromeOSAppListLaunchEventProto::set_search_provider_type(::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType value) {
  assert(::metrics::ChromeOSAppListLaunchEventProto_SearchProviderType_IsValid(value));
  set_has_search_provider_type();
  search_provider_type_ = value;
  // @@protoc_insertion_point(field_set:metrics.ChromeOSAppListLaunchEventProto.search_provider_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

// @@protoc_insertion_point(global_scope)