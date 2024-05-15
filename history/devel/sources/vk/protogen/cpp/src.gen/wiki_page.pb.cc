// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wiki_page.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "wiki_page.pb.h"

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

namespace wiki_page {
namespace pb {
class WikiPageDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<WikiPage>
     _instance;
} _WikiPage_default_instance_;

namespace protobuf_wiki_5fpage_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WikiPage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WikiPage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WikiPage, query_text_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WikiPage, page_content_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WikiPage, error_msg_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(WikiPage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_WikiPage_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "wiki_page.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _WikiPage_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_WikiPage_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\017wiki_page.proto\022\014wiki_page.pb\"G\n\010WikiP"
      "age\022\022\n\nquery_text\030\001 \001(\t\022\024\n\014page_content\030"
      "\002 \001(\t\022\021\n\terror_msg\030\003 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 104);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "wiki_page.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_wiki_5fpage_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WikiPage::kQueryTextFieldNumber;
const int WikiPage::kPageContentFieldNumber;
const int WikiPage::kErrorMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WikiPage::WikiPage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_wiki_5fpage_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:wiki_page.pb.WikiPage)
}
WikiPage::WikiPage(const WikiPage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_query_text()) {
    query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
  }
  page_content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_page_content()) {
    page_content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.page_content_);
  }
  error_msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_error_msg()) {
    error_msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_msg_);
  }
  // @@protoc_insertion_point(copy_constructor:wiki_page.pb.WikiPage)
}

void WikiPage::SharedCtor() {
  _cached_size_ = 0;
  query_text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  page_content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

WikiPage::~WikiPage() {
  // @@protoc_insertion_point(destructor:wiki_page.pb.WikiPage)
  SharedDtor();
}

void WikiPage::SharedDtor() {
  query_text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  page_content_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void WikiPage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WikiPage::descriptor() {
  protobuf_wiki_5fpage_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_wiki_5fpage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const WikiPage& WikiPage::default_instance() {
  protobuf_wiki_5fpage_2eproto::InitDefaults();
  return *internal_default_instance();
}

WikiPage* WikiPage::New(::google::protobuf::Arena* arena) const {
  WikiPage* n = new WikiPage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void WikiPage::Clear() {
// @@protoc_insertion_point(message_clear_start:wiki_page.pb.WikiPage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!query_text_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*query_text_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!page_content_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*page_content_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(!error_msg_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*error_msg_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool WikiPage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:wiki_page.pb.WikiPage)
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
            "wiki_page.pb.WikiPage.query_text");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string page_content = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_page_content()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->page_content().data(), static_cast<int>(this->page_content().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "wiki_page.pb.WikiPage.page_content");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string error_msg = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->error_msg().data(), static_cast<int>(this->error_msg().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "wiki_page.pb.WikiPage.error_msg");
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
  // @@protoc_insertion_point(parse_success:wiki_page.pb.WikiPage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:wiki_page.pb.WikiPage)
  return false;
#undef DO_
}

void WikiPage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:wiki_page.pb.WikiPage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "wiki_page.pb.WikiPage.query_text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->query_text(), output);
  }

  // optional string page_content = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->page_content().data(), static_cast<int>(this->page_content().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "wiki_page.pb.WikiPage.page_content");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->page_content(), output);
  }

  // optional string error_msg = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error_msg().data(), static_cast<int>(this->error_msg().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "wiki_page.pb.WikiPage.error_msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->error_msg(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:wiki_page.pb.WikiPage)
}

::google::protobuf::uint8* WikiPage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:wiki_page.pb.WikiPage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string query_text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->query_text().data(), static_cast<int>(this->query_text().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "wiki_page.pb.WikiPage.query_text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query_text(), target);
  }

  // optional string page_content = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->page_content().data(), static_cast<int>(this->page_content().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "wiki_page.pb.WikiPage.page_content");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->page_content(), target);
  }

  // optional string error_msg = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error_msg().data(), static_cast<int>(this->error_msg().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "wiki_page.pb.WikiPage.error_msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->error_msg(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:wiki_page.pb.WikiPage)
  return target;
}

size_t WikiPage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:wiki_page.pb.WikiPage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional string query_text = 1;
    if (has_query_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->query_text());
    }

    // optional string page_content = 2;
    if (has_page_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->page_content());
    }

    // optional string error_msg = 3;
    if (has_error_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->error_msg());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WikiPage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:wiki_page.pb.WikiPage)
  GOOGLE_DCHECK_NE(&from, this);
  const WikiPage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WikiPage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:wiki_page.pb.WikiPage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:wiki_page.pb.WikiPage)
    MergeFrom(*source);
  }
}

void WikiPage::MergeFrom(const WikiPage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:wiki_page.pb.WikiPage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_query_text();
      query_text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_text_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_page_content();
      page_content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.page_content_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_error_msg();
      error_msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_msg_);
    }
  }
}

