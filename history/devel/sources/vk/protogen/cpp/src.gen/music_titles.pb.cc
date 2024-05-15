// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: music_titles.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "music_titles.pb.h"

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
namespace srch {
namespace music {
class TitlesStorageDocumentDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TitlesStorageDocument>
     _instance;
} _TitlesStorageDocument_default_instance_;

namespace protobuf_music_5ftitles_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TitlesStorageDocument, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TitlesStorageDocument, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TitlesStorageDocument, query_text_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TitlesStorageDocument, value_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(TitlesStorageDocument)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_TitlesStorageDocument_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "music_titles.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  ::pb::srch::music::protobuf_music_5fresponse_2eproto::InitDefaults();
  _TitlesStorageDocument_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TitlesStorageDocument_default_instance_);_TitlesStorageDocument_default_instance_._instance.get_mutable()->value_ = const_cast< ::pb::srch::music::TitlesDocument*>(
      ::pb::srch::music::TitlesDocument::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022music_titles.proto\022\rpb.srch.music\032\024mus"
      "ic_response.proto\"Y\n\025TitlesStorageDocume"
      "nt\022\022\n\nquery_text\030\001 \001(\t\022,\n\005value\030\002 \001(\0132\035."
      "pb.srch.music.TitlesDocument"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 148);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "music_titles.proto", &protobuf_RegisterTypes);
  ::pb::srch::music::protobuf_music_5fresponse_2eproto::AddDescriptors();
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

}  // namespace protobuf_music_5ftitles_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TitlesStorageDocument::kQueryTextFieldNumber;
const int TitlesStorageDocument::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TitlesStorageDocument::TitlesStorageDocument()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_music_5ftitles_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.srch.music.TitlesStorageDocument)
}
TitlesStorageDocument::TitlesStorageDocument(const TitlesStorageDocument& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_query_text()) {
    query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
  }
  if (from.has_value()) {
    value_ = new ::pb::srch::music::TitlesDocument(*from.value_);
  } else {
    value_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:pb.srch.music.TitlesStorageDocument)
}

void TitlesStorageDocument::SharedCtor() {
  _cached_size_ = 0;
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_ = NULL;
}

TitlesStorageDocument::~TitlesStorageDocument() {
  // @@protoc_insertion_point(destructor:pb.srch.music.TitlesStorageDocument)
  SharedDtor();
}

void TitlesStorageDocument::SharedDtor() {
  query_text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete value_;
}

void TitlesStorageDocument::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TitlesStorageDocument::descriptor() {
  protobuf_music_5ftitles_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_music_5ftitles_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TitlesStorageDocument& TitlesStorageDocument::default_instance() {
  protobuf_music_5ftitles_2eproto::InitDefaults();
  return *internal_default_instance();
}

TitlesStorageDocument* TitlesStorageDocument::New(::google::protobuf::Arena* arena) const {
  TitlesStorageDocument* n = new TitlesStorageDocument;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TitlesStorageDocument::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.srch.music.TitlesStorageDocument)
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
      GOOGLE_DCHECK(value_ != NULL);
      value_->::pb::srch::music::TitlesDocument::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool TitlesStorageDocument::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pb.srch.music.TitlesStorageDocument)
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
            "pb.srch.music.TitlesStorageDocument.query_text");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .pb.srch.music.TitlesDocument value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_value()));
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
  // @@protoc_insertion_point(parse_success:pb.srch.music.TitlesStorageDocument)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pb.srch.music.TitlesStorageDocument)
  return false;
#undef DO_
}

void TitlesStorageDocument::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pb.srch.music.TitlesStorageDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pb.srch.music.TitlesStorageDocument.query_text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->query_text(), output);
  }

  // optional .pb.srch.music.TitlesDocument value = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->value_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pb.srch.music.TitlesStorageDocument)
}

::google::protobuf::uint8* TitlesStorageDocument::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pb.srch.music.TitlesStorageDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pb.srch.music.TitlesStorageDocument.query_text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query_text(), target);
  }

  // optional .pb.srch.music.TitlesDocument value = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->value_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.srch.music.TitlesStorageDocument)
  return target;
}

size_t TitlesStorageDocument::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.srch.music.TitlesStorageDocument)
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

    // optional .pb.srch.music.TitlesDocument value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->value_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TitlesStorageDocument::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.srch.music.TitlesStorageDocument)
  GOOGLE_DCHECK_NE(&from, this);
  const TitlesStorageDocument* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TitlesStorageDocument>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.srch.music.TitlesStorageDocument)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.srch.music.TitlesStorageDocument)
    MergeFrom(*source);
  }
}

