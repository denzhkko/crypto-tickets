# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: bahromadb.proto

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
  name='bahromadb.proto',
  package='gogo.bahroma_db',
  syntax='proto2',
  serialized_pb=_b('\n\x0f\x62\x61hromadb.proto\x12\x0fgogo.bahroma_db\"\xa7\x02\n\x0e\x42\x45lementStruct\x12\x32\n\x04type\x18\x01 \x02(\x0e\x32$.gogo.bahroma_db.BElementStruct.Type\x12\x13\n\x0bstring_data\x18\x02 \x01(\t\x12\x31\n\narray_data\x18\x03 \x01(\x0b\x32\x1d.gogo.bahroma_db.BArrayStruct\x12/\n\thash_data\x18\x04 \x01(\x0b\x32\x1c.gogo.bahroma_db.BHashStruct\x12\x33\n\x0b\x62inary_data\x18\x05 \x01(\x0b\x32\x1e.gogo.bahroma_db.BBinaryStruct\"3\n\x04Type\x12\n\n\x06String\x10\x01\x12\x08\n\x04Hash\x10\x02\x12\t\n\x05\x41rray\x10\x03\x12\n\n\x06\x42inary\x10\x04\"=\n\x0c\x42\x41rrayStruct\x12-\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\x1f.gogo.bahroma_db.BElementStruct\"\x93\x01\n\x0b\x42HashStruct\x12\x37\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32).gogo.bahroma_db.BHashStruct.BHashElement\x1aK\n\x0c\x42HashElement\x12\x0b\n\x03key\x18\x01 \x02(\t\x12.\n\x05value\x18\x02 \x02(\x0b\x32\x1f.gogo.bahroma_db.BElementStruct\"V\n\rBBinaryStruct\x12\x16\n\nstorage_id\x18\x01 \x02(\x11:\x02-1\x12\x18\n\tis_loaded\x18\x02 \x02(\x08:\x05\x66\x61lse\x12\x13\n\x0b\x62inary_data\x18\x03 \x01(\x0c\"\xc0\x01\n\x0cObjectStruct\x12\x16\n\x02id\x18\x01 \x01(\r:\n4294967295\x12\x30\n\nproperties\x18\x02 \x02(\x0b\x32\x1c.gogo.bahroma_db.BHashStruct\x12\x12\n\x07version\x18\x03 \x01(\r:\x01\x31\x12\x35\n\x04mode\x18\x04 \x01(\x0e\x32\".gogo.bahroma_db.ObjectStruct.Mode:\x03\x41\x64\x64\"\x1b\n\x04Mode\x12\x07\n\x03\x41\x64\x64\x10\x01\x12\n\n\x06\x44\x65lete\x10\x02\"&\n\rBahromaDBStat\x12\x15\n\rfirst_free_id\x18\x01 \x02(\r\"\x91\x01\n\x0f\x41\x65rospikeObject\x12\x34\n\x05items\x18\x01 \x03(\x0b\x32%.gogo.bahroma_db.AerospikeObject.Item\x1aH\n\x04Item\x12\x11\n\ttimestamp\x18\x01 \x02(\r\x12-\n\x06object\x18\x02 \x02(\x0b\x32\x1d.gogo.bahroma_db.ObjectStruct\"\xa0\x01\n\x18\x41\x65rospikeDisbledSettings\x12?\n\x06ranges\x18\x01 \x03(\x0b\x32/.gogo.bahroma_db.AerospikeDisbledSettings.Range\x12\x12\n\x07last_id\x18\x02 \x02(\r:\x01\x30\x1a/\n\x05Range\x12\n\n\x02id\x18\x01 \x02(\r\x12\r\n\x05\x62\x65gin\x18\x02 \x02(\r\x12\x0b\n\x03\x65nd\x18\x03 \x02(\rB,\n\x1aru.mail.go.webbase.bahromaB\x0b\x42\x61hromaDefs\xf8\x01\x01')
)



_BELEMENTSTRUCT_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='gogo.bahroma_db.BElementStruct.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='String', index=0, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='Hash', index=1, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='Array', index=2, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='Binary', index=3, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=281,
  serialized_end=332,
)
_sym_db.RegisterEnumDescriptor(_BELEMENTSTRUCT_TYPE)

