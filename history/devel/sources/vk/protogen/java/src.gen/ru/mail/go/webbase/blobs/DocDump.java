// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: doc_dump.proto

package ru.mail.go.webbase.blobs;

public final class DocDump {
  private DocDump() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
  }
  public interface DocContentOrBuilder
      extends com.google.protobuf.MessageOrBuilder {

    // required string url = 1;
    /**
     * <code>required string url = 1;</code>
     */
    boolean hasUrl();
    /**
     * <code>required string url = 1;</code>
     */
    java.lang.String getUrl();
    /**
     * <code>required string url = 1;</code>
     */
    com.google.protobuf.ByteString
        getUrlBytes();

    // required int64 ts = 2;
    /**
     * <code>required int64 ts = 2;</code>
     */
    boolean hasTs();
    /**
     * <code>required int64 ts = 2;</code>
     */
    long getTs();

    // required bytes content = 3;
    /**
     * <code>required bytes content = 3;</code>
     */
    boolean hasContent();
    /**
     * <code>required bytes content = 3;</code>
     */
    com.google.protobuf.ByteString getContent();
  }
  /**
   * Protobuf type {@code ru.mail.go.webbase.blobs.DocContent}
   */
  public static final class DocContent extends
      com.google.protobuf.GeneratedMessage
      implements DocContentOrBuilder {
    // Use DocContent.newBuilder() to construct.
    private DocContent(com.google.protobuf.GeneratedMessage.Builder<?> builder) {
      super(builder);
      this.unknownFields = builder.getUnknownFields();
    }
    private DocContent(boolean noInit) { this.unknownFields = com.google.protobuf.UnknownFieldSet.getDefaultInstance(); }

    private static final DocContent defaultInstance;
    public static DocContent getDefaultInstance() {
      return defaultInstance;
    }

    public DocContent getDefaultInstanceForType() {
      return defaultInstance;
    }

    private final com.google.protobuf.UnknownFieldSet unknownFields;
    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
        getUnknownFields() {
      return this.unknownFields;
    }
    private DocContent(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      initFields();
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownField(input, unknownFields,
                                     extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              bitField0_ |= 0x00000001;
              url_ = input.readBytes();
              break;
            }
            case 16: {
              bitField0_ |= 0x00000002;
              ts_ = input.readInt64();
              break;
            }
            case 26: {
              bitField0_ |= 0x00000004;
              content_ = input.readBytes();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e.getMessage()).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return ru.mail.go.webbase.blobs.DocDump.internal_static_ru_mail_go_webbase_blobs_DocContent_descriptor;
    }

    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return ru.mail.go.webbase.blobs.DocDump.internal_static_ru_mail_go_webbase_blobs_DocContent_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              ru.mail.go.webbase.blobs.DocDump.DocContent.class, ru.mail.go.webbase.blobs.DocDump.DocContent.Builder.class);
    }

    public static com.google.protobuf.Parser<DocContent> PARSER =
        new com.google.protobuf.AbstractParser<DocContent>() {
      public DocContent parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new DocContent(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<DocContent> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // required string url = 1;
    public static final int URL_FIELD_NUMBER = 1;
    private java.lang.Object url_;
    /**
     * <code>required string url = 1;</code>
     */
    public boolean hasUrl() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required string url = 1;</code>
     */
    public java.lang.String getUrl() {
      java.lang.Object ref = url_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        if (bs.isValidUtf8()) {
          url_ = s;
        }
        return s;
      }
    }
    /**
     * <code>required string url = 1;</code>
     */
    public com.google.protobuf.ByteString
        getUrlBytes() {
      java.lang.Object ref = url_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        url_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    // required int64 ts = 2;
    public static final int TS_FIELD_NUMBER = 2;
    private long ts_;
    /**
     * <code>required int64 ts = 2;</code>
     */
    public boolean hasTs() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required int64 ts = 2;</code>
     */
    public long getTs() {
      return ts_;
    }

    // required bytes content = 3;
    public static final int CONTENT_FIELD_NUMBER = 3;
    private com.google.protobuf.ByteString content_;
    /**
     * <code>required bytes content = 3;</code>
     */
    public boolean hasContent() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>required bytes content = 3;</code>
     */
    public com.google.protobuf.ByteString getContent() {
      return content_;
    }

    private void initFields() {
      url_ = "";
      ts_ = 0L;
      content_ = com.google.protobuf.ByteString.EMPTY;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      if (!hasUrl()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasTs()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasContent()) {
        memoizedIsInitialized = 0;
        return false;
      }
      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeBytes(1, getUrlBytes());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeInt64(2, ts_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeBytes(3, content_);
      }
      getUnknownFields().writeTo(output);
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(1, getUrlBytes());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, ts_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(3, content_);
      }
      size += getUnknownFields().getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }

    private static final long serialVersionUID = 0L;
    @java.lang.Override
    protected java.lang.Object writeReplace()
        throws java.io.ObjectStreamException {
      return super.writeReplace();
    }

    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static ru.mail.go.webbase.blobs.DocDump.DocContent parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(ru.mail.go.webbase.blobs.DocDump.DocContent prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessage.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code ru.mail.go.webbase.blobs.DocContent}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessage.Builder<Builder>
       implements ru.mail.go.webbase.blobs.DocDump.DocContentOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return ru.mail.go.webbase.blobs.DocDump.internal_static_ru_mail_go_webbase_blobs_DocContent_descriptor;
      }

      protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return ru.mail.go.webbase.blobs.DocDump.internal_static_ru_mail_go_webbase_blobs_DocContent_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                ru.mail.go.webbase.blobs.DocDump.DocContent.class, ru.mail.go.webbase.blobs.DocDump.DocContent.Builder.class);
      }

      // Construct using ru.mail.go.webbase.blobs.DocDump.DocContent.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessage.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessage.alwaysUseFieldBuilders) {
        }
      }
      private static Builder create() {
        return new Builder();
      }

      public Builder clear() {
        super.clear();
        url_ = "";
        bitField0_ = (bitField0_ & ~0x00000001);
        ts_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000002);
        content_ = com.google.protobuf.ByteString.EMPTY;
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return ru.mail.go.webbase.blobs.DocDump.internal_static_ru_mail_go_webbase_blobs_DocContent_descriptor;
      }

      public ru.mail.go.webbase.blobs.DocDump.DocContent getDefaultInstanceForType() {
        return ru.mail.go.webbase.blobs.DocDump.DocContent.getDefaultInstance();
      }

      public ru.mail.go.webbase.blobs.DocDump.DocContent build() {
        ru.mail.go.webbase.blobs.DocDump.DocContent result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public ru.mail.go.webbase.blobs.DocDump.DocContent buildPartial() {
        ru.mail.go.webbase.blobs.DocDump.DocContent result = new ru.mail.go.webbase.blobs.DocDump.DocContent(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.url_ = url_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.ts_ = ts_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.content_ = content_;
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof ru.mail.go.webbase.blobs.DocDump.DocContent) {
          return mergeFrom((ru.mail.go.webbase.blobs.DocDump.DocContent)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(ru.mail.go.webbase.blobs.DocDump.DocContent other) {
        if (other == ru.mail.go.webbase.blobs.DocDump.DocContent.getDefaultInstance()) return this;
        if (other.hasUrl()) {
          bitField0_ |= 0x00000001;
          url_ = other.url_;
          onChanged();
        }
        if (other.hasTs()) {
          setTs(other.getTs());
        }
        if (other.hasContent()) {
          setContent(other.getContent());
        }
        this.mergeUnknownFields(other.getUnknownFields());
        return this;
      }

      public final boolean isInitialized() {
        if (!hasUrl()) {
          
          return false;
        }
        if (!hasTs()) {
          
          return false;
        }
        if (!hasContent()) {
          
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        ru.mail.go.webbase.blobs.DocDump.DocContent parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (ru.mail.go.webbase.blobs.DocDump.DocContent) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // required string url = 1;
      private java.lang.Object url_ = "";
      /**
       * <code>required string url = 1;</code>
       */
      public boolean hasUrl() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required string url = 1;</code>
       */
      public java.lang.String getUrl() {
        java.lang.Object ref = url_;
        if (!(ref instanceof java.lang.String)) {
          java.lang.String s = ((com.google.protobuf.ByteString) ref)
              .toStringUtf8();
          url_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>required string url = 1;</code>
       */
      public com.google.protobuf.ByteString
          getUrlBytes() {
        java.lang.Object ref = url_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          url_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>required string url = 1;</code>
       */
      public Builder setUrl(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
        url_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>required string url = 1;</code>
       */
      public Builder clearUrl() {
        bitField0_ = (bitField0_ & ~0x00000001);
        url_ = getDefaultInstance().getUrl();
        onChanged();
        return this;
      }
      /**
       * <code>required string url = 1;</code>
       */
      public Builder setUrlBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
        url_ = value;
        onChanged();
        return this;
      }

      // required int64 ts = 2;
      private long ts_ ;
      /**
       * <code>required int64 ts = 2;</code>
       */
      public boolean hasTs() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required int64 ts = 2;</code>
       */
      public long getTs() {
        return ts_;
      }
      /**
       * <code>required int64 ts = 2;</code>
       */
      public Builder setTs(long value) {
        bitField0_ |= 0x00000002;
        ts_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>required int64 ts = 2;</code>
       */
      public Builder clearTs() {
        bitField0_ = (bitField0_ & ~0x00000002);
        ts_ = 0L;
        onChanged();
        return this;
      }

      // required bytes content = 3;
      private com.google.protobuf.ByteString content_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>required bytes content = 3;</code>
       */
      public boolean hasContent() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>required bytes content = 3;</code>
       */
      public com.google.protobuf.ByteString getContent() {
        return content_;
      }
      /**
       * <code>required bytes content = 3;</code>
       */
      public Builder setContent(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000004;
        content_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>required bytes content = 3;</code>
       */
      public Builder clearContent() {
        bitField0_ = (bitField0_ & ~0x00000004);
        content_ = getDefaultInstance().getContent();
        onChanged();
        return this;
      }

      // @@protoc_insertion_point(builder_scope:ru.mail.go.webbase.blobs.DocContent)
    }

    static {
      defaultInstance = new DocContent(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.blobs.DocContent)
  }

  private static com.google.protobuf.Descriptors.Descriptor
    internal_static_ru_mail_go_webbase_blobs_DocContent_descriptor;
  private static
    com.google.protobuf.GeneratedMessage.FieldAccessorTable
      internal_static_ru_mail_go_webbase_blobs_DocContent_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\016doc_dump.proto\022\030ru.mail.go.webbase.blo" +
      "bs\"6\n\nDocContent\022\013\n\003url\030\001 \002(\t\022\n\n\002ts\030\002 \002(" +
      "\003\022\017\n\007content\030\003 \002(\014B\tB\007DocDump"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
      new com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner() {
        public com.google.protobuf.ExtensionRegistry assignDescriptors(
            com.google.protobuf.Descriptors.FileDescriptor root) {
          descriptor = root;
          internal_static_ru_mail_go_webbase_blobs_DocContent_descriptor =
            getDescriptor().getMessageTypes().get(0);
          internal_static_ru_mail_go_webbase_blobs_DocContent_fieldAccessorTable = new
            com.google.protobuf.GeneratedMessage.FieldAccessorTable(
              internal_static_ru_mail_go_webbase_blobs_DocContent_descriptor,
              new java.lang.String[] { "Url", "Ts", "Content", });
          return null;
        }
      };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
  }

  // @@protoc_insertion_point(outer_class_scope)
}