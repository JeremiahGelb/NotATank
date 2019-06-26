// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: motor_control.proto

#ifndef PROTOBUF_motor_5fcontrol_2eproto__INCLUDED
#define PROTOBUF_motor_5fcontrol_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace protobuf_motor_5fcontrol_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsCoordinatesImpl();
void InitDefaultsCoordinates();
void InitDefaultsStatusImpl();
void InitDefaultsStatus();
void InitDefaultsCannonInfoImpl();
void InitDefaultsCannonInfo();
void InitDefaultsRequestImpl();
void InitDefaultsRequest();
inline void InitDefaults() {
  InitDefaultsCoordinates();
  InitDefaultsStatus();
  InitDefaultsCannonInfo();
  InitDefaultsRequest();
}
}  // namespace protobuf_motor_5fcontrol_2eproto
class CannonInfo;
class CannonInfoDefaultTypeInternal;
extern CannonInfoDefaultTypeInternal _CannonInfo_default_instance_;
class Coordinates;
class CoordinatesDefaultTypeInternal;
extern CoordinatesDefaultTypeInternal _Coordinates_default_instance_;
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Status;
class StatusDefaultTypeInternal;
extern StatusDefaultTypeInternal _Status_default_instance_;

// ===================================================================

class Coordinates : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Coordinates) */ {
 public:
  Coordinates();
  virtual ~Coordinates();

  Coordinates(const Coordinates& from);

