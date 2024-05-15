// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: commercial_idx.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "commercial_idx.pb.h"

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

namespace pb {
namespace commercial {
class RidIdxDocumentDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<RidIdxDocument>
     _instance;
} _RidIdxDocument_default_instance_;
class VidIdxDocumentDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<VidIdxDocument>
     _instance;
} _VidIdxDocument_default_instance_;

namespace protobuf_commercial_5fidx_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RidIdxDocument, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RidIdxDocument, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RidIdxDocument, query_text_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RidIdxDocument, data_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidIdxDocument, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidIdxDocument, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidIdxDocument, query_text_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidIdxDocument, data_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(RidIdxDocument)},
  { 9, 16, sizeof(VidIdxDocument)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_RidIdxDocument_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidIdxDocument_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "commercial_idx.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  ::pb::commercial::protobuf_commercial_2eproto::InitDefaults();
  _RidIdxDocument_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_RidIdxDocument_default_instance_);_VidIdxDocument_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_VidIdxDocument_default_instance_);_RidIdxDocument_default_instance_._instance.get_mutable()->data_ = const_cast< ::pb::commercial::RidQueries*>(
      ::pb::commercial::RidQueries::internal_default_instance());
  _VidIdxDocument_default_instance_._instance.get_mutable()->data_ = const_cast< ::pb::commercial::VidQueries*>(
      ::pb::commercial::VidQueries::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024commercial_idx.proto\022\rpb.commercial\032\020c"
      "ommercial.proto\"M\n\016RidIdxDocument\022\022\n\nque"
      "ry_text\030\001 \001(\t\022\'\n\004data\030\002 \001(\0132\031.pb.commerc"
      "ial.RidQueries\"M\n\016VidIdxDocument\022\022\n\nquer"
      "y_text\030\001 \001(\t\022\'\n\004data\030\002 \001(\0132\031.pb.commerci"
      "al.VidQueries"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 213);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "commercial_idx.proto", &protobuf_RegisterTypes);
  ::pb::commercial::protobuf_commercial_2eproto::AddDescriptors();
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

}  // namespace protobuf_commercial_5fidx_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RidIdxDocument::kQueryTextFieldNumber;
const int RidIdxDocument::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RidIdxDocument::RidIdxDocument()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_commercial_5fidx_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.commercial.RidIdxDocument)
}
RidIdxDocument::RidIdxDocument(const RidIdxDocument& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_query_text()) {
    query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
  }
  if (from.has_data()) {
    data_ = new ::pb::commercial::RidQueries(*from.data_);
  } else {
    data_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:pb.commercial.RidIdxDocument)
}

void RidIdxDocument::SharedCtor() {
  _cached_size_ = 0;
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_ = NULL;
}

RidIdxDocument::~RidIdxDocument() {
  // @@protoc_insertion_point(destructor:pb.commercial.RidIdxDocument)
  SharedDtor();
}

void RidIdxDocument::SharedDtor() {
  query_text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete data_;
}

void RidIdxDocument::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RidIdxDocument::descriptor() {
  protobuf_commercial_5fidx_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_commercial_5fidx_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RidIdxDocument& RidIdxDocument::default_instance() {
  protobuf_commercial_5fidx_2eproto::InitDefaults();
  return *internal_default_instance();
}

RidIdxDocument* RidIdxDocument::New(::google::protobuf::Arena* arena) const {
  RidIdxDocument* n = new RidIdxDocument;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RidIdxDocument::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.commercial.RidIdxDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!query_text_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*query_text_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(data_ != NULL);
      data_->::pb::commercial::RidQueries::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RidIdxDocument::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pb.commercial.RidIdxDocument)
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
            "pb.commercial.RidIdxDocument.query_text");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .pb.commercial.RidQueries data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_data()));
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
  // @@protoc_insertion_point(parse_success:pb.commercial.RidIdxDocument)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pb.commercial.RidIdxDocument)
  return false;
#undef DO_
}

void RidIdxDocument::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pb.commercial.RidIdxDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pb.commercial.RidIdxDocument.query_text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->query_text(), output);
  }

  // optional .pb.commercial.RidQueries data = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->data_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pb.commercial.RidIdxDocument)
}

