// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmo_domain_docs.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cosmo_domain_docs.pb.h"

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
class ProtoDomainDocsRecordDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ProtoDomainDocsRecord>
     _instance;
} _ProtoDomainDocsRecord_default_instance_;
class ProtoDomainDocsEntryDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ProtoDomainDocsEntry>
     _instance;
} _ProtoDomainDocsEntry_default_instance_;

namespace protobuf_cosmo_5fdomain_5fdocs_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDomainDocsRecord, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDomainDocsRecord, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDomainDocsRecord, domain_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDomainDocsRecord, entries_),
  0,
  ~0u,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDomainDocsEntry, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDomainDocsEntry, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDomainDocsEntry, source_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDomainDocsEntry, doc_id_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(ProtoDomainDocsRecord)},
  { 9, 16, sizeof(ProtoDomainDocsEntry)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ProtoDomainDocsRecord_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ProtoDomainDocsEntry_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cosmo_domain_docs.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _ProtoDomainDocsRecord_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ProtoDomainDocsRecord_default_instance_);_ProtoDomainDocsEntry_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ProtoDomainDocsEntry_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\027cosmo_domain_docs.proto\"O\n\025ProtoDomain"
      "DocsRecord\022\016\n\006domain\030\001 \002(\003\022&\n\007entries\030\002 "
      "\003(\0132\025.ProtoDomainDocsEntry\"9\n\024ProtoDomai"
      "nDocsEntry\022\021\n\tsource_id\030\001 \002(\003\022\016\n\006doc_id\030"
      "\002 \002(\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 165);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cosmo_domain_docs.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_cosmo_5fdomain_5fdocs_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProtoDomainDocsRecord::kDomainFieldNumber;
const int ProtoDomainDocsRecord::kEntriesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProtoDomainDocsRecord::ProtoDomainDocsRecord()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cosmo_5fdomain_5fdocs_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoDomainDocsRecord)
}
ProtoDomainDocsRecord::ProtoDomainDocsRecord(const ProtoDomainDocsRecord& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      entries_(from.entries_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  domain_ = from.domain_;
  // @@protoc_insertion_point(copy_constructor:ProtoDomainDocsRecord)
}

void ProtoDomainDocsRecord::SharedCtor() {
  _cached_size_ = 0;
  domain_ = GOOGLE_LONGLONG(0);
}

ProtoDomainDocsRecord::~ProtoDomainDocsRecord() {
  // @@protoc_insertion_point(destructor:ProtoDomainDocsRecord)
  SharedDtor();
}

void ProtoDomainDocsRecord::SharedDtor() {
}

void ProtoDomainDocsRecord::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProtoDomainDocsRecord::descriptor() {
  protobuf_cosmo_5fdomain_5fdocs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cosmo_5fdomain_5fdocs_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProtoDomainDocsRecord& ProtoDomainDocsRecord::default_instance() {
  protobuf_cosmo_5fdomain_5fdocs_2eproto::InitDefaults();
  return *internal_default_instance();
}

ProtoDomainDocsRecord* ProtoDomainDocsRecord::New(::google::protobuf::Arena* arena) const {
  ProtoDomainDocsRecord* n = new ProtoDomainDocsRecord;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProtoDomainDocsRecord::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoDomainDocsRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  entries_.Clear();
  domain_ = GOOGLE_LONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ProtoDomainDocsRecord::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoDomainDocsRecord)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 domain = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_domain();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &domain_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .ProtoDomainDocsEntry entries = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_entries()));
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
  // @@protoc_insertion_point(parse_success:ProtoDomainDocsRecord)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoDomainDocsRecord)
  return false;
#undef DO_
}

void ProtoDomainDocsRecord::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoDomainDocsRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int64 domain = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->domain(), output);
  }

  // repeated .ProtoDomainDocsEntry entries = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->entries_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->entries(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtoDomainDocsRecord)
}

::google::protobuf::uint8* ProtoDomainDocsRecord::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ProtoDomainDocsRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int64 domain = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->domain(), target);
  }

  // repeated .ProtoDomainDocsEntry entries = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->entries_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->entries(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoDomainDocsRecord)
  return target;
}

size_t ProtoDomainDocsRecord::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoDomainDocsRecord)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required int64 domain = 1;
  if (has_domain()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->domain());
  }
  // repeated .ProtoDomainDocsEntry entries = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->entries_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->entries(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProtoDomainDocsRecord::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ProtoDomainDocsRecord)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoDomainDocsRecord* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProtoDomainDocsRecord>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ProtoDomainDocsRecord)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ProtoDomainDocsRecord)
    MergeFrom(*source);
  }
}

