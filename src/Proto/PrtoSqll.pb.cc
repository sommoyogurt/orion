// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PrtoSqll.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PrtoSqll.pb.h"

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

namespace com {
namespace tomting {
namespace orion {

namespace {

const ::google::protobuf::Descriptor* PrtoScol_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PrtoScol_reflection_ = NULL;
const ::google::protobuf::Descriptor* PrtoSctl_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PrtoSctl_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* iCsqllcolumntype_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_PrtoSqll_2eproto() {
  protobuf_AddDesc_PrtoSqll_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PrtoSqll.proto");
  GOOGLE_CHECK(file != NULL);
  PrtoScol_descriptor_ = file->message_type(0);
  static const int PrtoScol_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoScol, svcolumn_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoScol, bviskey_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoScol, ivtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoScol, ivlength_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoScol, ivleftposition_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoScol, ivrightposition_),
  };
  PrtoScol_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PrtoScol_descriptor_,
      PrtoScol::default_instance_,
      PrtoScol_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoScol, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoScol, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PrtoScol));
  PrtoSctl_descriptor_ = file->message_type(1);
  static const int PrtoSctl_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoSctl, svnamespace_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoSctl, svtable_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoSctl, cvcolumns_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoSctl, svterminatedby_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoSctl, ivlimitrows_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoSctl, svlistseparator_),
  };
  PrtoSctl_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PrtoSctl_descriptor_,
      PrtoSctl::default_instance_,
      PrtoSctl_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoSctl, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrtoSctl, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PrtoSctl));
  iCsqllcolumntype_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PrtoSqll_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PrtoScol_descriptor_, &PrtoScol::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PrtoSctl_descriptor_, &PrtoSctl::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PrtoSqll_2eproto() {
  delete PrtoScol::default_instance_;
  delete PrtoScol_reflection_;
  delete PrtoSctl::default_instance_;
  delete PrtoSctl_reflection_;
  delete PrtoSctl::_default_svterminatedby_;
  delete PrtoSctl::_default_svlistseparator_;
}

void protobuf_AddDesc_PrtoSqll_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016PrtoSqll.proto\022\021com.tomting.orion\"\264\001\n\010"
    "PrtoScol\022\020\n\010sVcolumn\030\001 \002(\014\022\026\n\007bViskey\030\002 "
    "\002(\010:\005false\022;\n\006iVtype\030\003 \002(\0162#.com.tomting"
    ".orion.iCsqllcolumntype:\006STRING\022\020\n\010iVlen"
    "gth\030\004 \001(\r\022\026\n\016iVleftposition\030\005 \001(\r\022\027\n\017iVr"
    "ightposition\030\006 \001(\r\"\254\001\n\010PrtoSctl\022\023\n\013sVnam"
    "espace\030\001 \002(\014\022\017\n\007sVtable\030\002 \002(\014\022.\n\tcVcolum"
    "ns\030\003 \003(\0132\033.com.tomting.orion.PrtoScol\022\031\n"
    "\016sVterminatedby\030\004 \001(\014:\001;\022\023\n\013iVlimitrows\030"
    "\005 \001(\r\022\032\n\017sVlistseparator\030\006 \001(\014:\001|*;\n\020iCs"
    "qllcolumntype\022\n\n\006STRING\020\000\022\013\n\007INTEGER\020\001\022\016"
    "\n\nSTRINGLIST\020\002", 454);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PrtoSqll.proto", &protobuf_RegisterTypes);
  PrtoScol::default_instance_ = new PrtoScol();
  PrtoSctl::_default_svterminatedby_ =
      new ::std::string(";", 1);
  PrtoSctl::_default_svlistseparator_ =
      new ::std::string("|", 1);
  PrtoSctl::default_instance_ = new PrtoSctl();
  PrtoScol::default_instance_->InitAsDefaultInstance();
  PrtoSctl::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PrtoSqll_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PrtoSqll_2eproto {
  StaticDescriptorInitializer_PrtoSqll_2eproto() {
    protobuf_AddDesc_PrtoSqll_2eproto();
  }
} static_descriptor_initializer_PrtoSqll_2eproto_;
const ::google::protobuf::EnumDescriptor* iCsqllcolumntype_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return iCsqllcolumntype_descriptor_;
}
bool iCsqllcolumntype_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int PrtoScol::kSVcolumnFieldNumber;
const int PrtoScol::kBViskeyFieldNumber;
const int PrtoScol::kIVtypeFieldNumber;
const int PrtoScol::kIVlengthFieldNumber;
const int PrtoScol::kIVleftpositionFieldNumber;
const int PrtoScol::kIVrightpositionFieldNumber;
#endif  // !_MSC_VER