::google::protobuf::uint8* RidIdxDocument::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pb.commercial.RidIdxDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pb.commercial.RidIdxDocument.query_text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query_text(), target);
  }

  // optional .pb.commercial.RidQueries data = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->data_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.commercial.RidIdxDocument)
  return target;
}

size_t RidIdxDocument::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.commercial.RidIdxDocument)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional string query_text = 1;
    if (has_query_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->query_text());
    }

    // optional .pb.commercial.RidQueries data = 2;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->data_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RidIdxDocument::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.commercial.RidIdxDocument)
  GOOGLE_DCHECK_NE(&from, this);
  const RidIdxDocument* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RidIdxDocument>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.commercial.RidIdxDocument)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.commercial.RidIdxDocument)
    MergeFrom(*source);
  }
}

void RidIdxDocument::MergeFrom(const RidIdxDocument& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.commercial.RidIdxDocument)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_query_text();
      query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_data()->::pb::commercial::RidQueries::MergeFrom(from.data());
    }
  }
}

void RidIdxDocument::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.commercial.RidIdxDocument)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RidIdxDocument::CopyFrom(const RidIdxDocument& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.commercial.RidIdxDocument)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RidIdxDocument::IsInitialized() const {
  return true;
}

void RidIdxDocument::Swap(RidIdxDocument* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RidIdxDocument::InternalSwap(RidIdxDocument* other) {
  using std::swap;
  query_text_.Swap(&other->query_text_);
  swap(data_, other->data_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RidIdxDocument::GetMetadata() const {
  protobuf_commercial_5fidx_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_commercial_5fidx_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RidIdxDocument

// optional string query_text = 1;
bool RidIdxDocument::has_query_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RidIdxDocument::set_has_query_text() {
  _has_bits_[0] |= 0x00000001u;
}
void RidIdxDocument::clear_has_query_text() {
  _has_bits_[0] &= ~0x00000001u;
}
void RidIdxDocument::clear_query_text() {
  query_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query_text();
}
const ::std::string& RidIdxDocument::query_text() const {
  // @@protoc_insertion_point(field_get:pb.commercial.RidIdxDocument.query_text)
  return query_text_.GetNoArena();
}
void RidIdxDocument::set_query_text(const ::std::string& value) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.commercial.RidIdxDocument.query_text)
}
#if LANG_CXX11
void RidIdxDocument::set_query_text(::std::string&& value) {
  set_has_query_text();
  query_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.commercial.RidIdxDocument.query_text)
}
#endif
void RidIdxDocument::set_query_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.commercial.RidIdxDocument.query_text)
}
void RidIdxDocument::set_query_text(const char* value, size_t size) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.commercial.RidIdxDocument.query_text)
}
::std::string* RidIdxDocument::mutable_query_text() {
  set_has_query_text();
  // @@protoc_insertion_point(field_mutable:pb.commercial.RidIdxDocument.query_text)
  return query_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* RidIdxDocument::release_query_text() {
  // @@protoc_insertion_point(field_release:pb.commercial.RidIdxDocument.query_text)
  clear_has_query_text();
  return query_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void RidIdxDocument::set_allocated_query_text(::std::string* query_text) {
  if (query_text != NULL) {
    set_has_query_text();
  } else {
    clear_has_query_text();
  }
  query_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query_text);
  // @@protoc_insertion_point(field_set_allocated:pb.commercial.RidIdxDocument.query_text)
}

// optional .pb.commercial.RidQueries data = 2;
bool RidIdxDocument::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void RidIdxDocument::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
void RidIdxDocument::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
void RidIdxDocument::clear_data() {
  if (data_ != NULL) data_->::pb::commercial::RidQueries::Clear();
  clear_has_data();
}
const ::pb::commercial::RidQueries& RidIdxDocument::data() const {
  const ::pb::commercial::RidQueries* p = data_;
  // @@protoc_insertion_point(field_get:pb.commercial.RidIdxDocument.data)
  return p != NULL ? *p : *reinterpret_cast<const ::pb::commercial::RidQueries*>(
      &::pb::commercial::_RidQueries_default_instance_);
}
::pb::commercial::RidQueries* RidIdxDocument::mutable_data() {
  set_has_data();
  if (data_ == NULL) {
    data_ = new ::pb::commercial::RidQueries;
  }
  // @@protoc_insertion_point(field_mutable:pb.commercial.RidIdxDocument.data)
  return data_;
}
::pb::commercial::RidQueries* RidIdxDocument::release_data() {
  // @@protoc_insertion_point(field_release:pb.commercial.RidIdxDocument.data)
  clear_has_data();
  ::pb::commercial::RidQueries* temp = data_;
  data_ = NULL;
  return temp;
}
void RidIdxDocument::set_allocated_data(::pb::commercial::RidQueries* data) {
  delete data_;
  data_ = data;
  if (data) {
    set_has_data();
  } else {
    clear_has_data();
  }
  // @@protoc_insertion_point(field_set_allocated:pb.commercial.RidIdxDocument.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidIdxDocument::kQueryTextFieldNumber;
const int VidIdxDocument::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidIdxDocument::VidIdxDocument()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_commercial_5fidx_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.commercial.VidIdxDocument)
}
VidIdxDocument::VidIdxDocument(const VidIdxDocument& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_query_text()) {
    query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
  }
  if (from.has_data()) {
    data_ = new ::pb::commercial::VidQueries(*from.data_);
  } else {
    data_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:pb.commercial.VidIdxDocument)
}

