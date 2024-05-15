// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sampled_profile.proto

#ifndef PROTOBUF_sampled_5fprofile_2eproto__INCLUDED
#define PROTOBUF_sampled_5fprofile_2eproto__INCLUDED

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "call_stack_profile.pb.h"
#include "execution_context.pb.h"
#include "perf_data.pb.h"
#include "perf_stat.pb.h"
// @@protoc_insertion_point(includes)
namespace metrics {
class SampledProfile;
class SampledProfileDefaultTypeInternal;
extern SampledProfileDefaultTypeInternal _SampledProfile_default_instance_;
class SampledProfile_ProcessTypesEntry;
class SampledProfile_ProcessTypesEntryDefaultTypeInternal;
extern SampledProfile_ProcessTypesEntryDefaultTypeInternal _SampledProfile_ProcessTypesEntry_default_instance_;
class SampledProfile_ThreadTypesEntry;
class SampledProfile_ThreadTypesEntryDefaultTypeInternal;
extern SampledProfile_ThreadTypesEntryDefaultTypeInternal _SampledProfile_ThreadTypesEntry_default_instance_;
}  // namespace metrics

namespace metrics {

namespace protobuf_sampled_5fprofile_2eproto {
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
}  // namespace protobuf_sampled_5fprofile_2eproto

enum SampledProfile_TriggerEvent {
  SampledProfile_TriggerEvent_UNKNOWN_TRIGGER_EVENT = 0,
  SampledProfile_TriggerEvent_PERIODIC_COLLECTION = 1,
  SampledProfile_TriggerEvent_RESUME_FROM_SUSPEND = 2,
  SampledProfile_TriggerEvent_RESTORE_SESSION = 3,
  SampledProfile_TriggerEvent_PROCESS_STARTUP = 4,
  SampledProfile_TriggerEvent_JANKY_TASK = 5,
  SampledProfile_TriggerEvent_THREAD_HUNG = 6,
  SampledProfile_TriggerEvent_PERIODIC_HEAP_COLLECTION = 7
};
bool SampledProfile_TriggerEvent_IsValid(int value);
const SampledProfile_TriggerEvent SampledProfile_TriggerEvent_TriggerEvent_MIN = SampledProfile_TriggerEvent_UNKNOWN_TRIGGER_EVENT;
const SampledProfile_TriggerEvent SampledProfile_TriggerEvent_TriggerEvent_MAX = SampledProfile_TriggerEvent_PERIODIC_HEAP_COLLECTION;
const int SampledProfile_TriggerEvent_TriggerEvent_ARRAYSIZE = SampledProfile_TriggerEvent_TriggerEvent_MAX + 1;

const ::google::protobuf::EnumDescriptor* SampledProfile_TriggerEvent_descriptor();
inline const ::std::string& SampledProfile_TriggerEvent_Name(SampledProfile_TriggerEvent value) {
  return ::google::protobuf::internal::NameOfEnum(
    SampledProfile_TriggerEvent_descriptor(), value);
}
inline bool SampledProfile_TriggerEvent_Parse(
    const ::std::string& name, SampledProfile_TriggerEvent* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SampledProfile_TriggerEvent>(
    SampledProfile_TriggerEvent_descriptor(), name, value);
}
// ===================================================================


// -------------------------------------------------------------------


// -------------------------------------------------------------------

class SampledProfile : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metrics.SampledProfile) */ {
 public:
  SampledProfile();
  virtual ~SampledProfile();

  SampledProfile(const SampledProfile& from);

