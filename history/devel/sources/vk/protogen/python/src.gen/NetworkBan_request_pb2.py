# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: NetworkBan_request.proto

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
  name='NetworkBan_request.proto',
  package='',
  syntax='proto2',
  serialized_pb=_b('\n\x18NetworkBan_request.proto\"R\n\x08metaData\x12\x0c\n\x04info\x18\x01 \x03(\t\x12\x1c\n\tlist_type\x18\x02 \x03(\x0e\x32\t.ListType\x12\x1a\n\x0bis_root_ban\x18\x03 \x01(\x08:\x05\x66\x61lse\"\x18\n\ttags_cont\x12\x0b\n\x03tag\x18\x01 \x03(\t\"\xc1\x01\n\x12NetworkBan_request\x12\x1c\n\rneed_metadata\x18\x01 \x01(\x08:\x05\x66\x61lse\x12!\n\tlist_type\x18\x02 \x01(\x0e\x32\t.ListType:\x03\x41LL\x12\x0c\n\x04urls\x18\x03 \x03(\t\x12\r\n\x05query\x18\x04 \x01(\t\x12\x18\n\x04tags\x18\x05 \x03(\x0b\x32\n.tags_cont\x12\x1c\n\x0eneed_normalize\x18\x06 \x01(\x08:\x04true\x12\x15\n\x0b\x63lient_name\x18\x07 \x01(\t:\x00\"v\n\x11NetworkBan_answer\x12\x1e\n\tans_codes\x18\x01 \x03(\x0e\x32\x0b.AnswerCode\x12\x1c\n\tmata_data\x18\x02 \x03(\x0b\x32\t.metaData\x12\x12\n\nstate_hash\x18\x03 \x02(\x03\x12\x0f\n\x07\x62\x61n_all\x18\x04 \x01(\x08*C\n\x08ListType\x12\x07\n\x03\x41LL\x10\x00\x12\x0e\n\nBAN404_SVN\x10\x01\x12\x08\n\x04STUB\x10\x02\x12\x07\n\x03GSB\x10\x03\x12\x0b\n\x07UNKNOWN\x10\x04*4\n\nAnswerCode\x12\t\n\x05\x46OUND\x10\x00\x12\t\n\x05\x43LEAR\x10\x01\x12\x10\n\x0cWAIT_RESOLVE\x10\x03')
)

_LISTTYPE = _descriptor.EnumDescriptor(
  name='ListType',
  full_name='ListType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='ALL', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BAN404_SVN', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STUB', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='GSB', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=4, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=454,
  serialized_end=521,
)
_sym_db.RegisterEnumDescriptor(_LISTTYPE)

ListType = enum_type_wrapper.EnumTypeWrapper(_LISTTYPE)
_ANSWERCODE = _descriptor.EnumDescriptor(
  name='AnswerCode',
  full_name='AnswerCode',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='FOUND', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CLEAR', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='WAIT_RESOLVE', index=2, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=523,
  serialized_end=575,
)
_sym_db.RegisterEnumDescriptor(_ANSWERCODE)

AnswerCode = enum_type_wrapper.EnumTypeWrapper(_ANSWERCODE)
ALL = 0
BAN404_SVN = 1
STUB = 2
GSB = 3
UNKNOWN = 4
FOUND = 0
CLEAR = 1
WAIT_RESOLVE = 3



_METADATA = _descriptor.Descriptor(
  name='metaData',
  full_name='metaData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='info', full_name='metaData.info', index=0,
      number=1, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='list_type', full_name='metaData.list_type', index=1,
      number=2, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_root_ban', full_name='metaData.is_root_ban', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
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
  serialized_start=28,
  serialized_end=110,
)


_TAGS_CONT = _descriptor.Descriptor(
  name='tags_cont',
  full_name='tags_cont',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='tag', full_name='tags_cont.tag', index=0,
      number=1, type=9, cpp_type=9, label=3,
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
  serialized_start=112,
  serialized_end=136,
)


