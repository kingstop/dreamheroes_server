// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_game_db.proto

#ifndef PROTOBUF_msg_5fgame_5fdb_2eproto__INCLUDED
#define PROTOBUF_msg_5fgame_5fdb_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "common.pb.h"
#include "dream_hero.pb.h"
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_msg_5fgame_5fdb_2eproto();
void protobuf_AssignDesc_msg_5fgame_5fdb_2eproto();
void protobuf_ShutdownFile_msg_5fgame_5fdb_2eproto();

class MsgReqHeroDataGS2DB;
class MsgHeroDataDB2GS;
class MsgNeedCreateHeroDB2GS;
class MsgSaveHeroDataGS2DB;
class MsgSaveDataGS2DB;

// ===================================================================

class MsgReqHeroDataGS2DB : public ::google::protobuf::Message {
 public:
  MsgReqHeroDataGS2DB();
  virtual ~MsgReqHeroDataGS2DB();

  MsgReqHeroDataGS2DB(const MsgReqHeroDataGS2DB& from);

  inline MsgReqHeroDataGS2DB& operator=(const MsgReqHeroDataGS2DB& from) {
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
  static const MsgReqHeroDataGS2DB& default_instance();

  void Swap(MsgReqHeroDataGS2DB* other);

  // implements Message ----------------------------------------------

  inline MsgReqHeroDataGS2DB* New() const { return New(NULL); }

  MsgReqHeroDataGS2DB* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgReqHeroDataGS2DB& from);
  void MergeFrom(const MsgReqHeroDataGS2DB& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgReqHeroDataGS2DB* other);
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

  // required uint64 account = 1;
  bool has_account() const;
  void clear_account();
  static const int kAccountFieldNumber = 1;
  ::google::protobuf::uint64 account() const;
  void set_account(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:message.MsgReqHeroDataGS2DB)
 private:
  inline void set_has_account();
  inline void clear_has_account();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 account_;
  friend void  protobuf_AddDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_AssignDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_ShutdownFile_msg_5fgame_5fdb_2eproto();

  void InitAsDefaultInstance();
  static MsgReqHeroDataGS2DB* default_instance_;
};
// -------------------------------------------------------------------

class MsgHeroDataDB2GS : public ::google::protobuf::Message {
 public:
  MsgHeroDataDB2GS();
  virtual ~MsgHeroDataDB2GS();

  MsgHeroDataDB2GS(const MsgHeroDataDB2GS& from);

  inline MsgHeroDataDB2GS& operator=(const MsgHeroDataDB2GS& from) {
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
  static const MsgHeroDataDB2GS& default_instance();

  void Swap(MsgHeroDataDB2GS* other);

  // implements Message ----------------------------------------------

  inline MsgHeroDataDB2GS* New() const { return New(NULL); }

  MsgHeroDataDB2GS* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgHeroDataDB2GS& from);
  void MergeFrom(const MsgHeroDataDB2GS& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgHeroDataDB2GS* other);
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

  // required uint64 account = 1;
  bool has_account() const;
  void clear_account();
  static const int kAccountFieldNumber = 1;
  ::google::protobuf::uint64 account() const;
  void set_account(::google::protobuf::uint64 value);

  // required .message.MsgHeroData Data = 2;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::message::MsgHeroData& data() const;
  ::message::MsgHeroData* mutable_data();
  ::message::MsgHeroData* release_data();
  void set_allocated_data(::message::MsgHeroData* data);

  // repeated .message.MsgEquipData equips = 3;
  int equips_size() const;
  void clear_equips();
  static const int kEquipsFieldNumber = 3;
  const ::message::MsgEquipData& equips(int index) const;
  ::message::MsgEquipData* mutable_equips(int index);
  ::message::MsgEquipData* add_equips();
  const ::google::protobuf::RepeatedPtrField< ::message::MsgEquipData >&
      equips() const;
  ::google::protobuf::RepeatedPtrField< ::message::MsgEquipData >*
      mutable_equips();

  // @@protoc_insertion_point(class_scope:message.MsgHeroDataDB2GS)
 private:
  inline void set_has_account();
  inline void clear_has_account();
  inline void set_has_data();
  inline void clear_has_data();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 account_;
  ::message::MsgHeroData* data_;
  ::google::protobuf::RepeatedPtrField< ::message::MsgEquipData > equips_;
  friend void  protobuf_AddDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_AssignDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_ShutdownFile_msg_5fgame_5fdb_2eproto();