PrtoScol::PrtoScol()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.tomting.orion.PrtoScol)
}

void PrtoScol::InitAsDefaultInstance() {
}

PrtoScol::PrtoScol(const PrtoScol& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:com.tomting.orion.PrtoScol)
}

void PrtoScol::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  svcolumn_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bviskey_ = false;
  ivtype_ = 0;
  ivlength_ = 0u;
  ivleftposition_ = 0u;
  ivrightposition_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PrtoScol::~PrtoScol() {
  // @@protoc_insertion_point(destructor:com.tomting.orion.PrtoScol)
  SharedDtor();
}

void PrtoScol::SharedDtor() {
  if (svcolumn_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete svcolumn_;
  }
  if (this != default_instance_) {
  }
}

void PrtoScol::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PrtoScol::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PrtoScol_descriptor_;
}

const PrtoScol& PrtoScol::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PrtoSqll_2eproto();
  return *default_instance_;
}

PrtoScol* PrtoScol::default_instance_ = NULL;

PrtoScol* PrtoScol::New() const {
  return new PrtoScol;
}

void PrtoScol::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<PrtoScol*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 63) {
    ZR_(bviskey_, ivrightposition_);
    if (has_svcolumn()) {
      if (svcolumn_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        svcolumn_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PrtoScol::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.tomting.orion.PrtoScol)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes sVcolumn = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_svcolumn()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_bViskey;
        break;
      }

      // required bool bViskey = 2 [default = false];
      case 2: {
        if (tag == 16) {
         parse_bViskey:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bviskey_)));
          set_has_bviskey();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_iVtype;
        break;
      }

      // required .com.tomting.orion.iCsqllcolumntype iVtype = 3 [default = STRING];
      case 3: {
        if (tag == 24) {
         parse_iVtype:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::com::tomting::orion::iCsqllcolumntype_IsValid(value)) {
            set_ivtype(static_cast< ::com::tomting::orion::iCsqllcolumntype >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_iVlength;
        break;
      }

      // optional uint32 iVlength = 4;
      case 4: {
        if (tag == 32) {
         parse_iVlength:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ivlength_)));
          set_has_ivlength();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_iVleftposition;
        break;
      }

      // optional uint32 iVleftposition = 5;
      case 5: {
        if (tag == 40) {
         parse_iVleftposition:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ivleftposition_)));
          set_has_ivleftposition();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_iVrightposition;
        break;
      }

      // optional uint32 iVrightposition = 6;
      case 6: {
        if (tag == 48) {
         parse_iVrightposition:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ivrightposition_)));
          set_has_ivrightposition();
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
  // @@protoc_insertion_point(parse_success:com.tomting.orion.PrtoScol)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.tomting.orion.PrtoScol)
  return false;
#undef DO_
}

