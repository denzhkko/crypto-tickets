# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: yandex_news_session.proto

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
  name='yandex_news_session.proto',
  package='ru.mail.go.webbase.yandex_news',
  syntax='proto2',
  serialized_pb=_b('\n\x19yandex_news_session.proto\x12\x1eru.mail.go.webbase.yandex_news\"\x80\x01\n\x0cSearchParams\x12=\n\nsort_order\x18\x01 \x02(\x0e\x32).ru.mail.go.webbase.yandex_news.SortOrder\x12\r\n\x05group\x18\x02 \x02(\x08\x12\x11\n\ttime_from\x18\x03 \x01(\x05\x12\x0f\n\x07time_to\x18\x04 \x01(\x05\"V\n\x07\x44ocItem\x12\x0c\n\x04hpos\x18\x01 \x02(\x05\x12\x0b\n\x03url\x18\x02 \x02(\t\x12\r\n\x05\x63lick\x18\x03 \x02(\x08\x12\x10\n\x08\x63lick_ts\x18\x04 \x02(\x05\x12\x0f\n\x07show_ts\x18\x05 \x02(\x05\"\xaa\x01\n\x08SerpItem\x12\x36\n\x04type\x18\x01 \x02(\x0e\x32(.ru.mail.go.webbase.yandex_news.SerpType\x12\x0b\n\x03pos\x18\x02 \x02(\x05\x12\r\n\x05group\x18\x03 \x01(\t\x12\x13\n\x0bgroup_title\x18\x04 \x01(\t\x12\x35\n\x04\x64ocs\x18\x05 \x03(\x0b\x32\'.ru.mail.go.webbase.yandex_news.DocItem\">\n\x08UserInfo\x12\x12\n\nyandex_uid\x18\x01 \x02(\t\x12\x12\n\nuser_agent\x18\x02 \x02(\t\x12\n\n\x02ip\x18\x03 \x02(\t\"5\n\x10PageDocumentItem\x12\x0b\n\x03url\x18\x01 \x02(\t\x12\x14\n\x0cis_lightning\x18\x02 \x02(\x08\"\x93\x01\n\x08PageItem\x12\x10\n\x08page_url\x18\x01 \x02(\t\x12\x0c\n\x04page\x18\x02 \x02(\x05\x12\x0c\n\x04urls\x18\x03 \x03(\t\x12H\n\x0epage_documents\x18\x04 \x03(\x0b\x32\x30.ru.mail.go.webbase.yandex_news.PageDocumentItem\x12\x0f\n\x07show_ts\x18\x05 \x01(\x05\"1\n\x0e\x45xperimentItem\x12\x0f\n\x07test_id\x18\x01 \x02(\t\x12\x0e\n\x06\x62ucket\x18\x02 \x02(\t\"\xbe\x01\n\tEventItem\x12\n\n\x02ts\x18\x01 \x02(\x05\x12\x37\n\x04type\x18\x02 \x02(\x0e\x32).ru.mail.go.webbase.yandex_news.EventType\x12G\n\x11new_search_params\x18\x03 \x01(\x0b\x32,.ru.mail.go.webbase.yandex_news.SearchParams\x12\x11\n\tnew_query\x18\x04 \x01(\t\x12\x10\n\x08page_url\x18\x05 \x01(\t\"\x97\x04\n\x15YandexNewsSessionItem\x12\x0b\n\x03qid\x18\x01 \x02(\t\x12\n\n\x02ts\x18\x02 \x02(\x05\x12\r\n\x05query\x18\x03 \x02(\t\x12\x43\n\rsearch_params\x18\x04 \x01(\x0b\x32,.ru.mail.go.webbase.yandex_news.SearchParams\x12\x36\n\x04serp\x18\x05 \x03(\x0b\x32(.ru.mail.go.webbase.yandex_news.SerpItem\x12;\n\tuser_info\x18\x06 \x01(\x0b\x32(.ru.mail.go.webbase.yandex_news.UserInfo\x12\x37\n\x05pages\x18\x07 \x03(\x0b\x32(.ru.mail.go.webbase.yandex_news.PageItem\x12\x43\n\x0b\x65xperiments\x18\x08 \x03(\x0b\x32..ru.mail.go.webbase.yandex_news.ExperimentItem\x12\x1e\n\x16yandex_suspected_robot\x18\t \x01(\x08\x12\x18\n\x10yandex_robotness\x18\n \x01(\x02\x12\x39\n\x06\x65vents\x18\x0b \x03(\x0b\x32).ru.mail.go.webbase.yandex_news.EventItem\x12\x12\n\nparent_qid\x18\x0c \x01(\t\x12\x15\n\rbot_by_parent\x18\r \x01(\x08**\n\tSortOrder\x12\r\n\trelevance\x10\x00\x12\x0e\n\nchronology\x10\x01*#\n\x08SerpType\x12\x0c\n\x08\x64ocument\x10\x00\x12\t\n\x05group\x10\x01*\xb2\x01\n\tEventType\x12\x12\n\x0esearch_request\x10\x00\x12\x13\n\x0fsearch_response\x10\x01\x12\x10\n\x0csearch_focus\x10\x02\x12\x0f\n\x0bsearch_blur\x10\x03\x12\x10\n\x0csearch_clear\x10\x04\x12\x16\n\x12search_filter_date\x10\x05\x12\x17\n\x13search_filter_group\x10\x06\x12\x16\n\x12search_filter_sort\x10\x07\x42\x13\x42\x11YandexNewsSession')
)

