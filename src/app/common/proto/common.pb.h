// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#ifndef PROTOBUF_common_2eproto__INCLUDED
#define PROTOBUF_common_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace antalk {
namespace common {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_common_2eproto();
void protobuf_AssignDesc_common_2eproto();
void protobuf_ShutdownFile_common_2eproto();

class UserInfo;

enum ResultType {
  REFUSE_REASON_NONE = 0,
  REFUSE_REASON_NO_MSG_SERVER = 1,
  REFUSE_REASON_MSG_SERVER_FULL = 2,
  REFUSE_REASON_NO_DB_SERVER = 3,
  REFUSE_REASON_NO_LOGIN_SERVER = 4,
  REFUSE_REASON_NO_ROUTE_SERVER = 5,
  REFUSE_REASON_DB_VALIDATE_FAILED = 6,
  REFUSE_REASON_VERSION_TOO_OLD = 7,
  REFUSE_REASON_INVALID_PASSWD = 8
};
bool ResultType_IsValid(int value);
const ResultType ResultType_MIN = REFUSE_REASON_NONE;
const ResultType ResultType_MAX = REFUSE_REASON_INVALID_PASSWD;
const int ResultType_ARRAYSIZE = ResultType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ResultType_descriptor();
inline const ::std::string& ResultType_Name(ResultType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ResultType_descriptor(), value);
}
inline bool ResultType_Parse(
    const ::std::string& name, ResultType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ResultType>(
    ResultType_descriptor(), name, value);
}
enum ClientType {
  CLIENT_TYPE_WINDOWS = 1,
  CLIENT_TYPE_MAC = 2,
  CLIENT_TYPE_IOS = 17,
  CLIENT_TYPE_ANDROID = 18
};
bool ClientType_IsValid(int value);
const ClientType ClientType_MIN = CLIENT_TYPE_WINDOWS;
const ClientType ClientType_MAX = CLIENT_TYPE_ANDROID;
const int ClientType_ARRAYSIZE = ClientType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ClientType_descriptor();
inline const ::std::string& ClientType_Name(ClientType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ClientType_descriptor(), value);
}
inline bool ClientType_Parse(
    const ::std::string& name, ClientType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ClientType>(
    ClientType_descriptor(), name, value);
}
enum UserStatType {
  USER_STATUS_ONLINE = 1,
  USER_STATUS_OFFLINE = 2,
  USER_STATUS_LEAVE = 3
};
bool UserStatType_IsValid(int value);
const UserStatType UserStatType_MIN = USER_STATUS_ONLINE;
const UserStatType UserStatType_MAX = USER_STATUS_LEAVE;
const int UserStatType_ARRAYSIZE = UserStatType_MAX + 1;

const ::google::protobuf::EnumDescriptor* UserStatType_descriptor();
inline const ::std::string& UserStatType_Name(UserStatType value) {
  return ::google::protobuf::internal::NameOfEnum(
    UserStatType_descriptor(), value);
}
inline bool UserStatType_Parse(
    const ::std::string& name, UserStatType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<UserStatType>(
    UserStatType_descriptor(), name, value);
}
// ===================================================================

class UserInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:antalk.common.UserInfo) */ {
 public:
  UserInfo();
  virtual ~UserInfo();

  UserInfo(const UserInfo& from);

  inline UserInfo& operator=(const UserInfo& from) {
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
  static const UserInfo& default_instance();

  void Swap(UserInfo* other);

  // implements Message ----------------------------------------------

  inline UserInfo* New() const { return New(NULL); }

  UserInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserInfo& from);
  void MergeFrom(const UserInfo& from);
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
  void InternalSwap(UserInfo* other);
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

  // required uint32 user_id = 1;
  bool has_user_id() const;
  void clear_user_id();
  static const int kUserIdFieldNumber = 1;
  ::google::protobuf::uint32 user_id() const;
  void set_user_id(::google::protobuf::uint32 value);

  // required uint32 user_gender = 2;
  bool has_user_gender() const;
  void clear_user_gender();
  static const int kUserGenderFieldNumber = 2;
  ::google::protobuf::uint32 user_gender() const;
  void set_user_gender(::google::protobuf::uint32 value);

