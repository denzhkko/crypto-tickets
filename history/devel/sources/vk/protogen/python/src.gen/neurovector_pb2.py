# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: neurovector.proto

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
  name='neurovector.proto',
  package='neurovector.pb',
  syntax='proto2',
  serialized_pb=_b('\n\x11neurovector.proto\x12\x0eneurovector.pb\"\x1c\n\x0cStringsValue\x12\x0c\n\x04strs\x18\x01 \x03(\t\"\xf9\x01\n\x0bTensorValue\x12.\n\x04type\x18\x01 \x01(\x0e\x32 .neurovector.pb.TensorValue.Type\x12\r\n\x05shape\x18\x02 \x03(\x05\x12\x0c\n\x04\x64\x61ta\x18\x03 \x01(\x0c\"\x9c\x01\n\x04Type\x12\x0c\n\x08\x46LOAT_32\x10\x00\x12\x0c\n\x08\x46LOAT_64\x10\x01\x12\t\n\x05INT_8\x10\x02\x12\n\n\x06INT_16\x10\x03\x12\n\n\x06INT_32\x10\x04\x12\n\n\x06INT_64\x10\x05\x12\n\n\x06UINT_8\x10\x06\x12\x0b\n\x07UINT_16\x10\x07\x12\x0b\n\x07UINT_32\x10\x08\x12\x0b\n\x07UINT_64\x10\t\x12\x08\n\x04\x42OOL\x10\n\x12\x0c\n\x08\x46LOAT_16\x10\x0b\"~\n\x05Value\x12\x35\n\rstrings_value\x18\x01 \x01(\x0b\x32\x1c.neurovector.pb.StringsValueH\x00\x12\x33\n\x0ctensor_value\x18\x02 \x01(\x0b\x32\x1b.neurovector.pb.TensorValueH\x00\x42\t\n\x07options\"/\n\x06Values\x12%\n\x06values\x18\x01 \x03(\x0b\x32\x15.neurovector.pb.Value')
)



_TENSORVALUE_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='neurovector.pb.TensorValue.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='FLOAT_32', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FLOAT_64', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INT_8', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INT_16', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INT_32', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INT_64', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UINT_8', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UINT_16', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UINT_32', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UINT_64', index=9, number=9,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BOOL', index=10, number=10,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FLOAT_16', index=11, number=11,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=161,
  serialized_end=317,
)
_sym_db.RegisterEnumDescriptor(_TENSORVALUE_TYPE)


_STRINGSVALUE = _descriptor.Descriptor(
  name='StringsValue',
  full_name='neurovector.pb.StringsValue',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='strs', full_name='neurovector.pb.StringsValue.strs', index=0,
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
  serialized_start=37,
  serialized_end=65,
)


_TENSORVALUE = _descriptor.Descriptor(
  name='TensorValue',
  full_name='neurovector.pb.TensorValue',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='neurovector.pb.TensorValue.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='shape', full_name='neurovector.pb.TensorValue.shape', index=1,
      number=2, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='neurovector.pb.TensorValue.data', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _TENSORVALUE_TYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=68,
  serialized_end=317,
)


_VALUE = _descriptor.Descriptor(
  name='Value',
  full_name='neurovector.pb.Value',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='strings_value', full_name='neurovector.pb.Value.strings_value', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tensor_value', full_name='neurovector.pb.Value.tensor_value', index=1,
      number=2, type=11, cpp_type=10, label=1,
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
    _descriptor.OneofDescriptor(
      name='options', full_name='neurovector.pb.Value.options',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=319,
  serialized_end=445,
)


_VALUES = _descriptor.Descriptor(
  name='Values',
  full_name='neurovector.pb.Values',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='values', full_name='neurovector.pb.Values.values', index=0,
      number=1, type=11, cpp_type=10, label=3,
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
  serialized_start=447,
  serialized_end=494,
)

_TENSORVALUE.fields_by_name['type'].enum_type = _TENSORVALUE_TYPE
_TENSORVALUE_TYPE.containing_type = _TENSORVALUE
_VALUE.fields_by_name['strings_value'].message_type = _STRINGSVALUE
_VALUE.fields_by_name['tensor_value'].message_type = _TENSORVALUE
_VALUE.oneofs_by_name['options'].fields.append(
  _VALUE.fields_by_name['strings_value'])
_VALUE.fields_by_name['strings_value'].containing_oneof = _VALUE.oneofs_by_name['options']
_VALUE.oneofs_by_name['options'].fields.append(
  _VALUE.fields_by_name['tensor_value'])
_VALUE.fields_by_name['tensor_value'].containing_oneof = _VALUE.oneofs_by_name['options']
_VALUES.fields_by_name['values'].message_type = _VALUE
DESCRIPTOR.message_types_by_name['StringsValue'] = _STRINGSVALUE
DESCRIPTOR.message_types_by_name['TensorValue'] = _TENSORVALUE
DESCRIPTOR.message_types_by_name['Value'] = _VALUE
DESCRIPTOR.message_types_by_name['Values'] = _VALUES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

StringsValue = _reflection.GeneratedProtocolMessageType('StringsValue', (_message.Message,), dict(
  DESCRIPTOR = _STRINGSVALUE,
  __module__ = 'neurovector_pb2'
  # @@protoc_insertion_point(class_scope:neurovector.pb.StringsValue)
  ))
_sym_db.RegisterMessage(StringsValue)

TensorValue = _reflection.GeneratedProtocolMessageType('TensorValue', (_message.Message,), dict(
  DESCRIPTOR = _TENSORVALUE,
  __module__ = 'neurovector_pb2'
  # @@protoc_insertion_point(class_scope:neurovector.pb.TensorValue)
  ))
_sym_db.RegisterMessage(TensorValue)

Value = _reflection.GeneratedProtocolMessageType('Value', (_message.Message,), dict(
  DESCRIPTOR = _VALUE,
  __module__ = 'neurovector_pb2'
  # @@protoc_insertion_point(class_scope:neurovector.pb.Value)
  ))
_sym_db.RegisterMessage(Value)

Values = _reflection.GeneratedProtocolMessageType('Values', (_message.Message,), dict(
  DESCRIPTOR = _VALUES,
  __module__ = 'neurovector_pb2'
  # @@protoc_insertion_point(class_scope:neurovector.pb.Values)
  ))
_sym_db.RegisterMessage(Values)


# @@protoc_insertion_point(module_scope)