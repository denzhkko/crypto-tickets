# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: result.proto

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
  name='result.proto',
  package='ru.mail.go.webbase',
  syntax='proto2',
  serialized_pb=_b('\n\x0cresult.proto\x12\x12ru.mail.go.webbase\"t\n\x0b\x42\x42\x43ontainer\x12\x38\n\x0cheaderValues\x18\x01 \x02(\x0b\x32\".ru.mail.go.webbase.ComputedValues\x12+\n\x05ranks\x18\x02 \x03(\x0b\x32\x1c.ru.mail.go.webbase.BBResult\"\x92\x01\n\x08\x42\x42Result\x12\x38\n\x0cheaderValues\x18\x01 \x02(\x0b\x32\".ru.mail.go.webbase.ComputedValues\x12\x35\n\turlValues\x18\x02 \x03(\x0b\x32\".ru.mail.go.webbase.ComputedValues\x12\x15\n\rnavigationUrl\x18\x03 \x01(\t\"\x9f\x01\n\x0e\x43omputedValues\x12\x0c\n\x04name\x18\x01 \x02(\t\x12>\n\x0b\x65ntryResult\x18\x02 \x03(\x0b\x32).ru.mail.go.webbase.ComputedValues.Record\x12\x19\n\nsite_entry\x18\x03 \x01(\x08:\x05\x66\x61lse\x1a$\n\x06Record\x12\x0b\n\x03key\x18\x01 \x02(\t\x12\r\n\x05value\x18\x02 \x02(\x02\x42\x0c\x42\nRankResult')
)




_BBCONTAINER = _descriptor.Descriptor(
  name='BBContainer',
  full_name='ru.mail.go.webbase.BBContainer',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='headerValues', full_name='ru.mail.go.webbase.BBContainer.headerValues', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ranks', full_name='ru.mail.go.webbase.BBContainer.ranks', index=1,
      number=2, type=11, cpp_type=10, label=3,
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
  serialized_start=36,
  serialized_end=152,
)


_BBRESULT = _descriptor.Descriptor(
  name='BBResult',
  full_name='ru.mail.go.webbase.BBResult',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='headerValues', full_name='ru.mail.go.webbase.BBResult.headerValues', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='urlValues', full_name='ru.mail.go.webbase.BBResult.urlValues', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='navigationUrl', full_name='ru.mail.go.webbase.BBResult.navigationUrl', index=2,
      number=3, type=9, cpp_type=9, label=1,
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
  serialized_start=155,
  serialized_end=301,
)


_COMPUTEDVALUES_RECORD = _descriptor.Descriptor(
  name='Record',
  full_name='ru.mail.go.webbase.ComputedValues.Record',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='ru.mail.go.webbase.ComputedValues.Record.key', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='ru.mail.go.webbase.ComputedValues.Record.value', index=1,
      number=2, type=2, cpp_type=6, label=2,
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
  serialized_start=427,
  serialized_end=463,
)

_COMPUTEDVALUES = _descriptor.Descriptor(
  name='ComputedValues',
  full_name='ru.mail.go.webbase.ComputedValues',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='ru.mail.go.webbase.ComputedValues.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='entryResult', full_name='ru.mail.go.webbase.ComputedValues.entryResult', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='site_entry', full_name='ru.mail.go.webbase.ComputedValues.site_entry', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_COMPUTEDVALUES_RECORD, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=304,
  serialized_end=463,
)

_BBCONTAINER.fields_by_name['headerValues'].message_type = _COMPUTEDVALUES
_BBCONTAINER.fields_by_name['ranks'].message_type = _BBRESULT
_BBRESULT.fields_by_name['headerValues'].message_type = _COMPUTEDVALUES
_BBRESULT.fields_by_name['urlValues'].message_type = _COMPUTEDVALUES
_COMPUTEDVALUES_RECORD.containing_type = _COMPUTEDVALUES
_COMPUTEDVALUES.fields_by_name['entryResult'].message_type = _COMPUTEDVALUES_RECORD
DESCRIPTOR.message_types_by_name['BBContainer'] = _BBCONTAINER
DESCRIPTOR.message_types_by_name['BBResult'] = _BBRESULT
DESCRIPTOR.message_types_by_name['ComputedValues'] = _COMPUTEDVALUES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

BBContainer = _reflection.GeneratedProtocolMessageType('BBContainer', (_message.Message,), dict(
  DESCRIPTOR = _BBCONTAINER,
  __module__ = 'result_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.BBContainer)
  ))
_sym_db.RegisterMessage(BBContainer)

BBResult = _reflection.GeneratedProtocolMessageType('BBResult', (_message.Message,), dict(
  DESCRIPTOR = _BBRESULT,
  __module__ = 'result_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.BBResult)
  ))
_sym_db.RegisterMessage(BBResult)

ComputedValues = _reflection.GeneratedProtocolMessageType('ComputedValues', (_message.Message,), dict(

  Record = _reflection.GeneratedProtocolMessageType('Record', (_message.Message,), dict(
    DESCRIPTOR = _COMPUTEDVALUES_RECORD,
    __module__ = 'result_pb2'
    # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.ComputedValues.Record)
    ))
  ,
  DESCRIPTOR = _COMPUTEDVALUES,
  __module__ = 'result_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.ComputedValues)
  ))
_sym_db.RegisterMessage(ComputedValues)
_sym_db.RegisterMessage(ComputedValues.Record)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\nRankResult'))
# @@protoc_insertion_point(module_scope)