  // required string user_nick_name = 3;
  bool has_user_nick_name() const;
  void clear_user_nick_name();
  static const int kUserNickNameFieldNumber = 3;
  const ::std::string& user_nick_name() const;
  void set_user_nick_name(const ::std::string& value);
  void set_user_nick_name(const char* value);
  void set_user_nick_name(const char* value, size_t size);
  ::std::string* mutable_user_nick_name();
  ::std::string* release_user_nick_name();
  void set_allocated_user_nick_name(::std::string* user_nick_name);

  // required string avatar_url = 4;
  bool has_avatar_url() const;
  void clear_avatar_url();
  static const int kAvatarUrlFieldNumber = 4;
  const ::std::string& avatar_url() const;
  void set_avatar_url(const ::std::string& value);
  void set_avatar_url(const char* value);
  void set_avatar_url(const char* value, size_t size);
  ::std::string* mutable_avatar_url();
  ::std::string* release_avatar_url();
  void set_allocated_avatar_url(::std::string* avatar_url);

  // required uint32 department_id = 5;
  bool has_department_id() const;
  void clear_department_id();
  static const int kDepartmentIdFieldNumber = 5;
  ::google::protobuf::uint32 department_id() const;
  void set_department_id(::google::protobuf::uint32 value);

  // required string email = 6;
  bool has_email() const;
  void clear_email();
  static const int kEmailFieldNumber = 6;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // required string user_real_name = 7;
  bool has_user_real_name() const;
  void clear_user_real_name();
  static const int kUserRealNameFieldNumber = 7;
  const ::std::string& user_real_name() const;
  void set_user_real_name(const ::std::string& value);
  void set_user_real_name(const char* value);
  void set_user_real_name(const char* value, size_t size);
  ::std::string* mutable_user_real_name();
  ::std::string* release_user_real_name();
  void set_allocated_user_real_name(::std::string* user_real_name);

  // required string user_tel = 8;
  bool has_user_tel() const;
  void clear_user_tel();
  static const int kUserTelFieldNumber = 8;
  const ::std::string& user_tel() const;
  void set_user_tel(const ::std::string& value);
  void set_user_tel(const char* value);
  void set_user_tel(const char* value, size_t size);
  ::std::string* mutable_user_tel();
  ::std::string* release_user_tel();
  void set_allocated_user_tel(::std::string* user_tel);

  // required string user_domain = 9;
  bool has_user_domain() const;
  void clear_user_domain();
  static const int kUserDomainFieldNumber = 9;
  const ::std::string& user_domain() const;
  void set_user_domain(const ::std::string& value);
  void set_user_domain(const char* value);
  void set_user_domain(const char* value, size_t size);
  ::std::string* mutable_user_domain();
  ::std::string* release_user_domain();
  void set_allocated_user_domain(::std::string* user_domain);

  // required uint32 status = 10;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 10;
  ::google::protobuf::uint32 status() const;
  void set_status(::google::protobuf::uint32 value);

  // optional string sign_info = 11;
  bool has_sign_info() const;
  void clear_sign_info();
  static const int kSignInfoFieldNumber = 11;
  const ::std::string& sign_info() const;
  void set_sign_info(const ::std::string& value);
  void set_sign_info(const char* value);
  void set_sign_info(const char* value, size_t size);
  ::std::string* mutable_sign_info();
  ::std::string* release_sign_info();
  void set_allocated_sign_info(::std::string* sign_info);

  // required string passwd = 12;
  bool has_passwd() const;
  void clear_passwd();
  static const int kPasswdFieldNumber = 12;
  const ::std::string& passwd() const;
  void set_passwd(const ::std::string& value);
  void set_passwd(const char* value);
  void set_passwd(const char* value, size_t size);
  ::std::string* mutable_passwd();
  ::std::string* release_passwd();
  void set_allocated_passwd(::std::string* passwd);

