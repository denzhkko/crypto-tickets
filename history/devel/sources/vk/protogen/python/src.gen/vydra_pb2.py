# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: vydra.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import silicon_data_pb2 as silicon__data__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='vydra.proto',
  package='ru.mail.go.vydra.data',
  syntax='proto2',
  serialized_pb=_b('\n\x0bvydra.proto\x12\x15ru.mail.go.vydra.data\x1a\x12silicon_data.proto\"\x8b\x01\n\x0eVydraSourceDoc\x12\x0b\n\x03url\x18\x01 \x02(\t\x12\x0c\n\x04html\x18\x02 \x02(\t\x12>\n\x04type\x18\x03 \x01(\x0e\x32*.ru.mail.go.vydra.data.VydraSourceDoc.Type:\x04HTML\"\x1e\n\x04Type\x12\x08\n\x04HTML\x10\x00\x12\x0c\n\x08\x41MP_HTML\x10\x01\",\n\x0fVydraResultInfo\x12\x19\n\x11layer_words_count\x18\x01 \x01(\x05\"\xc5\x01\n\x0eVydraResultDoc\x12\x38\n\x06status\x18\x01 \x02(\x0e\x32(.ru.mail.go.vydra.data.VydraResultStatus\x12\x43\n\x0bsiliconData\x18\x02 \x01(\x0b\x32..ru.mail.go.webbase.blobs.SiliconDocParserInfo\x12\x34\n\x04info\x18\x03 \x01(\x0b\x32&.ru.mail.go.vydra.data.VydraResultInfo*\x95\x01\n\x11VydraResultStatus\x12\x06\n\x02OK\x10\x00\x12\x08\n\x04\x46\x41IL\x10\x01\x12\r\n\tNO_PARSER\x10\x02\x12\x11\n\rINVALID_INPUT\x10\x03\x12\x12\n\x0eINPUT_TOO_LONG\x10\x04\x12\x16\n\x12INVALID_SOURCE_URL\x10\x05\x12\x0e\n\nBANNED_URL\x10\x06\x12\x10\n\x0c\x42\x41\x44_DOC_TYPE\x10\x07\x42\rB\tVydraDataH\x01')
  ,
  dependencies=[silicon__data__pb2.DESCRIPTOR,])

_VYDRARESULTSTATUS = _descriptor.EnumDescriptor(
  name='VydraResultStatus',
  full_name='ru.mail.go.vydra.data.VydraResultStatus',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OK', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FAIL', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='NO_PARSER', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INVALID_INPUT', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INPUT_TOO_LONG', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INVALID_SOURCE_URL', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BANNED_URL', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BAD_DOC_TYPE', index=7, number=7,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=447,
  serialized_end=596,
)
_sym_db.RegisterEnumDescriptor(_VYDRARESULTSTATUS)

VydraResultStatus = enum_type_wrapper.EnumTypeWrapper(_VYDRARESULTSTATUS)
OK = 0
FAIL = 1
NO_PARSER = 2
INVALID_INPUT = 3
INPUT_TOO_LONG = 4
INVALID_SOURCE_URL = 5
BANNED_URL = 6
BAD_DOC_TYPE = 7


_VYDRASOURCEDOC_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='ru.mail.go.vydra.data.VydraSourceDoc.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='HTML', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='AMP_HTML', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=168,
  serialized_end=198,
)
_sym_db.RegisterEnumDescriptor(_VYDRASOURCEDOC_TYPE)


_VYDRASOURCEDOC = _descriptor.Descriptor(
  name='VydraSourceDoc',
  full_name='ru.mail.go.vydra.data.VydraSourceDoc',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='url', full_name='ru.mail.go.vydra.data.VydraSourceDoc.url', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='html', full_name='ru.mail.go.vydra.data.VydraSourceDoc.html', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='ru.mail.go.vydra.data.VydraSourceDoc.type', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _VYDRASOURCEDOC_TYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=59,
  serialized_end=198,
)


_VYDRARESULTINFO = _descriptor.Descriptor(
  name='VydraResultInfo',
  full_name='ru.mail.go.vydra.data.VydraResultInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='layer_words_count', full_name='ru.mail.go.vydra.data.VydraResultInfo.layer_words_count', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=200,
  serialized_end=244,
)


_VYDRARESULTDOC = _descriptor.Descriptor(
  name='VydraResultDoc',
  full_name='ru.mail.go.vydra.data.VydraResultDoc',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='ru.mail.go.vydra.data.VydraResultDoc.status', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='siliconData', full_name='ru.mail.go.vydra.data.VydraResultDoc.siliconData', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='info', full_name='ru.mail.go.vydra.data.VydraResultDoc.info', index=2,
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
  serialized_start=247,
  serialized_end=444,
)

_VYDRASOURCEDOC.fields_by_name['type'].enum_type = _VYDRASOURCEDOC_TYPE
_VYDRASOURCEDOC_TYPE.containing_type = _VYDRASOURCEDOC
_VYDRARESULTDOC.fields_by_name['status'].enum_type = _VYDRARESULTSTATUS
_VYDRARESULTDOC.fields_by_name['siliconData'].message_type = silicon__data__pb2._SILICONDOCPARSERINFO
_VYDRARESULTDOC.fields_by_name['info'].message_type = _VYDRARESULTINFO
DESCRIPTOR.message_types_by_name['VydraSourceDoc'] = _VYDRASOURCEDOC
DESCRIPTOR.message_types_by_name['VydraResultInfo'] = _VYDRARESULTINFO
DESCRIPTOR.message_types_by_name['VydraResultDoc'] = _VYDRARESULTDOC
DESCRIPTOR.enum_types_by_name['VydraResultStatus'] = _VYDRARESULTSTATUS
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

VydraSourceDoc = _reflection.GeneratedProtocolMessageType('VydraSourceDoc', (_message.Message,), dict(
  DESCRIPTOR = _VYDRASOURCEDOC,
  __module__ = 'vydra_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.vydra.data.VydraSourceDoc)
  ))
_sym_db.RegisterMessage(VydraSourceDoc)

VydraResultInfo = _reflection.GeneratedProtocolMessageType('VydraResultInfo', (_message.Message,), dict(
  DESCRIPTOR = _VYDRARESULTINFO,
  __module__ = 'vydra_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.vydra.data.VydraResultInfo)
  ))
_sym_db.RegisterMessage(VydraResultInfo)

VydraResultDoc = _reflection.GeneratedProtocolMessageType('VydraResultDoc', (_message.Message,), dict(
  DESCRIPTOR = _VYDRARESULTDOC,
  __module__ = 'vydra_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.vydra.data.VydraResultDoc)
  ))
_sym_db.RegisterMessage(VydraResultDoc)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\tVydraDataH\001'))
# @@protoc_insertion_point(module_scope)