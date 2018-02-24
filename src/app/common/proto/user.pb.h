// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user.proto

#ifndef PROTOBUF_user_2eproto__INCLUDED
#define PROTOBUF_user_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "common.pb.h"
// @@protoc_insertion_point(includes)

namespace antalk {
namespace user {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_user_2eproto();
void protobuf_AssignDesc_user_2eproto();
void protobuf_ShutdownFile_user_2eproto();

class LoginReq;
class LoginRes;

// ===================================================================

class LoginReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:antalk.user.LoginReq) */ {
 public:
  LoginReq();
  virtual ~LoginReq();

  LoginReq(const LoginReq& from);

  inline LoginReq& operator=(const LoginReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginReq& default_instance();

  void Swap(LoginReq* other);

  // implements Message ----------------------------------------------

  inline LoginReq* New() const { return New(NULL); }

  LoginReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginReq& from);
  void MergeFrom(const LoginReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LoginReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string username = 1;
  bool has_username() const;
  void clear_username();
  static const int kUsernameFieldNumber = 1;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // required string password = 2;
  bool has_password() const;
  void clear_password();
  static const int kPasswordFieldNumber = 2;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // required .antalk.common.UserStatType online_status = 3;
  bool has_online_status() const;
  void clear_online_status();
  static const int kOnlineStatusFieldNumber = 3;
  ::antalk::common::UserStatType online_status() const;
  void set_online_status(::antalk::common::UserStatType value);

  // required .antalk.common.ClientType client_type = 4;
  bool has_client_type() const;
  void clear_client_type();
  static const int kClientTypeFieldNumber = 4;
  ::antalk::common::ClientType client_type() const;
  void set_client_type(::antalk::common::ClientType value);

  // optional string client_version = 5;
  bool has_client_version() const;
  void clear_client_version();
  static const int kClientVersionFieldNumber = 5;
  const ::std::string& client_version() const;
  void set_client_version(const ::std::string& value);
  void set_client_version(const char* value);
  void set_client_version(const char* value, size_t size);
  ::std::string* mutable_client_version();
  ::std::string* release_client_version();
  void set_allocated_client_version(::std::string* client_version);

  // @@protoc_insertion_point(class_scope:antalk.user.LoginReq)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_online_status();
  inline void clear_has_online_status();
  inline void set_has_client_type();
  inline void clear_has_client_type();
  inline void set_has_client_version();
  inline void clear_has_client_version();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  int online_status_;
  int client_type_;
  ::google::protobuf::internal::ArenaStringPtr client_version_;
  friend void  protobuf_AddDesc_user_2eproto();
  friend void protobuf_AssignDesc_user_2eproto();
  friend void protobuf_ShutdownFile_user_2eproto();

  void InitAsDefaultInstance();
  static LoginReq* default_instance_;
};
// -------------------------------------------------------------------

class LoginRes : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:antalk.user.LoginRes) */ {
 public:
  LoginRes();
  virtual ~LoginRes();

  LoginRes(const LoginRes& from);

