// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: youla_layered_array.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "youla_layered_array.pb.h"

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

namespace youla {
namespace layered_array {
namespace pb {
class ProductToKeyDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ProductToKey>
     _instance;
} _ProductToKey_default_instance_;
class ProductsToKeysDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ProductsToKeys>
     _instance;
} _ProductsToKeys_default_instance_;

namespace protobuf_youla_5flayered_5farray_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductToKey, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductToKey, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductToKey, docid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductToKey, product_id_low_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductToKey, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductToKey, product_id_high_),
  0,
  1,
  2,
  3,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductsToKeys, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductsToKeys, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProductsToKeys, data_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(ProductToKey)},
  { 13, 19, sizeof(ProductsToKeys)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ProductToKey_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ProductsToKeys_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "youla_layered_array.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _ProductToKey_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ProductToKey_default_instance_);_ProductsToKeys_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ProductsToKeys_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\031youla_layered_array.proto\022\026youla.layer"
      "ed_array.pb\"^\n\014ProductToKey\022\r\n\005docid\030\001 \002"
      "(\r\022\026\n\016product_id_low\030\002 \002(\r\022\013\n\003key\030\003 \002(\003\022"
      "\032\n\017product_id_high\030\004 \001(\004:\0010\"D\n\016ProductsT"
      "oKeys\0222\n\004data\030\001 \003(\0132$.youla.layered_arra"
      "y.pb.ProductToKey"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 217);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "youla_layered_array.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_youla_5flayered_5farray_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProductToKey::kDocidFieldNumber;
const int ProductToKey::kProductIdLowFieldNumber;
const int ProductToKey::kKeyFieldNumber;
const int ProductToKey::kProductIdHighFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProductToKey::ProductToKey()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_youla_5flayered_5farray_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:youla.layered_array.pb.ProductToKey)
}
ProductToKey::ProductToKey(const ProductToKey& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&docid_, &from.docid_,
    static_cast<size_t>(reinterpret_cast<char*>(&product_id_high_) -
    reinterpret_cast<char*>(&docid_)) + sizeof(product_id_high_));
  // @@protoc_insertion_point(copy_constructor:youla.layered_array.pb.ProductToKey)
}

void ProductToKey::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&docid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&product_id_high_) -
      reinterpret_cast<char*>(&docid_)) + sizeof(product_id_high_));
}

ProductToKey::~ProductToKey() {
  // @@protoc_insertion_point(destructor:youla.layered_array.pb.ProductToKey)
  SharedDtor();
}

void ProductToKey::SharedDtor() {
}

void ProductToKey::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProductToKey::descriptor() {
  protobuf_youla_5flayered_5farray_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_youla_5flayered_5farray_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProductToKey& ProductToKey::default_instance() {
  protobuf_youla_5flayered_5farray_2eproto::InitDefaults();
  return *internal_default_instance();
}

ProductToKey* ProductToKey::New(::google::protobuf::Arena* arena) const {
  ProductToKey* n = new ProductToKey;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProductToKey::Clear() {
// @@protoc_insertion_point(message_clear_start:youla.layered_array.pb.ProductToKey)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    ::memset(&docid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&product_id_high_) -
        reinterpret_cast<char*>(&docid_)) + sizeof(product_id_high_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ProductToKey::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:youla.layered_array.pb.ProductToKey)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 docid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_docid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &docid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 product_id_low = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_product_id_low();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &product_id_low_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int64 key = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_key();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &key_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 product_id_high = 4 [default = 0];
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_product_id_high();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &product_id_high_)));
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
  // @@protoc_insertion_point(parse_success:youla.layered_array.pb.ProductToKey)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:youla.layered_array.pb.ProductToKey)
  return false;
#undef DO_
}

void ProductToKey::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:youla.layered_array.pb.ProductToKey)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 docid = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->docid(), output);
  }

  // required uint32 product_id_low = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->product_id_low(), output);
  }

  // required int64 key = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->key(), output);
  }

  // optional uint64 product_id_high = 4 [default = 0];
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->product_id_high(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:youla.layered_array.pb.ProductToKey)
}

::google::protobuf::uint8* ProductToKey::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:youla.layered_array.pb.ProductToKey)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 docid = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->docid(), target);
  }

  // required uint32 product_id_low = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->product_id_low(), target);
  }

  // required int64 key = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->key(), target);
  }

  // optional uint64 product_id_high = 4 [default = 0];
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->product_id_high(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:youla.layered_array.pb.ProductToKey)
  return target;
}

