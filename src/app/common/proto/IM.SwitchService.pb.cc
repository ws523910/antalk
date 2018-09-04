// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.SwitchService.proto

#include "IM.SwitchService.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace IM {
namespace SwitchService {
class IMP2PCmdMsgDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<IMP2PCmdMsg>
      _instance;
} _IMP2PCmdMsg_default_instance_;
}  // namespace SwitchService
}  // namespace IM
namespace protobuf_IM_2eSwitchService_2eproto {
void InitDefaultsIMP2PCmdMsgImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::IM::SwitchService::_IMP2PCmdMsg_default_instance_;
    new (ptr) ::IM::SwitchService::IMP2PCmdMsg();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::IM::SwitchService::IMP2PCmdMsg::InitAsDefaultInstance();
}

void InitDefaultsIMP2PCmdMsg() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsIMP2PCmdMsgImpl);
}

}  // namespace protobuf_IM_2eSwitchService_2eproto
namespace IM {
namespace SwitchService {

// ===================================================================

void IMP2PCmdMsg::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int IMP2PCmdMsg::kFromUserIdFieldNumber;
const int IMP2PCmdMsg::kToUserIdFieldNumber;
const int IMP2PCmdMsg::kCmdMsgDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

IMP2PCmdMsg::IMP2PCmdMsg()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_IM_2eSwitchService_2eproto::InitDefaultsIMP2PCmdMsg();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:IM.SwitchService.IMP2PCmdMsg)
}
IMP2PCmdMsg::IMP2PCmdMsg(const IMP2PCmdMsg& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cmd_msg_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_cmd_msg_data()) {
    cmd_msg_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cmd_msg_data_);
  }
  ::memcpy(&from_user_id_, &from.from_user_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&to_user_id_) -
    reinterpret_cast<char*>(&from_user_id_)) + sizeof(to_user_id_));
  // @@protoc_insertion_point(copy_constructor:IM.SwitchService.IMP2PCmdMsg)
}

void IMP2PCmdMsg::SharedCtor() {
  _cached_size_ = 0;
  cmd_msg_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&from_user_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&to_user_id_) -
      reinterpret_cast<char*>(&from_user_id_)) + sizeof(to_user_id_));
}

IMP2PCmdMsg::~IMP2PCmdMsg() {
  // @@protoc_insertion_point(destructor:IM.SwitchService.IMP2PCmdMsg)
  SharedDtor();
}

void IMP2PCmdMsg::SharedDtor() {
  cmd_msg_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void IMP2PCmdMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IMP2PCmdMsg& IMP2PCmdMsg::default_instance() {
  ::protobuf_IM_2eSwitchService_2eproto::InitDefaultsIMP2PCmdMsg();
  return *internal_default_instance();
}

IMP2PCmdMsg* IMP2PCmdMsg::New(::google::protobuf::Arena* arena) const {
  IMP2PCmdMsg* n = new IMP2PCmdMsg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void IMP2PCmdMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:IM.SwitchService.IMP2PCmdMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!cmd_msg_data_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*cmd_msg_data_.UnsafeRawStringPointer())->clear();
  }
  if (cached_has_bits & 6u) {
    ::memset(&from_user_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&to_user_id_) -
        reinterpret_cast<char*>(&from_user_id_)) + sizeof(to_user_id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool IMP2PCmdMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:IM.SwitchService.IMP2PCmdMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 from_user_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_from_user_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &from_user_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 to_user_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_to_user_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &to_user_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string cmd_msg_data = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cmd_msg_data()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IM.SwitchService.IMP2PCmdMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IM.SwitchService.IMP2PCmdMsg)
  return false;
#undef DO_
}

void IMP2PCmdMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IM.SwitchService.IMP2PCmdMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 from_user_id = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->from_user_id(), output);
  }

  // required uint32 to_user_id = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->to_user_id(), output);
  }

  // required string cmd_msg_data = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->cmd_msg_data(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:IM.SwitchService.IMP2PCmdMsg)
}

size_t IMP2PCmdMsg::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:IM.SwitchService.IMP2PCmdMsg)
  size_t total_size = 0;

  if (has_cmd_msg_data()) {
    // required string cmd_msg_data = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->cmd_msg_data());
  }

  if (has_from_user_id()) {
    // required uint32 from_user_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->from_user_id());
  }

  if (has_to_user_id()) {
    // required uint32 to_user_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->to_user_id());
  }

  return total_size;
}
size_t IMP2PCmdMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:IM.SwitchService.IMP2PCmdMsg)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string cmd_msg_data = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->cmd_msg_data());

    // required uint32 from_user_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->from_user_id());

    // required uint32 to_user_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->to_user_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IMP2PCmdMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IMP2PCmdMsg*>(&from));
}

void IMP2PCmdMsg::MergeFrom(const IMP2PCmdMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:IM.SwitchService.IMP2PCmdMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_cmd_msg_data();
      cmd_msg_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cmd_msg_data_);
    }
    if (cached_has_bits & 0x00000002u) {
      from_user_id_ = from.from_user_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      to_user_id_ = from.to_user_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void IMP2PCmdMsg::CopyFrom(const IMP2PCmdMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:IM.SwitchService.IMP2PCmdMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMP2PCmdMsg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void IMP2PCmdMsg::Swap(IMP2PCmdMsg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IMP2PCmdMsg::InternalSwap(IMP2PCmdMsg* other) {
  using std::swap;
  cmd_msg_data_.Swap(&other->cmd_msg_data_);
  swap(from_user_id_, other->from_user_id_);
  swap(to_user_id_, other->to_user_id_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string IMP2PCmdMsg::GetTypeName() const {
  return "IM.SwitchService.IMP2PCmdMsg";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace SwitchService
}  // namespace IM

// @@protoc_insertion_point(global_scope)