_OBJECTSTRUCT_MODE = _descriptor.EnumDescriptor(
  name='Mode',
  full_name='gogo.bahroma_db.ObjectStruct.Mode',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='Add', index=0, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='Delete', index=1, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=801,
  serialized_end=828,
)
_sym_db.RegisterEnumDescriptor(_OBJECTSTRUCT_MODE)


_BELEMENTSTRUCT = _descriptor.Descriptor(
  name='BElementStruct',
  full_name='gogo.bahroma_db.BElementStruct',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='gogo.bahroma_db.BElementStruct.type', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='string_data', full_name='gogo.bahroma_db.BElementStruct.string_data', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='array_data', full_name='gogo.bahroma_db.BElementStruct.array_data', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hash_data', full_name='gogo.bahroma_db.BElementStruct.hash_data', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='binary_data', full_name='gogo.bahroma_db.BElementStruct.binary_data', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _BELEMENTSTRUCT_TYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=37,
  serialized_end=332,
)


_BARRAYSTRUCT = _descriptor.Descriptor(
  name='BArrayStruct',
  full_name='gogo.bahroma_db.BArrayStruct',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='gogo.bahroma_db.BArrayStruct.data', index=0,
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
  serialized_start=334,
  serialized_end=395,
)


_BHASHSTRUCT_BHASHELEMENT = _descriptor.Descriptor(
  name='BHashElement',
  full_name='gogo.bahroma_db.BHashStruct.BHashElement',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='gogo.bahroma_db.BHashStruct.BHashElement.key', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='gogo.bahroma_db.BHashStruct.BHashElement.value', index=1,
      number=2, type=11, cpp_type=10, label=2,
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
  serialized_start=470,
  serialized_end=545,
)

_BHASHSTRUCT = _descriptor.Descriptor(
  name='BHashStruct',
  full_name='gogo.bahroma_db.BHashStruct',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='gogo.bahroma_db.BHashStruct.data', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_BHASHSTRUCT_BHASHELEMENT, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=398,
  serialized_end=545,
)


_BBINARYSTRUCT = _descriptor.Descriptor(
  name='BBinaryStruct',
  full_name='gogo.bahroma_db.BBinaryStruct',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='storage_id', full_name='gogo.bahroma_db.BBinaryStruct.storage_id', index=0,
      number=1, type=17, cpp_type=1, label=2,
      has_default_value=True, default_value=-1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_loaded', full_name='gogo.bahroma_db.BBinaryStruct.is_loaded', index=1,
      number=2, type=8, cpp_type=7, label=2,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='binary_data', full_name='gogo.bahroma_db.BBinaryStruct.binary_data', index=2,
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
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=547,
  serialized_end=633,
)


_OBJECTSTRUCT = _descriptor.Descriptor(
  name='ObjectStruct',
  full_name='gogo.bahroma_db.ObjectStruct',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='gogo.bahroma_db.ObjectStruct.id', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=4294967295,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='properties', full_name='gogo.bahroma_db.ObjectStruct.properties', index=1,
      number=2, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='version', full_name='gogo.bahroma_db.ObjectStruct.version', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=True, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mode', full_name='gogo.bahroma_db.ObjectStruct.mode', index=3,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _OBJECTSTRUCT_MODE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=636,
  serialized_end=828,
)


_BAHROMADBSTAT = _descriptor.Descriptor(
  name='BahromaDBStat',
  full_name='gogo.bahroma_db.BahromaDBStat',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='first_free_id', full_name='gogo.bahroma_db.BahromaDBStat.first_free_id', index=0,
      number=1, type=13, cpp_type=3, label=2,
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
  serialized_start=830,
  serialized_end=868,
)


_AEROSPIKEOBJECT_ITEM = _descriptor.Descriptor(
  name='Item',
  full_name='gogo.bahroma_db.AerospikeObject.Item',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='gogo.bahroma_db.AerospikeObject.Item.timestamp', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='object', full_name='gogo.bahroma_db.AerospikeObject.Item.object', index=1,
      number=2, type=11, cpp_type=10, label=2,
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
  serialized_start=944,
  serialized_end=1016,
)

_AEROSPIKEOBJECT = _descriptor.Descriptor(
  name='AerospikeObject',
  full_name='gogo.bahroma_db.AerospikeObject',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='items', full_name='gogo.bahroma_db.AerospikeObject.items', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_AEROSPIKEOBJECT_ITEM, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=871,
  serialized_end=1016,
)


