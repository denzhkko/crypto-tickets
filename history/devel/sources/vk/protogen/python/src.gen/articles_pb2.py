# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: articles.proto

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
  name='articles.proto',
  package='',
  syntax='proto2',
  serialized_pb=_b('\n\x0e\x61rticles.proto\"0\n\x11\x41rticleAttachment\x12\x0c\n\x04type\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x03(\t\"\xa8\x05\n\x11\x41rticlesImportDoc\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0f\n\x07mongoId\x18\x02 \x01(\t\x12\x0b\n\x03url\x18\x03 \x01(\t\x12\x0f\n\x07longUrl\x18\x04 \x01(\t\x12\x14\n\x0cmainImageUrl\x18\x05 \x01(\t\x12\r\n\x05title\x18\x06 \x01(\t\x12\x0f\n\x07\x63ontent\x18\x07 \x01(\t\x12\x13\n\x0bpublisherId\x18\x08 \x01(\t\x12\x15\n\rpublisherName\x18\t \x01(\t\x12\x15\n\rpublisherDesc\x18\n \x01(\t\x12\x1c\n\x14publisherSubscribers\x18\x0b \x01(\r\x12\x17\n\x0fpublicationTime\x18\x0c \x01(\x04\x12\x10\n\x08viewsCnt\x18\r \x01(\x04\x12\x10\n\x08likesCnt\x18\x0e \x01(\r\x12\x13\n\x0b\x64islikesCnt\x18\x0f \x01(\r\x12\x13\n\x0b\x63ommentsCnt\x18\x10 \x01(\r\x12\x14\n\x0c\x63\x65rtainGrade\x18\x11 \x01(\t\x12\x10\n\x08itemType\x18\x12 \x01(\t\x12\x1b\n\x13\x65xistInRecoSnapshot\x18\x13 \x01(\x08\x12\x0e\n\x06shares\x18\x15 \x01(\r\x12\x10\n\x08verified\x18\x16 \x01(\x08\x12\x16\n\x0e\x65ventTimestamp\x18\x14 \x01(\x04\x12\x10\n\x08\x63rClicks\x18\x17 \x01(\r\x12\x0e\n\x06\x63rImps\x18\x18 \x01(\r\x12\x13\n\x0b\x63ontentHash\x18\x19 \x01(\x04\x12\x18\n\x10publisherQuality\x18\x1a \x01(\x01\x12$\n\x08\x61ttaches\x18\x1b \x03(\x0b\x32\x12.ArticleAttachment\x12\x1a\n\x04type\x18\x1c \x01(\x0e\x32\x0c.ArticleType\x12\x11\n\tisDeleted\x18\x1d \x01(\x08\x12\x13\n\x0b\x61ttachTypes\x18\x1e \x03(\t\x12\x10\n\x08hashTags\x18\x1f \x03(\t\x12\x0e\n\x06itemId\x18  \x01(\t*1\n\x0b\x41rticleType\x12\x08\n\x04NONE\x10\x00\x12\x08\n\x04\x44ZEN\x10\x01\x12\x06\n\x02OK\x10\x02\x12\x06\n\x02VK\x10\x03\x42,\n\x1bru.mail.go.webbase.articlesB\rArticlesProto')
)

_ARTICLETYPE = _descriptor.EnumDescriptor(
  name='ArticleType',
  full_name='ArticleType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NONE', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DZEN', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='OK', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='VK', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=751,
  serialized_end=800,
)
_sym_db.RegisterEnumDescriptor(_ARTICLETYPE)

ArticleType = enum_type_wrapper.EnumTypeWrapper(_ARTICLETYPE)
NONE = 0
DZEN = 1
OK = 2
VK = 3



_ARTICLEATTACHMENT = _descriptor.Descriptor(
  name='ArticleAttachment',
  full_name='ArticleAttachment',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='ArticleAttachment.type', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='ArticleAttachment.value', index=1,
      number=2, type=9, cpp_type=9, label=3,
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
  serialized_start=18,
  serialized_end=66,
)