_SORTORDER = _descriptor.EnumDescriptor(
  name='SortOrder',
  full_name='ru.mail.go.webbase.yandex_news.SortOrder',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='relevance', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='chronology', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1504,
  serialized_end=1546,
)
_sym_db.RegisterEnumDescriptor(_SORTORDER)

SortOrder = enum_type_wrapper.EnumTypeWrapper(_SORTORDER)
_SERPTYPE = _descriptor.EnumDescriptor(
  name='SerpType',
  full_name='ru.mail.go.webbase.yandex_news.SerpType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='document', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='group', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1548,
  serialized_end=1583,
)
_sym_db.RegisterEnumDescriptor(_SERPTYPE)

SerpType = enum_type_wrapper.EnumTypeWrapper(_SERPTYPE)
_EVENTTYPE = _descriptor.EnumDescriptor(
  name='EventType',
  full_name='ru.mail.go.webbase.yandex_news.EventType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='search_request', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='search_response', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='search_focus', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='search_blur', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='search_clear', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='search_filter_date', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='search_filter_group', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='search_filter_sort', index=7, number=7,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1586,
  serialized_end=1764,
)
_sym_db.RegisterEnumDescriptor(_EVENTTYPE)

EventType = enum_type_wrapper.EnumTypeWrapper(_EVENTTYPE)
relevance = 0
chronology = 1
document = 0
group = 1
search_request = 0
search_response = 1
search_focus = 2
search_blur = 3
search_clear = 4
search_filter_date = 5
search_filter_group = 6
search_filter_sort = 7



_SEARCHPARAMS = _descriptor.Descriptor(
  name='SearchParams',
  full_name='ru.mail.go.webbase.yandex_news.SearchParams',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='sort_order', full_name='ru.mail.go.webbase.yandex_news.SearchParams.sort_order', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='group', full_name='ru.mail.go.webbase.yandex_news.SearchParams.group', index=1,
      number=2, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='time_from', full_name='ru.mail.go.webbase.yandex_news.SearchParams.time_from', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='time_to', full_name='ru.mail.go.webbase.yandex_news.SearchParams.time_to', index=3,
      number=4, type=5, cpp_type=1, label=1,
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
  serialized_start=62,
  serialized_end=190,
)


_DOCITEM = _descriptor.Descriptor(
  name='DocItem',
  full_name='ru.mail.go.webbase.yandex_news.DocItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='hpos', full_name='ru.mail.go.webbase.yandex_news.DocItem.hpos', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='url', full_name='ru.mail.go.webbase.yandex_news.DocItem.url', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='click', full_name='ru.mail.go.webbase.yandex_news.DocItem.click', index=2,
      number=3, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='click_ts', full_name='ru.mail.go.webbase.yandex_news.DocItem.click_ts', index=3,
      number=4, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_ts', full_name='ru.mail.go.webbase.yandex_news.DocItem.show_ts', index=4,
      number=5, type=5, cpp_type=1, label=2,
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
  serialized_start=192,
  serialized_end=278,
)


_SERPITEM = _descriptor.Descriptor(
  name='SerpItem',
  full_name='ru.mail.go.webbase.yandex_news.SerpItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='ru.mail.go.webbase.yandex_news.SerpItem.type', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pos', full_name='ru.mail.go.webbase.yandex_news.SerpItem.pos', index=1,
      number=2, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='group', full_name='ru.mail.go.webbase.yandex_news.SerpItem.group', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='group_title', full_name='ru.mail.go.webbase.yandex_news.SerpItem.group_title', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='docs', full_name='ru.mail.go.webbase.yandex_news.SerpItem.docs', index=4,
      number=5, type=11, cpp_type=10, label=3,
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
  serialized_start=281,
  serialized_end=451,
)


