// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dream_hero.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dream_hero.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace message {

namespace {

const ::google::protobuf::Descriptor* S2CMsgHeroInit_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  S2CMsgHeroInit_reflection_ = NULL;
const ::google::protobuf::Descriptor* S2CMsgHeroEquip_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  S2CMsgHeroEquip_reflection_ = NULL;
const ::google::protobuf::Descriptor* S2CMsgEquipInit_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  S2CMsgEquipInit_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dream_5fhero_2eproto() {
  protobuf_AddDesc_dream_5fhero_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dream_hero.proto");
  GOOGLE_CHECK(file != NULL);
  S2CMsgHeroInit_descriptor_ = file->message_type(0);
  static const int S2CMsgHeroInit_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgHeroInit, hero_),
  };
  S2CMsgHeroInit_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      S2CMsgHeroInit_descriptor_,
      S2CMsgHeroInit::default_instance_,
      S2CMsgHeroInit_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgHeroInit, _has_bits_[0]),
      -1,
      -1,
      sizeof(S2CMsgHeroInit),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgHeroInit, _internal_metadata_),
      -1);
  S2CMsgHeroEquip_descriptor_ = file->message_type(1);
  static const int S2CMsgHeroEquip_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgHeroEquip, equips_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgHeroEquip, end_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgHeroEquip, begin_),
  };
  S2CMsgHeroEquip_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      S2CMsgHeroEquip_descriptor_,
      S2CMsgHeroEquip::default_instance_,
      S2CMsgHeroEquip_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgHeroEquip, _has_bits_[0]),
      -1,
      -1,
      sizeof(S2CMsgHeroEquip),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgHeroEquip, _internal_metadata_),
      -1);
  S2CMsgEquipInit_descriptor_ = file->message_type(2);
  static const int S2CMsgEquipInit_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgEquipInit, equip_),
  };
  S2CMsgEquipInit_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      S2CMsgEquipInit_descriptor_,
      S2CMsgEquipInit::default_instance_,
      S2CMsgEquipInit_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgEquipInit, _has_bits_[0]),
      -1,
      -1,
      sizeof(S2CMsgEquipInit),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CMsgEquipInit, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dream_5fhero_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      S2CMsgHeroInit_descriptor_, &S2CMsgHeroInit::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      S2CMsgHeroEquip_descriptor_, &S2CMsgHeroEquip::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      S2CMsgEquipInit_descriptor_, &S2CMsgEquipInit::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dream_5fhero_2eproto() {
  delete S2CMsgHeroInit::default_instance_;
  delete S2CMsgHeroInit_reflection_;
  delete S2CMsgHeroEquip::default_instance_;
  delete S2CMsgHeroEquip_reflection_;
  delete S2CMsgEquipInit::default_instance_;
  delete S2CMsgEquipInit_reflection_;
}

void protobuf_AddDesc_dream_5fhero_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::message::protobuf_AddDesc_common_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020dream_hero.proto\022\007message\032\014common.prot"
    "o\"4\n\016S2CMsgHeroInit\022\"\n\004hero\030\001 \002(\0132\024.mess"
    "age.MsgHeroData\"T\n\017S2CMsgHeroEquip\022%\n\006eq"
    "uips\030\001 \003(\0132\025.message.MsgEquipData\022\013\n\003end"
    "\030\002 \002(\010\022\r\n\005begin\030\003 \002(\010\":\n\017S2CMsgEquipInit"
    "\022\'\n\005equip\030\001 \002(\0132\030.message.S2CMsgHeroEqui"
    "p", 241);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dream_hero.proto", &protobuf_RegisterTypes);
  S2CMsgHeroInit::default_instance_ = new S2CMsgHeroInit();
  S2CMsgHeroEquip::default_instance_ = new S2CMsgHeroEquip();
  S2CMsgEquipInit::default_instance_ = new S2CMsgEquipInit();
  S2CMsgHeroInit::default_instance_->InitAsDefaultInstance();
  S2CMsgHeroEquip::default_instance_->InitAsDefaultInstance();
  S2CMsgEquipInit::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dream_5fhero_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dream_5fhero_2eproto {
  StaticDescriptorInitializer_dream_5fhero_2eproto() {
    protobuf_AddDesc_dream_5fhero_2eproto();
  }
} static_descriptor_initializer_dream_5fhero_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int S2CMsgHeroInit::kHeroFieldNumber;
#endif  // !_MSC_VER

S2CMsgHeroInit::S2CMsgHeroInit()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:message.S2CMsgHeroInit)
}

