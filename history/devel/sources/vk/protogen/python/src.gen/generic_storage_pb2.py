# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: generic_storage.proto

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
  name='generic_storage.proto',
  package='gogo.storage',
  syntax='proto2',
  serialized_pb=_b('\n\x15generic_storage.proto\x12\x0cgogo.storage\"!\n\x0f\x64ocument_length\x12\x0e\n\x06length\x18\x01 \x02(\x07\x42\x10\x42\x0eGenericStorage')
)




_DOCUMENT_LENGTH = _descriptor.Descriptor(
  name='document_length',
  full_name='gogo.storage.document_length',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='length', full_name='gogo.storage.document_length.length', index=0,
      number=1, type=7, cpp_type=3, label=2,
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
  serialized_start=39,
  serialized_end=72,
)

DESCRIPTOR.message_types_by_name['document_length'] = _DOCUMENT_LENGTH
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

document_length = _reflection.GeneratedProtocolMessageType('document_length', (_message.Message,), dict(
  DESCRIPTOR = _DOCUMENT_LENGTH,
  __module__ = 'generic_storage_pb2'
  # @@protoc_insertion_point(class_scope:gogo.storage.document_length)
  ))
_sym_db.RegisterMessage(document_length)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\016GenericStorage'))
# @@protoc_insertion_point(module_scope)