  inline SampledProfile& operator=(const SampledProfile& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SampledProfile(SampledProfile&& from) noexcept
    : SampledProfile() {
    *this = ::std::move(from);
  }

  inline SampledProfile& operator=(SampledProfile&& from) noexcept {
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
  static const SampledProfile& default_instance();

  static inline const SampledProfile* internal_default_instance() {
    return reinterpret_cast<const SampledProfile*>(
               &_SampledProfile_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(SampledProfile* other);
  friend void swap(SampledProfile& a, SampledProfile& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SampledProfile* New() const PROTOBUF_FINAL { return New(NULL); }

  SampledProfile* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SampledProfile& from);
  void MergeFrom(const SampledProfile& from);
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
  void InternalSwap(SampledProfile* other);
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


  typedef SampledProfile_TriggerEvent TriggerEvent;
  static const TriggerEvent UNKNOWN_TRIGGER_EVENT =
    SampledProfile_TriggerEvent_UNKNOWN_TRIGGER_EVENT;
  static const TriggerEvent PERIODIC_COLLECTION =
    SampledProfile_TriggerEvent_PERIODIC_COLLECTION;
  static const TriggerEvent RESUME_FROM_SUSPEND =
    SampledProfile_TriggerEvent_RESUME_FROM_SUSPEND;
  static const TriggerEvent RESTORE_SESSION =
    SampledProfile_TriggerEvent_RESTORE_SESSION;
  static const TriggerEvent PROCESS_STARTUP =
    SampledProfile_TriggerEvent_PROCESS_STARTUP;
  static const TriggerEvent JANKY_TASK =
    SampledProfile_TriggerEvent_JANKY_TASK;
  static const TriggerEvent THREAD_HUNG =
    SampledProfile_TriggerEvent_THREAD_HUNG;
  static const TriggerEvent PERIODIC_HEAP_COLLECTION =
    SampledProfile_TriggerEvent_PERIODIC_HEAP_COLLECTION;
  static inline bool TriggerEvent_IsValid(int value) {
    return SampledProfile_TriggerEvent_IsValid(value);
  }
  static const TriggerEvent TriggerEvent_MIN =
    SampledProfile_TriggerEvent_TriggerEvent_MIN;
  static const TriggerEvent TriggerEvent_MAX =
    SampledProfile_TriggerEvent_TriggerEvent_MAX;
  static const int TriggerEvent_ARRAYSIZE =
    SampledProfile_TriggerEvent_TriggerEvent_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TriggerEvent_descriptor() {
    return SampledProfile_TriggerEvent_descriptor();
  }
  static inline const ::std::string& TriggerEvent_Name(TriggerEvent value) {
    return SampledProfile_TriggerEvent_Name(value);
  }
  static inline bool TriggerEvent_Parse(const ::std::string& name,
      TriggerEvent* value) {
    return SampledProfile_TriggerEvent_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // map<uint32, .metrics.Process> process_types = 13;
  int process_types_size() const;
  void clear_process_types();
  static const int kProcessTypesFieldNumber = 13;
  const ::google::protobuf::Map< ::google::protobuf::uint32, ::metrics::Process >&
      process_types() const;
  ::google::protobuf::Map< ::google::protobuf::uint32, ::metrics::Process >*
      mutable_process_types();

  // map<uint32, .metrics.Thread> thread_types = 14;
  int thread_types_size() const;
  void clear_thread_types();
  static const int kThreadTypesFieldNumber = 14;
  const ::google::protobuf::Map< ::google::protobuf::uint32, ::metrics::Thread >&
      thread_types() const;
  ::google::protobuf::Map< ::google::protobuf::uint32, ::metrics::Thread >*
      mutable_thread_types();

  // repeated uint32 cpu_max_frequency_mhz = 15;
  int cpu_max_frequency_mhz_size() const;
  void clear_cpu_max_frequency_mhz();
  static const int kCpuMaxFrequencyMhzFieldNumber = 15;
  ::google::protobuf::uint32 cpu_max_frequency_mhz(int index) const;
  void set_cpu_max_frequency_mhz(int index, ::google::protobuf::uint32 value);
  void add_cpu_max_frequency_mhz(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      cpu_max_frequency_mhz() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_cpu_max_frequency_mhz();

  // optional .metrics.PerfDataProto perf_data = 4;
  bool has_perf_data() const;
  void clear_perf_data();
  static const int kPerfDataFieldNumber = 4;
  const ::metrics::PerfDataProto& perf_data() const;
  ::metrics::PerfDataProto* mutable_perf_data();
  ::metrics::PerfDataProto* release_perf_data();
  void set_allocated_perf_data(::metrics::PerfDataProto* perf_data);

  // optional .metrics.CallStackProfile call_stack_profile = 9;
  bool has_call_stack_profile() const;
  void clear_call_stack_profile();
  static const int kCallStackProfileFieldNumber = 9;
  const ::metrics::CallStackProfile& call_stack_profile() const;
  ::metrics::CallStackProfile* mutable_call_stack_profile();
  ::metrics::CallStackProfile* release_call_stack_profile();
  void set_allocated_call_stack_profile(::metrics::CallStackProfile* call_stack_profile);

  // optional .metrics.PerfStatProto perf_stat = 10;
  bool has_perf_stat() const;
  void clear_perf_stat();
  static const int kPerfStatFieldNumber = 10;
  const ::metrics::PerfStatProto& perf_stat() const;
  ::metrics::PerfStatProto* mutable_perf_stat();
  ::metrics::PerfStatProto* release_perf_stat();
  void set_allocated_perf_stat(::metrics::PerfStatProto* perf_stat);

  // optional int64 ms_after_boot = 2;
  bool has_ms_after_boot() const;
  void clear_ms_after_boot();
  static const int kMsAfterBootFieldNumber = 2;
  ::google::protobuf::int64 ms_after_boot() const;
  void set_ms_after_boot(::google::protobuf::int64 value);

  // optional int64 ms_after_login = 3;
  bool has_ms_after_login() const;
  void clear_ms_after_login();
  static const int kMsAfterLoginFieldNumber = 3;
  ::google::protobuf::int64 ms_after_login() const;
  void set_ms_after_login(::google::protobuf::int64 value);

  // optional .metrics.SampledProfile.TriggerEvent trigger_event = 1;
  bool has_trigger_event() const;
  void clear_trigger_event();
  static const int kTriggerEventFieldNumber = 1;
  ::metrics::SampledProfile_TriggerEvent trigger_event() const;
  void set_trigger_event(::metrics::SampledProfile_TriggerEvent value);

  // optional int32 num_tabs_restored = 7;
  bool has_num_tabs_restored() const;
  void clear_num_tabs_restored();
  static const int kNumTabsRestoredFieldNumber = 7;
  ::google::protobuf::int32 num_tabs_restored() const;
  void set_num_tabs_restored(::google::protobuf::int32 value);

  // optional int64 suspend_duration_ms = 5;
  bool has_suspend_duration_ms() const;
  void clear_suspend_duration_ms();
  static const int kSuspendDurationMsFieldNumber = 5;
  ::google::protobuf::int64 suspend_duration_ms() const;
  void set_suspend_duration_ms(::google::protobuf::int64 value);

  // optional int64 ms_after_resume = 6;
  bool has_ms_after_resume() const;
  void clear_ms_after_resume();
  static const int kMsAfterResumeFieldNumber = 6;
  ::google::protobuf::int64 ms_after_resume() const;
  void set_ms_after_resume(::google::protobuf::int64 value);

  // optional int64 ms_after_restore = 8;
  bool has_ms_after_restore() const;
  void clear_ms_after_restore();
  static const int kMsAfterRestoreFieldNumber = 8;
  ::google::protobuf::int64 ms_after_restore() const;
  void set_ms_after_restore(::google::protobuf::int64 value);

  // optional .metrics.Process process = 11;
  bool has_process() const;
  void clear_process();
  static const int kProcessFieldNumber = 11;
  ::metrics::Process process() const;
  void set_process(::metrics::Process value);

  // optional .metrics.Thread thread = 12;
  bool has_thread() const;
  void clear_thread();
  static const int kThreadFieldNumber = 12;
  ::metrics::Thread thread() const;
  void set_thread(::metrics::Thread value);

  // optional float psi_cpu_last_10s_pct = 16;
  bool has_psi_cpu_last_10s_pct() const;
  void clear_psi_cpu_last_10s_pct();
  static const int kPsiCpuLast10SPctFieldNumber = 16;
  float psi_cpu_last_10s_pct() const;
  void set_psi_cpu_last_10s_pct(float value);

  // optional float psi_cpu_last_60s_pct = 17;
  bool has_psi_cpu_last_60s_pct() const;
  void clear_psi_cpu_last_60s_pct();
  static const int kPsiCpuLast60SPctFieldNumber = 17;
  float psi_cpu_last_60s_pct() const;
  void set_psi_cpu_last_60s_pct(float value);

  // @@protoc_insertion_point(class_scope:metrics.SampledProfile)
 private:
  void set_has_trigger_event();
  void clear_has_trigger_event();
  void set_has_process();
  void clear_has_process();
  void set_has_thread();
  void clear_has_thread();
  void set_has_ms_after_boot();
  void clear_has_ms_after_boot();
  void set_has_ms_after_login();
  void clear_has_ms_after_login();
  void set_has_suspend_duration_ms();
  void clear_has_suspend_duration_ms();
  void set_has_ms_after_resume();
  void clear_has_ms_after_resume();
  void set_has_num_tabs_restored();
  void clear_has_num_tabs_restored();
  void set_has_ms_after_restore();
  void clear_has_ms_after_restore();
  void set_has_perf_data();
  void clear_has_perf_data();
  void set_has_call_stack_profile();
  void clear_has_call_stack_profile();
  void set_has_perf_stat();
  void clear_has_perf_stat();
  void set_has_psi_cpu_last_10s_pct();
  void clear_has_psi_cpu_last_10s_pct();
  void set_has_psi_cpu_last_60s_pct();
  void clear_has_psi_cpu_last_60s_pct();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  public:
  class SampledProfile_ProcessTypesEntry : public ::google::protobuf::internal::MapEntry<SampledProfile_ProcessTypesEntry, 
      ::google::protobuf::uint32, ::metrics::Process,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_ENUM,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<SampledProfile_ProcessTypesEntry, 
      ::google::protobuf::uint32, ::metrics::Process,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_ENUM,
      0 > SuperType;
    SampledProfile_ProcessTypesEntry();
    SampledProfile_ProcessTypesEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const SampledProfile_ProcessTypesEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_SampledProfile_ProcessTypesEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      SampledProfile_ProcessTypesEntry,
      ::google::protobuf::uint32, ::metrics::Process,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_ENUM,
      0 > process_types_;
  private:
  public:
  class SampledProfile_ThreadTypesEntry : public ::google::protobuf::internal::MapEntry<SampledProfile_ThreadTypesEntry, 
      ::google::protobuf::uint32, ::metrics::Thread,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_ENUM,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<SampledProfile_ThreadTypesEntry, 
      ::google::protobuf::uint32, ::metrics::Thread,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_ENUM,
      0 > SuperType;
    SampledProfile_ThreadTypesEntry();
    SampledProfile_ThreadTypesEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const SampledProfile_ThreadTypesEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_SampledProfile_ThreadTypesEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      SampledProfile_ThreadTypesEntry,
      ::google::protobuf::uint32, ::metrics::Thread,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_ENUM,
      0 > thread_types_;
  private:
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > cpu_max_frequency_mhz_;
  ::metrics::PerfDataProto* perf_data_;
  ::metrics::CallStackProfile* call_stack_profile_;
  ::metrics::PerfStatProto* perf_stat_;
  ::google::protobuf::int64 ms_after_boot_;
  ::google::protobuf::int64 ms_after_login_;
  int trigger_event_;
  ::google::protobuf::int32 num_tabs_restored_;
  ::google::protobuf::int64 suspend_duration_ms_;
  ::google::protobuf::int64 ms_after_resume_;
  ::google::protobuf::int64 ms_after_restore_;
  int process_;
  int thread_;
  float psi_cpu_last_10s_pct_;
  float psi_cpu_last_60s_pct_;
  friend struct protobuf_sampled_5fprofile_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// SampledProfile

// optional .metrics.SampledProfile.TriggerEvent trigger_event = 1;
inline bool SampledProfile::has_trigger_event() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SampledProfile::set_has_trigger_event() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SampledProfile::clear_has_trigger_event() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SampledProfile::clear_trigger_event() {
  trigger_event_ = 0;
  clear_has_trigger_event();
}
inline ::metrics::SampledProfile_TriggerEvent SampledProfile::trigger_event() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.trigger_event)
  return static_cast< ::metrics::SampledProfile_TriggerEvent >(trigger_event_);
}
inline void SampledProfile::set_trigger_event(::metrics::SampledProfile_TriggerEvent value) {
  assert(::metrics::SampledProfile_TriggerEvent_IsValid(value));
  set_has_trigger_event();
  trigger_event_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.trigger_event)
}

// optional .metrics.Process process = 11;
inline bool SampledProfile::has_process() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void SampledProfile::set_has_process() {
  _has_bits_[0] |= 0x00000400u;
}
inline void SampledProfile::clear_has_process() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void SampledProfile::clear_process() {
  process_ = 0;
  clear_has_process();
}
inline ::metrics::Process SampledProfile::process() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.process)
  return static_cast< ::metrics::Process >(process_);
}
inline void SampledProfile::set_process(::metrics::Process value) {
  assert(::metrics::Process_IsValid(value));
  set_has_process();
  process_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.process)
}

// optional .metrics.Thread thread = 12;
inline bool SampledProfile::has_thread() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void SampledProfile::set_has_thread() {
  _has_bits_[0] |= 0x00000800u;
}
inline void SampledProfile::clear_has_thread() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void SampledProfile::clear_thread() {
  thread_ = 0;
  clear_has_thread();
}
inline ::metrics::Thread SampledProfile::thread() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.thread)
  return static_cast< ::metrics::Thread >(thread_);
}
inline void SampledProfile::set_thread(::metrics::Thread value) {
  assert(::metrics::Thread_IsValid(value));
  set_has_thread();
  thread_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.thread)
}