  inline LoginRes& operator=(const LoginRes& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginRes& default_instance();

  void Swap(LoginRes* other);

  // implements Message ----------------------------------------------

  inline LoginRes* New() const { return New(NULL); }

  LoginRes* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginRes& from);
  void MergeFrom(const LoginRes& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LoginRes* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 server_time = 1;
  bool has_server_time() const;
  void clear_server_time();
  static const int kServerTimeFieldNumber = 1;
  ::google::protobuf::uint32 server_time() const;
  void set_server_time(::google::protobuf::uint32 value);

  // required .antalk.common.ResultType result_code = 2;
  bool has_result_code() const;
  void clear_result_code();
  static const int kResultCodeFieldNumber = 2;
  ::antalk::common::ResultType result_code() const;
  void set_result_code(::antalk::common::ResultType value);

  // optional string result_string = 3;
  bool has_result_string() const;
  void clear_result_string();
  static const int kResultStringFieldNumber = 3;
  const ::std::string& result_string() const;
  void set_result_string(const ::std::string& value);
  void set_result_string(const char* value);
  void set_result_string(const char* value, size_t size);
  ::std::string* mutable_result_string();
  ::std::string* release_result_string();
  void set_allocated_result_string(::std::string* result_string);

  // optional .antalk.common.UserStatType online_status = 4;
  bool has_online_status() const;
  void clear_online_status();
  static const int kOnlineStatusFieldNumber = 4;
  ::antalk::common::UserStatType online_status() const;
  void set_online_status(::antalk::common::UserStatType value);

  // optional .antalk.common.UserInfo user_info = 5;
  bool has_user_info() const;
  void clear_user_info();
  static const int kUserInfoFieldNumber = 5;
  const ::antalk::common::UserInfo& user_info() const;
  ::antalk::common::UserInfo* mutable_user_info();
  ::antalk::common::UserInfo* release_user_info();
  void set_allocated_user_info(::antalk::common::UserInfo* user_info);

  // @@protoc_insertion_point(class_scope:antalk.user.LoginRes)
 private:
  inline void set_has_server_time();
  inline void clear_has_server_time();
  inline void set_has_result_code();
  inline void clear_has_result_code();
  inline void set_has_result_string();
  inline void clear_has_result_string();
  inline void set_has_online_status();
  inline void clear_has_online_status();
  inline void set_has_user_info();
  inline void clear_has_user_info();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 server_time_;
  int result_code_;
  ::google::protobuf::internal::ArenaStringPtr result_string_;
  ::antalk::common::UserInfo* user_info_;
  int online_status_;
  friend void  protobuf_AddDesc_user_2eproto();
  friend void protobuf_AssignDesc_user_2eproto();
  friend void protobuf_ShutdownFile_user_2eproto();

  void InitAsDefaultInstance();
  static LoginRes* default_instance_;
};
// ===================================================================

class LoginService_Stub;

class LoginService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline LoginService() {};
 public:
  virtual ~LoginService();

  typedef LoginService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void Login(::google::protobuf::RpcController* controller,
                       const ::antalk::user::LoginReq* request,
                       ::antalk::user::LoginRes* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(LoginService);
};

class LoginService_Stub : public LoginService {
 public:
  LoginService_Stub(::google::protobuf::RpcChannel* channel);
  LoginService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~LoginService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements LoginService ------------------------------------------

  void Login(::google::protobuf::RpcController* controller,
                       const ::antalk::user::LoginReq* request,
                       ::antalk::user::LoginRes* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(LoginService_Stub);
};


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LoginReq

// required string username = 1;
inline bool LoginReq::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginReq::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginReq::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginReq::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_username();
}
inline const ::std::string& LoginReq::username() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginReq.username)
  return username_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_username(const ::std::string& value) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.user.LoginReq.username)
}
inline void LoginReq::set_username(const char* value) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.user.LoginReq.username)
}
inline void LoginReq::set_username(const char* value, size_t size) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.user.LoginReq.username)
}
inline ::std::string* LoginReq::mutable_username() {
  set_has_username();
  // @@protoc_insertion_point(field_mutable:antalk.user.LoginReq.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginReq::release_username() {
  // @@protoc_insertion_point(field_release:antalk.user.LoginReq.username)
  clear_has_username();
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    set_has_username();
  } else {
    clear_has_username();
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:antalk.user.LoginReq.username)
}

// required string password = 2;
inline bool LoginReq::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginReq::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginReq::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginReq::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_password();
}
inline const ::std::string& LoginReq::password() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginReq.password)
  return password_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_password(const ::std::string& value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.user.LoginReq.password)
}
inline void LoginReq::set_password(const char* value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.user.LoginReq.password)
}
inline void LoginReq::set_password(const char* value, size_t size) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.user.LoginReq.password)
}
inline ::std::string* LoginReq::mutable_password() {
  set_has_password();
  // @@protoc_insertion_point(field_mutable:antalk.user.LoginReq.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginReq::release_password() {
  // @@protoc_insertion_point(field_release:antalk.user.LoginReq.password)
  clear_has_password();
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    set_has_password();
  } else {
    clear_has_password();
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:antalk.user.LoginReq.password)
}