void WikiPage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:wiki_page.pb.WikiPage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WikiPage::CopyFrom(const WikiPage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:wiki_page.pb.WikiPage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WikiPage::IsInitialized() const {
  return true;
}

void WikiPage::Swap(WikiPage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WikiPage::InternalSwap(WikiPage* other) {
  using std::swap;
  query_text_.Swap(&other->query_text_);
  page_content_.Swap(&other->page_content_);
  error_msg_.Swap(&other->error_msg_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata WikiPage::GetMetadata() const {
  protobuf_wiki_5fpage_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_wiki_5fpage_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// WikiPage

// optional string query_text = 1;
bool WikiPage::has_query_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void WikiPage::set_has_query_text() {
  _has_bits_[0] |= 0x00000001u;
}
void WikiPage::clear_has_query_text() {
  _has_bits_[0] &= ~0x00000001u;
}
void WikiPage::clear_query_text() {
  query_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_query_text();
}
const ::std::string& WikiPage::query_text() const {
  // @@protoc_insertion_point(field_get:wiki_page.pb.WikiPage.query_text)
  return query_text_.GetNoArena();
}
void WikiPage::set_query_text(const ::std::string& value) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:wiki_page.pb.WikiPage.query_text)
}
#if LANG_CXX11
void WikiPage::set_query_text(::std::string&& value) {
  set_has_query_text();
  query_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:wiki_page.pb.WikiPage.query_text)
}
#endif
void WikiPage::set_query_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:wiki_page.pb.WikiPage.query_text)
}
void WikiPage::set_query_text(const char* value, size_t size) {
  set_has_query_text();
  query_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:wiki_page.pb.WikiPage.query_text)
}
::std::string* WikiPage::mutable_query_text() {
  set_has_query_text();
  // @@protoc_insertion_point(field_mutable:wiki_page.pb.WikiPage.query_text)
  return query_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* WikiPage::release_query_text() {
  // @@protoc_insertion_point(field_release:wiki_page.pb.WikiPage.query_text)
  clear_has_query_text();
  return query_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void WikiPage::set_allocated_query_text(::std::string* query_text) {
  if (query_text != NULL) {
    set_has_query_text();
  } else {
    clear_has_query_text();
  }
  query_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query_text);
  // @@protoc_insertion_point(field_set_allocated:wiki_page.pb.WikiPage.query_text)
}

// optional string page_content = 2;
bool WikiPage::has_page_content() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void WikiPage::set_has_page_content() {
  _has_bits_[0] |= 0x00000002u;
}
void WikiPage::clear_has_page_content() {
  _has_bits_[0] &= ~0x00000002u;
}
void WikiPage::clear_page_content() {
  page_content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_page_content();
}
const ::std::string& WikiPage::page_content() const {
  // @@protoc_insertion_point(field_get:wiki_page.pb.WikiPage.page_content)
  return page_content_.GetNoArena();
}
void WikiPage::set_page_content(const ::std::string& value) {
  set_has_page_content();
  page_content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:wiki_page.pb.WikiPage.page_content)
}
#if LANG_CXX11
void WikiPage::set_page_content(::std::string&& value) {
  set_has_page_content();
  page_content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:wiki_page.pb.WikiPage.page_content)
}
#endif
void WikiPage::set_page_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_page_content();
  page_content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:wiki_page.pb.WikiPage.page_content)
}
void WikiPage::set_page_content(const char* value, size_t size) {
  set_has_page_content();
  page_content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:wiki_page.pb.WikiPage.page_content)
}
::std::string* WikiPage::mutable_page_content() {
  set_has_page_content();
  // @@protoc_insertion_point(field_mutable:wiki_page.pb.WikiPage.page_content)
  return page_content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* WikiPage::release_page_content() {
  // @@protoc_insertion_point(field_release:wiki_page.pb.WikiPage.page_content)
  clear_has_page_content();
  return page_content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void WikiPage::set_allocated_page_content(::std::string* page_content) {
  if (page_content != NULL) {
    set_has_page_content();
  } else {
    clear_has_page_content();
  }
  page_content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), page_content);
  // @@protoc_insertion_point(field_set_allocated:wiki_page.pb.WikiPage.page_content)
}

// optional string error_msg = 3;
bool WikiPage::has_error_msg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void WikiPage::set_has_error_msg() {
  _has_bits_[0] |= 0x00000004u;
}
void WikiPage::clear_has_error_msg() {
  _has_bits_[0] &= ~0x00000004u;
}
void WikiPage::clear_error_msg() {
  error_msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_error_msg();
}
const ::std::string& WikiPage::error_msg() const {
  // @@protoc_insertion_point(field_get:wiki_page.pb.WikiPage.error_msg)
  return error_msg_.GetNoArena();
}
void WikiPage::set_error_msg(const ::std::string& value) {
  set_has_error_msg();
  error_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:wiki_page.pb.WikiPage.error_msg)
}
#if LANG_CXX11
void WikiPage::set_error_msg(::std::string&& value) {
  set_has_error_msg();
  error_msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:wiki_page.pb.WikiPage.error_msg)
}
#endif
void WikiPage::set_error_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_error_msg();
  error_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:wiki_page.pb.WikiPage.error_msg)
}
void WikiPage::set_error_msg(const char* value, size_t size) {
  set_has_error_msg();
  error_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:wiki_page.pb.WikiPage.error_msg)
}
::std::string* WikiPage::mutable_error_msg() {
  set_has_error_msg();
  // @@protoc_insertion_point(field_mutable:wiki_page.pb.WikiPage.error_msg)
  return error_msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* WikiPage::release_error_msg() {
  // @@protoc_insertion_point(field_release:wiki_page.pb.WikiPage.error_msg)
  clear_has_error_msg();
  return error_msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void WikiPage::set_allocated_error_msg(::std::string* error_msg) {
  if (error_msg != NULL) {
    set_has_error_msg();
  } else {
    clear_has_error_msg();
  }
  error_msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_msg);
  // @@protoc_insertion_point(field_set_allocated:wiki_page.pb.WikiPage.error_msg)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace wiki_page

// @@protoc_insertion_point(global_scope)
