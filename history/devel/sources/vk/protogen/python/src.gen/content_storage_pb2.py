# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: content_storage.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import fetch_list_pb2 as fetch__list__pb2
import crawl_state_pb2 as crawl__state__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='content_storage.proto',
  package='gogo.storage',
  syntax='proto2',
  serialized_pb=_b('\n\x15\x63ontent_storage.proto\x12\x0cgogo.storage\x1a\x10\x66\x65tch_list.proto\x1a\x11\x63rawl_state.proto\"2\n\x13\x64ocument_attributes\x12\x0c\n\x04name\x18\x01 \x02(\t\x12\r\n\x05value\x18\x02 \x02(\t\"$\n\x06Region\x12\r\n\x05start\x18\x01 \x02(\x05\x12\x0b\n\x03\x65nd\x18\x02 \x02(\x05\"=\n\nRegionBlob\x12\x0b\n\x03num\x18\x01 \x02(\x05\x12\"\n\x04\x64\x61ta\x18\x02 \x03(\x0b\x32\x14.gogo.storage.Region\"\x95\x01\n\nextra_info\x12\x0c\n\x04type\x18\x01 \x02(\t\x12\x35\n\x08\x65ncoding\x18\x02 \x02(\x0e\x32#.gogo.storage.extra_info.encoding_t\x12\x0c\n\x04\x64\x61ta\x18\x03 \x02(\x0c\x12\x12\n\nprops_ui32\x18\x04 \x03(\r\" \n\nencoding_t\x12\x08\n\x04none\x10\x00\x12\x08\n\x04utf8\x10\x01\"\xf4\x0c\n\x16spider_document_detail\x12\x0b\n\x03url\x18\x01 \x02(\t\x12\x15\n\rdownload_time\x18\x02 \x02(\x04\x12\x0f\n\x07\x63ontent\x18\x03 \x01(\x0c\x12\x39\n\x04\x66lag\x18\x04 \x02(\x0e\x32+.gogo.storage.spider_document_detail.flag_t\x12\x39\n\x04type\x18\x05 \x01(\x0e\x32+.gogo.storage.spider_document_detail.type_t\x12\x41\n\x08language\x18\x06 \x01(\x0e\x32/.gogo.storage.spider_document_detail.language_t\x12\x35\n\nattributes\x18\x07 \x03(\x0b\x32!.gogo.storage.document_attributes\x12\x41\n\x08\x65ncoding\x18\x08 \x01(\x0e\x32/.gogo.storage.spider_document_detail.encoding_t\x12\x18\n\x10publication_time\x18\t \x01(\x04\x12,\n\nextra_info\x18\n \x03(\x0b\x32\x18.gogo.storage.extra_info\x12\x1d\n\x0eorigin_fetcher\x18\x0b \x01(\x08:\x05\x66\x61lse\x12\x13\n\x0bporno_level\x18\x0c \x01(\r\x12\x12\n\nspam_level\x18\r \x01(\r\x12,\n\ncuttedBlob\x18\x0e \x01(\x0b\x32\x18.gogo.storage.RegionBlob\x12\x18\n\x10meta_description\x18\x0f \x01(\x0c\x12\x1c\n\rdisabled_stub\x18\x10 \x01(\x08:\x05\x66\x61lse\x12\x11\n\tredirects\x18\x11 \x03(\t\x12\x19\n\nreindexing\x18\x12 \x01(\x08:\x05\x66\x61lse\x12\x12\n\nplainIndex\x18\x13 \x01(\x0c\x12\x15\n\rtitles_vector\x18\x14 \x01(\x0c\x12\x14\n\x0cupdate_video\x18\x15 \x01(\x08\"\xb0\x01\n\x06\x66lag_t\x12\t\n\x05\x65mpty\x10\x00\x12\x0c\n\x08original\x10\x01\x12\x1a\n\x16remove_page_from_index\x10\x02\x12\r\n\tconverted\x10\x03\x12\x1a\n\x16remove_site_from_index\x10\x04\x12\x13\n\x0fmetainformation\x10\x05\x12\r\n\tnot_found\x10\x06\x12\x0c\n\x08redirect\x10\x07\x12\x14\n\x10index_extra_info\x10\x08\"\xfc\x01\n\x06type_t\x12\x0b\n\x07unknown\x10\x00\x12\x08\n\x04html\x10\x01\x12\x07\n\x03xml\x10\x02\x12\x07\n\x03wml\x10\x03\x12\x07\n\x03rss\x10\x04\x12\x07\n\x03pdf\x10\x05\x12\x07\n\x03\x64oc\x10\x06\x12\x07\n\x03rtf\x10\x07\x12\x07\n\x03ppt\x10\x08\x12\x07\n\x03pps\x10\t\x12\x06\n\x02ps\x10\n\x12\x08\n\x04jpeg\x10\x0b\x12\x07\n\x03gif\x10\x0c\x12\x07\n\x03png\x10\r\x12\x07\n\x03xls\x10\x0e\x12\x07\n\x03txt\x10\x0f\x12\x07\n\x03mid\x10\x10\x12\x07\n\x03wav\x10\x11\x12\x07\n\x03mp3\x10\x12\x12\x07\n\x03ogg\x10\x13\x12\x07\n\x03\x61\x61\x63\x10\x14\x12\x07\n\x03wma\x10\x15\x12\x07\n\x03\x61if\x10\x16\x12\x07\n\x03vqf\x10\x17\x12\x06\n\x02ra\x10\x18\x12\r\n\triff_webp\x10\x19\"\xa5\x01\n\nlanguage_t\x12\x10\n\x0clang_unknown\x10\x00\x12\x10\n\x0clang_russian\x10\x01\x12\x11\n\rlang_cyrillic\x10\x02\x12\x12\n\x0elang_bolgarian\x10\x03\x12\x12\n\x0elang_ukrainian\x10\x04\x12\x15\n\x11lang_byelorussian\x10\x05\x12\x0f\n\x0blang_kazakh\x10\x06\x12\x10\n\x0clang_english\x10\x07\"\\\n\nencoding_t\x12\x11\n\renc_undefined\x10\x00\x12\x0f\n\x0b\x65nc_unknown\x10\x01\x12\x0c\n\x08\x65nc_utf8\x10\x02\x12\x0e\n\nenc_cp1251\x10\x03\x12\x0c\n\x08\x65nc_koi8\x10\x04*\t\x08\xe8\x07\x10\x80\x80\x80\x80\x02\x32[\n\x08\x66\x65tchUrl\x12$.gogo.storage.spider_document_detail\x18\xe8\x07 \x01(\x0b\x32\".ru.mail.go.webbase.blobs.FetchUrl2m\n\x0b\x66\x65tchStatus\x12$.gogo.storage.spider_document_detail\x18\xe9\x07 \x01(\x0e\x32\x31.ru.mail.go.webbase.blobs.CrawlDetails.stateTypesB\x10\x42\x0e\x43ontentStorage')
  ,
  dependencies=[fetch__list__pb2.DESCRIPTOR,crawl__state__pb2.DESCRIPTOR,])