void S2CMsgHeroInit::InitAsDefaultInstance() {
  hero_ = const_cast< ::message::MsgHeroData*>(&::message::MsgHeroData::default_instance());
}

S2CMsgHeroInit::S2CMsgHeroInit(const S2CMsgHeroInit& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:message.S2CMsgHeroInit)
}

void S2CMsgHeroInit::SharedCtor() {
  _cached_size_ = 0;
  hero_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

S2CMsgHeroInit::~S2CMsgHeroInit() {
  // @@protoc_insertion_point(destructor:message.S2CMsgHeroInit)
  SharedDtor();
}

void S2CMsgHeroInit::SharedDtor() {
  if (this != default_instance_) {
    delete hero_;
  }
}

void S2CMsgHeroInit::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* S2CMsgHeroInit::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return S2CMsgHeroInit_descriptor_;
}

const S2CMsgHeroInit& S2CMsgHeroInit::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dream_5fhero_2eproto();
  return *default_instance_;
}

S2CMsgHeroInit* S2CMsgHeroInit::default_instance_ = NULL;

S2CMsgHeroInit* S2CMsgHeroInit::New(::google::protobuf::Arena* arena) const {
  S2CMsgHeroInit* n = new S2CMsgHeroInit;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void S2CMsgHeroInit::Clear() {
  if (has_hero()) {
    if (hero_ != NULL) hero_->::message::MsgHeroData::Clear();
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool S2CMsgHeroInit::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:message.S2CMsgHeroInit)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.MsgHeroData hero = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_hero()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:message.S2CMsgHeroInit)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:message.S2CMsgHeroInit)
  return false;
#undef DO_
}

void S2CMsgHeroInit::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:message.S2CMsgHeroInit)
  // required .message.MsgHeroData hero = 1;
  if (has_hero()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->hero_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:message.S2CMsgHeroInit)
}

::google::protobuf::uint8* S2CMsgHeroInit::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.S2CMsgHeroInit)
  // required .message.MsgHeroData hero = 1;
  if (has_hero()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, *this->hero_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:message.S2CMsgHeroInit)
  return target;
}

int S2CMsgHeroInit::ByteSize() const {
  int total_size = 0;

  // required .message.MsgHeroData hero = 1;
  if (has_hero()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->hero_);
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void S2CMsgHeroInit::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const S2CMsgHeroInit* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const S2CMsgHeroInit*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void S2CMsgHeroInit::MergeFrom(const S2CMsgHeroInit& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_hero()) {
      mutable_hero()->::message::MsgHeroData::MergeFrom(from.hero());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void S2CMsgHeroInit::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void S2CMsgHeroInit::CopyFrom(const S2CMsgHeroInit& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CMsgHeroInit::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_hero()) {
    if (!this->hero_->IsInitialized()) return false;
  }
  return true;
}

void S2CMsgHeroInit::Swap(S2CMsgHeroInit* other) {
  if (other == this) return;
  InternalSwap(other);
}
void S2CMsgHeroInit::InternalSwap(S2CMsgHeroInit* other) {
  std::swap(hero_, other->hero_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata S2CMsgHeroInit::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = S2CMsgHeroInit_descriptor_;
  metadata.reflection = S2CMsgHeroInit_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// S2CMsgHeroInit

// required .message.MsgHeroData hero = 1;
 bool S2CMsgHeroInit::has_hero() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void S2CMsgHeroInit::set_has_hero() {
  _has_bits_[0] |= 0x00000001u;
}
 void S2CMsgHeroInit::clear_has_hero() {
  _has_bits_[0] &= ~0x00000001u;
}
 void S2CMsgHeroInit::clear_hero() {
  if (hero_ != NULL) hero_->::message::MsgHeroData::Clear();
  clear_has_hero();
}
 const ::message::MsgHeroData& S2CMsgHeroInit::hero() const {
  // @@protoc_insertion_point(field_get:message.S2CMsgHeroInit.hero)
  return hero_ != NULL ? *hero_ : *default_instance_->hero_;
}
 ::message::MsgHeroData* S2CMsgHeroInit::mutable_hero() {
  set_has_hero();
  if (hero_ == NULL) {
    hero_ = new ::message::MsgHeroData;
  }
  // @@protoc_insertion_point(field_mutable:message.S2CMsgHeroInit.hero)
  return hero_;
}
 ::message::MsgHeroData* S2CMsgHeroInit::release_hero() {
  clear_has_hero();
  ::message::MsgHeroData* temp = hero_;
  hero_ = NULL;
  return temp;
}
 void S2CMsgHeroInit::set_allocated_hero(::message::MsgHeroData* hero) {
  delete hero_;
  hero_ = hero;
  if (hero) {
    set_has_hero();
  } else {
    clear_has_hero();
  }
  // @@protoc_insertion_point(field_set_allocated:message.S2CMsgHeroInit.hero)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int S2CMsgHeroEquip::kEquipsFieldNumber;
const int S2CMsgHeroEquip::kEndFieldNumber;
const int S2CMsgHeroEquip::kBeginFieldNumber;
#endif  // !_MSC_VER

S2CMsgHeroEquip::S2CMsgHeroEquip()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:message.S2CMsgHeroEquip)
}

void S2CMsgHeroEquip::InitAsDefaultInstance() {
}

S2CMsgHeroEquip::S2CMsgHeroEquip(const S2CMsgHeroEquip& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:message.S2CMsgHeroEquip)
}

void S2CMsgHeroEquip::SharedCtor() {
  _cached_size_ = 0;
  end_ = false;
  begin_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

S2CMsgHeroEquip::~S2CMsgHeroEquip() {
  // @@protoc_insertion_point(destructor:message.S2CMsgHeroEquip)
  SharedDtor();
}

void S2CMsgHeroEquip::SharedDtor() {
  if (this != default_instance_) {
  }
}

void S2CMsgHeroEquip::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* S2CMsgHeroEquip::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return S2CMsgHeroEquip_descriptor_;
}

const S2CMsgHeroEquip& S2CMsgHeroEquip::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dream_5fhero_2eproto();
  return *default_instance_;
}

