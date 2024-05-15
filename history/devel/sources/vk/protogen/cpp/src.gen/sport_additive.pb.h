// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sport_additive.proto

#ifndef PROTOBUF_sport_5fadditive_2eproto__INCLUDED
#define PROTOBUF_sport_5fadditive_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace sport {
class ImageInfo;
class ImageInfoDefaultTypeInternal;
extern ImageInfoDefaultTypeInternal _ImageInfo_default_instance_;
class StreamInfo;
class StreamInfoDefaultTypeInternal;
extern StreamInfoDefaultTypeInternal _StreamInfo_default_instance_;
}  // namespace sport

namespace sport {

namespace protobuf_sport_5fadditive_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_sport_5fadditive_2eproto

// ===================================================================

class ImageInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sport.ImageInfo) */ {
 public:
  ImageInfo();
  virtual ~ImageInfo();

  ImageInfo(const ImageInfo& from);

  inline ImageInfo& operator=(const ImageInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ImageInfo(ImageInfo&& from) noexcept
    : ImageInfo() {
    *this = ::std::move(from);
  }

  inline ImageInfo& operator=(ImageInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ImageInfo& default_instance();

  static inline const ImageInfo* internal_default_instance() {
    return reinterpret_cast<const ImageInfo*>(
               &_ImageInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ImageInfo* other);
  friend void swap(ImageInfo& a, ImageInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ImageInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  ImageInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ImageInfo& from);
  void MergeFrom(const ImageInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ImageInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string url = 1;
  bool has_url() const;
  void clear_url();
  static const int kUrlFieldNumber = 1;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  #if LANG_CXX11
  void set_url(::std::string&& value);
  #endif
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // required uint32 height = 2;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 2;
  ::google::protobuf::uint32 height() const;
  void set_height(::google::protobuf::uint32 value);

  // required uint32 width = 3;
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 3;
  ::google::protobuf::uint32 width() const;
  void set_width(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sport.ImageInfo)
 private:
  void set_has_url();
  void clear_has_url();
  void set_has_height();
  void clear_has_height();
  void set_has_width();
  void clear_has_width();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::uint32 height_;
  ::google::protobuf::uint32 width_;
  friend struct protobuf_sport_5fadditive_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StreamInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sport.StreamInfo) */ {
 public:
  StreamInfo();
  virtual ~StreamInfo();

  StreamInfo(const StreamInfo& from);

  inline StreamInfo& operator=(const StreamInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StreamInfo(StreamInfo&& from) noexcept
    : StreamInfo() {
    *this = ::std::move(from);
  }

  inline StreamInfo& operator=(StreamInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StreamInfo& default_instance();

  static inline const StreamInfo* internal_default_instance() {
    return reinterpret_cast<const StreamInfo*>(
               &_StreamInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(StreamInfo* other);
  friend void swap(StreamInfo& a, StreamInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StreamInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  StreamInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StreamInfo& from);
  void MergeFrom(const StreamInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(StreamInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional string title = 2;
  bool has_title() const;
  void clear_title();
  static const int kTitleFieldNumber = 2;
  const ::std::string& title() const;
  void set_title(const ::std::string& value);
  #if LANG_CXX11
  void set_title(::std::string&& value);
  #endif
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  ::std::string* mutable_title();
  ::std::string* release_title();
  void set_allocated_title(::std::string* title);

  // optional string platform = 4;
  bool has_platform() const;
  void clear_platform();
  static const int kPlatformFieldNumber = 4;
  const ::std::string& platform() const;
  void set_platform(const ::std::string& value);
  #if LANG_CXX11
  void set_platform(::std::string&& value);
  #endif
  void set_platform(const char* value);
  void set_platform(const char* value, size_t size);
  ::std::string* mutable_platform();
  ::std::string* release_platform();
  void set_allocated_platform(::std::string* platform);

  // optional string source_url = 5;
  bool has_source_url() const;
  void clear_source_url();
  static const int kSourceUrlFieldNumber = 5;
  const ::std::string& source_url() const;
  void set_source_url(const ::std::string& value);
  #if LANG_CXX11
  void set_source_url(::std::string&& value);
  #endif
  void set_source_url(const char* value);
  void set_source_url(const char* value, size_t size);
  ::std::string* mutable_source_url();
  ::std::string* release_source_url();
  void set_allocated_source_url(::std::string* source_url);

  // optional string stream_url = 6;
  bool has_stream_url() const;
  void clear_stream_url();
  static const int kStreamUrlFieldNumber = 6;
  const ::std::string& stream_url() const;
  void set_stream_url(const ::std::string& value);
  #if LANG_CXX11
  void set_stream_url(::std::string&& value);
  #endif
  void set_stream_url(const char* value);
  void set_stream_url(const char* value, size_t size);
  ::std::string* mutable_stream_url();
  ::std::string* release_stream_url();
  void set_allocated_stream_url(::std::string* stream_url);

  // optional string team1 = 8;
  bool has_team1() const;
  void clear_team1();
  static const int kTeam1FieldNumber = 8;
  const ::std::string& team1() const;
  void set_team1(const ::std::string& value);
  #if LANG_CXX11
  void set_team1(::std::string&& value);
  #endif
  void set_team1(const char* value);
  void set_team1(const char* value, size_t size);
  ::std::string* mutable_team1();
  ::std::string* release_team1();
  void set_allocated_team1(::std::string* team1);

  // optional string team2 = 9;
  bool has_team2() const;
  void clear_team2();
  static const int kTeam2FieldNumber = 9;
  const ::std::string& team2() const;
  void set_team2(const ::std::string& value);
  #if LANG_CXX11
  void set_team2(::std::string&& value);
  #endif
  void set_team2(const char* value);
  void set_team2(const char* value, size_t size);
  ::std::string* mutable_team2();
  ::std::string* release_team2();
  void set_allocated_team2(::std::string* team2);

  // optional .sport.ImageInfo preview_image = 7;
  bool has_preview_image() const;
  void clear_preview_image();
  static const int kPreviewImageFieldNumber = 7;
  const ::sport::ImageInfo& preview_image() const;
  ::sport::ImageInfo* mutable_preview_image();
  ::sport::ImageInfo* release_preview_image();
  void set_allocated_preview_image(::sport::ImageInfo* preview_image);

  // optional uint64 timestamp = 3;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sport.StreamInfo)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_title();
  void clear_has_title();
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_platform();
  void clear_has_platform();
  void set_has_source_url();
  void clear_has_source_url();
  void set_has_stream_url();
  void clear_has_stream_url();
  void set_has_preview_image();
  void clear_has_preview_image();
  void set_has_team1();
  void clear_has_team1();
  void set_has_team2();
  void clear_has_team2();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr title_;
  ::google::protobuf::internal::ArenaStringPtr platform_;
  ::google::protobuf::internal::ArenaStringPtr source_url_;
  ::google::protobuf::internal::ArenaStringPtr stream_url_;
  ::google::protobuf::internal::ArenaStringPtr team1_;
  ::google::protobuf::internal::ArenaStringPtr team2_;
  ::sport::ImageInfo* preview_image_;
  ::google::protobuf::uint64 timestamp_;
  friend struct protobuf_sport_5fadditive_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ImageInfo

// required string url = 1;
inline bool ImageInfo::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ImageInfo::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ImageInfo::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ImageInfo::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
inline const ::std::string& ImageInfo::url() const {
  // @@protoc_insertion_point(field_get:sport.ImageInfo.url)
  return url_.GetNoArena();
}
inline void ImageInfo::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sport.ImageInfo.url)
}
#if LANG_CXX11
inline void ImageInfo::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sport.ImageInfo.url)
}
#endif
inline void ImageInfo::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sport.ImageInfo.url)
}
inline void ImageInfo::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sport.ImageInfo.url)
}
inline ::std::string* ImageInfo::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:sport.ImageInfo.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ImageInfo::release_url() {
  // @@protoc_insertion_point(field_release:sport.ImageInfo.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ImageInfo::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:sport.ImageInfo.url)
}

// required uint32 height = 2;
inline bool ImageInfo::has_height() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ImageInfo::set_has_height() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ImageInfo::clear_has_height() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ImageInfo::clear_height() {
  height_ = 0u;
  clear_has_height();
}
inline ::google::protobuf::uint32 ImageInfo::height() const {
  // @@protoc_insertion_point(field_get:sport.ImageInfo.height)
  return height_;
}
inline void ImageInfo::set_height(::google::protobuf::uint32 value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:sport.ImageInfo.height)
}

// required uint32 width = 3;
inline bool ImageInfo::has_width() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ImageInfo::set_has_width() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ImageInfo::clear_has_width() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ImageInfo::clear_width() {
  width_ = 0u;
  clear_has_width();
}
inline ::google::protobuf::uint32 ImageInfo::width() const {
  // @@protoc_insertion_point(field_get:sport.ImageInfo.width)
  return width_;
}
inline void ImageInfo::set_width(::google::protobuf::uint32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:sport.ImageInfo.width)
}

// -------------------------------------------------------------------

// StreamInfo

// optional string id = 1;
inline bool StreamInfo::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StreamInfo::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StreamInfo::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StreamInfo::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& StreamInfo::id() const {
  // @@protoc_insertion_point(field_get:sport.StreamInfo.id)
  return id_.GetNoArena();
}
inline void StreamInfo::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sport.StreamInfo.id)
}
#if LANG_CXX11
inline void StreamInfo::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sport.StreamInfo.id)
}
#endif
inline void StreamInfo::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sport.StreamInfo.id)
}
inline void StreamInfo::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sport.StreamInfo.id)
}
inline ::std::string* StreamInfo::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:sport.StreamInfo.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StreamInfo::release_id() {
  // @@protoc_insertion_point(field_release:sport.StreamInfo.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StreamInfo::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:sport.StreamInfo.id)
}