_EXTRA_INFO_ENCODING_T = _descriptor.EnumDescriptor(
  name='encoding_t',
  full_name='gogo.storage.extra_info.encoding_t',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='none', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='utf8', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=347,
  serialized_end=379,
)
_sym_db.RegisterEnumDescriptor(_EXTRA_INFO_ENCODING_T)

_SPIDER_DOCUMENT_DETAIL_FLAG_T = _descriptor.EnumDescriptor(
  name='flag_t',
  full_name='gogo.storage.spider_document_detail.flag_t',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='empty', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='original', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='remove_page_from_index', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='converted', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='remove_site_from_index', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='metainformation', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='not_found', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='redirect', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='index_extra_info', index=8, number=8,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1126,
  serialized_end=1302,
)
_sym_db.RegisterEnumDescriptor(_SPIDER_DOCUMENT_DETAIL_FLAG_T)

_SPIDER_DOCUMENT_DETAIL_TYPE_T = _descriptor.EnumDescriptor(
  name='type_t',
  full_name='gogo.storage.spider_document_detail.type_t',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='unknown', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='html', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='xml', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='wml', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='rss', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='pdf', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='doc', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='rtf', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ppt', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='pps', index=9, number=9,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ps', index=10, number=10,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='jpeg', index=11, number=11,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='gif', index=12, number=12,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='png', index=13, number=13,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='xls', index=14, number=14,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='txt', index=15, number=15,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='mid', index=16, number=16,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='wav', index=17, number=17,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='mp3', index=18, number=18,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ogg', index=19, number=19,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='aac', index=20, number=20,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='wma', index=21, number=21,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='aif', index=22, number=22,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='vqf', index=23, number=23,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ra', index=24, number=24,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='riff_webp', index=25, number=25,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1305,
  serialized_end=1557,
)
_sym_db.RegisterEnumDescriptor(_SPIDER_DOCUMENT_DETAIL_TYPE_T)