_USERINFO = _descriptor.Descriptor(
  name='UserInfo',
  full_name='ru.mail.go.webbase.yandex_news.UserInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='yandex_uid', full_name='ru.mail.go.webbase.yandex_news.UserInfo.yandex_uid', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_agent', full_name='ru.mail.go.webbase.yandex_news.UserInfo.user_agent', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ip', full_name='ru.mail.go.webbase.yandex_news.UserInfo.ip', index=2,
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
  serialized_start=453,
  serialized_end=515,
)


_PAGEDOCUMENTITEM = _descriptor.Descriptor(
  name='PageDocumentItem',
  full_name='ru.mail.go.webbase.yandex_news.PageDocumentItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='url', full_name='ru.mail.go.webbase.yandex_news.PageDocumentItem.url', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_lightning', full_name='ru.mail.go.webbase.yandex_news.PageDocumentItem.is_lightning', index=1,
      number=2, type=8, cpp_type=7, label=2,
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
  serialized_start=517,
  serialized_end=570,
)


_PAGEITEM = _descriptor.Descriptor(
  name='PageItem',
  full_name='ru.mail.go.webbase.yandex_news.PageItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='page_url', full_name='ru.mail.go.webbase.yandex_news.PageItem.page_url', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='page', full_name='ru.mail.go.webbase.yandex_news.PageItem.page', index=1,
      number=2, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='urls', full_name='ru.mail.go.webbase.yandex_news.PageItem.urls', index=2,
      number=3, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='page_documents', full_name='ru.mail.go.webbase.yandex_news.PageItem.page_documents', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_ts', full_name='ru.mail.go.webbase.yandex_news.PageItem.show_ts', index=4,
      number=5, type=5, cpp_type=1, label=1,
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
  serialized_start=573,
  serialized_end=720,
)


_EXPERIMENTITEM = _descriptor.Descriptor(
  name='ExperimentItem',
  full_name='ru.mail.go.webbase.yandex_news.ExperimentItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='test_id', full_name='ru.mail.go.webbase.yandex_news.ExperimentItem.test_id', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bucket', full_name='ru.mail.go.webbase.yandex_news.ExperimentItem.bucket', index=1,
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
  serialized_start=722,
  serialized_end=771,
)


_EVENTITEM = _descriptor.Descriptor(
  name='EventItem',
  full_name='ru.mail.go.webbase.yandex_news.EventItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ts', full_name='ru.mail.go.webbase.yandex_news.EventItem.ts', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='ru.mail.go.webbase.yandex_news.EventItem.type', index=1,
      number=2, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='new_search_params', full_name='ru.mail.go.webbase.yandex_news.EventItem.new_search_params', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='new_query', full_name='ru.mail.go.webbase.yandex_news.EventItem.new_query', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='page_url', full_name='ru.mail.go.webbase.yandex_news.EventItem.page_url', index=4,
      number=5, type=9, cpp_type=9, label=1,
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
  serialized_start=774,
  serialized_end=964,
)


_YANDEXNEWSSESSIONITEM = _descriptor.Descriptor(
  name='YandexNewsSessionItem',
  full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='qid', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.qid', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ts', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.ts', index=1,
      number=2, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='query', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.query', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='search_params', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.search_params', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='serp', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.serp', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_info', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.user_info', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pages', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.pages', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='experiments', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.experiments', index=7,
      number=8, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='yandex_suspected_robot', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.yandex_suspected_robot', index=8,
      number=9, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='yandex_robotness', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.yandex_robotness', index=9,
      number=10, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='events', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.events', index=10,
      number=11, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='parent_qid', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.parent_qid', index=11,
      number=12, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bot_by_parent', full_name='ru.mail.go.webbase.yandex_news.YandexNewsSessionItem.bot_by_parent', index=12,
      number=13, type=8, cpp_type=7, label=1,
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
  serialized_start=967,
  serialized_end=1502,
)

