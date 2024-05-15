# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: stepan_pixel_info.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import cosmo_result_pb2 as cosmo__result__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='stepan_pixel_info.proto',
  package='cosmo.pb',
  syntax='proto2',
  serialized_pb=_b('\n\x17stepan_pixel_info.proto\x12\x08\x63osmo.pb\x1a\x12\x63osmo_result.proto\"\x9f\x01\n\x13StepanPixelMetaInfo\x12\"\n\x07metrics\x18\x01 \x01(\x0b\x32\x11.cosmo.pb.Metrics\x12-\n\rdocument_info\x18\x02 \x01(\x0b\x32\x16.cosmo.pb.DocumentInfo\x12\x35\n\x11interleaving_info\x18\x03 \x01(\x0b\x32\x1a.cosmo.pb.InterleavingInfoB\x1a\x42\x18StepanPixelMetaInfoProto')
  ,
  dependencies=[cosmo__result__pb2.DESCRIPTOR,])




_STEPANPIXELMETAINFO = _descriptor.Descriptor(
  name='StepanPixelMetaInfo',
  full_name='cosmo.pb.StepanPixelMetaInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='metrics', full_name='cosmo.pb.StepanPixelMetaInfo.metrics', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='document_info', full_name='cosmo.pb.StepanPixelMetaInfo.document_info', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='interleaving_info', full_name='cosmo.pb.StepanPixelMetaInfo.interleaving_info', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=58,
  serialized_end=217,
)

_STEPANPIXELMETAINFO.fields_by_name['metrics'].message_type = cosmo__result__pb2._METRICS
_STEPANPIXELMETAINFO.fields_by_name['document_info'].message_type = cosmo__result__pb2._DOCUMENTINFO
_STEPANPIXELMETAINFO.fields_by_name['interleaving_info'].message_type = cosmo__result__pb2._INTERLEAVINGINFO
DESCRIPTOR.message_types_by_name['StepanPixelMetaInfo'] = _STEPANPIXELMETAINFO
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

StepanPixelMetaInfo = _reflection.GeneratedProtocolMessageType('StepanPixelMetaInfo', (_message.Message,), dict(
  DESCRIPTOR = _STEPANPIXELMETAINFO,
  __module__ = 'stepan_pixel_info_pb2'
  # @@protoc_insertion_point(class_scope:cosmo.pb.StepanPixelMetaInfo)
  ))
_sym_db.RegisterMessage(StepanPixelMetaInfo)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\030StepanPixelMetaInfoProto'))
# @@protoc_insertion_point(module_scope)