_SPIDER_DOCUMENT_DETAIL_LANGUAGE_T = _descriptor.EnumDescriptor(
  name='language_t',
  full_name='gogo.storage.spider_document_detail.language_t',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='lang_unknown', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='lang_russian', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='lang_cyrillic', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='lang_bolgarian', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='lang_ukrainian', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='lang_byelorussian', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='lang_kazakh', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='lang_english', index=7, number=7,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1560,
  serialized_end=1725,
)
_sym_db.RegisterEnumDescriptor(_SPIDER_DOCUMENT_DETAIL_LANGUAGE_T)

_SPIDER_DOCUMENT_DETAIL_ENCODING_T = _descriptor.EnumDescriptor(
  name='encoding_t',
  full_name='gogo.storage.spider_document_detail.encoding_t',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='enc_undefined', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='enc_unknown', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='enc_utf8', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='enc_cp1251', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='enc_koi8', index=4, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1727,
  serialized_end=1819,
)
_sym_db.RegisterEnumDescriptor(_SPIDER_DOCUMENT_DETAIL_ENCODING_T)


_DOCUMENT_ATTRIBUTES = _descriptor.Descriptor(
  name='document_attributes',
  full_name='gogo.storage.document_attributes',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='gogo.storage.document_attributes.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='gogo.storage.document_attributes.value', index=1,
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
  serialized_start=76,
  serialized_end=126,
)


_REGION = _descriptor.Descriptor(
  name='Region',
  full_name='gogo.storage.Region',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='start', full_name='gogo.storage.Region.start', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='end', full_name='gogo.storage.Region.end', index=1,
      number=2, type=5, cpp_type=1, label=2,
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
  serialized_start=128,
  serialized_end=164,
)


_REGIONBLOB = _descriptor.Descriptor(
  name='RegionBlob',
  full_name='gogo.storage.RegionBlob',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='num', full_name='gogo.storage.RegionBlob.num', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='gogo.storage.RegionBlob.data', index=1,
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
  serialized_start=166,
  serialized_end=227,
)


_EXTRA_INFO = _descriptor.Descriptor(
  name='extra_info',
  full_name='gogo.storage.extra_info',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='gogo.storage.extra_info.type', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='encoding', full_name='gogo.storage.extra_info.encoding', index=1,
      number=2, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='gogo.storage.extra_info.data', index=2,
      number=3, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='props_ui32', full_name='gogo.storage.extra_info.props_ui32', index=3,
      number=4, type=13, cpp_type=3, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _EXTRA_INFO_ENCODING_T,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=230,
  serialized_end=379,
)