  // optional uint32 en_type = 13;
  bool has_en_type() const;
  void clear_en_type();
  static const int kEnTypeFieldNumber = 13;
  ::google::protobuf::uint32 en_type() const;
  void set_en_type(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:antalk.common.UserInfo)
 private:
  inline void set_has_user_id();
  inline void clear_has_user_id();
  inline void set_has_user_gender();
  inline void clear_has_user_gender();
  inline void set_has_user_nick_name();
  inline void clear_has_user_nick_name();
  inline void set_has_avatar_url();
  inline void clear_has_avatar_url();
  inline void set_has_department_id();
  inline void clear_has_department_id();
  inline void set_has_email();
  inline void clear_has_email();
  inline void set_has_user_real_name();
  inline void clear_has_user_real_name();
  inline void set_has_user_tel();
  inline void clear_has_user_tel();
  inline void set_has_user_domain();
  inline void clear_has_user_domain();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_sign_info();
  inline void clear_has_sign_info();
  inline void set_has_passwd();
  inline void clear_has_passwd();
  inline void set_has_en_type();
  inline void clear_has_en_type();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 user_id_;
  ::google::protobuf::uint32 user_gender_;
  ::google::protobuf::internal::ArenaStringPtr user_nick_name_;
  ::google::protobuf::internal::ArenaStringPtr avatar_url_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::internal::ArenaStringPtr user_real_name_;
  ::google::protobuf::uint32 department_id_;
  ::google::protobuf::uint32 status_;
  ::google::protobuf::internal::ArenaStringPtr user_tel_;
  ::google::protobuf::internal::ArenaStringPtr user_domain_;
  ::google::protobuf::internal::ArenaStringPtr sign_info_;
  ::google::protobuf::internal::ArenaStringPtr passwd_;
  ::google::protobuf::uint32 en_type_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static UserInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UserInfo

// required uint32 user_id = 1;
inline bool UserInfo::has_user_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserInfo::set_has_user_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserInfo::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserInfo::clear_user_id() {
  user_id_ = 0u;
  clear_has_user_id();
}
inline ::google::protobuf::uint32 UserInfo::user_id() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.user_id)
  return user_id_;
}
inline void UserInfo::set_user_id(::google::protobuf::uint32 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.user_id)
}

// required uint32 user_gender = 2;
inline bool UserInfo::has_user_gender() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserInfo::set_has_user_gender() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserInfo::clear_has_user_gender() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserInfo::clear_user_gender() {
  user_gender_ = 0u;
  clear_has_user_gender();
}
inline ::google::protobuf::uint32 UserInfo::user_gender() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.user_gender)
  return user_gender_;
}
inline void UserInfo::set_user_gender(::google::protobuf::uint32 value) {
  set_has_user_gender();
  user_gender_ = value;
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.user_gender)
}

