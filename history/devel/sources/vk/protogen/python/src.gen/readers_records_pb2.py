# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: readers_records.proto

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




DESCRIPTOR = _descriptor.FileDescriptor(
  name='readers_records.proto',
  package='ru.mail.go.webbase.readers',
  syntax='proto2',
  serialized_pb=_b('\n\x15readers_records.proto\x12\x1aru.mail.go.webbase.readers\"\xf5\x01\n\x0fLogmanLogRecord\x12\x13\n\x0bremote_addr\x18\x01 \x02(\t\x12\x0e\n\x06unixts\x18\x02 \x02(\x07\x12>\n\x0erequest_method\x18\x03 \x02(\x0e\x32&.ru.mail.go.webbase.readers.HTTPMethod\x12\x14\n\x0crequest_path\x18\x04 \x02(\t\x12\x14\n\x0cquery_string\x18\x05 \x01(\t\x12\x15\n\rhttp_referrer\x18\x06 \x01(\t\x12\x12\n\nuser_agent\x18\x07 \x01(\t\x12\x0f\n\x07\x63ookies\x18\x08 \x01(\t\x12\x15\n\rresponse_code\x18\t \x01(\r*n\n\nHTTPMethod\x12\x07\n\x03GET\x10\x00\x12\x08\n\x04POST\x10\x01\x12\x08\n\x04HEAD\x10\x02\x12\x07\n\x03PUT\x10\x03\x12\n\n\x06\x44\x45LETE\x10\x04\x12\t\n\x05TRACE\x10\x05\x12\x0b\n\x07OPTIONS\x10\x06\x12\x0b\n\x07\x43ONNECT\x10\x07\x12\t\n\x05PATCH\x10\x08\x42\x0c\x42\nLogRecords')
)

_HTTPMETHOD = _descriptor.EnumDescriptor(
  name='HTTPMethod',
  full_name='ru.mail.go.webbase.readers.HTTPMethod',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='GET', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='POST', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEAD', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PUT', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DELETE', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TRACE', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='OPTIONS', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CONNECT', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PATCH', index=8, number=8,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=301,
  serialized_end=411,
)
_sym_db.RegisterEnumDescriptor(_HTTPMETHOD)

HTTPMethod = enum_type_wrapper.EnumTypeWrapper(_HTTPMETHOD)
GET = 0
POST = 1
HEAD = 2
PUT = 3
DELETE = 4
TRACE = 5
OPTIONS = 6
CONNECT = 7
PATCH = 8



_LOGMANLOGRECORD = _descriptor.Descriptor(
  name='LogmanLogRecord',
  full_name='ru.mail.go.webbase.readers.LogmanLogRecord',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='remote_addr', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.remote_addr', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='unixts', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.unixts', index=1,
      number=2, type=7, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='request_method', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.request_method', index=2,
      number=3, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='request_path', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.request_path', index=3,
      number=4, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='query_string', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.query_string', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='http_referrer', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.http_referrer', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_agent', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.user_agent', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cookies', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.cookies', index=7,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='response_code', full_name='ru.mail.go.webbase.readers.LogmanLogRecord.response_code', index=8,
      number=9, type=13, cpp_type=3, label=1,
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
  serialized_start=54,
  serialized_end=299,
)

_LOGMANLOGRECORD.fields_by_name['request_method'].enum_type = _HTTPMETHOD
DESCRIPTOR.message_types_by_name['LogmanLogRecord'] = _LOGMANLOGRECORD
DESCRIPTOR.enum_types_by_name['HTTPMethod'] = _HTTPMETHOD
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

LogmanLogRecord = _reflection.GeneratedProtocolMessageType('LogmanLogRecord', (_message.Message,), dict(
  DESCRIPTOR = _LOGMANLOGRECORD,
  __module__ = 'readers_records_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.readers.LogmanLogRecord)
  ))
_sym_db.RegisterMessage(LogmanLogRecord)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\nLogRecords'))
# @@protoc_insertion_point(module_scope)