S2CMsgHeroEquip* S2CMsgHeroEquip::default_instance_ = NULL;

S2CMsgHeroEquip* S2CMsgHeroEquip::New(::google::protobuf::Arena* arena) const {
  S2CMsgHeroEquip* n = new S2CMsgHeroEquip;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void S2CMsgHeroEquip::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<S2CMsgHeroEquip*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(end_, begin_);

#undef ZR_HELPER_
#undef ZR_

  equips_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool S2CMsgHeroEquip::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:message.S2CMsgHeroEquip)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .message.MsgEquipData equips = 1;
      case 1: {
        if (tag == 10) {
         parse_equips:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_equips()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_equips;
        if (input->ExpectTag(16)) goto parse_end;
        break;
      }

      // required bool end = 2;
      case 2: {
        if (tag == 16) {
         parse_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &end_)));
          set_has_end();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_begin;
        break;
      }

      // required bool begin = 3;
      case 3: {
        if (tag == 24) {
         parse_begin:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &begin_)));
          set_has_begin();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:message.S2CMsgHeroEquip)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:message.S2CMsgHeroEquip)
  return false;
#undef DO_
}

void S2CMsgHeroEquip::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:message.S2CMsgHeroEquip)
  // repeated .message.MsgEquipData equips = 1;
  for (unsigned int i = 0, n = this->equips_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->equips(i), output);
  }

  // required bool end = 2;
  if (has_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->end(), output);
  }

  // required bool begin = 3;
  if (has_begin()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->begin(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:message.S2CMsgHeroEquip)
}

::google::protobuf::uint8* S2CMsgHeroEquip::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.S2CMsgHeroEquip)
  // repeated .message.MsgEquipData equips = 1;
  for (unsigned int i = 0, n = this->equips_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->equips(i), target);
  }

  // required bool end = 2;
  if (has_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->end(), target);
  }

  // required bool begin = 3;
  if (has_begin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->begin(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:message.S2CMsgHeroEquip)
  return target;
}