void VidIdxDocument::SharedCtor() {
  _cached_size_ = 0;
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_ = NULL;
}

VidIdxDocument::~VidIdxDocument() {
  // @@protoc_insertion_point(destructor:pb.commercial.VidIdxDocument)
  SharedDtor();
}

void VidIdxDocument::SharedDtor() {
  query_text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete data_;
}

void VidIdxDocument::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidIdxDocument::descriptor() {
  protobuf_commercial_5fidx_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_commercial_5fidx_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VidIdxDocument& VidIdxDocument::default_instance() {
  protobuf_commercial_5fidx_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidIdxDocument* VidIdxDocument::New(::google::protobuf::Arena* arena) const {
  VidIdxDocument* n = new VidIdxDocument;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidIdxDocument::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.commercial.VidIdxDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!query_text_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*query_text_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(data_ != NULL);
      data_->::pb::commercial::VidQueries::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VidIdxDocument::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pb.commercial.VidIdxDocument)
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
            "pb.commercial.VidIdxDocument.query_text");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .pb.commercial.VidQueries data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_data()));
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
  // @@protoc_insertion_point(parse_success:pb.commercial.VidIdxDocument)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pb.commercial.VidIdxDocument)
  return false;
#undef DO_
}

void VidIdxDocument::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pb.commercial.VidIdxDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pb.commercial.VidIdxDocument.query_text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->query_text(), output);
  }

  // optional .pb.commercial.VidQueries data = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->data_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pb.commercial.VidIdxDocument)
}

::google::protobuf::uint8* VidIdxDocument::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pb.commercial.VidIdxDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pb.commercial.VidIdxDocument.query_text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query_text(), target);
  }

  // optional .pb.commercial.VidQueries data = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->data_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.commercial.VidIdxDocument)
  return target;
}

size_t VidIdxDocument::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.commercial.VidIdxDocument)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional string query_text = 1;
    if (has_query_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->query_text());
    }

    // optional .pb.commercial.VidQueries data = 2;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->data_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidIdxDocument::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.commercial.VidIdxDocument)
  GOOGLE_DCHECK_NE(&from, this);
  const VidIdxDocument* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidIdxDocument>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.commercial.VidIdxDocument)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.commercial.VidIdxDocument)
    MergeFrom(*source);
  }
}

void VidIdxDocument::MergeFrom(const VidIdxDocument& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.commercial.VidIdxDocument)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_query_text();
      query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_data()->::pb::commercial::VidQueries::MergeFrom(from.data());
    }
  }
}