void PrtoScol::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.tomting.orion.PrtoScol)
  // required bytes sVcolumn = 1;
  if (has_svcolumn()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->svcolumn(), output);
  }

  // required bool bViskey = 2 [default = false];
  if (has_bviskey()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->bviskey(), output);
  }

  // required .com.tomting.orion.iCsqllcolumntype iVtype = 3 [default = STRING];
  if (has_ivtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->ivtype(), output);
  }

  // optional uint32 iVlength = 4;
  if (has_ivlength()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->ivlength(), output);
  }

  // optional uint32 iVleftposition = 5;
  if (has_ivleftposition()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->ivleftposition(), output);
  }

  // optional uint32 iVrightposition = 6;
  if (has_ivrightposition()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->ivrightposition(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:com.tomting.orion.PrtoScol)
}

::google::protobuf::uint8* PrtoScol::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.tomting.orion.PrtoScol)
  // required bytes sVcolumn = 1;
  if (has_svcolumn()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->svcolumn(), target);
  }

  // required bool bViskey = 2 [default = false];
  if (has_bviskey()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->bviskey(), target);
  }

  // required .com.tomting.orion.iCsqllcolumntype iVtype = 3 [default = STRING];
  if (has_ivtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->ivtype(), target);
  }

  // optional uint32 iVlength = 4;
  if (has_ivlength()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->ivlength(), target);
  }

  // optional uint32 iVleftposition = 5;
  if (has_ivleftposition()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->ivleftposition(), target);
  }

  // optional uint32 iVrightposition = 6;
  if (has_ivrightposition()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->ivrightposition(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.tomting.orion.PrtoScol)
  return target;
}

int PrtoScol::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes sVcolumn = 1;
    if (has_svcolumn()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->svcolumn());
    }

    // required bool bViskey = 2 [default = false];
    if (has_bviskey()) {
      total_size += 1 + 1;
    }

    // required .com.tomting.orion.iCsqllcolumntype iVtype = 3 [default = STRING];
    if (has_ivtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->ivtype());
    }

    // optional uint32 iVlength = 4;
    if (has_ivlength()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ivlength());
    }

    // optional uint32 iVleftposition = 5;
    if (has_ivleftposition()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ivleftposition());
    }

    // optional uint32 iVrightposition = 6;
    if (has_ivrightposition()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ivrightposition());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PrtoScol::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PrtoScol* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PrtoScol*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PrtoScol::MergeFrom(const PrtoScol& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_svcolumn()) {
      set_svcolumn(from.svcolumn());
    }
    if (from.has_bviskey()) {
      set_bviskey(from.bviskey());
    }
    if (from.has_ivtype()) {
      set_ivtype(from.ivtype());
    }
    if (from.has_ivlength()) {
      set_ivlength(from.ivlength());
    }
    if (from.has_ivleftposition()) {
      set_ivleftposition(from.ivleftposition());
    }
    if (from.has_ivrightposition()) {
      set_ivrightposition(from.ivrightposition());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PrtoScol::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PrtoScol::CopyFrom(const PrtoScol& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrtoScol::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void PrtoScol::Swap(PrtoScol* other) {
  if (other != this) {
    std::swap(svcolumn_, other->svcolumn_);
    std::swap(bviskey_, other->bviskey_);
    std::swap(ivtype_, other->ivtype_);
    std::swap(ivlength_, other->ivlength_);
    std::swap(ivleftposition_, other->ivleftposition_);
    std::swap(ivrightposition_, other->ivrightposition_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PrtoScol::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PrtoScol_descriptor_;
  metadata.reflection = PrtoScol_reflection_;
  return metadata;
}


// ===================================================================

::std::string* PrtoSctl::_default_svterminatedby_ = NULL;
::std::string* PrtoSctl::_default_svlistseparator_ = NULL;
#ifndef _MSC_VER
const int PrtoSctl::kSVnamespaceFieldNumber;
const int PrtoSctl::kSVtableFieldNumber;
const int PrtoSctl::kCVcolumnsFieldNumber;
const int PrtoSctl::kSVterminatedbyFieldNumber;
const int PrtoSctl::kIVlimitrowsFieldNumber;
const int PrtoSctl::kSVlistseparatorFieldNumber;
#endif  // !_MSC_VER

PrtoSctl::PrtoSctl()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.tomting.orion.PrtoSctl)
}

void PrtoSctl::InitAsDefaultInstance() {
}

PrtoSctl::PrtoSctl(const PrtoSctl& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:com.tomting.orion.PrtoSctl)
}

void PrtoSctl::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  svnamespace_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  svtable_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  svterminatedby_ = const_cast< ::std::string*>(_default_svterminatedby_);
  ivlimitrows_ = 0u;
  svlistseparator_ = const_cast< ::std::string*>(_default_svlistseparator_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PrtoSctl::~PrtoSctl() {
  // @@protoc_insertion_point(destructor:com.tomting.orion.PrtoSctl)
  SharedDtor();
}

void PrtoSctl::SharedDtor() {
  if (svnamespace_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete svnamespace_;
  }
  if (svtable_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete svtable_;
  }
  if (svterminatedby_ != _default_svterminatedby_) {
    delete svterminatedby_;
  }
  if (svlistseparator_ != _default_svlistseparator_) {
    delete svlistseparator_;
  }
  if (this != default_instance_) {
  }
}

void PrtoSctl::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PrtoSctl::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PrtoSctl_descriptor_;
}

const PrtoSctl& PrtoSctl::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PrtoSqll_2eproto();
  return *default_instance_;
}