// map<uint32, .metrics.Process> process_types = 13;
inline int SampledProfile::process_types_size() const {
  return process_types_.size();
}
inline void SampledProfile::clear_process_types() {
  process_types_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::uint32, ::metrics::Process >&
SampledProfile::process_types() const {
  // @@protoc_insertion_point(field_map:metrics.SampledProfile.process_types)
  return process_types_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::uint32, ::metrics::Process >*
SampledProfile::mutable_process_types() {
  // @@protoc_insertion_point(field_mutable_map:metrics.SampledProfile.process_types)
  return process_types_.MutableMap();
}

// map<uint32, .metrics.Thread> thread_types = 14;
inline int SampledProfile::thread_types_size() const {
  return thread_types_.size();
}
inline void SampledProfile::clear_thread_types() {
  thread_types_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::uint32, ::metrics::Thread >&
SampledProfile::thread_types() const {
  // @@protoc_insertion_point(field_map:metrics.SampledProfile.thread_types)
  return thread_types_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::uint32, ::metrics::Thread >*
SampledProfile::mutable_thread_types() {
  // @@protoc_insertion_point(field_mutable_map:metrics.SampledProfile.thread_types)
  return thread_types_.MutableMap();
}

// optional int64 ms_after_boot = 2;
inline bool SampledProfile::has_ms_after_boot() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SampledProfile::set_has_ms_after_boot() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SampledProfile::clear_has_ms_after_boot() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SampledProfile::clear_ms_after_boot() {
  ms_after_boot_ = GOOGLE_LONGLONG(0);
  clear_has_ms_after_boot();
}
inline ::google::protobuf::int64 SampledProfile::ms_after_boot() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.ms_after_boot)
  return ms_after_boot_;
}
inline void SampledProfile::set_ms_after_boot(::google::protobuf::int64 value) {
  set_has_ms_after_boot();
  ms_after_boot_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.ms_after_boot)
}

// optional int64 ms_after_login = 3;
inline bool SampledProfile::has_ms_after_login() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SampledProfile::set_has_ms_after_login() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SampledProfile::clear_has_ms_after_login() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SampledProfile::clear_ms_after_login() {
  ms_after_login_ = GOOGLE_LONGLONG(0);
  clear_has_ms_after_login();
}
inline ::google::protobuf::int64 SampledProfile::ms_after_login() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.ms_after_login)
  return ms_after_login_;
}
inline void SampledProfile::set_ms_after_login(::google::protobuf::int64 value) {
  set_has_ms_after_login();
  ms_after_login_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.ms_after_login)
}

