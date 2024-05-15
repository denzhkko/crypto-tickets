// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: howtos.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "howtos.pb.h"

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

namespace ru {
namespace mail {
namespace go {
namespace webbase {
namespace howtos {
class HowtosDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Howtos>
     _instance;
} _Howtos_default_instance_;

namespace protobuf_howtos_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Howtos, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Howtos, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Howtos, query_text_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Howtos, title_site_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Howtos, doc_url_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Howtos, answer_),
  0,
  1,
  2,
  3,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(Howtos)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Howtos_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "howtos.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _Howtos_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Howtos_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014howtos.proto\022\031ru.mail.go.webbase.howto"
      "s\"Q\n\006Howtos\022\022\n\nquery_text\030\001 \001(\t\022\022\n\ntitle"
      "_site\030\002 \001(\t\022\017\n\007doc_url\030\003 \001(\t\022\016\n\006answer\030\004"
      " \001(\tB\014B\nHowtosData"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 138);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "howtos.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_howtos_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Howtos::kQueryTextFieldNumber;
const int Howtos::kTitleSiteFieldNumber;
const int Howtos::kDocUrlFieldNumber;
const int Howtos::kAnswerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Howtos::Howtos()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_howtos_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ru.mail.go.webbase.howtos.Howtos)
}
Howtos::Howtos(const Howtos& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_query_text()) {
    query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
  }
  title_site_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_title_site()) {
    title_site_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_site_);
  }
  doc_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_doc_url()) {
    doc_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.doc_url_);
  }
  answer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_answer()) {
    answer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.answer_);
  }
  // @@protoc_insertion_point(copy_constructor:ru.mail.go.webbase.howtos.Howtos)
}

void Howtos::SharedCtor() {
  _cached_size_ = 0;
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  title_site_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  doc_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  answer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Howtos::~Howtos() {
  // @@protoc_insertion_point(destructor:ru.mail.go.webbase.howtos.Howtos)
  SharedDtor();
}

void Howtos::SharedDtor() {
  query_text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  title_site_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  doc_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  answer_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Howtos::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Howtos::descriptor() {
  protobuf_howtos_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_howtos_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Howtos& Howtos::default_instance() {
  protobuf_howtos_2eproto::InitDefaults();
  return *internal_default_instance();
}

Howtos* Howtos::New(::google::protobuf::Arena* arena) const {
  Howtos* n = new Howtos;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Howtos::Clear() {
// @@protoc_insertion_point(message_clear_start:ru.mail.go.webbase.howtos.Howtos)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!query_text_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*query_text_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!title_site_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*title_site_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(!doc_url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*doc_url_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(!answer_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*answer_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Howtos::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ru.mail.go.webbase.howtos.Howtos)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string query_text = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_query_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->query_text().data(), static_cast<int>(this->query_text().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ru.mail.go.webbase.howtos.Howtos.query_text");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string title_site = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title_site()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->title_site().data(), static_cast<int>(this->title_site().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ru.mail.go.webbase.howtos.Howtos.title_site");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string doc_url = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_doc_url()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->doc_url().data(), static_cast<int>(this->doc_url().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ru.mail.go.webbase.howtos.Howtos.doc_url");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string answer = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_answer()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->answer().data(), static_cast<int>(this->answer().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ru.mail.go.webbase.howtos.Howtos.answer");
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
  // @@protoc_insertion_point(parse_success:ru.mail.go.webbase.howtos.Howtos)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ru.mail.go.webbase.howtos.Howtos)
  return false;
#undef DO_
}

void Howtos::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ru.mail.go.webbase.howtos.Howtos)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ru.mail.go.webbase.howtos.Howtos.query_text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->query_text(), output);
  }

  // optional string title_site = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->title_site().data(), static_cast<int>(this->title_site().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ru.mail.go.webbase.howtos.Howtos.title_site");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->title_site(), output);
  }

  // optional string doc_url = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->doc_url().data(), static_cast<int>(this->doc_url().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ru.mail.go.webbase.howtos.Howtos.doc_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->doc_url(), output);
  }

  // optional string answer = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->answer().data(), static_cast<int>(this->answer().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ru.mail.go.webbase.howtos.Howtos.answer");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->answer(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ru.mail.go.webbase.howtos.Howtos)
}