size_t ProductToKey::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:youla.layered_array.pb.ProductToKey)
  size_t total_size = 0;

  if (has_docid()) {
    // required uint32 docid = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->docid());
  }

  if (has_product_id_low()) {
    // required uint32 product_id_low = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->product_id_low());
  }

  if (has_key()) {
    // required int64 key = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->key());
  }

  return total_size;
}
size_t ProductToKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:youla.layered_array.pb.ProductToKey)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required uint32 docid = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->docid());

    // required uint32 product_id_low = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->product_id_low());

    // required int64 key = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->key());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional uint64 product_id_high = 4 [default = 0];
  if (has_product_id_high()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->product_id_high());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProductToKey::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:youla.layered_array.pb.ProductToKey)
  GOOGLE_DCHECK_NE(&from, this);
  const ProductToKey* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProductToKey>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:youla.layered_array.pb.ProductToKey)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:youla.layered_array.pb.ProductToKey)
    MergeFrom(*source);
  }
}

void ProductToKey::MergeFrom(const ProductToKey& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:youla.layered_array.pb.ProductToKey)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      docid_ = from.docid_;
    }
    if (cached_has_bits & 0x00000002u) {
      product_id_low_ = from.product_id_low_;
    }
    if (cached_has_bits & 0x00000004u) {
      key_ = from.key_;
    }
    if (cached_has_bits & 0x00000008u) {
      product_id_high_ = from.product_id_high_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ProductToKey::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:youla.layered_array.pb.ProductToKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProductToKey::CopyFrom(const ProductToKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:youla.layered_array.pb.ProductToKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductToKey::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void ProductToKey::Swap(ProductToKey* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProductToKey::InternalSwap(ProductToKey* other) {
  using std::swap;
  swap(docid_, other->docid_);
  swap(product_id_low_, other->product_id_low_);
  swap(key_, other->key_);
  swap(product_id_high_, other->product_id_high_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProductToKey::GetMetadata() const {
  protobuf_youla_5flayered_5farray_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_youla_5flayered_5farray_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProductToKey

// required uint32 docid = 1;
bool ProductToKey::has_docid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ProductToKey::set_has_docid() {
  _has_bits_[0] |= 0x00000001u;
}
void ProductToKey::clear_has_docid() {
  _has_bits_[0] &= ~0x00000001u;
}
void ProductToKey::clear_docid() {
  docid_ = 0u;
  clear_has_docid();
}
::google::protobuf::uint32 ProductToKey::docid() const {
  // @@protoc_insertion_point(field_get:youla.layered_array.pb.ProductToKey.docid)
  return docid_;
}
void ProductToKey::set_docid(::google::protobuf::uint32 value) {
  set_has_docid();
  docid_ = value;
  // @@protoc_insertion_point(field_set:youla.layered_array.pb.ProductToKey.docid)
}

// required uint32 product_id_low = 2;
bool ProductToKey::has_product_id_low() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ProductToKey::set_has_product_id_low() {
  _has_bits_[0] |= 0x00000002u;
}
void ProductToKey::clear_has_product_id_low() {
  _has_bits_[0] &= ~0x00000002u;
}
void ProductToKey::clear_product_id_low() {
  product_id_low_ = 0u;
  clear_has_product_id_low();
}
::google::protobuf::uint32 ProductToKey::product_id_low() const {
  // @@protoc_insertion_point(field_get:youla.layered_array.pb.ProductToKey.product_id_low)
  return product_id_low_;
}
void ProductToKey::set_product_id_low(::google::protobuf::uint32 value) {
  set_has_product_id_low();
  product_id_low_ = value;
  // @@protoc_insertion_point(field_set:youla.layered_array.pb.ProductToKey.product_id_low)
}

// required int64 key = 3;
bool ProductToKey::has_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ProductToKey::set_has_key() {
  _has_bits_[0] |= 0x00000004u;
}
void ProductToKey::clear_has_key() {
  _has_bits_[0] &= ~0x00000004u;
}
void ProductToKey::clear_key() {
  key_ = GOOGLE_LONGLONG(0);
  clear_has_key();
}
::google::protobuf::int64 ProductToKey::key() const {
  // @@protoc_insertion_point(field_get:youla.layered_array.pb.ProductToKey.key)
  return key_;
}
void ProductToKey::set_key(::google::protobuf::int64 value) {
  set_has_key();
  key_ = value;
  // @@protoc_insertion_point(field_set:youla.layered_array.pb.ProductToKey.key)
}

// optional uint64 product_id_high = 4 [default = 0];
bool ProductToKey::has_product_id_high() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ProductToKey::set_has_product_id_high() {
  _has_bits_[0] |= 0x00000008u;
}
void ProductToKey::clear_has_product_id_high() {
  _has_bits_[0] &= ~0x00000008u;
}
void ProductToKey::clear_product_id_high() {
  product_id_high_ = GOOGLE_ULONGLONG(0);
  clear_has_product_id_high();
}
::google::protobuf::uint64 ProductToKey::product_id_high() const {
  // @@protoc_insertion_point(field_get:youla.layered_array.pb.ProductToKey.product_id_high)
  return product_id_high_;
}
void ProductToKey::set_product_id_high(::google::protobuf::uint64 value) {
  set_has_product_id_high();
  product_id_high_ = value;
  // @@protoc_insertion_point(field_set:youla.layered_array.pb.ProductToKey.product_id_high)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProductsToKeys::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProductsToKeys::ProductsToKeys()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_youla_5flayered_5farray_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:youla.layered_array.pb.ProductsToKeys)
}
ProductsToKeys::ProductsToKeys(const ProductsToKeys& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:youla.layered_array.pb.ProductsToKeys)
}

void ProductsToKeys::SharedCtor() {
  _cached_size_ = 0;
}

ProductsToKeys::~ProductsToKeys() {
  // @@protoc_insertion_point(destructor:youla.layered_array.pb.ProductsToKeys)
  SharedDtor();
}

void ProductsToKeys::SharedDtor() {
}

void ProductsToKeys::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProductsToKeys::descriptor() {
  protobuf_youla_5flayered_5farray_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_youla_5flayered_5farray_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProductsToKeys& ProductsToKeys::default_instance() {
  protobuf_youla_5flayered_5farray_2eproto::InitDefaults();
  return *internal_default_instance();
}

ProductsToKeys* ProductsToKeys::New(::google::protobuf::Arena* arena) const {
  ProductsToKeys* n = new ProductsToKeys;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProductsToKeys::Clear() {
// @@protoc_insertion_point(message_clear_start:youla.layered_array.pb.ProductsToKeys)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ProductsToKeys::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:youla.layered_array.pb.ProductsToKeys)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .youla.layered_array.pb.ProductToKey data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_data()));
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
  // @@protoc_insertion_point(parse_success:youla.layered_array.pb.ProductsToKeys)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:youla.layered_array.pb.ProductsToKeys)
  return false;
#undef DO_
}

void ProductsToKeys::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:youla.layered_array.pb.ProductsToKeys)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .youla.layered_array.pb.ProductToKey data = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->data_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->data(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:youla.layered_array.pb.ProductsToKeys)
}

::google::protobuf::uint8* ProductsToKeys::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:youla.layered_array.pb.ProductsToKeys)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .youla.layered_array.pb.ProductToKey data = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->data_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->data(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:youla.layered_array.pb.ProductsToKeys)
  return target;
}

size_t ProductsToKeys::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:youla.layered_array.pb.ProductsToKeys)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .youla.layered_array.pb.ProductToKey data = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->data_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->data(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProductsToKeys::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:youla.layered_array.pb.ProductsToKeys)
  GOOGLE_DCHECK_NE(&from, this);
  const ProductsToKeys* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProductsToKeys>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:youla.layered_array.pb.ProductsToKeys)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:youla.layered_array.pb.ProductsToKeys)
    MergeFrom(*source);
  }
}