_NETWORKBAN_REQUEST = _descriptor.Descriptor(
  name='NetworkBan_request',
  full_name='NetworkBan_request',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='need_metadata', full_name='NetworkBan_request.need_metadata', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='list_type', full_name='NetworkBan_request.list_type', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='urls', full_name='NetworkBan_request.urls', index=2,
      number=3, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='query', full_name='NetworkBan_request.query', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tags', full_name='NetworkBan_request.tags', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='need_normalize', full_name='NetworkBan_request.need_normalize', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=True,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='client_name', full_name='NetworkBan_request.client_name', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=True, default_value=_b("").decode('utf-8'),
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
  serialized_start=139,
  serialized_end=332,
)


_NETWORKBAN_ANSWER = _descriptor.Descriptor(
  name='NetworkBan_answer',
  full_name='NetworkBan_answer',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ans_codes', full_name='NetworkBan_answer.ans_codes', index=0,
      number=1, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mata_data', full_name='NetworkBan_answer.mata_data', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='state_hash', full_name='NetworkBan_answer.state_hash', index=2,
      number=3, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ban_all', full_name='NetworkBan_answer.ban_all', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=334,
  serialized_end=452,
)

_METADATA.fields_by_name['list_type'].enum_type = _LISTTYPE
_NETWORKBAN_REQUEST.fields_by_name['list_type'].enum_type = _LISTTYPE
_NETWORKBAN_REQUEST.fields_by_name['tags'].message_type = _TAGS_CONT
_NETWORKBAN_ANSWER.fields_by_name['ans_codes'].enum_type = _ANSWERCODE
_NETWORKBAN_ANSWER.fields_by_name['mata_data'].message_type = _METADATA
DESCRIPTOR.message_types_by_name['metaData'] = _METADATA
DESCRIPTOR.message_types_by_name['tags_cont'] = _TAGS_CONT
DESCRIPTOR.message_types_by_name['NetworkBan_request'] = _NETWORKBAN_REQUEST
DESCRIPTOR.message_types_by_name['NetworkBan_answer'] = _NETWORKBAN_ANSWER
DESCRIPTOR.enum_types_by_name['ListType'] = _LISTTYPE
DESCRIPTOR.enum_types_by_name['AnswerCode'] = _ANSWERCODE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

metaData = _reflection.GeneratedProtocolMessageType('metaData', (_message.Message,), dict(
  DESCRIPTOR = _METADATA,
  __module__ = 'NetworkBan_request_pb2'
  # @@protoc_insertion_point(class_scope:metaData)
  ))
_sym_db.RegisterMessage(metaData)

tags_cont = _reflection.GeneratedProtocolMessageType('tags_cont', (_message.Message,), dict(
  DESCRIPTOR = _TAGS_CONT,
  __module__ = 'NetworkBan_request_pb2'
  # @@protoc_insertion_point(class_scope:tags_cont)
  ))
_sym_db.RegisterMessage(tags_cont)

NetworkBan_request = _reflection.GeneratedProtocolMessageType('NetworkBan_request', (_message.Message,), dict(
  DESCRIPTOR = _NETWORKBAN_REQUEST,
  __module__ = 'NetworkBan_request_pb2'
  # @@protoc_insertion_point(class_scope:NetworkBan_request)
  ))
_sym_db.RegisterMessage(NetworkBan_request)

NetworkBan_answer = _reflection.GeneratedProtocolMessageType('NetworkBan_answer', (_message.Message,), dict(
  DESCRIPTOR = _NETWORKBAN_ANSWER,
  __module__ = 'NetworkBan_request_pb2'
  # @@protoc_insertion_point(class_scope:NetworkBan_answer)
  ))
_sym_db.RegisterMessage(NetworkBan_answer)


# @@protoc_insertion_point(module_scope)
