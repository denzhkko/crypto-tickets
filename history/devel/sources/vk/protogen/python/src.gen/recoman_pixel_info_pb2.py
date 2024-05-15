# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: recoman_pixel_info.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='recoman_pixel_info.proto',
  package='recoman.pb',
  syntax='proto2',
  serialized_pb=_b('\n\x18recoman_pixel_info.proto\x12\nrecoman.pb\"2\n\x0fOpenRTBMetaInfo\x12\x10\n\x08position\x18\x01 \x01(\x05\x12\r\n\x05price\x18\x02 \x01(\x02\"\xbf\x01\n\rPixelMetaInfo\x12\x0c\n\x04\x64ocs\x18\x01 \x03(\x03\x12\x0f\n\x07sources\x18\x02 \x03(\x03\x12\x0e\n\x06gender\x18\x03 \x01(\x05\x12\x0b\n\x03\x61ge\x18\x04 \x01(\x05\x12\x15\n\ruser_clusters\x18\x05 \x03(\r\x12\x18\n\x10\x61\x64vert_positions\x18\x06 \x03(\x05\x12\x0b\n\x03geo\x18\x07 \x01(\x05\x12\x34\n\x0fopenrtb_adverts\x18\x08 \x03(\x0b\x32\x1b.recoman.pb.OpenRTBMetaInfoB\x14\x42\x12PixelMetaInfoProto')
)




_OPENRTBMETAINFO = _descriptor.Descriptor(
  name='OpenRTBMetaInfo',
  full_name='recoman.pb.OpenRTBMetaInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='position', full_name='recoman.pb.OpenRTBMetaInfo.position', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='price', full_name='recoman.pb.OpenRTBMetaInfo.price', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
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
  serialized_start=40,
  serialized_end=90,
)


_PIXELMETAINFO = _descriptor.Descriptor(
  name='PixelMetaInfo',
  full_name='recoman.pb.PixelMetaInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='docs', full_name='recoman.pb.PixelMetaInfo.docs', index=0,
      number=1, type=3, cpp_type=2, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sources', full_name='recoman.pb.PixelMetaInfo.sources', index=1,
      number=2, type=3, cpp_type=2, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gender', full_name='recoman.pb.PixelMetaInfo.gender', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='age', full_name='recoman.pb.PixelMetaInfo.age', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_clusters', full_name='recoman.pb.PixelMetaInfo.user_clusters', index=4,
      number=5, type=13, cpp_type=3, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='advert_positions', full_name='recoman.pb.PixelMetaInfo.advert_positions', index=5,
      number=6, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='geo', full_name='recoman.pb.PixelMetaInfo.geo', index=6,
      number=7, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='openrtb_adverts', full_name='recoman.pb.PixelMetaInfo.openrtb_adverts', index=7,
      number=8, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=93,
  serialized_end=284,
)

_PIXELMETAINFO.fields_by_name['openrtb_adverts'].message_type = _OPENRTBMETAINFO
DESCRIPTOR.message_types_by_name['OpenRTBMetaInfo'] = _OPENRTBMETAINFO
DESCRIPTOR.message_types_by_name['PixelMetaInfo'] = _PIXELMETAINFO
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

OpenRTBMetaInfo = _reflection.GeneratedProtocolMessageType('OpenRTBMetaInfo', (_message.Message,), dict(
  DESCRIPTOR = _OPENRTBMETAINFO,
  __module__ = 'recoman_pixel_info_pb2'
  # @@protoc_insertion_point(class_scope:recoman.pb.OpenRTBMetaInfo)
  ))
_sym_db.RegisterMessage(OpenRTBMetaInfo)

PixelMetaInfo = _reflection.GeneratedProtocolMessageType('PixelMetaInfo', (_message.Message,), dict(
  DESCRIPTOR = _PIXELMETAINFO,
  __module__ = 'recoman_pixel_info_pb2'
  # @@protoc_insertion_point(class_scope:recoman.pb.PixelMetaInfo)
  ))
_sym_db.RegisterMessage(PixelMetaInfo)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\022PixelMetaInfoProto'))
# @@protoc_insertion_point(module_scope)