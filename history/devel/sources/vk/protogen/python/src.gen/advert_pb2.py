# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: advert.proto

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
  name='advert.proto',
  package='ru.mail.go.advert',
  syntax='proto2',
  serialized_pb=_b('\n\x0c\x61\x64vert.proto\x12\x11ru.mail.go.advert\"g\n\x07\x41\x64\x64ress\x12\x0b\n\x03lat\x18\x01 \x02(\x02\x12\x0b\n\x03lon\x18\x02 \x02(\x02\x12\r\n\x05phone\x18\x03 \x02(\t\x12\x0f\n\x07\x61\x64\x64ress\x18\x04 \x02(\t\x12\x10\n\x08schedule\x18\x05 \x01(\t\x12\x10\n\x08georegid\x18\x06 \x01(\x05\"]\n\rAdvertAddress\x12\n\n\x02ts\x18\x01 \x02(\x04\x12+\n\x07\x61\x64\x64ress\x18\x02 \x03(\x0b\x32\x1a.ru.mail.go.advert.Address\x12\x13\n\x0b\x61piResponse\x18\x03 \x01(\t\";\n\x0cRichSitelink\x12\x0b\n\x03url\x18\x01 \x02(\t\x12\r\n\x05title\x18\x02 \x02(\t\x12\x0f\n\x07snippet\x18\x03 \x02(\t\"J\n\rRichSitelinks\x12\n\n\x02ts\x18\x01 \x02(\x04\x12-\n\x04link\x18\x02 \x03(\x0b\x32\x1f.ru.mail.go.advert.RichSitelinkB\x08\x42\x06\x41\x64vert')
)




_ADDRESS = _descriptor.Descriptor(
  name='Address',
  full_name='ru.mail.go.advert.Address',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='lat', full_name='ru.mail.go.advert.Address.lat', index=0,
      number=1, type=2, cpp_type=6, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='lon', full_name='ru.mail.go.advert.Address.lon', index=1,
      number=2, type=2, cpp_type=6, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='phone', full_name='ru.mail.go.advert.Address.phone', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='address', full_name='ru.mail.go.advert.Address.address', index=3,
      number=4, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='schedule', full_name='ru.mail.go.advert.Address.schedule', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='georegid', full_name='ru.mail.go.advert.Address.georegid', index=5,
      number=6, type=5, cpp_type=1, label=1,
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
  serialized_start=35,
  serialized_end=138,
)


_ADVERTADDRESS = _descriptor.Descriptor(
  name='AdvertAddress',
  full_name='ru.mail.go.advert.AdvertAddress',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ts', full_name='ru.mail.go.advert.AdvertAddress.ts', index=0,
      number=1, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='address', full_name='ru.mail.go.advert.AdvertAddress.address', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='apiResponse', full_name='ru.mail.go.advert.AdvertAddress.apiResponse', index=2,
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
  serialized_start=140,
  serialized_end=233,
)


_RICHSITELINK = _descriptor.Descriptor(
  name='RichSitelink',
  full_name='ru.mail.go.advert.RichSitelink',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='url', full_name='ru.mail.go.advert.RichSitelink.url', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='title', full_name='ru.mail.go.advert.RichSitelink.title', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='snippet', full_name='ru.mail.go.advert.RichSitelink.snippet', index=2,
      number=3, type=9, cpp_type=9, label=2,
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
  serialized_start=235,
  serialized_end=294,
)


_RICHSITELINKS = _descriptor.Descriptor(
  name='RichSitelinks',
  full_name='ru.mail.go.advert.RichSitelinks',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ts', full_name='ru.mail.go.advert.RichSitelinks.ts', index=0,
      number=1, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='link', full_name='ru.mail.go.advert.RichSitelinks.link', index=1,
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
  serialized_start=296,
  serialized_end=370,
)

_ADVERTADDRESS.fields_by_name['address'].message_type = _ADDRESS
_RICHSITELINKS.fields_by_name['link'].message_type = _RICHSITELINK
DESCRIPTOR.message_types_by_name['Address'] = _ADDRESS
DESCRIPTOR.message_types_by_name['AdvertAddress'] = _ADVERTADDRESS
DESCRIPTOR.message_types_by_name['RichSitelink'] = _RICHSITELINK
DESCRIPTOR.message_types_by_name['RichSitelinks'] = _RICHSITELINKS
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Address = _reflection.GeneratedProtocolMessageType('Address', (_message.Message,), dict(
  DESCRIPTOR = _ADDRESS,
  __module__ = 'advert_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.advert.Address)
  ))
_sym_db.RegisterMessage(Address)

AdvertAddress = _reflection.GeneratedProtocolMessageType('AdvertAddress', (_message.Message,), dict(
  DESCRIPTOR = _ADVERTADDRESS,
  __module__ = 'advert_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.advert.AdvertAddress)
  ))
_sym_db.RegisterMessage(AdvertAddress)

RichSitelink = _reflection.GeneratedProtocolMessageType('RichSitelink', (_message.Message,), dict(
  DESCRIPTOR = _RICHSITELINK,
  __module__ = 'advert_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.advert.RichSitelink)
  ))
_sym_db.RegisterMessage(RichSitelink)

RichSitelinks = _reflection.GeneratedProtocolMessageType('RichSitelinks', (_message.Message,), dict(
  DESCRIPTOR = _RICHSITELINKS,
  __module__ = 'advert_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.advert.RichSitelinks)
  ))
_sym_db.RegisterMessage(RichSitelinks)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\006Advert'))
# @@protoc_insertion_point(module_scope)