_ARTICLESIMPORTDOC = _descriptor.Descriptor(
  name='ArticlesImportDoc',
  full_name='ArticlesImportDoc',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ArticlesImportDoc.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mongoId', full_name='ArticlesImportDoc.mongoId', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='url', full_name='ArticlesImportDoc.url', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='longUrl', full_name='ArticlesImportDoc.longUrl', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mainImageUrl', full_name='ArticlesImportDoc.mainImageUrl', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='title', full_name='ArticlesImportDoc.title', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='content', full_name='ArticlesImportDoc.content', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='publisherId', full_name='ArticlesImportDoc.publisherId', index=7,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='publisherName', full_name='ArticlesImportDoc.publisherName', index=8,
      number=9, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='publisherDesc', full_name='ArticlesImportDoc.publisherDesc', index=9,
      number=10, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='publisherSubscribers', full_name='ArticlesImportDoc.publisherSubscribers', index=10,
      number=11, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='publicationTime', full_name='ArticlesImportDoc.publicationTime', index=11,
      number=12, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='viewsCnt', full_name='ArticlesImportDoc.viewsCnt', index=12,
      number=13, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='likesCnt', full_name='ArticlesImportDoc.likesCnt', index=13,
      number=14, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='dislikesCnt', full_name='ArticlesImportDoc.dislikesCnt', index=14,
      number=15, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='commentsCnt', full_name='ArticlesImportDoc.commentsCnt', index=15,
      number=16, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='certainGrade', full_name='ArticlesImportDoc.certainGrade', index=16,
      number=17, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='itemType', full_name='ArticlesImportDoc.itemType', index=17,
      number=18, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='existInRecoSnapshot', full_name='ArticlesImportDoc.existInRecoSnapshot', index=18,
      number=19, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='shares', full_name='ArticlesImportDoc.shares', index=19,
      number=21, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='verified', full_name='ArticlesImportDoc.verified', index=20,
      number=22, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='eventTimestamp', full_name='ArticlesImportDoc.eventTimestamp', index=21,
      number=20, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='crClicks', full_name='ArticlesImportDoc.crClicks', index=22,
      number=23, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='crImps', full_name='ArticlesImportDoc.crImps', index=23,
      number=24, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='contentHash', full_name='ArticlesImportDoc.contentHash', index=24,
      number=25, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='publisherQuality', full_name='ArticlesImportDoc.publisherQuality', index=25,
      number=26, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='attaches', full_name='ArticlesImportDoc.attaches', index=26,
      number=27, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='ArticlesImportDoc.type', index=27,
      number=28, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='isDeleted', full_name='ArticlesImportDoc.isDeleted', index=28,
      number=29, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='attachTypes', full_name='ArticlesImportDoc.attachTypes', index=29,
      number=30, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hashTags', full_name='ArticlesImportDoc.hashTags', index=30,
      number=31, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='itemId', full_name='ArticlesImportDoc.itemId', index=31,
      number=32, type=9, cpp_type=9, label=1,
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
  serialized_start=69,
  serialized_end=749,
)

_ARTICLESIMPORTDOC.fields_by_name['attaches'].message_type = _ARTICLEATTACHMENT
_ARTICLESIMPORTDOC.fields_by_name['type'].enum_type = _ARTICLETYPE
DESCRIPTOR.message_types_by_name['ArticleAttachment'] = _ARTICLEATTACHMENT
DESCRIPTOR.message_types_by_name['ArticlesImportDoc'] = _ARTICLESIMPORTDOC
DESCRIPTOR.enum_types_by_name['ArticleType'] = _ARTICLETYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ArticleAttachment = _reflection.GeneratedProtocolMessageType('ArticleAttachment', (_message.Message,), dict(
  DESCRIPTOR = _ARTICLEATTACHMENT,
  __module__ = 'articles_pb2'
  # @@protoc_insertion_point(class_scope:ArticleAttachment)
  ))
_sym_db.RegisterMessage(ArticleAttachment)

ArticlesImportDoc = _reflection.GeneratedProtocolMessageType('ArticlesImportDoc', (_message.Message,), dict(
  DESCRIPTOR = _ARTICLESIMPORTDOC,
  __module__ = 'articles_pb2'
  # @@protoc_insertion_point(class_scope:ArticlesImportDoc)
  ))
_sym_db.RegisterMessage(ArticlesImportDoc)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\033ru.mail.go.webbase.articlesB\rArticlesProto'))
# @@protoc_insertion_point(module_scope)