// optional string title = 2;
inline bool StreamInfo::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StreamInfo::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StreamInfo::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StreamInfo::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_title();
}
inline const ::std::string& StreamInfo::title() const {
  // @@protoc_insertion_point(field_get:sport.StreamInfo.title)
  return title_.GetNoArena();
}
inline void StreamInfo::set_title(const ::std::string& value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sport.StreamInfo.title)
}
#if LANG_CXX11
inline void StreamInfo::set_title(::std::string&& value) {
  set_has_title();
  title_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sport.StreamInfo.title)
}
#endif
inline void StreamInfo::set_title(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sport.StreamInfo.title)
}
inline void StreamInfo::set_title(const char* value, size_t size) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sport.StreamInfo.title)
}
inline ::std::string* StreamInfo::mutable_title() {
  set_has_title();
  // @@protoc_insertion_point(field_mutable:sport.StreamInfo.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StreamInfo::release_title() {
  // @@protoc_insertion_point(field_release:sport.StreamInfo.title)
  clear_has_title();
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StreamInfo::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    set_has_title();
  } else {
    clear_has_title();
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:sport.StreamInfo.title)
}

// optional uint64 timestamp = 3;
inline bool StreamInfo::has_timestamp() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void StreamInfo::set_has_timestamp() {
  _has_bits_[0] |= 0x00000100u;
}
inline void StreamInfo::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void StreamInfo::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 StreamInfo::timestamp() const {
  // @@protoc_insertion_point(field_get:sport.StreamInfo.timestamp)
  return timestamp_;
}
inline void StreamInfo::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:sport.StreamInfo.timestamp)
}