void ProductsToKeys::MergeFrom(const ProductsToKeys& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:youla.layered_array.pb.ProductsToKeys)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
}

void ProductsToKeys::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:youla.layered_array.pb.ProductsToKeys)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProductsToKeys::CopyFrom(const ProductsToKeys& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:youla.layered_array.pb.ProductsToKeys)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProductsToKeys::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->data())) return false;
  return true;
}

void ProductsToKeys::Swap(ProductsToKeys* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProductsToKeys::InternalSwap(ProductsToKeys* other) {
  using std::swap;
  data_.InternalSwap(&other->data_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProductsToKeys::GetMetadata() const {
  protobuf_youla_5flayered_5farray_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_youla_5flayered_5farray_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProductsToKeys

// repeated .youla.layered_array.pb.ProductToKey data = 1;
int ProductsToKeys::data_size() const {
  return data_.size();
}
void ProductsToKeys::clear_data() {
  data_.Clear();
}
const ::youla::layered_array::pb::ProductToKey& ProductsToKeys::data(int index) const {
  // @@protoc_insertion_point(field_get:youla.layered_array.pb.ProductsToKeys.data)
  return data_.Get(index);
}
::youla::layered_array::pb::ProductToKey* ProductsToKeys::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:youla.layered_array.pb.ProductsToKeys.data)
  return data_.Mutable(index);
}
::youla::layered_array::pb::ProductToKey* ProductsToKeys::add_data() {
  // @@protoc_insertion_point(field_add:youla.layered_array.pb.ProductsToKeys.data)
  return data_.Add();
}
::google::protobuf::RepeatedPtrField< ::youla::layered_array::pb::ProductToKey >*
ProductsToKeys::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:youla.layered_array.pb.ProductsToKeys.data)
  return &data_;
}
const ::google::protobuf::RepeatedPtrField< ::youla::layered_array::pb::ProductToKey >&
ProductsToKeys::data() const {
  // @@protoc_insertion_point(field_list:youla.layered_array.pb.ProductsToKeys.data)
  return data_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace layered_array
}  // namespace youla

// @@protoc_insertion_point(global_scope)
