# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: fact_extractor.proto

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
  name='fact_extractor.proto',
  package='fact_extractor.pb',
  syntax='proto2',
  serialized_pb=_b('\n\x14\x66\x61\x63t_extractor.proto\x12\x11\x66\x61\x63t_extractor.pb\"S\n\x07Request\x12\x11\n\tdocuments\x18\x01 \x03(\t\x12\x1d\n\x15plain_index_documents\x18\x02 \x03(\x0c\x12\x16\n\x0e\x64ocuments_urls\x18\x03 \x03(\t\"\x9f\x01\n\x0eResultSentence\x12\r\n\x05score\x18\x01 \x01(\x02\x12\x10\n\x08sentence\x18\x02 \x01(\t\x12@\n\nconfidence\x18\x03 \x01(\x0e\x32,.fact_extractor.pb.ResultSentence.Confidence\"*\n\nConfidence\x12\t\n\x05TRASH\x10\x14\x12\x07\n\x03LOW\x10(\x12\x08\n\x04HIGH\x10<\"d\n\x08Response\x12\x11\n\tdoc_index\x18\x01 \x01(\x05\x12\x34\n\tsentences\x18\x02 \x03(\x0b\x32!.fact_extractor.pb.ResultSentence\x12\x0f\n\x07q_score\x18\x03 \x01(\x02\x42\x0f\x42\rFactExtractor')
)



_RESULTSENTENCE_CONFIDENCE = _descriptor.EnumDescriptor(
  name='Confidence',
  full_name='fact_extractor.pb.ResultSentence.Confidence',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TRASH', index=0, number=20,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='LOW', index=1, number=40,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HIGH', index=2, number=60,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=246,
  serialized_end=288,
)
_sym_db.RegisterEnumDescriptor(_RESULTSENTENCE_CONFIDENCE)


_REQUEST = _descriptor.Descriptor(
  name='Request',
  full_name='fact_extractor.pb.Request',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='documents', full_name='fact_extractor.pb.Request.documents', index=0,
      number=1, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='plain_index_documents', full_name='fact_extractor.pb.Request.plain_index_documents', index=1,
      number=2, type=12, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='documents_urls', full_name='fact_extractor.pb.Request.documents_urls', index=2,
      number=3, type=9, cpp_type=9, label=3,
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
  serialized_start=43,
  serialized_end=126,
)


_RESULTSENTENCE = _descriptor.Descriptor(
  name='ResultSentence',
  full_name='fact_extractor.pb.ResultSentence',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='score', full_name='fact_extractor.pb.ResultSentence.score', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sentence', full_name='fact_extractor.pb.ResultSentence.sentence', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='confidence', full_name='fact_extractor.pb.ResultSentence.confidence', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=20,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _RESULTSENTENCE_CONFIDENCE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=129,
  serialized_end=288,
)


_RESPONSE = _descriptor.Descriptor(
  name='Response',
  full_name='fact_extractor.pb.Response',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='doc_index', full_name='fact_extractor.pb.Response.doc_index', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sentences', full_name='fact_extractor.pb.Response.sentences', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='q_score', full_name='fact_extractor.pb.Response.q_score', index=2,
      number=3, type=2, cpp_type=6, label=1,
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
  serialized_start=290,
  serialized_end=390,
)

_RESULTSENTENCE.fields_by_name['confidence'].enum_type = _RESULTSENTENCE_CONFIDENCE
_RESULTSENTENCE_CONFIDENCE.containing_type = _RESULTSENTENCE
_RESPONSE.fields_by_name['sentences'].message_type = _RESULTSENTENCE
DESCRIPTOR.message_types_by_name['Request'] = _REQUEST
DESCRIPTOR.message_types_by_name['ResultSentence'] = _RESULTSENTENCE
DESCRIPTOR.message_types_by_name['Response'] = _RESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Request = _reflection.GeneratedProtocolMessageType('Request', (_message.Message,), dict(
  DESCRIPTOR = _REQUEST,
  __module__ = 'fact_extractor_pb2'
  # @@protoc_insertion_point(class_scope:fact_extractor.pb.Request)
  ))
_sym_db.RegisterMessage(Request)

ResultSentence = _reflection.GeneratedProtocolMessageType('ResultSentence', (_message.Message,), dict(
  DESCRIPTOR = _RESULTSENTENCE,
  __module__ = 'fact_extractor_pb2'
  # @@protoc_insertion_point(class_scope:fact_extractor.pb.ResultSentence)
  ))
_sym_db.RegisterMessage(ResultSentence)

Response = _reflection.GeneratedProtocolMessageType('Response', (_message.Message,), dict(
  DESCRIPTOR = _RESPONSE,
  __module__ = 'fact_extractor_pb2'
  # @@protoc_insertion_point(class_scope:fact_extractor.pb.Response)
  ))
_sym_db.RegisterMessage(Response)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\rFactExtractor'))
# @@protoc_insertion_point(module_scope)