PrtoSctl* PrtoSctl::default_instance_ = NULL;

PrtoSctl* PrtoSctl::New() const {
  return new PrtoSctl;
}

void PrtoSctl::Clear() {
  if (_has_bits_[0 / 32] & 59) {
    if (has_svnamespace()) {
      if (svnamespace_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        svnamespace_->clear();
      }
    }
    if (has_svtable()) {
      if (svtable_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        svtable_->clear();
      }
    }
    if (has_svterminatedby()) {
      if (svterminatedby_ != _default_svterminatedby_) {
        svterminatedby_->assign(*_default_svterminatedby_);
      }
    }
    ivlimitrows_ = 0u;
    if (has_svlistseparator()) {
      if (svlistseparator_ != _default_svlistseparator_) {
        svlistseparator_->assign(*_default_svlistseparator_);
      }
    }
  }
  cvcolumns_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PrtoSctl::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.tomting.orion.PrtoSctl)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes sVnamespace = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_svnamespace()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_sVtable;
        break;
      }

      // required bytes sVtable = 2;
      case 2: {
        if (tag == 18) {
         parse_sVtable:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_svtable()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_cVcolumns;
        break;
      }

      // repeated .com.tomting.orion.PrtoScol cVcolumns = 3;
      case 3: {
        if (tag == 26) {
         parse_cVcolumns:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_cvcolumns()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_cVcolumns;
        if (input->ExpectTag(34)) goto parse_sVterminatedby;
        break;
      }

      // optional bytes sVterminatedby = 4 [default = ";"];
      case 4: {
        if (tag == 34) {
         parse_sVterminatedby:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_svterminatedby()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_iVlimitrows;
        break;
      }

      // optional uint32 iVlimitrows = 5;
      case 5: {
        if (tag == 40) {
         parse_iVlimitrows:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ivlimitrows_)));
          set_has_ivlimitrows();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_sVlistseparator;
        break;
      }

      // optional bytes sVlistseparator = 6 [default = "|"];
      case 6: {
        if (tag == 50) {
         parse_sVlistseparator:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_svlistseparator()));
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
  // @@protoc_insertion_point(parse_success:com.tomting.orion.PrtoSctl)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.tomting.orion.PrtoSctl)
  return false;
#undef DO_
}