int S2CMsgHeroEquip::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_end()) {
    // required bool end = 2;
    total_size += 1 + 1;
  }

  if (has_begin()) {
    // required bool begin = 3;
    total_size += 1 + 1;
  }

  return total_size;
}
int S2CMsgHeroEquip::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000006) ^ 0x00000006) == 0) {  // All required fields are present.
    // required bool end = 2;
    total_size += 1 + 1;

    // required bool begin = 3;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated .message.MsgEquipData equips = 1;
  total_size += 1 * this->equips_size();
  for (int i = 0; i < this->equips_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->equips(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void S2CMsgHeroEquip::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const S2CMsgHeroEquip* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const S2CMsgHeroEquip*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void S2CMsgHeroEquip::MergeFrom(const S2CMsgHeroEquip& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  equips_.MergeFrom(from.equips_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_end()) {
      set_end(from.end());
    }
    if (from.has_begin()) {
      set_begin(from.begin());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void S2CMsgHeroEquip::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void S2CMsgHeroEquip::CopyFrom(const S2CMsgHeroEquip& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CMsgHeroEquip::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000006) != 0x00000006) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->equips())) return false;
  return true;
}

void S2CMsgHeroEquip::Swap(S2CMsgHeroEquip* other) {
  if (other == this) return;
  InternalSwap(other);
}
void S2CMsgHeroEquip::InternalSwap(S2CMsgHeroEquip* other) {
  equips_.UnsafeArenaSwap(&other->equips_);
  std::swap(end_, other->end_);
  std::swap(begin_, other->begin_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata S2CMsgHeroEquip::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = S2CMsgHeroEquip_descriptor_;
  metadata.reflection = S2CMsgHeroEquip_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// S2CMsgHeroEquip

// repeated .message.MsgEquipData equips = 1;
 int S2CMsgHeroEquip::equips_size() const {
  return equips_.size();
}
 void S2CMsgHeroEquip::clear_equips() {
  equips_.Clear();
}
 const ::message::MsgEquipData& S2CMsgHeroEquip::equips(int index) const {
  // @@protoc_insertion_point(field_get:message.S2CMsgHeroEquip.equips)
  return equips_.Get(index);
}
 ::message::MsgEquipData* S2CMsgHeroEquip::mutable_equips(int index) {
  // @@protoc_insertion_point(field_mutable:message.S2CMsgHeroEquip.equips)
  return equips_.Mutable(index);
}
 ::message::MsgEquipData* S2CMsgHeroEquip::add_equips() {
  // @@protoc_insertion_point(field_add:message.S2CMsgHeroEquip.equips)
  return equips_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::message::MsgEquipData >&
S2CMsgHeroEquip::equips() const {
  // @@protoc_insertion_point(field_list:message.S2CMsgHeroEquip.equips)
  return equips_;
}
 ::google::protobuf::RepeatedPtrField< ::message::MsgEquipData >*
S2CMsgHeroEquip::mutable_equips() {
  // @@protoc_insertion_point(field_mutable_list:message.S2CMsgHeroEquip.equips)
  return &equips_;
}

// required bool end = 2;
 bool S2CMsgHeroEquip::has_end() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
 void S2CMsgHeroEquip::set_has_end() {
  _has_bits_[0] |= 0x00000002u;
}
 void S2CMsgHeroEquip::clear_has_end() {
  _has_bits_[0] &= ~0x00000002u;
}
 void S2CMsgHeroEquip::clear_end() {
  end_ = false;
  clear_has_end();
}
 bool S2CMsgHeroEquip::end() const {
  // @@protoc_insertion_point(field_get:message.S2CMsgHeroEquip.end)
  return end_;
}
 void S2CMsgHeroEquip::set_end(bool value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:message.S2CMsgHeroEquip.end)
}

// required bool begin = 3;
 bool S2CMsgHeroEquip::has_begin() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
 void S2CMsgHeroEquip::set_has_begin() {
  _has_bits_[0] |= 0x00000004u;
}
 void S2CMsgHeroEquip::clear_has_begin() {
  _has_bits_[0] &= ~0x00000004u;
}
 void S2CMsgHeroEquip::clear_begin() {
  begin_ = false;
  clear_has_begin();
}
 bool S2CMsgHeroEquip::begin() const {
  // @@protoc_insertion_point(field_get:message.S2CMsgHeroEquip.begin)
  return begin_;
}
 void S2CMsgHeroEquip::set_begin(bool value) {
  set_has_begin();
  begin_ = value;
  // @@protoc_insertion_point(field_set:message.S2CMsgHeroEquip.begin)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int S2CMsgEquipInit::kEquipFieldNumber;
#endif  // !_MSC_VER

S2CMsgEquipInit::S2CMsgEquipInit()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:message.S2CMsgEquipInit)
}

void S2CMsgEquipInit::InitAsDefaultInstance() {
  equip_ = const_cast< ::message::S2CMsgHeroEquip*>(&::message::S2CMsgHeroEquip::default_instance());
}

S2CMsgEquipInit::S2CMsgEquipInit(const S2CMsgEquipInit& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:message.S2CMsgEquipInit)
}

void S2CMsgEquipInit::SharedCtor() {
  _cached_size_ = 0;
  equip_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

S2CMsgEquipInit::~S2CMsgEquipInit() {
  // @@protoc_insertion_point(destructor:message.S2CMsgEquipInit)
  SharedDtor();
}

void S2CMsgEquipInit::SharedDtor() {
  if (this != default_instance_) {
    delete equip_;
  }
}

void S2CMsgEquipInit::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* S2CMsgEquipInit::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return S2CMsgEquipInit_descriptor_;
}

const S2CMsgEquipInit& S2CMsgEquipInit::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dream_5fhero_2eproto();
  return *default_instance_;
}