  void InitAsDefaultInstance();
  static MsgHeroDataDB2GS* default_instance_;
};
// -------------------------------------------------------------------

class MsgNeedCreateHeroDB2GS : public ::google::protobuf::Message {
 public:
  MsgNeedCreateHeroDB2GS();
  virtual ~MsgNeedCreateHeroDB2GS();

  MsgNeedCreateHeroDB2GS(const MsgNeedCreateHeroDB2GS& from);

  inline MsgNeedCreateHeroDB2GS& operator=(const MsgNeedCreateHeroDB2GS& from) {
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
  static const MsgNeedCreateHeroDB2GS& default_instance();

  void Swap(MsgNeedCreateHeroDB2GS* other);

  // implements Message ----------------------------------------------

  inline MsgNeedCreateHeroDB2GS* New() const { return New(NULL); }

  MsgNeedCreateHeroDB2GS* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgNeedCreateHeroDB2GS& from);
  void MergeFrom(const MsgNeedCreateHeroDB2GS& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgNeedCreateHeroDB2GS* other);
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

  // @@protoc_insertion_point(class_scope:message.MsgNeedCreateHeroDB2GS)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_AssignDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_ShutdownFile_msg_5fgame_5fdb_2eproto();

  void InitAsDefaultInstance();
  static MsgNeedCreateHeroDB2GS* default_instance_;
};
// -------------------------------------------------------------------

class MsgSaveHeroDataGS2DB : public ::google::protobuf::Message {
 public:
  MsgSaveHeroDataGS2DB();
  virtual ~MsgSaveHeroDataGS2DB();

  MsgSaveHeroDataGS2DB(const MsgSaveHeroDataGS2DB& from);

  inline MsgSaveHeroDataGS2DB& operator=(const MsgSaveHeroDataGS2DB& from) {
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
  static const MsgSaveHeroDataGS2DB& default_instance();

  void Swap(MsgSaveHeroDataGS2DB* other);

  // implements Message ----------------------------------------------

  inline MsgSaveHeroDataGS2DB* New() const { return New(NULL); }

  MsgSaveHeroDataGS2DB* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgSaveHeroDataGS2DB& from);
  void MergeFrom(const MsgSaveHeroDataGS2DB& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgSaveHeroDataGS2DB* other);
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

  // required uint64 account = 1;
  bool has_account() const;
  void clear_account();
  static const int kAccountFieldNumber = 1;
  ::google::protobuf::uint64 account() const;
  void set_account(::google::protobuf::uint64 value);

  // required .message.MsgHeroData Data = 2;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::message::MsgHeroData& data() const;
  ::message::MsgHeroData* mutable_data();
  ::message::MsgHeroData* release_data();
  void set_allocated_data(::message::MsgHeroData* data);

  // @@protoc_insertion_point(class_scope:message.MsgSaveHeroDataGS2DB)
 private:
  inline void set_has_account();
  inline void clear_has_account();
  inline void set_has_data();
  inline void clear_has_data();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 account_;
  ::message::MsgHeroData* data_;
  friend void  protobuf_AddDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_AssignDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_ShutdownFile_msg_5fgame_5fdb_2eproto();

  void InitAsDefaultInstance();
  static MsgSaveHeroDataGS2DB* default_instance_;
};
// -------------------------------------------------------------------

class MsgSaveDataGS2DB : public ::google::protobuf::Message {
 public:
  MsgSaveDataGS2DB();
  virtual ~MsgSaveDataGS2DB();

  MsgSaveDataGS2DB(const MsgSaveDataGS2DB& from);

  inline MsgSaveDataGS2DB& operator=(const MsgSaveDataGS2DB& from) {
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
  static const MsgSaveDataGS2DB& default_instance();

  void Swap(MsgSaveDataGS2DB* other);

  // implements Message ----------------------------------------------

  inline MsgSaveDataGS2DB* New() const { return New(NULL); }

  MsgSaveDataGS2DB* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgSaveDataGS2DB& from);
  void MergeFrom(const MsgSaveDataGS2DB& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgSaveDataGS2DB* other);
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

  // required string sql = 1;
  bool has_sql() const;
  void clear_sql();
  static const int kSqlFieldNumber = 1;
  const ::std::string& sql() const;
  void set_sql(const ::std::string& value);
  void set_sql(const char* value);
  void set_sql(const char* value, size_t size);
  ::std::string* mutable_sql();
  ::std::string* release_sql();
  void set_allocated_sql(::std::string* sql);

