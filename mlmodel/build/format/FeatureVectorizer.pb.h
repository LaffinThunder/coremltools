// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FeatureVectorizer.proto

#ifndef PROTOBUF_FeatureVectorizer_2eproto__INCLUDED
#define PROTOBUF_FeatureVectorizer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace CoreML {
namespace Specification {
class FeatureVectorizer;
class FeatureVectorizerDefaultTypeInternal;
extern FeatureVectorizerDefaultTypeInternal _FeatureVectorizer_default_instance_;
class FeatureVectorizer_InputColumn;
class FeatureVectorizer_InputColumnDefaultTypeInternal;
extern FeatureVectorizer_InputColumnDefaultTypeInternal _FeatureVectorizer_InputColumn_default_instance_;
}  // namespace Specification
}  // namespace CoreML

namespace CoreML {
namespace Specification {

namespace protobuf_FeatureVectorizer_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_FeatureVectorizer_2eproto

// ===================================================================

class FeatureVectorizer_InputColumn : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.FeatureVectorizer.InputColumn) */ {
 public:
  FeatureVectorizer_InputColumn();
  virtual ~FeatureVectorizer_InputColumn();

  FeatureVectorizer_InputColumn(const FeatureVectorizer_InputColumn& from);

  inline FeatureVectorizer_InputColumn& operator=(const FeatureVectorizer_InputColumn& from) {
    CopyFrom(from);
    return *this;
  }

  static const FeatureVectorizer_InputColumn& default_instance();

  static inline const FeatureVectorizer_InputColumn* internal_default_instance() {
    return reinterpret_cast<const FeatureVectorizer_InputColumn*>(
               &_FeatureVectorizer_InputColumn_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(FeatureVectorizer_InputColumn* other);

  // implements Message ----------------------------------------------

  inline FeatureVectorizer_InputColumn* New() const PROTOBUF_FINAL { return New(NULL); }

  FeatureVectorizer_InputColumn* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const FeatureVectorizer_InputColumn& from);
  void MergeFrom(const FeatureVectorizer_InputColumn& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FeatureVectorizer_InputColumn* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string inputColumn = 1;
  void clear_inputcolumn();
  static const int kInputColumnFieldNumber = 1;
  const ::std::string& inputcolumn() const;
  void set_inputcolumn(const ::std::string& value);
  #if LANG_CXX11
  void set_inputcolumn(::std::string&& value);
  #endif
  void set_inputcolumn(const char* value);
  void set_inputcolumn(const char* value, size_t size);
  ::std::string* mutable_inputcolumn();
  ::std::string* release_inputcolumn();
  void set_allocated_inputcolumn(::std::string* inputcolumn);

  // uint64 inputDimensions = 2;
  void clear_inputdimensions();
  static const int kInputDimensionsFieldNumber = 2;
  ::google::protobuf::uint64 inputdimensions() const;
  void set_inputdimensions(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:CoreML.Specification.FeatureVectorizer.InputColumn)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr inputcolumn_;
  ::google::protobuf::uint64 inputdimensions_;
  mutable int _cached_size_;
  friend struct protobuf_FeatureVectorizer_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class FeatureVectorizer : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.FeatureVectorizer) */ {
 public:
  FeatureVectorizer();
  virtual ~FeatureVectorizer();

  FeatureVectorizer(const FeatureVectorizer& from);

  inline FeatureVectorizer& operator=(const FeatureVectorizer& from) {
    CopyFrom(from);
    return *this;
  }

  static const FeatureVectorizer& default_instance();

  static inline const FeatureVectorizer* internal_default_instance() {
    return reinterpret_cast<const FeatureVectorizer*>(
               &_FeatureVectorizer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(FeatureVectorizer* other);

  // implements Message ----------------------------------------------

  inline FeatureVectorizer* New() const PROTOBUF_FINAL { return New(NULL); }

  FeatureVectorizer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const FeatureVectorizer& from);
  void MergeFrom(const FeatureVectorizer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FeatureVectorizer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef FeatureVectorizer_InputColumn InputColumn;

  // accessors -------------------------------------------------------

  // repeated .CoreML.Specification.FeatureVectorizer.InputColumn inputList = 1;
  int inputlist_size() const;
  void clear_inputlist();
  static const int kInputListFieldNumber = 1;
  const ::CoreML::Specification::FeatureVectorizer_InputColumn& inputlist(int index) const;
  ::CoreML::Specification::FeatureVectorizer_InputColumn* mutable_inputlist(int index);
  ::CoreML::Specification::FeatureVectorizer_InputColumn* add_inputlist();
  ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::FeatureVectorizer_InputColumn >*
      mutable_inputlist();
  const ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::FeatureVectorizer_InputColumn >&
      inputlist() const;

  // @@protoc_insertion_point(class_scope:CoreML.Specification.FeatureVectorizer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::FeatureVectorizer_InputColumn > inputlist_;
  mutable int _cached_size_;
  friend struct protobuf_FeatureVectorizer_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FeatureVectorizer_InputColumn

// string inputColumn = 1;
inline void FeatureVectorizer_InputColumn::clear_inputcolumn() {
  inputcolumn_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FeatureVectorizer_InputColumn::inputcolumn() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn)
  return inputcolumn_.GetNoArena();
}
inline void FeatureVectorizer_InputColumn::set_inputcolumn(const ::std::string& value) {
  
  inputcolumn_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn)
}
#if LANG_CXX11
inline void FeatureVectorizer_InputColumn::set_inputcolumn(::std::string&& value) {
  
  inputcolumn_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn)
}
#endif
inline void FeatureVectorizer_InputColumn::set_inputcolumn(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  inputcolumn_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn)
}
inline void FeatureVectorizer_InputColumn::set_inputcolumn(const char* value, size_t size) {
  
  inputcolumn_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn)
}
inline ::std::string* FeatureVectorizer_InputColumn::mutable_inputcolumn() {
  
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn)
  return inputcolumn_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FeatureVectorizer_InputColumn::release_inputcolumn() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn)
  
  return inputcolumn_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FeatureVectorizer_InputColumn::set_allocated_inputcolumn(::std::string* inputcolumn) {
  if (inputcolumn != NULL) {
    
  } else {
    
  }
  inputcolumn_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), inputcolumn);
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn)
}