_SEARCHPARAMS.fields_by_name['sort_order'].enum_type = _SORTORDER
_SERPITEM.fields_by_name['type'].enum_type = _SERPTYPE
_SERPITEM.fields_by_name['docs'].message_type = _DOCITEM
_PAGEITEM.fields_by_name['page_documents'].message_type = _PAGEDOCUMENTITEM
_EVENTITEM.fields_by_name['type'].enum_type = _EVENTTYPE
_EVENTITEM.fields_by_name['new_search_params'].message_type = _SEARCHPARAMS
_YANDEXNEWSSESSIONITEM.fields_by_name['search_params'].message_type = _SEARCHPARAMS
_YANDEXNEWSSESSIONITEM.fields_by_name['serp'].message_type = _SERPITEM
_YANDEXNEWSSESSIONITEM.fields_by_name['user_info'].message_type = _USERINFO
_YANDEXNEWSSESSIONITEM.fields_by_name['pages'].message_type = _PAGEITEM
_YANDEXNEWSSESSIONITEM.fields_by_name['experiments'].message_type = _EXPERIMENTITEM
_YANDEXNEWSSESSIONITEM.fields_by_name['events'].message_type = _EVENTITEM
DESCRIPTOR.message_types_by_name['SearchParams'] = _SEARCHPARAMS
DESCRIPTOR.message_types_by_name['DocItem'] = _DOCITEM
DESCRIPTOR.message_types_by_name['SerpItem'] = _SERPITEM
DESCRIPTOR.message_types_by_name['UserInfo'] = _USERINFO
DESCRIPTOR.message_types_by_name['PageDocumentItem'] = _PAGEDOCUMENTITEM
DESCRIPTOR.message_types_by_name['PageItem'] = _PAGEITEM
DESCRIPTOR.message_types_by_name['ExperimentItem'] = _EXPERIMENTITEM
DESCRIPTOR.message_types_by_name['EventItem'] = _EVENTITEM
DESCRIPTOR.message_types_by_name['YandexNewsSessionItem'] = _YANDEXNEWSSESSIONITEM
DESCRIPTOR.enum_types_by_name['SortOrder'] = _SORTORDER
DESCRIPTOR.enum_types_by_name['SerpType'] = _SERPTYPE
DESCRIPTOR.enum_types_by_name['EventType'] = _EVENTTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SearchParams = _reflection.GeneratedProtocolMessageType('SearchParams', (_message.Message,), dict(
  DESCRIPTOR = _SEARCHPARAMS,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.SearchParams)
  ))
_sym_db.RegisterMessage(SearchParams)

DocItem = _reflection.GeneratedProtocolMessageType('DocItem', (_message.Message,), dict(
  DESCRIPTOR = _DOCITEM,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.DocItem)
  ))
_sym_db.RegisterMessage(DocItem)

SerpItem = _reflection.GeneratedProtocolMessageType('SerpItem', (_message.Message,), dict(
  DESCRIPTOR = _SERPITEM,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.SerpItem)
  ))
_sym_db.RegisterMessage(SerpItem)

UserInfo = _reflection.GeneratedProtocolMessageType('UserInfo', (_message.Message,), dict(
  DESCRIPTOR = _USERINFO,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.UserInfo)
  ))
_sym_db.RegisterMessage(UserInfo)

PageDocumentItem = _reflection.GeneratedProtocolMessageType('PageDocumentItem', (_message.Message,), dict(
  DESCRIPTOR = _PAGEDOCUMENTITEM,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.PageDocumentItem)
  ))
_sym_db.RegisterMessage(PageDocumentItem)

PageItem = _reflection.GeneratedProtocolMessageType('PageItem', (_message.Message,), dict(
  DESCRIPTOR = _PAGEITEM,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.PageItem)
  ))
_sym_db.RegisterMessage(PageItem)

ExperimentItem = _reflection.GeneratedProtocolMessageType('ExperimentItem', (_message.Message,), dict(
  DESCRIPTOR = _EXPERIMENTITEM,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.ExperimentItem)
  ))
_sym_db.RegisterMessage(ExperimentItem)

EventItem = _reflection.GeneratedProtocolMessageType('EventItem', (_message.Message,), dict(
  DESCRIPTOR = _EVENTITEM,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.EventItem)
  ))
_sym_db.RegisterMessage(EventItem)

YandexNewsSessionItem = _reflection.GeneratedProtocolMessageType('YandexNewsSessionItem', (_message.Message,), dict(
  DESCRIPTOR = _YANDEXNEWSSESSIONITEM,
  __module__ = 'yandex_news_session_pb2'
  # @@protoc_insertion_point(class_scope:ru.mail.go.webbase.yandex_news.YandexNewsSessionItem)
  ))
_sym_db.RegisterMessage(YandexNewsSessionItem)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('B\021YandexNewsSession'))
# @@protoc_insertion_point(module_scope)