void TitlesStorageDocument::MergeFrom(const TitlesStorageDocument& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.srch.music.TitlesStorageDocument)
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
      mutable_value()->::pb::srch::music::TitlesDocument::MergeFrom(from.value());
    }
  }
}

void TitlesStorageDocument::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.srch.music.TitlesStorageDocument)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TitlesStorageDocument::CopyFrom(const TitlesStorageDocument& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.srch.music.TitlesStorageDocument)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TitlesStorageDocument::IsInitialized() const {
  return true;
}

void TitlesStorageDocument::Swap(TitlesStorageDocument* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TitlesStorageDocument::InternalSwap(TitlesStorageDocument* other) {
  using std::swap;
  query_text_.Swap(&other->query_text_);
  swap(value_, other->value_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TitlesStorageDocument::GetMetadata() const {
  protobuf_music_5ftitles_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_music_5ftitles_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TitlesStorageDocument

// optional string query_text = 1;
bool TitlesStorageDocument::has_query_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void TitlesStorageDocument::set_has_query_text() {
  _has_bits_[0] |= 0x00000001u;
}
void TitlesStorageDocument::clear_has_query_text() {
  _has_bits_[0] &= ~0x00000001u;
}
void TitlesStorageDocument::clear_query_text() {
  query_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query_text();
}
const ::std::string& TitlesStorageDocument::query_text() const {
  // @@protoc_insertion_point(field_get:pb.srch.music.TitlesStorageDocument.query_text)
  return query_text_.GetNoArena();
}
void TitlesStorageDocument::set_query_text(const ::std::string& value) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.srch.music.TitlesStorageDocument.query_text)
}
#if LANG_CXX11
void TitlesStorageDocument::set_query_text(::std::string&& value) {
  set_has_query_text();
  query_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.srch.music.TitlesStorageDocument.query_text)
}
#endif
void TitlesStorageDocument::set_query_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.srch.music.TitlesStorageDocument.query_text)
}
void TitlesStorageDocument::set_query_text(const char* value, size_t size) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.srch.music.TitlesStorageDocument.query_text)
}
::std::string* TitlesStorageDocument::mutable_query_text() {
  set_has_query_text();
  // @@protoc_insertion_point(field_mutable:pb.srch.music.TitlesStorageDocument.query_text)
  return query_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* TitlesStorageDocument::release_query_text() {
  // @@protoc_insertion_point(field_release:pb.srch.music.TitlesStorageDocument.query_text)
  clear_has_query_text();
  return query_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void TitlesStorageDocument::set_allocated_query_text(::std::string* query_text) {
  if (query_text != NULL) {
    set_has_query_text();
  } else {
    clear_has_query_text();
  }
  query_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query_text);
  // @@protoc_insertion_point(field_set_allocated:pb.srch.music.TitlesStorageDocument.query_text)
}

// optional .pb.srch.music.TitlesDocument value = 2;
bool TitlesStorageDocument::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void TitlesStorageDocument::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
void TitlesStorageDocument::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
void TitlesStorageDocument::clear_value() {
  if (value_ != NULL) value_->::pb::srch::music::TitlesDocument::Clear();
  clear_has_value();
}
const ::pb::srch::music::TitlesDocument& TitlesStorageDocument::value() const {
  const ::pb::srch::music::TitlesDocument* p = value_;
  // @@protoc_insertion_point(field_get:pb.srch.music.TitlesStorageDocument.value)
  return p != NULL ? *p : *reinterpret_cast<const ::pb::srch::music::TitlesDocument*>(
      &::pb::srch::music::_TitlesDocument_default_instance_);
}
::pb::srch::music::TitlesDocument* TitlesStorageDocument::mutable_value() {
  set_has_value();
  if (value_ == NULL) {
    value_ = new ::pb::srch::music::TitlesDocument;
  }
  // @@protoc_insertion_point(field_mutable:pb.srch.music.TitlesStorageDocument.value)
  return value_;
}
::pb::srch::music::TitlesDocument* TitlesStorageDocument::release_value() {
  // @@protoc_insertion_point(field_release:pb.srch.music.TitlesStorageDocument.value)
  clear_has_value();
  ::pb::srch::music::TitlesDocument* temp = value_;
  value_ = NULL;
  return temp;
}
void TitlesStorageDocument::set_allocated_value(::pb::srch::music::TitlesDocument* value) {
  delete value_;
  value_ = value;
  if (value) {
    set_has_value();
  } else {
    clear_has_value();
  }
  // @@protoc_insertion_point(field_set_allocated:pb.srch.music.TitlesStorageDocument.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace music
}  // namespace srch
}  // namespace pb

// @@protoc_insertion_point(global_scope)