_SPIDER_DOCUMENT_DETAIL = _descriptor.Descriptor(
  name='spider_document_detail',
  full_name='gogo.storage.spider_document_detail',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='url', full_name='gogo.storage.spider_document_detail.url', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='download_time', full_name='gogo.storage.spider_document_detail.download_time', index=1,
      number=2, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='content', full_name='gogo.storage.spider_document_detail.content', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='flag', full_name='gogo.storage.spider_document_detail.flag', index=3,
      number=4, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='gogo.storage.spider_document_detail.type', index=4,
      number=5, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='language', full_name='gogo.storage.spider_document_detail.language', index=5,
      number=6, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='attributes', full_name='gogo.storage.spider_document_detail.attributes', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='encoding', full_name='gogo.storage.spider_document_detail.encoding', index=7,
      number=8, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='publication_time', full_name='gogo.storage.spider_document_detail.publication_time', index=8,
      number=9, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='extra_info', full_name='gogo.storage.spider_document_detail.extra_info', index=9,
      number=10, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='origin_fetcher', full_name='gogo.storage.spider_document_detail.origin_fetcher', index=10,
      number=11, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='porno_level', full_name='gogo.storage.spider_document_detail.porno_level', index=11,
      number=12, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='spam_level', full_name='gogo.storage.spider_document_detail.spam_level', index=12,
      number=13, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cuttedBlob', full_name='gogo.storage.spider_document_detail.cuttedBlob', index=13,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='meta_description', full_name='gogo.storage.spider_document_detail.meta_description', index=14,
      number=15, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='disabled_stub', full_name='gogo.storage.spider_document_detail.disabled_stub', index=15,
      number=16, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='redirects', full_name='gogo.storage.spider_document_detail.redirects', index=16,
      number=17, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='reindexing', full_name='gogo.storage.spider_document_detail.reindexing', index=17,
      number=18, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='plainIndex', full_name='gogo.storage.spider_document_detail.plainIndex', index=18,
      number=19, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='titles_vector', full_name='gogo.storage.spider_document_detail.titles_vector', index=19,
      number=20, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='update_video', full_name='gogo.storage.spider_document_detail.update_video', index=20,
      number=21, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
    _descriptor.FieldDescriptor(
      name='fetchUrl', full_name='gogo.storage.spider_document_detail.fetchUrl', index=0,
      number=1000, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=True, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='fetchStatus', full_name='gogo.storage.spider_document_detail.fetchStatus', index=1,
      number=1001, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=True, extension_scope=None,
      options=None),
  ],
  nested_types=[],
  enum_types=[
    _SPIDER_DOCUMENT_DETAIL_FLAG_T,
    _SPIDER_DOCUMENT_DETAIL_TYPE_T,
    _SPIDER_DOCUMENT_DETAIL_LANGUAGE_T,
    _SPIDER_DOCUMENT_DETAIL_ENCODING_T,
  ],
  options=None,
  is_extendable=True,
  syntax='proto2',
  extension_ranges=[(1000, 536870912), ],
  oneofs=[
  ],
  serialized_start=382,
  serialized_end=2034,
)