// optional string platform = 4;
inline bool StreamInfo::has_platform() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void StreamInfo::set_has_platform() {
  _has_bits_[0] |= 0x00000004u;
}
inline void StreamInfo::clear_has_platform() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void StreamInfo::clear_platform() {
  platform_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_platform();
}
inline const ::std::string& StreamInfo::platform() const {
  // @@protoc_insertion_point(field_get:sport.StreamInfo.platform)
  return platform_.GetNoArena();
}
inline void StreamInfo::set_platform(const ::std::string& value) {
  set_has_platform();
  platform_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sport.StreamInfo.platform)
}
#if LANG_CXX11
inline void StreamInfo::set_platform(::std::string&& value) {
  set_has_platform();
  platform_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sport.StreamInfo.platform)
}
#endif
inline void StreamInfo::set_platform(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_platform();
  platform_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sport.StreamInfo.platform)
}
inline void StreamInfo::set_platform(const char* value, size_t size) {
  set_has_platform();
  platform_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sport.StreamInfo.platform)
}
inline ::std::string* StreamInfo::mutable_platform() {
  set_has_platform();
  // @@protoc_insertion_point(field_mutable:sport.StreamInfo.platform)
  return platform_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StreamInfo::release_platform() {
  // @@protoc_insertion_point(field_release:sport.StreamInfo.platform)
  clear_has_platform();
  return platform_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StreamInfo::set_allocated_platform(::std::string* platform) {
  if (platform != NULL) {
    set_has_platform();
  } else {
    clear_has_platform();
  }
  platform_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), platform);
  // @@protoc_insertion_point(field_set_allocated:sport.StreamInfo.platform)
}