// required string user_nick_name = 3;
inline bool UserInfo::has_user_nick_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserInfo::set_has_user_nick_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserInfo::clear_has_user_nick_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserInfo::clear_user_nick_name() {
  user_nick_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_nick_name();
}
inline const ::std::string& UserInfo::user_nick_name() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.user_nick_name)
  return user_nick_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_user_nick_name(const ::std::string& value) {
  set_has_user_nick_name();
  user_nick_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.user_nick_name)
}
inline void UserInfo::set_user_nick_name(const char* value) {
  set_has_user_nick_name();
  user_nick_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.common.UserInfo.user_nick_name)
}
inline void UserInfo::set_user_nick_name(const char* value, size_t size) {
  set_has_user_nick_name();
  user_nick_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.common.UserInfo.user_nick_name)
}
inline ::std::string* UserInfo::mutable_user_nick_name() {
  set_has_user_nick_name();
  // @@protoc_insertion_point(field_mutable:antalk.common.UserInfo.user_nick_name)
  return user_nick_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfo::release_user_nick_name() {
  // @@protoc_insertion_point(field_release:antalk.common.UserInfo.user_nick_name)
  clear_has_user_nick_name();
  return user_nick_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_allocated_user_nick_name(::std::string* user_nick_name) {
  if (user_nick_name != NULL) {
    set_has_user_nick_name();
  } else {
    clear_has_user_nick_name();
  }
  user_nick_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_nick_name);
  // @@protoc_insertion_point(field_set_allocated:antalk.common.UserInfo.user_nick_name)
}

// required string avatar_url = 4;
inline bool UserInfo::has_avatar_url() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UserInfo::set_has_avatar_url() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UserInfo::clear_has_avatar_url() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UserInfo::clear_avatar_url() {
  avatar_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_avatar_url();
}
inline const ::std::string& UserInfo::avatar_url() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.avatar_url)
  return avatar_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_avatar_url(const ::std::string& value) {
  set_has_avatar_url();
  avatar_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.avatar_url)
}
inline void UserInfo::set_avatar_url(const char* value) {
  set_has_avatar_url();
  avatar_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.common.UserInfo.avatar_url)
}
inline void UserInfo::set_avatar_url(const char* value, size_t size) {
  set_has_avatar_url();
  avatar_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.common.UserInfo.avatar_url)
}
inline ::std::string* UserInfo::mutable_avatar_url() {
  set_has_avatar_url();
  // @@protoc_insertion_point(field_mutable:antalk.common.UserInfo.avatar_url)
  return avatar_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfo::release_avatar_url() {
  // @@protoc_insertion_point(field_release:antalk.common.UserInfo.avatar_url)
  clear_has_avatar_url();
  return avatar_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_allocated_avatar_url(::std::string* avatar_url) {
  if (avatar_url != NULL) {
    set_has_avatar_url();
  } else {
    clear_has_avatar_url();
  }
  avatar_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), avatar_url);
  // @@protoc_insertion_point(field_set_allocated:antalk.common.UserInfo.avatar_url)
}

// required uint32 department_id = 5;
inline bool UserInfo::has_department_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UserInfo::set_has_department_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UserInfo::clear_has_department_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UserInfo::clear_department_id() {
  department_id_ = 0u;
  clear_has_department_id();
}
inline ::google::protobuf::uint32 UserInfo::department_id() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.department_id)
  return department_id_;
}
inline void UserInfo::set_department_id(::google::protobuf::uint32 value) {
  set_has_department_id();
  department_id_ = value;
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.department_id)
}

// required string email = 6;
inline bool UserInfo::has_email() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void UserInfo::set_has_email() {
  _has_bits_[0] |= 0x00000020u;
}
inline void UserInfo::clear_has_email() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void UserInfo::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_email();
}
inline const ::std::string& UserInfo::email() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.email)
  return email_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_email(const ::std::string& value) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.email)
}
inline void UserInfo::set_email(const char* value) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.common.UserInfo.email)
}
inline void UserInfo::set_email(const char* value, size_t size) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.common.UserInfo.email)
}
inline ::std::string* UserInfo::mutable_email() {
  set_has_email();
  // @@protoc_insertion_point(field_mutable:antalk.common.UserInfo.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfo::release_email() {
  // @@protoc_insertion_point(field_release:antalk.common.UserInfo.email)
  clear_has_email();
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    set_has_email();
  } else {
    clear_has_email();
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:antalk.common.UserInfo.email)
}