_REGIONBLOB.fields_by_name['data'].message_type = _REGION
_EXTRA_INFO.fields_by_name['encoding'].enum_type = _EXTRA_INFO_ENCODING_T
_EXTRA_INFO_ENCODING_T.containing_type = _EXTRA_INFO
_SPIDER_DOCUMENT_DETAIL.fields_by_name['flag'].enum_type = _SPIDER_DOCUMENT_DETAIL_FLAG_T
_SPIDER_DOCUMENT_DETAIL.fields_by_name['type'].enum_type = _SPIDER_DOCUMENT_DETAIL_TYPE_T
_SPIDER_DOCUMENT_DETAIL.fields_by_name['language'].enum_type = _SPIDER_DOCUMENT_DETAIL_LANGUAGE_T
_SPIDER_DOCUMENT_DETAIL.fields_by_name['attributes'].message_type = _DOCUMENT_ATTRIBUTES
_SPIDER_DOCUMENT_DETAIL.fields_by_name['encoding'].enum_type = _SPIDER_DOCUMENT_DETAIL_ENCODING_T
_SPIDER_DOCUMENT_DETAIL.fields_by_name['extra_info'].message_type = _EXTRA_INFO
_SPIDER_DOCUMENT_DETAIL.fields_by_name['cuttedBlob'].message_type = _REGIONBLOB
_SPIDER_DOCUMENT_DETAIL_FLAG_T.containing_type = _SPIDER_DOCUMENT_DETAIL
_SPIDER_DOCUMENT_DETAIL_TYPE_T.containing_type = _SPIDER_DOCUMENT_DETAIL
_SPIDER_DOCUMENT_DETAIL_LANGUAGE_T.containing_type = _SPIDER_DOCUMENT_DETAIL
_SPIDER_DOCUMENT_DETAIL_ENCODING_T.containing_type = _SPIDER_DOCUMENT_DETAIL
DESCRIPTOR.message_types_by_name['document_attributes'] = _DOCUMENT_ATTRIBUTES
DESCRIPTOR.message_types_by_name['Region'] = _REGION
DESCRIPTOR.message_types_by_name['RegionBlob'] = _REGIONBLOB
DESCRIPTOR.message_types_by_name['extra_info'] = _EXTRA_INFO
DESCRIPTOR.message_types_by_name['spider_document_detail'] = _SPIDER_DOCUMENT_DETAIL
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

document_attributes = _reflection.GeneratedProtocolMessageType('document_attributes', (_message.Message,), dict(
  DESCRIPTOR = _DOCUMENT_ATTRIBUTES,
  __module__ = 'content_storage_pb2'
  # @@protoc_insertion_point(class_scope:gogo.storage.document_attributes)
  ))
_sym_db.RegisterMessage(document_attributes)

Region = _reflection.GeneratedProtocolMessageType('Region', (_message.Message,), dict(
  DESCRIPTOR = _REGION,
  __module__ = 'content_storage_pb2'
  # @@protoc_insertion_point(class_scope:gogo.storage.Region)
  ))
_sym_db.RegisterMessage(Region)

RegionBlob = _reflection.GeneratedProtocolMessageType('RegionBlob', (_message.Message,), dict(
  DESCRIPTOR = _REGIONBLOB,
  __module__ = 'content_storage_pb2'
  # @@protoc_insertion_point(class_scope:gogo.storage.RegionBlob)
  ))
_sym_db.RegisterMessage(RegionBlob)

extra_info = _reflection.GeneratedProtocolMessageType('extra_info', (_message.Message,), dict(
  DESCRIPTOR = _EXTRA_INFO,
  __module__ = 'content_storage_pb2'
  # @@protoc_insertion_point(class_scope:gogo.storage.extra_info)
  ))
_sym_db.RegisterMessage(extra_info)

spider_document_detail = _reflection.GeneratedProtocolMessageType('spider_document_detail', (_message.Message,), dict(
  DESCRIPTOR = _SPIDER_DOCUMENT_DETAIL,
  __module__ = 'content_storage_pb2'
  # @@protoc_insertion_point(class_scope:gogo.storage.spider_document_detail)
  ))
_sym_db.RegisterMessage(spider_document_detail)

_SPIDER_DOCUMENT_DETAIL.extensions_by_name['fetchUrl'].message_type = fetch__list__pb2._FETCHURL
spider_document_detail.RegisterExtension(_SPIDER_DOCUMENT_DETAIL.extensions_by_name['fetchUrl'])
_SPIDER_DOCUMENT_DETAIL.extensions_by_name['fetchStatus'].enum_type = crawl__state__pb2._CRAWLDETAILS_STATETYPES
spider_document_detail.RegisterExtension(_SPIDER_DOCUMENT_DETAIL.extensions_by_name['fetchStatus'])

DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\016ContentStorage'))
# @@protoc_insertion_point(module_scope)