S2CMsgEquipInit* S2CMsgEquipInit::default_instance_ = NULL;

S2CMsgEquipInit* S2CMsgEquipInit::New(::google::protobuf::Arena* arena) const {
  S2CMsgEquipInit* n = new S2CMsgEquipInit;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void S2CMsgEquipInit::Clear() {
  if (has_equip()) {
    if (equip_ != NULL) equip_->::message::S2CMsgHeroEquip::Clear();
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool S2CMsgEquipInit::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:message.S2CMsgEquipInit)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.S2CMsgHeroEquip equip = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_equip()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:message.S2CMsgEquipInit)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:message.S2CMsgEquipInit)
  return false;
#undef DO_
}

void S2CMsgEquipInit::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:message.S2CMsgEquipInit)
  // required .message.S2CMsgHeroEquip equip = 1;
  if (has_equip()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->equip_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:message.S2CMsgEquipInit)
}

::google::protobuf::uint8* S2CMsgEquipInit::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.S2CMsgEquipInit)
  // required .message.S2CMsgHeroEquip equip = 1;
  if (has_equip()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, *this->equip_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:message.S2CMsgEquipInit)
  return target;
}

int S2CMsgEquipInit::ByteSize() const {
  int total_size = 0;

  // required .message.S2CMsgHeroEquip equip = 1;
  if (has_equip()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->equip_);
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void S2CMsgEquipInit::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const S2CMsgEquipInit* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const S2CMsgEquipInit*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void S2CMsgEquipInit::MergeFrom(const S2CMsgEquipInit& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_equip()) {
      mutable_equip()->::message::S2CMsgHeroEquip::MergeFrom(from.equip());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void S2CMsgEquipInit::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void S2CMsgEquipInit::CopyFrom(const S2CMsgEquipInit& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CMsgEquipInit::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_equip()) {
    if (!this->equip_->IsInitialized()) return false;
  }
  return true;
}

void S2CMsgEquipInit::Swap(S2CMsgEquipInit* other) {
  if (other == this) return;
  InternalSwap(other);
}
void S2CMsgEquipInit::InternalSwap(S2CMsgEquipInit* other) {
  std::swap(equip_, other->equip_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata S2CMsgEquipInit::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = S2CMsgEquipInit_descriptor_;
  metadata.reflection = S2CMsgEquipInit_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// S2CMsgEquipInit

// required .message.S2CMsgHeroEquip equip = 1;
 bool S2CMsgEquipInit::has_equip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void S2CMsgEquipInit::set_has_equip() {
  _has_bits_[0] |= 0x00000001u;
}
 void S2CMsgEquipInit::clear_has_equip() {
  _has_bits_[0] &= ~0x00000001u;
}
 void S2CMsgEquipInit::clear_equip() {
  if (equip_ != NULL) equip_->::message::S2CMsgHeroEquip::Clear();
  clear_has_equip();
}
 const ::message::S2CMsgHeroEquip& S2CMsgEquipInit::equip() const {
  // @@protoc_insertion_point(field_get:message.S2CMsgEquipInit.equip)
  return equip_ != NULL ? *equip_ : *default_instance_->equip_;
}
 ::message::S2CMsgHeroEquip* S2CMsgEquipInit::mutable_equip() {
  set_has_equip();
  if (equip_ == NULL) {
    equip_ = new ::message::S2CMsgHeroEquip;
  }
  // @@protoc_insertion_point(field_mutable:message.S2CMsgEquipInit.equip)
  return equip_;
}
 ::message::S2CMsgHeroEquip* S2CMsgEquipInit::release_equip() {
  clear_has_equip();
  ::message::S2CMsgHeroEquip* temp = equip_;
  equip_ = NULL;
  return temp;
}
 void S2CMsgEquipInit::set_allocated_equip(::message::S2CMsgHeroEquip* equip) {
  delete equip_;
  equip_ = equip;
  if (equip) {
    set_has_equip();
  } else {
    clear_has_equip();
  }
  // @@protoc_insertion_point(field_set_allocated:message.S2CMsgEquipInit.equip)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)