// optional string source_url = 5;
inline bool StreamInfo::has_source_url() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void StreamInfo::set_has_source_url() {
  _has_bits_[0] |= 0x00000008u;
}
inline void StreamInfo::clear_has_source_url() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void StreamInfo::clear_source_url() {
  source_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_source_url();
}
inline const ::std::string& StreamInfo::source_url() const {
  // @@protoc_insertion_point(field_get:sport.StreamInfo.source_url)
  return source_url_.GetNoArena();
}
inline void StreamInfo::set_source_url(const ::std::string& value) {
  set_has_source_url();
  source_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sport.StreamInfo.source_url)
}
#if LANG_CXX11
inline void StreamInfo::set_source_url(::std::string&& value) {
  set_has_source_url();
  source_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sport.StreamInfo.source_url)
}
#endif
inline void StreamInfo::set_source_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_source_url();
  source_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sport.StreamInfo.source_url)
}
inline void StreamInfo::set_source_url(const char* value, size_t size) {
  set_has_source_url();
  source_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sport.StreamInfo.source_url)
}
inline ::std::string* StreamInfo::mutable_source_url() {
  set_has_source_url();
  // @@protoc_insertion_point(field_mutable:sport.StreamInfo.source_url)
  return source_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StreamInfo::release_source_url() {
  // @@protoc_insertion_point(field_release:sport.StreamInfo.source_url)
  clear_has_source_url();
  return source_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StreamInfo::set_allocated_source_url(::std::string* source_url) {
  if (source_url != NULL) {
    set_has_source_url();
  } else {
    clear_has_source_url();
  }
  source_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source_url);
  // @@protoc_insertion_point(field_set_allocated:sport.StreamInfo.source_url)
}

// optional string stream_url = 6;
inline bool StreamInfo::has_stream_url() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void StreamInfo::set_has_stream_url() {
  _has_bits_[0] |= 0x00000010u;
}
inline void StreamInfo::clear_has_stream_url() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void StreamInfo::clear_stream_url() {
  stream_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_stream_url();
}
inline const ::std::string& StreamInfo::stream_url() const {
  // @@protoc_insertion_point(field_get:sport.StreamInfo.stream_url)
  return stream_url_.GetNoArena();
}
inline void StreamInfo::set_stream_url(const ::std::string& value) {
  set_has_stream_url();
  stream_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sport.StreamInfo.stream_url)
}
#if LANG_CXX11
inline void StreamInfo::set_stream_url(::std::string&& value) {
  set_has_stream_url();
  stream_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sport.StreamInfo.stream_url)
}
#endif
inline void StreamInfo::set_stream_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_stream_url();
  stream_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sport.StreamInfo.stream_url)
}
inline void StreamInfo::set_stream_url(const char* value, size_t size) {
  set_has_stream_url();
  stream_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sport.StreamInfo.stream_url)
}
inline ::std::string* StreamInfo::mutable_stream_url() {
  set_has_stream_url();
  // @@protoc_insertion_point(field_mutable:sport.StreamInfo.stream_url)
  return stream_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StreamInfo::release_stream_url() {
  // @@protoc_insertion_point(field_release:sport.StreamInfo.stream_url)
  clear_has_stream_url();
  return stream_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StreamInfo::set_allocated_stream_url(::std::string* stream_url) {
  if (stream_url != NULL) {
    set_has_stream_url();
  } else {
    clear_has_stream_url();
  }
  stream_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), stream_url);
  // @@protoc_insertion_point(field_set_allocated:sport.StreamInfo.stream_url)
}