  // @@protoc_insertion_point(class_scope:message.MsgSaveDataGS2DB)
 private:
  inline void set_has_sql();
  inline void clear_has_sql();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr sql_;
  friend void  protobuf_AddDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_AssignDesc_msg_5fgame_5fdb_2eproto();
  friend void protobuf_ShutdownFile_msg_5fgame_5fdb_2eproto();

  void InitAsDefaultInstance();
  static MsgSaveDataGS2DB* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MsgReqHeroDataGS2DB

// required uint64 account = 1;
inline bool MsgReqHeroDataGS2DB::has_account() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgReqHeroDataGS2DB::set_has_account() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgReqHeroDataGS2DB::clear_has_account() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgReqHeroDataGS2DB::clear_account() {
  account_ = GOOGLE_ULONGLONG(0);
  clear_has_account();
}
inline ::google::protobuf::uint64 MsgReqHeroDataGS2DB::account() const {
  // @@protoc_insertion_point(field_get:message.MsgReqHeroDataGS2DB.account)
  return account_;
}
inline void MsgReqHeroDataGS2DB::set_account(::google::protobuf::uint64 value) {
  set_has_account();
  account_ = value;
  // @@protoc_insertion_point(field_set:message.MsgReqHeroDataGS2DB.account)
}

// -------------------------------------------------------------------

// MsgHeroDataDB2GS

// required uint64 account = 1;
inline bool MsgHeroDataDB2GS::has_account() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgHeroDataDB2GS::set_has_account() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgHeroDataDB2GS::clear_has_account() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgHeroDataDB2GS::clear_account() {
  account_ = GOOGLE_ULONGLONG(0);
  clear_has_account();
}
inline ::google::protobuf::uint64 MsgHeroDataDB2GS::account() const {
  // @@protoc_insertion_point(field_get:message.MsgHeroDataDB2GS.account)
  return account_;
}
inline void MsgHeroDataDB2GS::set_account(::google::protobuf::uint64 value) {
  set_has_account();
  account_ = value;
  // @@protoc_insertion_point(field_set:message.MsgHeroDataDB2GS.account)
}

// required .message.MsgHeroData Data = 2;
inline bool MsgHeroDataDB2GS::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgHeroDataDB2GS::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgHeroDataDB2GS::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgHeroDataDB2GS::clear_data() {
  if (data_ != NULL) data_->::message::MsgHeroData::Clear();
  clear_has_data();
}
inline const ::message::MsgHeroData& MsgHeroDataDB2GS::data() const {
  // @@protoc_insertion_point(field_get:message.MsgHeroDataDB2GS.Data)
  return data_ != NULL ? *data_ : *default_instance_->data_;
}
inline ::message::MsgHeroData* MsgHeroDataDB2GS::mutable_data() {
  set_has_data();
  if (data_ == NULL) {
    data_ = new ::message::MsgHeroData;
  }
  // @@protoc_insertion_point(field_mutable:message.MsgHeroDataDB2GS.Data)
  return data_;
}
inline ::message::MsgHeroData* MsgHeroDataDB2GS::release_data() {
  clear_has_data();
  ::message::MsgHeroData* temp = data_;
  data_ = NULL;
  return temp;
}
inline void MsgHeroDataDB2GS::set_allocated_data(::message::MsgHeroData* data) {
  delete data_;
  data_ = data;
  if (data) {
    set_has_data();
  } else {
    clear_has_data();
  }
  // @@protoc_insertion_point(field_set_allocated:message.MsgHeroDataDB2GS.Data)
}

// repeated .message.MsgEquipData equips = 3;
inline int MsgHeroDataDB2GS::equips_size() const {
  return equips_.size();
}
inline void MsgHeroDataDB2GS::clear_equips() {
  equips_.Clear();
}
inline const ::message::MsgEquipData& MsgHeroDataDB2GS::equips(int index) const {
  // @@protoc_insertion_point(field_get:message.MsgHeroDataDB2GS.equips)
  return equips_.Get(index);
}
inline ::message::MsgEquipData* MsgHeroDataDB2GS::mutable_equips(int index) {
  // @@protoc_insertion_point(field_mutable:message.MsgHeroDataDB2GS.equips)
  return equips_.Mutable(index);
}
inline ::message::MsgEquipData* MsgHeroDataDB2GS::add_equips() {
  // @@protoc_insertion_point(field_add:message.MsgHeroDataDB2GS.equips)
  return equips_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::message::MsgEquipData >&
MsgHeroDataDB2GS::equips() const {
  // @@protoc_insertion_point(field_list:message.MsgHeroDataDB2GS.equips)
  return equips_;
}
inline ::google::protobuf::RepeatedPtrField< ::message::MsgEquipData >*
MsgHeroDataDB2GS::mutable_equips() {
  // @@protoc_insertion_point(field_mutable_list:message.MsgHeroDataDB2GS.equips)
  return &equips_;
}

// -------------------------------------------------------------------

// MsgNeedCreateHeroDB2GS

// -------------------------------------------------------------------

// MsgSaveHeroDataGS2DB

// required uint64 account = 1;
inline bool MsgSaveHeroDataGS2DB::has_account() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgSaveHeroDataGS2DB::set_has_account() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgSaveHeroDataGS2DB::clear_has_account() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgSaveHeroDataGS2DB::clear_account() {
  account_ = GOOGLE_ULONGLONG(0);
  clear_has_account();
}
inline ::google::protobuf::uint64 MsgSaveHeroDataGS2DB::account() const {
  // @@protoc_insertion_point(field_get:message.MsgSaveHeroDataGS2DB.account)
  return account_;
}
inline void MsgSaveHeroDataGS2DB::set_account(::google::protobuf::uint64 value) {
  set_has_account();
  account_ = value;
  // @@protoc_insertion_point(field_set:message.MsgSaveHeroDataGS2DB.account)
}

// required .message.MsgHeroData Data = 2;
inline bool MsgSaveHeroDataGS2DB::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgSaveHeroDataGS2DB::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgSaveHeroDataGS2DB::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgSaveHeroDataGS2DB::clear_data() {
  if (data_ != NULL) data_->::message::MsgHeroData::Clear();
  clear_has_data();
}
inline const ::message::MsgHeroData& MsgSaveHeroDataGS2DB::data() const {
  // @@protoc_insertion_point(field_get:message.MsgSaveHeroDataGS2DB.Data)
  return data_ != NULL ? *data_ : *default_instance_->data_;
}
inline ::message::MsgHeroData* MsgSaveHeroDataGS2DB::mutable_data() {
  set_has_data();
  if (data_ == NULL) {
    data_ = new ::message::MsgHeroData;
  }
  // @@protoc_insertion_point(field_mutable:message.MsgSaveHeroDataGS2DB.Data)
  return data_;
}
inline ::message::MsgHeroData* MsgSaveHeroDataGS2DB::release_data() {
  clear_has_data();
  ::message::MsgHeroData* temp = data_;
  data_ = NULL;
  return temp;
}
inline void MsgSaveHeroDataGS2DB::set_allocated_data(::message::MsgHeroData* data) {
  delete data_;
  data_ = data;
  if (data) {
    set_has_data();
  } else {
    clear_has_data();
  }
  // @@protoc_insertion_point(field_set_allocated:message.MsgSaveHeroDataGS2DB.Data)
}

// -------------------------------------------------------------------

// MsgSaveDataGS2DB

// required string sql = 1;
inline bool MsgSaveDataGS2DB::has_sql() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgSaveDataGS2DB::set_has_sql() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgSaveDataGS2DB::clear_has_sql() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgSaveDataGS2DB::clear_sql() {
  sql_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sql();
}
inline const ::std::string& MsgSaveDataGS2DB::sql() const {
  // @@protoc_insertion_point(field_get:message.MsgSaveDataGS2DB.sql)
  return sql_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgSaveDataGS2DB::set_sql(const ::std::string& value) {
  set_has_sql();
  sql_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:message.MsgSaveDataGS2DB.sql)
}
inline void MsgSaveDataGS2DB::set_sql(const char* value) {
  set_has_sql();
  sql_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:message.MsgSaveDataGS2DB.sql)
}
inline void MsgSaveDataGS2DB::set_sql(const char* value, size_t size) {
  set_has_sql();
  sql_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:message.MsgSaveDataGS2DB.sql)
}
inline ::std::string* MsgSaveDataGS2DB::mutable_sql() {
  set_has_sql();
  // @@protoc_insertion_point(field_mutable:message.MsgSaveDataGS2DB.sql)
  return sql_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgSaveDataGS2DB::release_sql() {
  clear_has_sql();
  return sql_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgSaveDataGS2DB::set_allocated_sql(::std::string* sql) {
  if (sql != NULL) {
    set_has_sql();
  } else {
    clear_has_sql();
  }
  sql_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sql);
  // @@protoc_insertion_point(field_set_allocated:message.MsgSaveDataGS2DB.sql)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fgame_5fdb_2eproto__INCLUDED