void PrtoSctl::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.tomting.orion.PrtoSctl)
  // required bytes sVnamespace = 1;
  if (has_svnamespace()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->svnamespace(), output);
  }

  // required bytes sVtable = 2;
  if (has_svtable()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->svtable(), output);
  }

  // repeated .com.tomting.orion.PrtoScol cVcolumns = 3;
  for (int i = 0; i < this->cvcolumns_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->cvcolumns(i), output);
  }

  // optional bytes sVterminatedby = 4 [default = ";"];
  if (has_svterminatedby()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->svterminatedby(), output);
  }

  // optional uint32 iVlimitrows = 5;
  if (has_ivlimitrows()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->ivlimitrows(), output);
  }

  // optional bytes sVlistseparator = 6 [default = "|"];
  if (has_svlistseparator()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->svlistseparator(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:com.tomting.orion.PrtoSctl)
}

::google::protobuf::uint8* PrtoSctl::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.tomting.orion.PrtoSctl)
  // required bytes sVnamespace = 1;
  if (has_svnamespace()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->svnamespace(), target);
  }

  // required bytes sVtable = 2;
  if (has_svtable()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->svtable(), target);
  }

  // repeated .com.tomting.orion.PrtoScol cVcolumns = 3;
  for (int i = 0; i < this->cvcolumns_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->cvcolumns(i), target);
  }

  // optional bytes sVterminatedby = 4 [default = ";"];
  if (has_svterminatedby()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->svterminatedby(), target);
  }

  // optional uint32 iVlimitrows = 5;
  if (has_ivlimitrows()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->ivlimitrows(), target);
  }

  // optional bytes sVlistseparator = 6 [default = "|"];
  if (has_svlistseparator()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->svlistseparator(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.tomting.orion.PrtoSctl)
  return target;
}

int PrtoSctl::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes sVnamespace = 1;
    if (has_svnamespace()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->svnamespace());
    }

    // required bytes sVtable = 2;
    if (has_svtable()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->svtable());
    }

    // optional bytes sVterminatedby = 4 [default = ";"];
    if (has_svterminatedby()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->svterminatedby());
    }

    // optional uint32 iVlimitrows = 5;
    if (has_ivlimitrows()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ivlimitrows());
    }

    // optional bytes sVlistseparator = 6 [default = "|"];
    if (has_svlistseparator()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->svlistseparator());
    }

  }
  // repeated .com.tomting.orion.PrtoScol cVcolumns = 3;
  total_size += 1 * this->cvcolumns_size();
  for (int i = 0; i < this->cvcolumns_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->cvcolumns(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PrtoSctl::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PrtoSctl* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PrtoSctl*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PrtoSctl::MergeFrom(const PrtoSctl& from) {
  GOOGLE_CHECK_NE(&from, this);
  cvcolumns_.MergeFrom(from.cvcolumns_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_svnamespace()) {
      set_svnamespace(from.svnamespace());
    }
    if (from.has_svtable()) {
      set_svtable(from.svtable());
    }
    if (from.has_svterminatedby()) {
      set_svterminatedby(from.svterminatedby());
    }
    if (from.has_ivlimitrows()) {
      set_ivlimitrows(from.ivlimitrows());
    }
    if (from.has_svlistseparator()) {
      set_svlistseparator(from.svlistseparator());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PrtoSctl::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PrtoSctl::CopyFrom(const PrtoSctl& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrtoSctl::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->cvcolumns())) return false;
  return true;
}

void PrtoSctl::Swap(PrtoSctl* other) {
  if (other != this) {
    std::swap(svnamespace_, other->svnamespace_);
    std::swap(svtable_, other->svtable_);
    cvcolumns_.Swap(&other->cvcolumns_);
    std::swap(svterminatedby_, other->svterminatedby_);
    std::swap(ivlimitrows_, other->ivlimitrows_);
    std::swap(svlistseparator_, other->svlistseparator_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PrtoSctl::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PrtoSctl_descriptor_;
  metadata.reflection = PrtoSctl_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace orion
}  // namespace tomting
}  // namespace com

// @@protoc_insertion_point(global_scope)