  inline Coordinates& operator=(const Coordinates& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Coordinates(Coordinates&& from) noexcept
    : Coordinates() {
    *this = ::std::move(from);
  }

  inline Coordinates& operator=(Coordinates&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Coordinates& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Coordinates* internal_default_instance() {
    return reinterpret_cast<const Coordinates*>(
               &_Coordinates_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Coordinates* other);
  friend void swap(Coordinates& a, Coordinates& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Coordinates* New() const PROTOBUF_FINAL { return New(NULL); }

  Coordinates* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Coordinates& from);
  void MergeFrom(const Coordinates& from);
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
  void InternalSwap(Coordinates* other);
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

  // float theta = 1;
  void clear_theta();
  static const int kThetaFieldNumber = 1;
  float theta() const;
  void set_theta(float value);

  // float phi = 2;
  void clear_phi();
  static const int kPhiFieldNumber = 2;
  float phi() const;
  void set_phi(float value);

  // @@protoc_insertion_point(class_scope:Coordinates)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float theta_;
  float phi_;
  mutable int _cached_size_;
  friend struct ::protobuf_motor_5fcontrol_2eproto::TableStruct;
  friend void ::protobuf_motor_5fcontrol_2eproto::InitDefaultsCoordinatesImpl();
};
// -------------------------------------------------------------------

class Status : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Status) */ {
 public:
  Status();
  virtual ~Status();

  Status(const Status& from);

  inline Status& operator=(const Status& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Status(Status&& from) noexcept
    : Status() {
    *this = ::std::move(from);
  }

  inline Status& operator=(Status&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Status* internal_default_instance() {
    return reinterpret_cast<const Status*>(
               &_Status_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Status* other);
  friend void swap(Status& a, Status& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Status* New() const PROTOBUF_FINAL { return New(NULL); }

  Status* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Status& from);
  void MergeFrom(const Status& from);
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
  void InternalSwap(Status* other);
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

  // int32 status_code = 1;
  void clear_status_code();
  static const int kStatusCodeFieldNumber = 1;
  ::google::protobuf::int32 status_code() const;
  void set_status_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Status)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 status_code_;
  mutable int _cached_size_;
  friend struct ::protobuf_motor_5fcontrol_2eproto::TableStruct;
  friend void ::protobuf_motor_5fcontrol_2eproto::InitDefaultsStatusImpl();
};
// -------------------------------------------------------------------

class CannonInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CannonInfo) */ {
 public:
  CannonInfo();
  virtual ~CannonInfo();

  CannonInfo(const CannonInfo& from);

  inline CannonInfo& operator=(const CannonInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CannonInfo(CannonInfo&& from) noexcept
    : CannonInfo() {
    *this = ::std::move(from);
  }

  inline CannonInfo& operator=(CannonInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CannonInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CannonInfo* internal_default_instance() {
    return reinterpret_cast<const CannonInfo*>(
               &_CannonInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(CannonInfo* other);
  friend void swap(CannonInfo& a, CannonInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CannonInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  CannonInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CannonInfo& from);
  void MergeFrom(const CannonInfo& from);
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
  void InternalSwap(CannonInfo* other);
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

  // .Coordinates coords = 1;
  bool has_coords() const;
  void clear_coords();
  static const int kCoordsFieldNumber = 1;
  const ::Coordinates& coords() const;
  ::Coordinates* release_coords();
  ::Coordinates* mutable_coords();
  void set_allocated_coords(::Coordinates* coords);

  // bool loaded = 2;
  void clear_loaded();
  static const int kLoadedFieldNumber = 2;
  bool loaded() const;
  void set_loaded(bool value);

  // @@protoc_insertion_point(class_scope:CannonInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::Coordinates* coords_;
  bool loaded_;
  mutable int _cached_size_;
  friend struct ::protobuf_motor_5fcontrol_2eproto::TableStruct;
  friend void ::protobuf_motor_5fcontrol_2eproto::InitDefaultsCannonInfoImpl();
};
// -------------------------------------------------------------------

class Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(Request* other);
  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const PROTOBUF_FINAL { return New(NULL); }

  Request* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
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
  void InternalSwap(Request* other);
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

  // bool please = 1;
  void clear_please();
  static const int kPleaseFieldNumber = 1;
  bool please() const;
  void set_please(bool value);

  // @@protoc_insertion_point(class_scope:Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool please_;
  mutable int _cached_size_;
  friend struct ::protobuf_motor_5fcontrol_2eproto::TableStruct;
  friend void ::protobuf_motor_5fcontrol_2eproto::InitDefaultsRequestImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Coordinates

// float theta = 1;
inline void Coordinates::clear_theta() {
  theta_ = 0;
}
inline float Coordinates::theta() const {
  // @@protoc_insertion_point(field_get:Coordinates.theta)
  return theta_;
}
inline void Coordinates::set_theta(float value) {
  
  theta_ = value;
  // @@protoc_insertion_point(field_set:Coordinates.theta)
}

// float phi = 2;
inline void Coordinates::clear_phi() {
  phi_ = 0;
}
inline float Coordinates::phi() const {
  // @@protoc_insertion_point(field_get:Coordinates.phi)
  return phi_;
}
inline void Coordinates::set_phi(float value) {
  
  phi_ = value;
  // @@protoc_insertion_point(field_set:Coordinates.phi)
}

// -------------------------------------------------------------------

// Status

// int32 status_code = 1;
inline void Status::clear_status_code() {
  status_code_ = 0;
}
inline ::google::protobuf::int32 Status::status_code() const {
  // @@protoc_insertion_point(field_get:Status.status_code)
  return status_code_;
}
inline void Status::set_status_code(::google::protobuf::int32 value) {
  
  status_code_ = value;
  // @@protoc_insertion_point(field_set:Status.status_code)
}

// -------------------------------------------------------------------

// CannonInfo

// .Coordinates coords = 1;
inline bool CannonInfo::has_coords() const {
  return this != internal_default_instance() && coords_ != NULL;
}
inline void CannonInfo::clear_coords() {
  if (GetArenaNoVirtual() == NULL && coords_ != NULL) {
    delete coords_;
  }
  coords_ = NULL;
}
inline const ::Coordinates& CannonInfo::coords() const {
  const ::Coordinates* p = coords_;
  // @@protoc_insertion_point(field_get:CannonInfo.coords)
  return p != NULL ? *p : *reinterpret_cast<const ::Coordinates*>(
      &::_Coordinates_default_instance_);
}
inline ::Coordinates* CannonInfo::release_coords() {
  // @@protoc_insertion_point(field_release:CannonInfo.coords)
  
  ::Coordinates* temp = coords_;
  coords_ = NULL;
  return temp;
}
inline ::Coordinates* CannonInfo::mutable_coords() {
  
  if (coords_ == NULL) {
    coords_ = new ::Coordinates;
  }
  // @@protoc_insertion_point(field_mutable:CannonInfo.coords)
  return coords_;
}
inline void CannonInfo::set_allocated_coords(::Coordinates* coords) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete coords_;
  }
  if (coords) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      coords = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, coords, submessage_arena);
    }
    
  } else {
    
  }
  coords_ = coords;
  // @@protoc_insertion_point(field_set_allocated:CannonInfo.coords)
}

// bool loaded = 2;
inline void CannonInfo::clear_loaded() {
  loaded_ = false;
}
inline bool CannonInfo::loaded() const {
  // @@protoc_insertion_point(field_get:CannonInfo.loaded)
  return loaded_;
}
inline void CannonInfo::set_loaded(bool value) {
  
  loaded_ = value;
  // @@protoc_insertion_point(field_set:CannonInfo.loaded)
}

// -------------------------------------------------------------------

// Request

// bool please = 1;
inline void Request::clear_please() {
  please_ = false;
}
inline bool Request::please() const {
  // @@protoc_insertion_point(field_get:Request.please)
  return please_;
}
inline void Request::set_please(bool value) {
  
  please_ = value;
  // @@protoc_insertion_point(field_set:Request.please)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_motor_5fcontrol_2eproto__INCLUDED
