# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: music-albums.proto

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
  name='music-albums.proto',
  package='',
  syntax='proto2',
  serialized_pb=_b('\n\x12music-albums.proto\"\x7f\n\nAlbumTrack\x12\x13\n\x0buser_id_old\x18\x01 \x01(\x05\x12\x10\n\x08track_id\x18\x02 \x02(\t\x12\x10\n\x08\x64uration\x18\x03 \x02(\r\x12\x12\n\ntrack_name\x18\x04 \x02(\t\x12\x13\n\x0b\x61uthor_name\x18\x05 \x02(\t\x12\x0f\n\x07user_id\x18\x06 \x01(\x04\"A\n\x0e\x41lbumTrackList\x12\x1b\n\x06tracks\x18\x01 \x03(\x0b\x32\x0b.AlbumTrack\x12\x12\n\nlisten_key\x18\x02 \x02(\t')
)




_ALBUMTRACK = _descriptor.Descriptor(
  name='AlbumTrack',
  full_name='AlbumTrack',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='user_id_old', full_name='AlbumTrack.user_id_old', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='track_id', full_name='AlbumTrack.track_id', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='duration', full_name='AlbumTrack.duration', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='track_name', full_name='AlbumTrack.track_name', index=3,
      number=4, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='author_name', full_name='AlbumTrack.author_name', index=4,
      number=5, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_id', full_name='AlbumTrack.user_id', index=5,
      number=6, type=4, cpp_type=4, label=1,
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
  serialized_start=22,
  serialized_end=149,
)


_ALBUMTRACKLIST = _descriptor.Descriptor(
  name='AlbumTrackList',
  full_name='AlbumTrackList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='tracks', full_name='AlbumTrackList.tracks', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='listen_key', full_name='AlbumTrackList.listen_key', index=1,
      number=2, type=9, cpp_type=9, label=2,
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
  serialized_start=151,
  serialized_end=216,
)

_ALBUMTRACKLIST.fields_by_name['tracks'].message_type = _ALBUMTRACK
DESCRIPTOR.message_types_by_name['AlbumTrack'] = _ALBUMTRACK
DESCRIPTOR.message_types_by_name['AlbumTrackList'] = _ALBUMTRACKLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

AlbumTrack = _reflection.GeneratedProtocolMessageType('AlbumTrack', (_message.Message,), dict(
  DESCRIPTOR = _ALBUMTRACK,
  __module__ = 'music_albums_pb2'
  # @@protoc_insertion_point(class_scope:AlbumTrack)
  ))
_sym_db.RegisterMessage(AlbumTrack)

AlbumTrackList = _reflection.GeneratedProtocolMessageType('AlbumTrackList', (_message.Message,), dict(
  DESCRIPTOR = _ALBUMTRACKLIST,
  __module__ = 'music_albums_pb2'
  # @@protoc_insertion_point(class_scope:AlbumTrackList)
  ))
_sym_db.RegisterMessage(AlbumTrackList)


# @@protoc_insertion_point(module_scope)
