// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#ifndef PROTOBUF_INCLUDED_hello_2eproto
#define PROTOBUF_INCLUDED_hello_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_hello_2eproto 

namespace protobuf_hello_2eproto {
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
}  // namespace protobuf_hello_2eproto
namespace helloworld {
class HelloReply;
class HelloReplyDefaultTypeInternal;
extern HelloReplyDefaultTypeInternal _HelloReply_default_instance_;
class HelloRequest;
class HelloRequestDefaultTypeInternal;
extern HelloRequestDefaultTypeInternal _HelloRequest_default_instance_;
class Parameters;
class ParametersDefaultTypeInternal;
extern ParametersDefaultTypeInternal _Parameters_default_instance_;
class ResultMsg;
class ResultMsgDefaultTypeInternal;
extern ResultMsgDefaultTypeInternal _ResultMsg_default_instance_;
}  // namespace helloworld
namespace google {
namespace protobuf {
template<> ::helloworld::HelloReply* Arena::CreateMaybeMessage<::helloworld::HelloReply>(Arena*);
template<> ::helloworld::HelloRequest* Arena::CreateMaybeMessage<::helloworld::HelloRequest>(Arena*);
template<> ::helloworld::Parameters* Arena::CreateMaybeMessage<::helloworld::Parameters>(Arena*);
template<> ::helloworld::ResultMsg* Arena::CreateMaybeMessage<::helloworld::ResultMsg>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace helloworld {

// ===================================================================

class HelloRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:helloworld.HelloRequest) */ {
 public:
  HelloRequest();
  virtual ~HelloRequest();

  HelloRequest(const HelloRequest& from);