// required .antalk.common.UserStatType online_status = 3;
inline bool LoginReq::has_online_status() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginReq::set_has_online_status() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginReq::clear_has_online_status() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginReq::clear_online_status() {
  online_status_ = 1;
  clear_has_online_status();
}
inline ::antalk::common::UserStatType LoginReq::online_status() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginReq.online_status)
  return static_cast< ::antalk::common::UserStatType >(online_status_);
}
inline void LoginReq::set_online_status(::antalk::common::UserStatType value) {
  assert(::antalk::common::UserStatType_IsValid(value));
  set_has_online_status();
  online_status_ = value;
  // @@protoc_insertion_point(field_set:antalk.user.LoginReq.online_status)
}

// required .antalk.common.ClientType client_type = 4;
inline bool LoginReq::has_client_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LoginReq::set_has_client_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LoginReq::clear_has_client_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LoginReq::clear_client_type() {
  client_type_ = 1;
  clear_has_client_type();
}
inline ::antalk::common::ClientType LoginReq::client_type() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginReq.client_type)
  return static_cast< ::antalk::common::ClientType >(client_type_);
}
inline void LoginReq::set_client_type(::antalk::common::ClientType value) {
  assert(::antalk::common::ClientType_IsValid(value));
  set_has_client_type();
  client_type_ = value;
  // @@protoc_insertion_point(field_set:antalk.user.LoginReq.client_type)
}

// optional string client_version = 5;
inline bool LoginReq::has_client_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LoginReq::set_has_client_version() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LoginReq::clear_has_client_version() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LoginReq::clear_client_version() {
  client_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_client_version();
}
inline const ::std::string& LoginReq::client_version() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginReq.client_version)
  return client_version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_client_version(const ::std::string& value) {
  set_has_client_version();
  client_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.user.LoginReq.client_version)
}
inline void LoginReq::set_client_version(const char* value) {
  set_has_client_version();
  client_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.user.LoginReq.client_version)
}
inline void LoginReq::set_client_version(const char* value, size_t size) {
  set_has_client_version();
  client_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.user.LoginReq.client_version)
}
inline ::std::string* LoginReq::mutable_client_version() {
  set_has_client_version();
  // @@protoc_insertion_point(field_mutable:antalk.user.LoginReq.client_version)
  return client_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginReq::release_client_version() {
  // @@protoc_insertion_point(field_release:antalk.user.LoginReq.client_version)
  clear_has_client_version();
  return client_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_allocated_client_version(::std::string* client_version) {
  if (client_version != NULL) {
    set_has_client_version();
  } else {
    clear_has_client_version();
  }
  client_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), client_version);
  // @@protoc_insertion_point(field_set_allocated:antalk.user.LoginReq.client_version)
}

// -------------------------------------------------------------------

// LoginRes

// required uint32 server_time = 1;
inline bool LoginRes::has_server_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginRes::set_has_server_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginRes::clear_has_server_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginRes::clear_server_time() {
  server_time_ = 0u;
  clear_has_server_time();
}
inline ::google::protobuf::uint32 LoginRes::server_time() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginRes.server_time)
  return server_time_;
}
inline void LoginRes::set_server_time(::google::protobuf::uint32 value) {
  set_has_server_time();
  server_time_ = value;
  // @@protoc_insertion_point(field_set:antalk.user.LoginRes.server_time)
}

// required .antalk.common.ResultType result_code = 2;
inline bool LoginRes::has_result_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginRes::set_has_result_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginRes::clear_has_result_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginRes::clear_result_code() {
  result_code_ = 0;
  clear_has_result_code();
}
inline ::antalk::common::ResultType LoginRes::result_code() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginRes.result_code)
  return static_cast< ::antalk::common::ResultType >(result_code_);
}
inline void LoginRes::set_result_code(::antalk::common::ResultType value) {
  assert(::antalk::common::ResultType_IsValid(value));
  set_has_result_code();
  result_code_ = value;
  // @@protoc_insertion_point(field_set:antalk.user.LoginRes.result_code)
}