// optional .sport.ImageInfo preview_image = 7;
inline bool StreamInfo::has_preview_image() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void StreamInfo::set_has_preview_image() {
  _has_bits_[0] |= 0x00000080u;
}
inline void StreamInfo::clear_has_preview_image() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void StreamInfo::clear_preview_image() {
  if (preview_image_ != NULL) preview_image_->::sport::ImageInfo::Clear();
  clear_has_preview_image();
}
inline const ::sport::ImageInfo& StreamInfo::preview_image() const {
  const ::sport::ImageInfo* p = preview_image_;
  // @@protoc_insertion_point(field_get:sport.StreamInfo.preview_image)
  return p != NULL ? *p : *reinterpret_cast<const ::sport::ImageInfo*>(
      &::sport::_ImageInfo_default_instance_);
}
inline ::sport::ImageInfo* StreamInfo::mutable_preview_image() {
  set_has_preview_image();
  if (preview_image_ == NULL) {
    preview_image_ = new ::sport::ImageInfo;
  }
  // @@protoc_insertion_point(field_mutable:sport.StreamInfo.preview_image)
  return preview_image_;
}
inline ::sport::ImageInfo* StreamInfo::release_preview_image() {
  // @@protoc_insertion_point(field_release:sport.StreamInfo.preview_image)
  clear_has_preview_image();
  ::sport::ImageInfo* temp = preview_image_;
  preview_image_ = NULL;
  return temp;
}
inline void StreamInfo::set_allocated_preview_image(::sport::ImageInfo* preview_image) {
  delete preview_image_;
  preview_image_ = preview_image;
  if (preview_image) {
    set_has_preview_image();
  } else {
    clear_has_preview_image();
  }
  // @@protoc_insertion_point(field_set_allocated:sport.StreamInfo.preview_image)
}

// optional string team1 = 8;
inline bool StreamInfo::has_team1() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void StreamInfo::set_has_team1() {
  _has_bits_[0] |= 0x00000020u;
}
inline void StreamInfo::clear_has_team1() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void StreamInfo::clear_team1() {
  team1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_team1();
}
inline const ::std::string& StreamInfo::team1() const {
  // @@protoc_insertion_point(field_get:sport.StreamInfo.team1)
  return team1_.GetNoArena();
}
inline void StreamInfo::set_team1(const ::std::string& value) {
  set_has_team1();
  team1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sport.StreamInfo.team1)
}
#if LANG_CXX11
inline void StreamInfo::set_team1(::std::string&& value) {
  set_has_team1();
  team1_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sport.StreamInfo.team1)
}
#endif
inline void StreamInfo::set_team1(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_team1();
  team1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sport.StreamInfo.team1)
}
inline void StreamInfo::set_team1(const char* value, size_t size) {
  set_has_team1();
  team1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sport.StreamInfo.team1)
}
inline ::std::string* StreamInfo::mutable_team1() {
  set_has_team1();
  // @@protoc_insertion_point(field_mutable:sport.StreamInfo.team1)
  return team1_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StreamInfo::release_team1() {
  // @@protoc_insertion_point(field_release:sport.StreamInfo.team1)
  clear_has_team1();
  return team1_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StreamInfo::set_allocated_team1(::std::string* team1) {
  if (team1 != NULL) {
    set_has_team1();
  } else {
    clear_has_team1();
  }
  team1_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), team1);
  // @@protoc_insertion_point(field_set_allocated:sport.StreamInfo.team1)
}

// optional string team2 = 9;
inline bool StreamInfo::has_team2() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void StreamInfo::set_has_team2() {
  _has_bits_[0] |= 0x00000040u;
}
inline void StreamInfo::clear_has_team2() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void StreamInfo::clear_team2() {
  team2_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_team2();
}
inline const ::std::string& StreamInfo::team2() const {
  // @@protoc_insertion_point(field_get:sport.StreamInfo.team2)
  return team2_.GetNoArena();
}
inline void StreamInfo::set_team2(const ::std::string& value) {
  set_has_team2();
  team2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sport.StreamInfo.team2)
}
#if LANG_CXX11
inline void StreamInfo::set_team2(::std::string&& value) {
  set_has_team2();
  team2_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sport.StreamInfo.team2)
}
#endif
inline void StreamInfo::set_team2(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_team2();
  team2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sport.StreamInfo.team2)
}
inline void StreamInfo::set_team2(const char* value, size_t size) {
  set_has_team2();
  team2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sport.StreamInfo.team2)
}
inline ::std::string* StreamInfo::mutable_team2() {
  set_has_team2();
  // @@protoc_insertion_point(field_mutable:sport.StreamInfo.team2)
  return team2_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StreamInfo::release_team2() {
  // @@protoc_insertion_point(field_release:sport.StreamInfo.team2)
  clear_has_team2();
  return team2_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StreamInfo::set_allocated_team2(::std::string* team2) {
  if (team2 != NULL) {
    set_has_team2();
  } else {
    clear_has_team2();
  }
  team2_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), team2);
  // @@protoc_insertion_point(field_set_allocated:sport.StreamInfo.team2)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace sport

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sport_5fadditive_2eproto__INCLUDED