// required string user_real_name = 7;
inline bool UserInfo::has_user_real_name() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void UserInfo::set_has_user_real_name() {
  _has_bits_[0] |= 0x00000040u;
}
inline void UserInfo::clear_has_user_real_name() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void UserInfo::clear_user_real_name() {
  user_real_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_real_name();
}
inline const ::std::string& UserInfo::user_real_name() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.user_real_name)
  return user_real_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_user_real_name(const ::std::string& value) {
  set_has_user_real_name();
  user_real_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.user_real_name)
}
inline void UserInfo::set_user_real_name(const char* value) {
  set_has_user_real_name();
  user_real_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.common.UserInfo.user_real_name)
}
inline void UserInfo::set_user_real_name(const char* value, size_t size) {
  set_has_user_real_name();
  user_real_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.common.UserInfo.user_real_name)
}
inline ::std::string* UserInfo::mutable_user_real_name() {
  set_has_user_real_name();
  // @@protoc_insertion_point(field_mutable:antalk.common.UserInfo.user_real_name)
  return user_real_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfo::release_user_real_name() {
  // @@protoc_insertion_point(field_release:antalk.common.UserInfo.user_real_name)
  clear_has_user_real_name();
  return user_real_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_allocated_user_real_name(::std::string* user_real_name) {
  if (user_real_name != NULL) {
    set_has_user_real_name();
  } else {
    clear_has_user_real_name();
  }
  user_real_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_real_name);
  // @@protoc_insertion_point(field_set_allocated:antalk.common.UserInfo.user_real_name)
}

// required string user_tel = 8;
inline bool UserInfo::has_user_tel() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void UserInfo::set_has_user_tel() {
  _has_bits_[0] |= 0x00000080u;
}
inline void UserInfo::clear_has_user_tel() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void UserInfo::clear_user_tel() {
  user_tel_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_tel();
}
inline const ::std::string& UserInfo::user_tel() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.user_tel)
  return user_tel_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_user_tel(const ::std::string& value) {
  set_has_user_tel();
  user_tel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.user_tel)
}
inline void UserInfo::set_user_tel(const char* value) {
  set_has_user_tel();
  user_tel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.common.UserInfo.user_tel)
}
inline void UserInfo::set_user_tel(const char* value, size_t size) {
  set_has_user_tel();
  user_tel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.common.UserInfo.user_tel)
}
inline ::std::string* UserInfo::mutable_user_tel() {
  set_has_user_tel();
  // @@protoc_insertion_point(field_mutable:antalk.common.UserInfo.user_tel)
  return user_tel_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfo::release_user_tel() {
  // @@protoc_insertion_point(field_release:antalk.common.UserInfo.user_tel)
  clear_has_user_tel();
  return user_tel_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_allocated_user_tel(::std::string* user_tel) {
  if (user_tel != NULL) {
    set_has_user_tel();
  } else {
    clear_has_user_tel();
  }
  user_tel_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_tel);
  // @@protoc_insertion_point(field_set_allocated:antalk.common.UserInfo.user_tel)
}

// required string user_domain = 9;
inline bool UserInfo::has_user_domain() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void UserInfo::set_has_user_domain() {
  _has_bits_[0] |= 0x00000100u;
}
inline void UserInfo::clear_has_user_domain() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void UserInfo::clear_user_domain() {
  user_domain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_domain();
}
inline const ::std::string& UserInfo::user_domain() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.user_domain)
  return user_domain_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_user_domain(const ::std::string& value) {
  set_has_user_domain();
  user_domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.user_domain)
}
inline void UserInfo::set_user_domain(const char* value) {
  set_has_user_domain();
  user_domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.common.UserInfo.user_domain)
}
inline void UserInfo::set_user_domain(const char* value, size_t size) {
  set_has_user_domain();
  user_domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.common.UserInfo.user_domain)
}
inline ::std::string* UserInfo::mutable_user_domain() {
  set_has_user_domain();
  // @@protoc_insertion_point(field_mutable:antalk.common.UserInfo.user_domain)
  return user_domain_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfo::release_user_domain() {
  // @@protoc_insertion_point(field_release:antalk.common.UserInfo.user_domain)
  clear_has_user_domain();
  return user_domain_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_allocated_user_domain(::std::string* user_domain) {
  if (user_domain != NULL) {
    set_has_user_domain();
  } else {
    clear_has_user_domain();
  }
  user_domain_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_domain);
  // @@protoc_insertion_point(field_set_allocated:antalk.common.UserInfo.user_domain)
}

// required uint32 status = 10;
inline bool UserInfo::has_status() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void UserInfo::set_has_status() {
  _has_bits_[0] |= 0x00000200u;
}
inline void UserInfo::clear_has_status() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void UserInfo::clear_status() {
  status_ = 0u;
  clear_has_status();
}
inline ::google::protobuf::uint32 UserInfo::status() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.status)
  return status_;
}
inline void UserInfo::set_status(::google::protobuf::uint32 value) {
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.status)
}