::google::protobuf::uint8* Howtos::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ru.mail.go.webbase.howtos.Howtos)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ru.mail.go.webbase.howtos.Howtos.query_text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query_text(), target);
  }

  // optional string title_site = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->title_site().data(), static_cast<int>(this->title_site().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ru.mail.go.webbase.howtos.Howtos.title_site");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->title_site(), target);
  }

  // optional string doc_url = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->doc_url().data(), static_cast<int>(this->doc_url().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ru.mail.go.webbase.howtos.Howtos.doc_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->doc_url(), target);
  }

  // optional string answer = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->answer().data(), static_cast<int>(this->answer().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ru.mail.go.webbase.howtos.Howtos.answer");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->answer(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ru.mail.go.webbase.howtos.Howtos)
  return target;
}

size_t Howtos::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ru.mail.go.webbase.howtos.Howtos)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional string query_text = 1;
    if (has_query_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->query_text());
    }

    // optional string title_site = 2;
    if (has_title_site()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->title_site());
    }

    // optional string doc_url = 3;
    if (has_doc_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->doc_url());
    }

    // optional string answer = 4;
    if (has_answer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->answer());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Howtos::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ru.mail.go.webbase.howtos.Howtos)
  GOOGLE_DCHECK_NE(&from, this);
  const Howtos* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Howtos>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ru.mail.go.webbase.howtos.Howtos)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ru.mail.go.webbase.howtos.Howtos)
    MergeFrom(*source);
  }
}

void Howtos::MergeFrom(const Howtos& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ru.mail.go.webbase.howtos.Howtos)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_query_text();
      query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_title_site();
      title_site_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_site_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_doc_url();
      doc_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.doc_url_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_answer();
      answer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.answer_);
    }
  }
}

void Howtos::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ru.mail.go.webbase.howtos.Howtos)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Howtos::CopyFrom(const Howtos& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ru.mail.go.webbase.howtos.Howtos)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Howtos::IsInitialized() const {
  return true;
}

void Howtos::Swap(Howtos* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Howtos::InternalSwap(Howtos* other) {
  using std::swap;
  query_text_.Swap(&other->query_text_);
  title_site_.Swap(&other->title_site_);
  doc_url_.Swap(&other->doc_url_);
  answer_.Swap(&other->answer_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Howtos::GetMetadata() const {
  protobuf_howtos_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_howtos_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Howtos

// optional string query_text = 1;
bool Howtos::has_query_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Howtos::set_has_query_text() {
  _has_bits_[0] |= 0x00000001u;
}
void Howtos::clear_has_query_text() {
  _has_bits_[0] &= ~0x00000001u;
}
void Howtos::clear_query_text() {
  query_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query_text();
}
const ::std::string& Howtos::query_text() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.howtos.Howtos.query_text)
  return query_text_.GetNoArena();
}
void Howtos::set_query_text(const ::std::string& value) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.howtos.Howtos.query_text)
}
#if LANG_CXX11
void Howtos::set_query_text(::std::string&& value) {
  set_has_query_text();
  query_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.howtos.Howtos.query_text)
}
#endif
void Howtos::set_query_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.howtos.Howtos.query_text)
}
void Howtos::set_query_text(const char* value, size_t size) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.howtos.Howtos.query_text)
}
::std::string* Howtos::mutable_query_text() {
  set_has_query_text();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.howtos.Howtos.query_text)
  return query_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Howtos::release_query_text() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.howtos.Howtos.query_text)
  clear_has_query_text();
  return query_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Howtos::set_allocated_query_text(::std::string* query_text) {
  if (query_text != NULL) {
    set_has_query_text();
  } else {
    clear_has_query_text();
  }
  query_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query_text);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.howtos.Howtos.query_text)
}

