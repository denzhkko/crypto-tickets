# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: recostream_merge.proto

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
import cosmo_pb2 as cosmo__pb2
import recostream_pixel_info_pb2 as recostream__pixel__info__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='recostream_merge.proto',
  package='recostream.pb',
  syntax='proto2',
  serialized_pb=_b('\n\x16recostream_merge.proto\x12\rrecostream.pb\x1a\x12\x63osmo_result.proto\x1a\x0b\x63osmo.proto\x1a\x1brecostream_pixel_info.proto\"B\n\x05Pixel\x12\t\n\x01p\x18\x01 \x02(\t\x12\n\n\x02ts\x18\x02 \x01(\x04\x12\r\n\x05split\x18\x03 \x01(\x05\x12\x13\n\x0b\x62lock_label\x18\x04 \x01(\t\"\xcc\x01\n\x08\x44ocument\x12\x0e\n\x06\x64oc_id\x18\x01 \x02(\x04\x12(\n\x08\x66\x65\x61tures\x18\x02 \x01(\x0b\x32\x16.cosmo.pb.FeaturesDump\x12\x11\n\tsource_id\x18\x03 \x01(\x04\x12\x0b\n\x03url\x18\x04 \x01(\t\x12\x0c\n\x04type\x18\x05 \x01(\t\x12\x32\n\tmeta_info\x18\x06 \x01(\x0b\x32\x1f.recostream.pb.DocumentMetaInfo\x12$\n\x06pixels\x18\x07 \x03(\x0b\x32\x14.recostream.pb.Pixel\"\x8b\x02\n\x0fRecoSessionDump\x12\x17\n\x0freco_session_id\x18\x01 \x02(\t\x12\x11\n\tstream_id\x18\x02 \x01(\t\x12\x0b\n\x03geo\x18\x03 \x01(\r\x12\x0e\n\x06\x61pp_id\x18\x04 \x01(\x04\x12\x0b\n\x03\x61ge\x18\x05 \x01(\r\x12\x0e\n\x06gender\x18\x06 \x01(\t\x12\x0b\n\x03vid\x18\x07 \x01(\t\x12\r\n\x05vk_id\x18\x08 \x01(\t\x12\r\n\x05ok_id\x18\t \x01(\t\x12\r\n\x05\x65mail\x18\n \x01(\t\x12,\n\tuser_data\x18\x0b \x01(\x0b\x32\x19.cosmo.pb.GroupedUserData\x12*\n\tdocuments\x18\x0c \x03(\x0b\x32\x17.recostream.pb.DocumentB\x14\x42\x12RecostreamDumpInfo')
  ,
  dependencies=[cosmo__result__pb2.DESCRIPTOR,cosmo__pb2.DESCRIPTOR,recostream__pixel__info__pb2.DESCRIPTOR,])




_PIXEL = _descriptor.Descriptor(
  name='Pixel',
  full_name='recostream.pb.Pixel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='p', full_name='recostream.pb.Pixel.p', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ts', full_name='recostream.pb.Pixel.ts', index=1,
      number=2, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='split', full_name='recostream.pb.Pixel.split', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='block_label', full_name='recostream.pb.Pixel.block_label', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=103,
  serialized_end=169,
)


_DOCUMENT = _descriptor.Descriptor(
  name='Document',
  full_name='recostream.pb.Document',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='doc_id', full_name='recostream.pb.Document.doc_id', index=0,
      number=1, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='features', full_name='recostream.pb.Document.features', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='source_id', full_name='recostream.pb.Document.source_id', index=2,
      number=3, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='url', full_name='recostream.pb.Document.url', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='recostream.pb.Document.type', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='meta_info', full_name='recostream.pb.Document.meta_info', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pixels', full_name='recostream.pb.Document.pixels', index=6,
      number=7, type=11, cpp_type=10, label=3,
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
  serialized_start=172,
  serialized_end=376,
)


_RECOSESSIONDUMP = _descriptor.Descriptor(
  name='RecoSessionDump',
  full_name='recostream.pb.RecoSessionDump',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='reco_session_id', full_name='recostream.pb.RecoSessionDump.reco_session_id', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='stream_id', full_name='recostream.pb.RecoSessionDump.stream_id', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='geo', full_name='recostream.pb.RecoSessionDump.geo', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='app_id', full_name='recostream.pb.RecoSessionDump.app_id', index=3,
      number=4, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='age', full_name='recostream.pb.RecoSessionDump.age', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gender', full_name='recostream.pb.RecoSessionDump.gender', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vid', full_name='recostream.pb.RecoSessionDump.vid', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vk_id', full_name='recostream.pb.RecoSessionDump.vk_id', index=7,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ok_id', full_name='recostream.pb.RecoSessionDump.ok_id', index=8,
      number=9, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='email', full_name='recostream.pb.RecoSessionDump.email', index=9,
      number=10, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_data', full_name='recostream.pb.RecoSessionDump.user_data', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='documents', full_name='recostream.pb.RecoSessionDump.documents', index=11,
      number=12, type=11, cpp_type=10, label=3,
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
  serialized_start=379,
  serialized_end=646,
)

_DOCUMENT.fields_by_name['features'].message_type = cosmo__result__pb2._FEATURESDUMP
_DOCUMENT.fields_by_name['meta_info'].message_type = recostream__pixel__info__pb2._DOCUMENTMETAINFO
_DOCUMENT.fields_by_name['pixels'].message_type = _PIXEL
_RECOSESSIONDUMP.fields_by_name['user_data'].message_type = cosmo__pb2._GROUPEDUSERDATA
_RECOSESSIONDUMP.fields_by_name['documents'].message_type = _DOCUMENT
DESCRIPTOR.message_types_by_name['Pixel'] = _PIXEL
DESCRIPTOR.message_types_by_name['Document'] = _DOCUMENT
DESCRIPTOR.message_types_by_name['RecoSessionDump'] = _RECOSESSIONDUMP
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Pixel = _reflection.GeneratedProtocolMessageType('Pixel', (_message.Message,), dict(
  DESCRIPTOR = _PIXEL,
  __module__ = 'recostream_merge_pb2'
  # @@protoc_insertion_point(class_scope:recostream.pb.Pixel)
  ))
_sym_db.RegisterMessage(Pixel)

Document = _reflection.GeneratedProtocolMessageType('Document', (_message.Message,), dict(
  DESCRIPTOR = _DOCUMENT,
  __module__ = 'recostream_merge_pb2'
  # @@protoc_insertion_point(class_scope:recostream.pb.Document)
  ))
_sym_db.RegisterMessage(Document)

RecoSessionDump = _reflection.GeneratedProtocolMessageType('RecoSessionDump', (_message.Message,), dict(
  DESCRIPTOR = _RECOSESSIONDUMP,
  __module__ = 'recostream_merge_pb2'
  # @@protoc_insertion_point(class_scope:recostream.pb.RecoSessionDump)
  ))
_sym_db.RegisterMessage(RecoSessionDump)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\022RecostreamDumpInfo'))
# @@protoc_insertion_point(module_scope)