void ProtoDomainDocsRecord::MergeFrom(const ProtoDomainDocsRecord& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoDomainDocsRecord)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  entries_.MergeFrom(from.entries_);
  if (from.has_domain()) {
    set_domain(from.domain());
  }
}

void ProtoDomainDocsRecord::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ProtoDomainDocsRecord)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoDomainDocsRecord::CopyFrom(const ProtoDomainDocsRecord& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoDomainDocsRecord)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoDomainDocsRecord::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->entries())) return false;
  return true;
}

void ProtoDomainDocsRecord::Swap(ProtoDomainDocsRecord* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProtoDomainDocsRecord::InternalSwap(ProtoDomainDocsRecord* other) {
  using std::swap;
  entries_.InternalSwap(&other->entries_);
  swap(domain_, other->domain_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProtoDomainDocsRecord::GetMetadata() const {
  protobuf_cosmo_5fdomain_5fdocs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cosmo_5fdomain_5fdocs_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProtoDomainDocsRecord

// required int64 domain = 1;
bool ProtoDomainDocsRecord::has_domain() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ProtoDomainDocsRecord::set_has_domain() {
  _has_bits_[0] |= 0x00000001u;
}
void ProtoDomainDocsRecord::clear_has_domain() {
  _has_bits_[0] &= ~0x00000001u;
}
void ProtoDomainDocsRecord::clear_domain() {
  domain_ = GOOGLE_LONGLONG(0);
  clear_has_domain();
}
::google::protobuf::int64 ProtoDomainDocsRecord::domain() const {
  // @@protoc_insertion_point(field_get:ProtoDomainDocsRecord.domain)
  return domain_;
}
void ProtoDomainDocsRecord::set_domain(::google::protobuf::int64 value) {
  set_has_domain();
  domain_ = value;
  // @@protoc_insertion_point(field_set:ProtoDomainDocsRecord.domain)
}

// repeated .ProtoDomainDocsEntry entries = 2;
int ProtoDomainDocsRecord::entries_size() const {
  return entries_.size();
}
void ProtoDomainDocsRecord::clear_entries() {
  entries_.Clear();
}
const ::ProtoDomainDocsEntry& ProtoDomainDocsRecord::entries(int index) const {
  // @@protoc_insertion_point(field_get:ProtoDomainDocsRecord.entries)
  return entries_.Get(index);
}
::ProtoDomainDocsEntry* ProtoDomainDocsRecord::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:ProtoDomainDocsRecord.entries)
  return entries_.Mutable(index);
}
::ProtoDomainDocsEntry* ProtoDomainDocsRecord::add_entries() {
  // @@protoc_insertion_point(field_add:ProtoDomainDocsRecord.entries)
  return entries_.Add();
}
::google::protobuf::RepeatedPtrField< ::ProtoDomainDocsEntry >*
ProtoDomainDocsRecord::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:ProtoDomainDocsRecord.entries)
  return &entries_;
}
const ::google::protobuf::RepeatedPtrField< ::ProtoDomainDocsEntry >&
ProtoDomainDocsRecord::entries() const {
  // @@protoc_insertion_point(field_list:ProtoDomainDocsRecord.entries)
  return entries_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProtoDomainDocsEntry::kSourceIdFieldNumber;
const int ProtoDomainDocsEntry::kDocIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProtoDomainDocsEntry::ProtoDomainDocsEntry()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cosmo_5fdomain_5fdocs_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoDomainDocsEntry)
}
ProtoDomainDocsEntry::ProtoDomainDocsEntry(const ProtoDomainDocsEntry& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&source_id_, &from.source_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&doc_id_) -
    reinterpret_cast<char*>(&source_id_)) + sizeof(doc_id_));
  // @@protoc_insertion_point(copy_constructor:ProtoDomainDocsEntry)
}

void ProtoDomainDocsEntry::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&source_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&doc_id_) -
      reinterpret_cast<char*>(&source_id_)) + sizeof(doc_id_));
}

ProtoDomainDocsEntry::~ProtoDomainDocsEntry() {
  // @@protoc_insertion_point(destructor:ProtoDomainDocsEntry)
  SharedDtor();
}

void ProtoDomainDocsEntry::SharedDtor() {
}