// optional int64 suspend_duration_ms = 5;
inline bool SampledProfile::has_suspend_duration_ms() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SampledProfile::set_has_suspend_duration_ms() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SampledProfile::clear_has_suspend_duration_ms() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SampledProfile::clear_suspend_duration_ms() {
  suspend_duration_ms_ = GOOGLE_LONGLONG(0);
  clear_has_suspend_duration_ms();
}
inline ::google::protobuf::int64 SampledProfile::suspend_duration_ms() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.suspend_duration_ms)
  return suspend_duration_ms_;
}
inline void SampledProfile::set_suspend_duration_ms(::google::protobuf::int64 value) {
  set_has_suspend_duration_ms();
  suspend_duration_ms_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.suspend_duration_ms)
}

// optional int64 ms_after_resume = 6;
inline bool SampledProfile::has_ms_after_resume() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SampledProfile::set_has_ms_after_resume() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SampledProfile::clear_has_ms_after_resume() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SampledProfile::clear_ms_after_resume() {
  ms_after_resume_ = GOOGLE_LONGLONG(0);
  clear_has_ms_after_resume();
}
inline ::google::protobuf::int64 SampledProfile::ms_after_resume() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.ms_after_resume)
  return ms_after_resume_;
}
inline void SampledProfile::set_ms_after_resume(::google::protobuf::int64 value) {
  set_has_ms_after_resume();
  ms_after_resume_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.ms_after_resume)
}