_AEROSPIKEDISBLEDSETTINGS_RANGE = _descriptor.Descriptor(
  name='Range',
  full_name='gogo.bahroma_db.AerospikeDisbledSettings.Range',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='gogo.bahroma_db.AerospikeDisbledSettings.Range.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='begin', full_name='gogo.bahroma_db.AerospikeDisbledSettings.Range.begin', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='end', full_name='gogo.bahroma_db.AerospikeDisbledSettings.Range.end', index=2,
      number=3, type=13, cpp_type=3, label=2,
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
  serialized_start=1132,
  serialized_end=1179,
)

_AEROSPIKEDISBLEDSETTINGS = _descriptor.Descriptor(
  name='AerospikeDisbledSettings',
  full_name='gogo.bahroma_db.AerospikeDisbledSettings',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ranges', full_name='gogo.bahroma_db.AerospikeDisbledSettings.ranges', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last_id', full_name='gogo.bahroma_db.AerospikeDisbledSettings.last_id', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_AEROSPIKEDISBLEDSETTINGS_RANGE, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1019,
  serialized_end=1179,
)

_BELEMENTSTRUCT.fields_by_name['type'].enum_type = _BELEMENTSTRUCT_TYPE
_BELEMENTSTRUCT.fields_by_name['array_data'].message_type = _BARRAYSTRUCT
_BELEMENTSTRUCT.fields_by_name['hash_data'].message_type = _BHASHSTRUCT
_BELEMENTSTRUCT.fields_by_name['binary_data'].message_type = _BBINARYSTRUCT
_BELEMENTSTRUCT_TYPE.containing_type = _BELEMENTSTRUCT
_BARRAYSTRUCT.fields_by_name['data'].message_type = _BELEMENTSTRUCT
_BHASHSTRUCT_BHASHELEMENT.fields_by_name['value'].message_type = _BELEMENTSTRUCT
_BHASHSTRUCT_BHASHELEMENT.containing_type = _BHASHSTRUCT
_BHASHSTRUCT.fields_by_name['data'].message_type = _BHASHSTRUCT_BHASHELEMENT
_OBJECTSTRUCT.fields_by_name['properties'].message_type = _BHASHSTRUCT
_OBJECTSTRUCT.fields_by_name['mode'].enum_type = _OBJECTSTRUCT_MODE
_OBJECTSTRUCT_MODE.containing_type = _OBJECTSTRUCT
_AEROSPIKEOBJECT_ITEM.fields_by_name['object'].message_type = _OBJECTSTRUCT
_AEROSPIKEOBJECT_ITEM.containing_type = _AEROSPIKEOBJECT
_AEROSPIKEOBJECT.fields_by_name['items'].message_type = _AEROSPIKEOBJECT_ITEM
_AEROSPIKEDISBLEDSETTINGS_RANGE.containing_type = _AEROSPIKEDISBLEDSETTINGS
_AEROSPIKEDISBLEDSETTINGS.fields_by_name['ranges'].message_type = _AEROSPIKEDISBLEDSETTINGS_RANGE
DESCRIPTOR.message_types_by_name['BElementStruct'] = _BELEMENTSTRUCT
DESCRIPTOR.message_types_by_name['BArrayStruct'] = _BARRAYSTRUCT
DESCRIPTOR.message_types_by_name['BHashStruct'] = _BHASHSTRUCT
DESCRIPTOR.message_types_by_name['BBinaryStruct'] = _BBINARYSTRUCT
DESCRIPTOR.message_types_by_name['ObjectStruct'] = _OBJECTSTRUCT
DESCRIPTOR.message_types_by_name['BahromaDBStat'] = _BAHROMADBSTAT
DESCRIPTOR.message_types_by_name['AerospikeObject'] = _AEROSPIKEOBJECT
DESCRIPTOR.message_types_by_name['AerospikeDisbledSettings'] = _AEROSPIKEDISBLEDSETTINGS
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

BElementStruct = _reflection.GeneratedProtocolMessageType('BElementStruct', (_message.Message,), dict(
  DESCRIPTOR = _BELEMENTSTRUCT,
  __module__ = 'bahromadb_pb2'
  # @@protoc_insertion_point(class_scope:gogo.bahroma_db.BElementStruct)
  ))
_sym_db.RegisterMessage(BElementStruct)