void ProtoDomainDocsEntry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProtoDomainDocsEntry::descriptor() {
  protobuf_cosmo_5fdomain_5fdocs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cosmo_5fdomain_5fdocs_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProtoDomainDocsEntry& ProtoDomainDocsEntry::default_instance() {
  protobuf_cosmo_5fdomain_5fdocs_2eproto::InitDefaults();
  return *internal_default_instance();
}

ProtoDomainDocsEntry* ProtoDomainDocsEntry::New(::google::protobuf::Arena* arena) const {
  ProtoDomainDocsEntry* n = new ProtoDomainDocsEntry;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProtoDomainDocsEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoDomainDocsEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&source_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&doc_id_) -
        reinterpret_cast<char*>(&source_id_)) + sizeof(doc_id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ProtoDomainDocsEntry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoDomainDocsEntry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 source_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_source_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &source_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int64 doc_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_doc_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &doc_id_)));
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
  // @@protoc_insertion_point(parse_success:ProtoDomainDocsEntry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoDomainDocsEntry)
  return false;
#undef DO_
}

void ProtoDomainDocsEntry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoDomainDocsEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int64 source_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->source_id(), output);
  }

  // required int64 doc_id = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->doc_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtoDomainDocsEntry)
}

::google::protobuf::uint8* ProtoDomainDocsEntry::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ProtoDomainDocsEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int64 source_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->source_id(), target);
  }

  // required int64 doc_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->doc_id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoDomainDocsEntry)
  return target;
}

size_t ProtoDomainDocsEntry::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:ProtoDomainDocsEntry)
  size_t total_size = 0;

  if (has_source_id()) {
    // required int64 source_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->source_id());
  }

  if (has_doc_id()) {
    // required int64 doc_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->doc_id());
  }

  return total_size;
}
size_t ProtoDomainDocsEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoDomainDocsEntry)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int64 source_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->source_id());

    // required int64 doc_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->doc_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProtoDomainDocsEntry::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ProtoDomainDocsEntry)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoDomainDocsEntry* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProtoDomainDocsEntry>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ProtoDomainDocsEntry)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ProtoDomainDocsEntry)
    MergeFrom(*source);
  }
}

void ProtoDomainDocsEntry::MergeFrom(const ProtoDomainDocsEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoDomainDocsEntry)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      source_id_ = from.source_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      doc_id_ = from.doc_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ProtoDomainDocsEntry::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ProtoDomainDocsEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoDomainDocsEntry::CopyFrom(const ProtoDomainDocsEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoDomainDocsEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoDomainDocsEntry::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void ProtoDomainDocsEntry::Swap(ProtoDomainDocsEntry* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProtoDomainDocsEntry::InternalSwap(ProtoDomainDocsEntry* other) {
  using std::swap;
  swap(source_id_, other->source_id_);
  swap(doc_id_, other->doc_id_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProtoDomainDocsEntry::GetMetadata() const {
  protobuf_cosmo_5fdomain_5fdocs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cosmo_5fdomain_5fdocs_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProtoDomainDocsEntry

// required int64 source_id = 1;
bool ProtoDomainDocsEntry::has_source_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ProtoDomainDocsEntry::set_has_source_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ProtoDomainDocsEntry::clear_has_source_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ProtoDomainDocsEntry::clear_source_id() {
  source_id_ = GOOGLE_LONGLONG(0);
  clear_has_source_id();
}
::google::protobuf::int64 ProtoDomainDocsEntry::source_id() const {
  // @@protoc_insertion_point(field_get:ProtoDomainDocsEntry.source_id)
  return source_id_;
}
void ProtoDomainDocsEntry::set_source_id(::google::protobuf::int64 value) {
  set_has_source_id();
  source_id_ = value;
  // @@protoc_insertion_point(field_set:ProtoDomainDocsEntry.source_id)
}

// required int64 doc_id = 2;
bool ProtoDomainDocsEntry::has_doc_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ProtoDomainDocsEntry::set_has_doc_id() {
  _has_bits_[0] |= 0x00000002u;
}
void ProtoDomainDocsEntry::clear_has_doc_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void ProtoDomainDocsEntry::clear_doc_id() {
  doc_id_ = GOOGLE_LONGLONG(0);
  clear_has_doc_id();
}
::google::protobuf::int64 ProtoDomainDocsEntry::doc_id() const {
  // @@protoc_insertion_point(field_get:ProtoDomainDocsEntry.doc_id)
  return doc_id_;
}
void ProtoDomainDocsEntry::set_doc_id(::google::protobuf::int64 value) {
  set_has_doc_id();
  doc_id_ = value;
  // @@protoc_insertion_point(field_set:ProtoDomainDocsEntry.doc_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