// optional string sign_info = 11;
inline bool UserInfo::has_sign_info() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void UserInfo::set_has_sign_info() {
  _has_bits_[0] |= 0x00000400u;
}
inline void UserInfo::clear_has_sign_info() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void UserInfo::clear_sign_info() {
  sign_info_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sign_info();
}
inline const ::std::string& UserInfo::sign_info() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.sign_info)
  return sign_info_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_sign_info(const ::std::string& value) {
  set_has_sign_info();
  sign_info_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.sign_info)
}
inline void UserInfo::set_sign_info(const char* value) {
  set_has_sign_info();
  sign_info_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.common.UserInfo.sign_info)
}
inline void UserInfo::set_sign_info(const char* value, size_t size) {
  set_has_sign_info();
  sign_info_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.common.UserInfo.sign_info)
}
inline ::std::string* UserInfo::mutable_sign_info() {
  set_has_sign_info();
  // @@protoc_insertion_point(field_mutable:antalk.common.UserInfo.sign_info)
  return sign_info_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfo::release_sign_info() {
  // @@protoc_insertion_point(field_release:antalk.common.UserInfo.sign_info)
  clear_has_sign_info();
  return sign_info_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_allocated_sign_info(::std::string* sign_info) {
  if (sign_info != NULL) {
    set_has_sign_info();
  } else {
    clear_has_sign_info();
  }
  sign_info_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sign_info);
  // @@protoc_insertion_point(field_set_allocated:antalk.common.UserInfo.sign_info)
}

// required string passwd = 12;
inline bool UserInfo::has_passwd() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void UserInfo::set_has_passwd() {
  _has_bits_[0] |= 0x00000800u;
}
inline void UserInfo::clear_has_passwd() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void UserInfo::clear_passwd() {
  passwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_passwd();
}
inline const ::std::string& UserInfo::passwd() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.passwd)
  return passwd_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_passwd(const ::std::string& value) {
  set_has_passwd();
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.passwd)
}
inline void UserInfo::set_passwd(const char* value) {
  set_has_passwd();
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:antalk.common.UserInfo.passwd)
}
inline void UserInfo::set_passwd(const char* value, size_t size) {
  set_has_passwd();
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:antalk.common.UserInfo.passwd)
}
inline ::std::string* UserInfo::mutable_passwd() {
  set_has_passwd();
  // @@protoc_insertion_point(field_mutable:antalk.common.UserInfo.passwd)
  return passwd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfo::release_passwd() {
  // @@protoc_insertion_point(field_release:antalk.common.UserInfo.passwd)
  clear_has_passwd();
  return passwd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfo::set_allocated_passwd(::std::string* passwd) {
  if (passwd != NULL) {
    set_has_passwd();
  } else {
    clear_has_passwd();
  }
  passwd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), passwd);
  // @@protoc_insertion_point(field_set_allocated:antalk.common.UserInfo.passwd)
}

// optional uint32 en_type = 13;
inline bool UserInfo::has_en_type() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void UserInfo::set_has_en_type() {
  _has_bits_[0] |= 0x00001000u;
}
inline void UserInfo::clear_has_en_type() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void UserInfo::clear_en_type() {
  en_type_ = 0u;
  clear_has_en_type();
}
inline ::google::protobuf::uint32 UserInfo::en_type() const {
  // @@protoc_insertion_point(field_get:antalk.common.UserInfo.en_type)
  return en_type_;
}
inline void UserInfo::set_en_type(::google::protobuf::uint32 value) {
  set_has_en_type();
  en_type_ = value;
  // @@protoc_insertion_point(field_set:antalk.common.UserInfo.en_type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace antalk

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::antalk::common::ResultType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::antalk::common::ResultType>() {
  return ::antalk::common::ResultType_descriptor();
}
template <> struct is_proto_enum< ::antalk::common::ClientType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::antalk::common::ClientType>() {
  return ::antalk::common::ClientType_descriptor();
}
template <> struct is_proto_enum< ::antalk::common::UserStatType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::antalk::common::UserStatType>() {
  return ::antalk::common::UserStatType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_common_2eproto__INCLUDED