void VidIdxDocument::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.commercial.VidIdxDocument)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidIdxDocument::CopyFrom(const VidIdxDocument& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.commercial.VidIdxDocument)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidIdxDocument::IsInitialized() const {
  return true;
}

void VidIdxDocument::Swap(VidIdxDocument* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidIdxDocument::InternalSwap(VidIdxDocument* other) {
  using std::swap;
  query_text_.Swap(&other->query_text_);
  swap(data_, other->data_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidIdxDocument::GetMetadata() const {
  protobuf_commercial_5fidx_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_commercial_5fidx_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidIdxDocument

// optional string query_text = 1;
bool VidIdxDocument::has_query_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void VidIdxDocument::set_has_query_text() {
  _has_bits_[0] |= 0x00000001u;
}
void VidIdxDocument::clear_has_query_text() {
  _has_bits_[0] &= ~0x00000001u;
}
void VidIdxDocument::clear_query_text() {
  query_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query_text();
}
const ::std::string& VidIdxDocument::query_text() const {
  // @@protoc_insertion_point(field_get:pb.commercial.VidIdxDocument.query_text)
  return query_text_.GetNoArena();
}
void VidIdxDocument::set_query_text(const ::std::string& value) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.commercial.VidIdxDocument.query_text)
}
#if LANG_CXX11
void VidIdxDocument::set_query_text(::std::string&& value) {
  set_has_query_text();
  query_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.commercial.VidIdxDocument.query_text)
}
#endif
void VidIdxDocument::set_query_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.commercial.VidIdxDocument.query_text)
}
void VidIdxDocument::set_query_text(const char* value, size_t size) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.commercial.VidIdxDocument.query_text)
}
::std::string* VidIdxDocument::mutable_query_text() {
  set_has_query_text();
  // @@protoc_insertion_point(field_mutable:pb.commercial.VidIdxDocument.query_text)
  return query_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidIdxDocument::release_query_text() {
  // @@protoc_insertion_point(field_release:pb.commercial.VidIdxDocument.query_text)
  clear_has_query_text();
  return query_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidIdxDocument::set_allocated_query_text(::std::string* query_text) {
  if (query_text != NULL) {
    set_has_query_text();
  } else {
    clear_has_query_text();
  }
  query_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query_text);
  // @@protoc_insertion_point(field_set_allocated:pb.commercial.VidIdxDocument.query_text)
}

// optional .pb.commercial.VidQueries data = 2;
bool VidIdxDocument::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void VidIdxDocument::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
void VidIdxDocument::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
void VidIdxDocument::clear_data() {
  if (data_ != NULL) data_->::pb::commercial::VidQueries::Clear();
  clear_has_data();
}
const ::pb::commercial::VidQueries& VidIdxDocument::data() const {
  const ::pb::commercial::VidQueries* p = data_;
  // @@protoc_insertion_point(field_get:pb.commercial.VidIdxDocument.data)
  return p != NULL ? *p : *reinterpret_cast<const ::pb::commercial::VidQueries*>(
      &::pb::commercial::_VidQueries_default_instance_);
}
::pb::commercial::VidQueries* VidIdxDocument::mutable_data() {
  set_has_data();
  if (data_ == NULL) {
    data_ = new ::pb::commercial::VidQueries;
  }
  // @@protoc_insertion_point(field_mutable:pb.commercial.VidIdxDocument.data)
  return data_;
}
::pb::commercial::VidQueries* VidIdxDocument::release_data() {
  // @@protoc_insertion_point(field_release:pb.commercial.VidIdxDocument.data)
  clear_has_data();
  ::pb::commercial::VidQueries* temp = data_;
  data_ = NULL;
  return temp;
}
void VidIdxDocument::set_allocated_data(::pb::commercial::VidQueries* data) {
  delete data_;
  data_ = data;
  if (data) {
    set_has_data();
  } else {
    clear_has_data();
  }
  // @@protoc_insertion_point(field_set_allocated:pb.commercial.VidIdxDocument.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace commercial
}  // namespace pb

// @@protoc_insertion_point(global_scope)