BArrayStruct = _reflection.GeneratedProtocolMessageType('BArrayStruct', (_message.Message,), dict(
  DESCRIPTOR = _BARRAYSTRUCT,
  __module__ = 'bahromadb_pb2'
  # @@protoc_insertion_point(class_scope:gogo.bahroma_db.BArrayStruct)
  ))
_sym_db.RegisterMessage(BArrayStruct)

BHashStruct = _reflection.GeneratedProtocolMessageType('BHashStruct', (_message.Message,), dict(

  BHashElement = _reflection.GeneratedProtocolMessageType('BHashElement', (_message.Message,), dict(
    DESCRIPTOR = _BHASHSTRUCT_BHASHELEMENT,
    __module__ = 'bahromadb_pb2'
    # @@protoc_insertion_point(class_scope:gogo.bahroma_db.BHashStruct.BHashElement)
    ))
  ,
  DESCRIPTOR = _BHASHSTRUCT,
  __module__ = 'bahromadb_pb2'
  # @@protoc_insertion_point(class_scope:gogo.bahroma_db.BHashStruct)
  ))
_sym_db.RegisterMessage(BHashStruct)
_sym_db.RegisterMessage(BHashStruct.BHashElement)

BBinaryStruct = _reflection.GeneratedProtocolMessageType('BBinaryStruct', (_message.Message,), dict(
  DESCRIPTOR = _BBINARYSTRUCT,
  __module__ = 'bahromadb_pb2'
  # @@protoc_insertion_point(class_scope:gogo.bahroma_db.BBinaryStruct)
  ))
_sym_db.RegisterMessage(BBinaryStruct)

ObjectStruct = _reflection.GeneratedProtocolMessageType('ObjectStruct', (_message.Message,), dict(
  DESCRIPTOR = _OBJECTSTRUCT,
  __module__ = 'bahromadb_pb2'
  # @@protoc_insertion_point(class_scope:gogo.bahroma_db.ObjectStruct)
  ))
_sym_db.RegisterMessage(ObjectStruct)

BahromaDBStat = _reflection.GeneratedProtocolMessageType('BahromaDBStat', (_message.Message,), dict(
  DESCRIPTOR = _BAHROMADBSTAT,
  __module__ = 'bahromadb_pb2'
  # @@protoc_insertion_point(class_scope:gogo.bahroma_db.BahromaDBStat)
  ))
_sym_db.RegisterMessage(BahromaDBStat)

AerospikeObject = _reflection.GeneratedProtocolMessageType('AerospikeObject', (_message.Message,), dict(

  Item = _reflection.GeneratedProtocolMessageType('Item', (_message.Message,), dict(
    DESCRIPTOR = _AEROSPIKEOBJECT_ITEM,
    __module__ = 'bahromadb_pb2'
    # @@protoc_insertion_point(class_scope:gogo.bahroma_db.AerospikeObject.Item)
    ))
  ,
  DESCRIPTOR = _AEROSPIKEOBJECT,
  __module__ = 'bahromadb_pb2'
  # @@protoc_insertion_point(class_scope:gogo.bahroma_db.AerospikeObject)
  ))
_sym_db.RegisterMessage(AerospikeObject)
_sym_db.RegisterMessage(AerospikeObject.Item)

AerospikeDisbledSettings = _reflection.GeneratedProtocolMessageType('AerospikeDisbledSettings', (_message.Message,), dict(

  Range = _reflection.GeneratedProtocolMessageType('Range', (_message.Message,), dict(
    DESCRIPTOR = _AEROSPIKEDISBLEDSETTINGS_RANGE,
    __module__ = 'bahromadb_pb2'
    # @@protoc_insertion_point(class_scope:gogo.bahroma_db.AerospikeDisbledSettings.Range)
    ))
  ,
  DESCRIPTOR = _AEROSPIKEDISBLEDSETTINGS,
  __module__ = 'bahromadb_pb2'
  # @@protoc_insertion_point(class_scope:gogo.bahroma_db.AerospikeDisbledSettings)
  ))
_sym_db.RegisterMessage(AerospikeDisbledSettings)
_sym_db.RegisterMessage(AerospikeDisbledSettings.Range)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\032ru.mail.go.webbase.bahromaB\013BahromaDefs\370\001\001'))
# @@protoc_insertion_point(module_scope)