// optional int32 num_tabs_restored = 7;
inline bool SampledProfile::has_num_tabs_restored() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SampledProfile::set_has_num_tabs_restored() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SampledProfile::clear_has_num_tabs_restored() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SampledProfile::clear_num_tabs_restored() {
  num_tabs_restored_ = 0;
  clear_has_num_tabs_restored();
}
inline ::google::protobuf::int32 SampledProfile::num_tabs_restored() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.num_tabs_restored)
  return num_tabs_restored_;
}
inline void SampledProfile::set_num_tabs_restored(::google::protobuf::int32 value) {
  set_has_num_tabs_restored();
  num_tabs_restored_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.num_tabs_restored)
}

// optional int64 ms_after_restore = 8;
inline bool SampledProfile::has_ms_after_restore() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void SampledProfile::set_has_ms_after_restore() {
  _has_bits_[0] |= 0x00000200u;
}
inline void SampledProfile::clear_has_ms_after_restore() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void SampledProfile::clear_ms_after_restore() {
  ms_after_restore_ = GOOGLE_LONGLONG(0);
  clear_has_ms_after_restore();
}
inline ::google::protobuf::int64 SampledProfile::ms_after_restore() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.ms_after_restore)
  return ms_after_restore_;
}
inline void SampledProfile::set_ms_after_restore(::google::protobuf::int64 value) {
  set_has_ms_after_restore();
  ms_after_restore_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.ms_after_restore)
}