// uint64 inputDimensions = 2;
inline void FeatureVectorizer_InputColumn::clear_inputdimensions() {
  inputdimensions_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 FeatureVectorizer_InputColumn::inputdimensions() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.FeatureVectorizer.InputColumn.inputDimensions)
  return inputdimensions_;
}
inline void FeatureVectorizer_InputColumn::set_inputdimensions(::google::protobuf::uint64 value) {
  
  inputdimensions_ = value;
  // @@protoc_insertion_point(field_set:CoreML.Specification.FeatureVectorizer.InputColumn.inputDimensions)
}

// -------------------------------------------------------------------

// FeatureVectorizer

// repeated .CoreML.Specification.FeatureVectorizer.InputColumn inputList = 1;
inline int FeatureVectorizer::inputlist_size() const {
  return inputlist_.size();
}
inline void FeatureVectorizer::clear_inputlist() {
  inputlist_.Clear();
}
inline const ::CoreML::Specification::FeatureVectorizer_InputColumn& FeatureVectorizer::inputlist(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.FeatureVectorizer.inputList)
  return inputlist_.Get(index);
}
inline ::CoreML::Specification::FeatureVectorizer_InputColumn* FeatureVectorizer::mutable_inputlist(int index) {
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.FeatureVectorizer.inputList)
  return inputlist_.Mutable(index);
}
inline ::CoreML::Specification::FeatureVectorizer_InputColumn* FeatureVectorizer::add_inputlist() {
  // @@protoc_insertion_point(field_add:CoreML.Specification.FeatureVectorizer.inputList)
  return inputlist_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::FeatureVectorizer_InputColumn >*
FeatureVectorizer::mutable_inputlist() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.FeatureVectorizer.inputList)
  return &inputlist_;
}
inline const ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::FeatureVectorizer_InputColumn >&
FeatureVectorizer::inputlist() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.FeatureVectorizer.inputList)
  return inputlist_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FeatureVectorizer_2eproto__INCLUDED