  inline HelloRequest& operator=(const HelloRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HelloRequest(HelloRequest&& from) noexcept
    : HelloRequest() {
    *this = ::std::move(from);
  }

  inline HelloRequest& operator=(HelloRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const HelloRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HelloRequest* internal_default_instance() {
    return reinterpret_cast<const HelloRequest*>(
               &_HelloRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(HelloRequest* other);
  friend void swap(HelloRequest& a, HelloRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HelloRequest* New() const final {
    return CreateMaybeMessage<HelloRequest>(NULL);
  }

  HelloRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<HelloRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const HelloRequest& from);
  void MergeFrom(const HelloRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:helloworld.HelloRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_hello_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class HelloReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:helloworld.HelloReply) */ {
 public:
  HelloReply();
  virtual ~HelloReply();

  HelloReply(const HelloReply& from);

  inline HelloReply& operator=(const HelloReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HelloReply(HelloReply&& from) noexcept
    : HelloReply() {
    *this = ::std::move(from);
  }

  inline HelloReply& operator=(HelloReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const HelloReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HelloReply* internal_default_instance() {
    return reinterpret_cast<const HelloReply*>(
               &_HelloReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(HelloReply* other);
  friend void swap(HelloReply& a, HelloReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HelloReply* New() const final {
    return CreateMaybeMessage<HelloReply>(NULL);
  }

  HelloReply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<HelloReply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const HelloReply& from);
  void MergeFrom(const HelloReply& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 1;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:helloworld.HelloReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_hello_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ResultMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:helloworld.ResultMsg) */ {
 public:
  ResultMsg();
  virtual ~ResultMsg();

  ResultMsg(const ResultMsg& from);

  inline ResultMsg& operator=(const ResultMsg& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ResultMsg(ResultMsg&& from) noexcept
    : ResultMsg() {
    *this = ::std::move(from);
  }

  inline ResultMsg& operator=(ResultMsg&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ResultMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResultMsg* internal_default_instance() {
    return reinterpret_cast<const ResultMsg*>(
               &_ResultMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ResultMsg* other);
  friend void swap(ResultMsg& a, ResultMsg& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ResultMsg* New() const final {
    return CreateMaybeMessage<ResultMsg>(NULL);
  }

  ResultMsg* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ResultMsg>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ResultMsg& from);
  void MergeFrom(const ResultMsg& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ResultMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:helloworld.ResultMsg)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 result_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_hello_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Parameters : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:helloworld.Parameters) */ {
 public:
  Parameters();
  virtual ~Parameters();

  Parameters(const Parameters& from);

  inline Parameters& operator=(const Parameters& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Parameters(Parameters&& from) noexcept
    : Parameters() {
    *this = ::std::move(from);
  }

  inline Parameters& operator=(Parameters&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Parameters& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Parameters* internal_default_instance() {
    return reinterpret_cast<const Parameters*>(
               &_Parameters_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(Parameters* other);
  friend void swap(Parameters& a, Parameters& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Parameters* New() const final {
    return CreateMaybeMessage<Parameters>(NULL);
  }

  Parameters* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Parameters>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Parameters& from);
  void MergeFrom(const Parameters& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Parameters* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 para1 = 1;
  void clear_para1();
  static const int kPara1FieldNumber = 1;
  ::google::protobuf::int32 para1() const;
  void set_para1(::google::protobuf::int32 value);

  // int32 para2 = 2;
  void clear_para2();
  static const int kPara2FieldNumber = 2;
  ::google::protobuf::int32 para2() const;
  void set_para2(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:helloworld.Parameters)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 para1_;
  ::google::protobuf::int32 para2_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_hello_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloRequest

// string name = 1;
inline void HelloRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HelloRequest::name() const {
  // @@protoc_insertion_point(field_get:helloworld.HelloRequest.name)
  return name_.GetNoArena();
}
inline void HelloRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:helloworld.HelloRequest.name)
}
#if LANG_CXX11
inline void HelloRequest::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:helloworld.HelloRequest.name)
}
#endif
inline void HelloRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:helloworld.HelloRequest.name)
}
inline void HelloRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:helloworld.HelloRequest.name)
}
inline ::std::string* HelloRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:helloworld.HelloRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HelloRequest::release_name() {
  // @@protoc_insertion_point(field_release:helloworld.HelloRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HelloRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:helloworld.HelloRequest.name)
}

// -------------------------------------------------------------------

// HelloReply

// string message = 1;
inline void HelloReply::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HelloReply::message() const {
  // @@protoc_insertion_point(field_get:helloworld.HelloReply.message)
  return message_.GetNoArena();
}
inline void HelloReply::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:helloworld.HelloReply.message)
}
#if LANG_CXX11
inline void HelloReply::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:helloworld.HelloReply.message)
}
#endif
inline void HelloReply::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:helloworld.HelloReply.message)
}
inline void HelloReply::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:helloworld.HelloReply.message)
}
inline ::std::string* HelloReply::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:helloworld.HelloReply.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HelloReply::release_message() {
  // @@protoc_insertion_point(field_release:helloworld.HelloReply.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HelloReply::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:helloworld.HelloReply.message)
}

// -------------------------------------------------------------------

// ResultMsg

// int32 result = 1;
inline void ResultMsg::clear_result() {
  result_ = 0;
}
inline ::google::protobuf::int32 ResultMsg::result() const {
  // @@protoc_insertion_point(field_get:helloworld.ResultMsg.result)
  return result_;
}
inline void ResultMsg::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:helloworld.ResultMsg.result)
}

// -------------------------------------------------------------------

// Parameters

// int32 para1 = 1;
inline void Parameters::clear_para1() {
  para1_ = 0;
}
inline ::google::protobuf::int32 Parameters::para1() const {
  // @@protoc_insertion_point(field_get:helloworld.Parameters.para1)
  return para1_;
}
inline void Parameters::set_para1(::google::protobuf::int32 value) {
  
  para1_ = value;
  // @@protoc_insertion_point(field_set:helloworld.Parameters.para1)
}

// int32 para2 = 2;
inline void Parameters::clear_para2() {
  para2_ = 0;
}
inline ::google::protobuf::int32 Parameters::para2() const {
  // @@protoc_insertion_point(field_get:helloworld.Parameters.para2)
  return para2_;
}
inline void Parameters::set_para2(::google::protobuf::int32 value) {
  
  para2_ = value;
  // @@protoc_insertion_point(field_set:helloworld.Parameters.para2)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace helloworld

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_hello_2eproto