// optional .metrics.PerfDataProto perf_data = 4;
inline bool SampledProfile::has_perf_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SampledProfile::set_has_perf_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SampledProfile::clear_has_perf_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SampledProfile::clear_perf_data() {
  if (perf_data_ != NULL) perf_data_->::metrics::PerfDataProto::Clear();
  clear_has_perf_data();
}
inline const ::metrics::PerfDataProto& SampledProfile::perf_data() const {
  const ::metrics::PerfDataProto* p = perf_data_;
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.perf_data)
  return p != NULL ? *p : *reinterpret_cast<const ::metrics::PerfDataProto*>(
      &::metrics::_PerfDataProto_default_instance_);
}
inline ::metrics::PerfDataProto* SampledProfile::mutable_perf_data() {
  set_has_perf_data();
  if (perf_data_ == NULL) {
    perf_data_ = new ::metrics::PerfDataProto;
  }
  // @@protoc_insertion_point(field_mutable:metrics.SampledProfile.perf_data)
  return perf_data_;
}
inline ::metrics::PerfDataProto* SampledProfile::release_perf_data() {
  // @@protoc_insertion_point(field_release:metrics.SampledProfile.perf_data)
  clear_has_perf_data();
  ::metrics::PerfDataProto* temp = perf_data_;
  perf_data_ = NULL;
  return temp;
}
inline void SampledProfile::set_allocated_perf_data(::metrics::PerfDataProto* perf_data) {
  delete perf_data_;
  perf_data_ = perf_data;
  if (perf_data) {
    set_has_perf_data();
  } else {
    clear_has_perf_data();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.SampledProfile.perf_data)
}