// optional string title_site = 2;
bool Howtos::has_title_site() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Howtos::set_has_title_site() {
  _has_bits_[0] |= 0x00000002u;
}
void Howtos::clear_has_title_site() {
  _has_bits_[0] &= ~0x00000002u;
}
void Howtos::clear_title_site() {
  title_site_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_title_site();
}
const ::std::string& Howtos::title_site() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.howtos.Howtos.title_site)
  return title_site_.GetNoArena();
}
void Howtos::set_title_site(const ::std::string& value) {
  set_has_title_site();
  title_site_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.howtos.Howtos.title_site)
}
#if LANG_CXX11
void Howtos::set_title_site(::std::string&& value) {
  set_has_title_site();
  title_site_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.howtos.Howtos.title_site)
}
#endif
void Howtos::set_title_site(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_title_site();
  title_site_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.howtos.Howtos.title_site)
}
void Howtos::set_title_site(const char* value, size_t size) {
  set_has_title_site();
  title_site_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.howtos.Howtos.title_site)
}
::std::string* Howtos::mutable_title_site() {
  set_has_title_site();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.howtos.Howtos.title_site)
  return title_site_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Howtos::release_title_site() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.howtos.Howtos.title_site)
  clear_has_title_site();
  return title_site_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Howtos::set_allocated_title_site(::std::string* title_site) {
  if (title_site != NULL) {
    set_has_title_site();
  } else {
    clear_has_title_site();
  }
  title_site_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title_site);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.howtos.Howtos.title_site)
}

// optional string doc_url = 3;
bool Howtos::has_doc_url() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Howtos::set_has_doc_url() {
  _has_bits_[0] |= 0x00000004u;
}
void Howtos::clear_has_doc_url() {
  _has_bits_[0] &= ~0x00000004u;
}
void Howtos::clear_doc_url() {
  doc_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_doc_url();
}
const ::std::string& Howtos::doc_url() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.howtos.Howtos.doc_url)
  return doc_url_.GetNoArena();
}
void Howtos::set_doc_url(const ::std::string& value) {
  set_has_doc_url();
  doc_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.howtos.Howtos.doc_url)
}
#if LANG_CXX11
void Howtos::set_doc_url(::std::string&& value) {
  set_has_doc_url();
  doc_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.howtos.Howtos.doc_url)
}
#endif
void Howtos::set_doc_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_doc_url();
  doc_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.howtos.Howtos.doc_url)
}
void Howtos::set_doc_url(const char* value, size_t size) {
  set_has_doc_url();
  doc_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.howtos.Howtos.doc_url)
}
::std::string* Howtos::mutable_doc_url() {
  set_has_doc_url();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.howtos.Howtos.doc_url)
  return doc_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Howtos::release_doc_url() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.howtos.Howtos.doc_url)
  clear_has_doc_url();
  return doc_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Howtos::set_allocated_doc_url(::std::string* doc_url) {
  if (doc_url != NULL) {
    set_has_doc_url();
  } else {
    clear_has_doc_url();
  }
  doc_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), doc_url);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.howtos.Howtos.doc_url)
}

// optional string answer = 4;
bool Howtos::has_answer() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Howtos::set_has_answer() {
  _has_bits_[0] |= 0x00000008u;
}
void Howtos::clear_has_answer() {
  _has_bits_[0] &= ~0x00000008u;
}
void Howtos::clear_answer() {
  answer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_answer();
}
const ::std::string& Howtos::answer() const {
  // @@protoc_insertion_point(field_get:ru.mail.go.webbase.howtos.Howtos.answer)
  return answer_.GetNoArena();
}
void Howtos::set_answer(const ::std::string& value) {
  set_has_answer();
  answer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ru.mail.go.webbase.howtos.Howtos.answer)
}
#if LANG_CXX11
void Howtos::set_answer(::std::string&& value) {
  set_has_answer();
  answer_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ru.mail.go.webbase.howtos.Howtos.answer)
}
#endif
void Howtos::set_answer(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_answer();
  answer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ru.mail.go.webbase.howtos.Howtos.answer)
}
void Howtos::set_answer(const char* value, size_t size) {
  set_has_answer();
  answer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ru.mail.go.webbase.howtos.Howtos.answer)
}
::std::string* Howtos::mutable_answer() {
  set_has_answer();
  // @@protoc_insertion_point(field_mutable:ru.mail.go.webbase.howtos.Howtos.answer)
  return answer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Howtos::release_answer() {
  // @@protoc_insertion_point(field_release:ru.mail.go.webbase.howtos.Howtos.answer)
  clear_has_answer();
  return answer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Howtos::set_allocated_answer(::std::string* answer) {
  if (answer != NULL) {
    set_has_answer();
  } else {
    clear_has_answer();
  }
  answer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), answer);
  // @@protoc_insertion_point(field_set_allocated:ru.mail.go.webbase.howtos.Howtos.answer)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace howtos
}  // namespace webbase
}  // namespace go
}  // namespace mail
}  // namespace ru

// @@protoc_insertion_point(global_scope)