// optional string result_string = 3;
inline bool LoginRes::has_result_string() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginRes::set_has_result_string() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginRes::clear_has_result_string() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginRes::clear_result_string() {
  result_string_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_result_string();
}
inline const ::std::string& LoginRes::result_string() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginRes.result_string)
  return result_string_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginRes::set_result_string(const ::std::string& value) {
  set_has_result_string();
  result_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.user.LoginRes.result_string)
}
inline void LoginRes::set_result_string(const char* value) {
  set_has_result_string();
  result_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.user.LoginRes.result_string)
}
inline void LoginRes::set_result_string(const char* value, size_t size) {
  set_has_result_string();
  result_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.user.LoginRes.result_string)
}
inline ::std::string* LoginRes::mutable_result_string() {
  set_has_result_string();
  // @@protoc_insertion_point(field_mutable:antalk.user.LoginRes.result_string)
  return result_string_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginRes::release_result_string() {
  // @@protoc_insertion_point(field_release:antalk.user.LoginRes.result_string)
  clear_has_result_string();
  return result_string_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginRes::set_allocated_result_string(::std::string* result_string) {
  if (result_string != NULL) {
    set_has_result_string();
  } else {
    clear_has_result_string();
  }
  result_string_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), result_string);
  // @@protoc_insertion_point(field_set_allocated:antalk.user.LoginRes.result_string)
}

// optional .antalk.common.UserStatType online_status = 4;
inline bool LoginRes::has_online_status() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LoginRes::set_has_online_status() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LoginRes::clear_has_online_status() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LoginRes::clear_online_status() {
  online_status_ = 1;
  clear_has_online_status();
}
inline ::antalk::common::UserStatType LoginRes::online_status() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginRes.online_status)
  return static_cast< ::antalk::common::UserStatType >(online_status_);
}
inline void LoginRes::set_online_status(::antalk::common::UserStatType value) {
  assert(::antalk::common::UserStatType_IsValid(value));
  set_has_online_status();
  online_status_ = value;
  // @@protoc_insertion_point(field_set:antalk.user.LoginRes.online_status)
}

// optional .antalk.common.UserInfo user_info = 5;
inline bool LoginRes::has_user_info() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LoginRes::set_has_user_info() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LoginRes::clear_has_user_info() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LoginRes::clear_user_info() {
  if (user_info_ != NULL) user_info_->::antalk::common::UserInfo::Clear();
  clear_has_user_info();
}
inline const ::antalk::common::UserInfo& LoginRes::user_info() const {
  // @@protoc_insertion_point(field_get:antalk.user.LoginRes.user_info)
  return user_info_ != NULL ? *user_info_ : *default_instance_->user_info_;
}
inline ::antalk::common::UserInfo* LoginRes::mutable_user_info() {
  set_has_user_info();
  if (user_info_ == NULL) {
    user_info_ = new ::antalk::common::UserInfo;
  }
  // @@protoc_insertion_point(field_mutable:antalk.user.LoginRes.user_info)
  return user_info_;
}
inline ::antalk::common::UserInfo* LoginRes::release_user_info() {
  // @@protoc_insertion_point(field_release:antalk.user.LoginRes.user_info)
  clear_has_user_info();
  ::antalk::common::UserInfo* temp = user_info_;
  user_info_ = NULL;
  return temp;
}
inline void LoginRes::set_allocated_user_info(::antalk::common::UserInfo* user_info) {
  delete user_info_;
  user_info_ = user_info;
  if (user_info) {
    set_has_user_info();
  } else {
    clear_has_user_info();
  }
  // @@protoc_insertion_point(field_set_allocated:antalk.user.LoginRes.user_info)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace user
}  // namespace antalk

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_user_2eproto__INCLUDED