// optional .metrics.CallStackProfile call_stack_profile = 9;
inline bool SampledProfile::has_call_stack_profile() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SampledProfile::set_has_call_stack_profile() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SampledProfile::clear_has_call_stack_profile() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SampledProfile::clear_call_stack_profile() {
  if (call_stack_profile_ != NULL) call_stack_profile_->::metrics::CallStackProfile::Clear();
  clear_has_call_stack_profile();
}
inline const ::metrics::CallStackProfile& SampledProfile::call_stack_profile() const {
  const ::metrics::CallStackProfile* p = call_stack_profile_;
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.call_stack_profile)
  return p != NULL ? *p : *reinterpret_cast<const ::metrics::CallStackProfile*>(
      &::metrics::_CallStackProfile_default_instance_);
}
inline ::metrics::CallStackProfile* SampledProfile::mutable_call_stack_profile() {
  set_has_call_stack_profile();
  if (call_stack_profile_ == NULL) {
    call_stack_profile_ = new ::metrics::CallStackProfile;
  }
  // @@protoc_insertion_point(field_mutable:metrics.SampledProfile.call_stack_profile)
  return call_stack_profile_;
}
inline ::metrics::CallStackProfile* SampledProfile::release_call_stack_profile() {
  // @@protoc_insertion_point(field_release:metrics.SampledProfile.call_stack_profile)
  clear_has_call_stack_profile();
  ::metrics::CallStackProfile* temp = call_stack_profile_;
  call_stack_profile_ = NULL;
  return temp;
}
inline void SampledProfile::set_allocated_call_stack_profile(::metrics::CallStackProfile* call_stack_profile) {
  delete call_stack_profile_;
  call_stack_profile_ = call_stack_profile;
  if (call_stack_profile) {
    set_has_call_stack_profile();
  } else {
    clear_has_call_stack_profile();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.SampledProfile.call_stack_profile)
}

// optional .metrics.PerfStatProto perf_stat = 10;
inline bool SampledProfile::has_perf_stat() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SampledProfile::set_has_perf_stat() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SampledProfile::clear_has_perf_stat() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SampledProfile::clear_perf_stat() {
  if (perf_stat_ != NULL) perf_stat_->::metrics::PerfStatProto::Clear();
  clear_has_perf_stat();
}
inline const ::metrics::PerfStatProto& SampledProfile::perf_stat() const {
  const ::metrics::PerfStatProto* p = perf_stat_;
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.perf_stat)
  return p != NULL ? *p : *reinterpret_cast<const ::metrics::PerfStatProto*>(
      &::metrics::_PerfStatProto_default_instance_);
}
inline ::metrics::PerfStatProto* SampledProfile::mutable_perf_stat() {
  set_has_perf_stat();
  if (perf_stat_ == NULL) {
    perf_stat_ = new ::metrics::PerfStatProto;
  }
  // @@protoc_insertion_point(field_mutable:metrics.SampledProfile.perf_stat)
  return perf_stat_;
}
inline ::metrics::PerfStatProto* SampledProfile::release_perf_stat() {
  // @@protoc_insertion_point(field_release:metrics.SampledProfile.perf_stat)
  clear_has_perf_stat();
  ::metrics::PerfStatProto* temp = perf_stat_;
  perf_stat_ = NULL;
  return temp;
}
inline void SampledProfile::set_allocated_perf_stat(::metrics::PerfStatProto* perf_stat) {
  delete perf_stat_;
  perf_stat_ = perf_stat;
  if (perf_stat) {
    set_has_perf_stat();
  } else {
    clear_has_perf_stat();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.SampledProfile.perf_stat)
}

