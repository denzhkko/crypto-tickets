# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: howtos.proto

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
  name='howtos.proto',
  package='ru.mail.go.webbase.howtos',
  syntax='proto2',
  serialized_pb=_b('\n\x0chowtos.proto\x12\x19ru.mail.go.webbase.howtos\"Q\n\x06Howtos\x12\x12\n\nquery_text\x18\x01 \x01(\t\x12\x12\n\ntitle_site\x18\x02 \x01(\t\x12\x0f\n\x07\x64oc_url\x18\x03 \x01(\t\x12\x0e\n\x06\x61nswer\x18\x04 \x01(\tB\x0c\x42\nHowtosData')
)




_HOWTOS = _descriptor.Descriptor(
  name='Howtos',
  full_name='ru.mail.go.webbase.howtos.Howtos',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='query_text', full_name='ru.mail.go.webbase.howtos.Howtos.query_text', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='title_site', full_name='ru.mail.go.webbase.howtos.Howtos.title_site', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='doc_url', full_name='ru.mail.go.webbase.howtos.Howtos.doc_url', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='answer', full_name='ru.mail.go.webbase.howtos.Howtos.answer', index=3,
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
  serialized_start=43,
  serialized_end=124,
)

DESCRIPTOR.message_types_by_name['Howtos'] = _HOWTOS
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Howtos = _reflection.GeneratedProtocolMessageType('Howtos', (_message.Message,), dict(
  DESCRIPTOR = _HOWTOS,
  __module__ = 'howtos_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.howtos.Howtos)
  ))
_sym_db.RegisterMessage(Howtos)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\nHowtosData'))
# @@protoc_insertion_point(module_scope)