// repeated uint32 cpu_max_frequency_mhz = 15;
inline int SampledProfile::cpu_max_frequency_mhz_size() const {
  return cpu_max_frequency_mhz_.size();
}
inline void SampledProfile::clear_cpu_max_frequency_mhz() {
  cpu_max_frequency_mhz_.Clear();
}
inline ::google::protobuf::uint32 SampledProfile::cpu_max_frequency_mhz(int index) const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.cpu_max_frequency_mhz)
  return cpu_max_frequency_mhz_.Get(index);
}
inline void SampledProfile::set_cpu_max_frequency_mhz(int index, ::google::protobuf::uint32 value) {
  cpu_max_frequency_mhz_.Set(index, value);
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.cpu_max_frequency_mhz)
}
inline void SampledProfile::add_cpu_max_frequency_mhz(::google::protobuf::uint32 value) {
  cpu_max_frequency_mhz_.Add(value);
  // @@protoc_insertion_point(field_add:metrics.SampledProfile.cpu_max_frequency_mhz)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SampledProfile::cpu_max_frequency_mhz() const {
  // @@protoc_insertion_point(field_list:metrics.SampledProfile.cpu_max_frequency_mhz)
  return cpu_max_frequency_mhz_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SampledProfile::mutable_cpu_max_frequency_mhz() {
  // @@protoc_insertion_point(field_mutable_list:metrics.SampledProfile.cpu_max_frequency_mhz)
  return &cpu_max_frequency_mhz_;
}

// optional float psi_cpu_last_10s_pct = 16;
inline bool SampledProfile::has_psi_cpu_last_10s_pct() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void SampledProfile::set_has_psi_cpu_last_10s_pct() {
  _has_bits_[0] |= 0x00001000u;
}
inline void SampledProfile::clear_has_psi_cpu_last_10s_pct() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void SampledProfile::clear_psi_cpu_last_10s_pct() {
  psi_cpu_last_10s_pct_ = 0;
  clear_has_psi_cpu_last_10s_pct();
}
inline float SampledProfile::psi_cpu_last_10s_pct() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.psi_cpu_last_10s_pct)
  return psi_cpu_last_10s_pct_;
}
inline void SampledProfile::set_psi_cpu_last_10s_pct(float value) {
  set_has_psi_cpu_last_10s_pct();
  psi_cpu_last_10s_pct_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.psi_cpu_last_10s_pct)
}

// optional float psi_cpu_last_60s_pct = 17;
inline bool SampledProfile::has_psi_cpu_last_60s_pct() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void SampledProfile::set_has_psi_cpu_last_60s_pct() {
  _has_bits_[0] |= 0x00002000u;
}
inline void SampledProfile::clear_has_psi_cpu_last_60s_pct() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void SampledProfile::clear_psi_cpu_last_60s_pct() {
  psi_cpu_last_60s_pct_ = 0;
  clear_has_psi_cpu_last_60s_pct();
}
inline float SampledProfile::psi_cpu_last_60s_pct() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.psi_cpu_last_60s_pct)
  return psi_cpu_last_60s_pct_;
}
inline void SampledProfile::set_psi_cpu_last_60s_pct(float value) {
  set_has_psi_cpu_last_60s_pct();
  psi_cpu_last_60s_pct_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.psi_cpu_last_60s_pct)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace metrics

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metrics::SampledProfile_TriggerEvent> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metrics::SampledProfile_TriggerEvent>() {
  return ::metrics::SampledProfile_TriggerEvent_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sampled_5fprofile_2eproto__INCLUDED
