// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hydra_url_options.proto

package ru.mail.go.webbase.blobs;

public final class HydraUrlOptionsBlob {
  private HydraUrlOptionsBlob() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
  }
  public interface HydraUrlOptionsOrBuilder
      extends com.google.protobuf.MessageOrBuilder {

    // optional string proxyGroup = 1;
    /**
     * <code>optional string proxyGroup = 1;</code>
     */
    boolean hasProxyGroup();
    /**
     * <code>optional string proxyGroup = 1;</code>
     */
    java.lang.String getProxyGroup();
    /**
     * <code>optional string proxyGroup = 1;</code>
     */
    com.google.protobuf.ByteString
        getProxyGroupBytes();

    // optional bool skipRobots = 2 [default = false];
    /**
     * <code>optional bool skipRobots = 2 [default = false];</code>
     */
    boolean hasSkipRobots();
    /**
     * <code>optional bool skipRobots = 2 [default = false];</code>
     */
    boolean getSkipRobots();
  }
  /**
   * Protobuf type {@code ru.mail.go.webbase.blobs.HydraUrlOptions}
   */
  public static final class HydraUrlOptions extends
      com.google.protobuf.GeneratedMessage
      implements HydraUrlOptionsOrBuilder {
    // Use HydraUrlOptions.newBuilder() to construct.
    private HydraUrlOptions(com.google.protobuf.GeneratedMessage.Builder<?> builder) {
      super(builder);
      this.unknownFields = builder.getUnknownFields();
    }
    private HydraUrlOptions(boolean noInit) { this.unknownFields = com.google.protobuf.UnknownFieldSet.getDefaultInstance(); }

    private static final HydraUrlOptions defaultInstance;
    public static HydraUrlOptions getDefaultInstance() {
      return defaultInstance;
    }

    public HydraUrlOptions getDefaultInstanceForType() {
      return defaultInstance;
    }

    private final com.google.protobuf.UnknownFieldSet unknownFields;
    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
        getUnknownFields() {
      return this.unknownFields;
    }
    private HydraUrlOptions(
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
              proxyGroup_ = input.readBytes();
              break;
            }
            case 16: {
              bitField0_ |= 0x00000002;
              skipRobots_ = input.readBool();
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
      return ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_descriptor;
    }

    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions.class, ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions.Builder.class);
    }

    public static com.google.protobuf.Parser<HydraUrlOptions> PARSER =
        new com.google.protobuf.AbstractParser<HydraUrlOptions>() {
      public HydraUrlOptions parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new HydraUrlOptions(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<HydraUrlOptions> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    // optional string proxyGroup = 1;
    public static final int PROXYGROUP_FIELD_NUMBER = 1;
    private java.lang.Object proxyGroup_;
    /**
     * <code>optional string proxyGroup = 1;</code>
     */
    public boolean hasProxyGroup() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>optional string proxyGroup = 1;</code>
     */
    public java.lang.String getProxyGroup() {
      java.lang.Object ref = proxyGroup_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        if (bs.isValidUtf8()) {
          proxyGroup_ = s;
        }
        return s;
      }
    }
    /**
     * <code>optional string proxyGroup = 1;</code>
     */
    public com.google.protobuf.ByteString
        getProxyGroupBytes() {
      java.lang.Object ref = proxyGroup_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        proxyGroup_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    // optional bool skipRobots = 2 [default = false];
    public static final int SKIPROBOTS_FIELD_NUMBER = 2;
    private boolean skipRobots_;
    /**
     * <code>optional bool skipRobots = 2 [default = false];</code>
     */
    public boolean hasSkipRobots() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>optional bool skipRobots = 2 [default = false];</code>
     */
    public boolean getSkipRobots() {
      return skipRobots_;
    }

    private void initFields() {
      proxyGroup_ = "";
      skipRobots_ = false;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeBytes(1, getProxyGroupBytes());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeBool(2, skipRobots_);
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
          .computeBytesSize(1, getProxyGroupBytes());
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBoolSize(2, skipRobots_);
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

    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions prototype) {
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
     * Protobuf type {@code ru.mail.go.webbase.blobs.HydraUrlOptions}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessage.Builder<Builder>
       implements ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptionsOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_descriptor;
      }

      protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions.class, ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions.Builder.class);
      }

      // Construct using ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions.newBuilder()
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
        proxyGroup_ = "";
        bitField0_ = (bitField0_ & ~0x00000001);
        skipRobots_ = false;
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_descriptor;
      }

      public ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions getDefaultInstanceForType() {
        return ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions.getDefaultInstance();
      }

      public ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions build() {
        ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions buildPartial() {
        ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions result = new ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.proxyGroup_ = proxyGroup_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.skipRobots_ = skipRobots_;
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions) {
          return mergeFrom((ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions other) {
        if (other == ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions.getDefaultInstance()) return this;
        if (other.hasProxyGroup()) {
          bitField0_ |= 0x00000001;
          proxyGroup_ = other.proxyGroup_;
          onChanged();
        }
        if (other.hasSkipRobots()) {
          setSkipRobots(other.getSkipRobots());
        }
        this.mergeUnknownFields(other.getUnknownFields());
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (ru.mail.go.webbase.blobs.HydraUrlOptionsBlob.HydraUrlOptions) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      // optional string proxyGroup = 1;
      private java.lang.Object proxyGroup_ = "";
      /**
       * <code>optional string proxyGroup = 1;</code>
       */
      public boolean hasProxyGroup() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>optional string proxyGroup = 1;</code>
       */
      public java.lang.String getProxyGroup() {
        java.lang.Object ref = proxyGroup_;
        if (!(ref instanceof java.lang.String)) {
          java.lang.String s = ((com.google.protobuf.ByteString) ref)
              .toStringUtf8();
          proxyGroup_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>optional string proxyGroup = 1;</code>
       */
      public com.google.protobuf.ByteString
          getProxyGroupBytes() {
        java.lang.Object ref = proxyGroup_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          proxyGroup_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>optional string proxyGroup = 1;</code>
       */
      public Builder setProxyGroup(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
        proxyGroup_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>optional string proxyGroup = 1;</code>
       */
      public Builder clearProxyGroup() {
        bitField0_ = (bitField0_ & ~0x00000001);
        proxyGroup_ = getDefaultInstance().getProxyGroup();
        onChanged();
        return this;
      }
      /**
       * <code>optional string proxyGroup = 1;</code>
       */
      public Builder setProxyGroupBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
        proxyGroup_ = value;
        onChanged();
        return this;
      }

      // optional bool skipRobots = 2 [default = false];
      private boolean skipRobots_ ;
      /**
       * <code>optional bool skipRobots = 2 [default = false];</code>
       */
      public boolean hasSkipRobots() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>optional bool skipRobots = 2 [default = false];</code>
       */
      public boolean getSkipRobots() {
        return skipRobots_;
      }
      /**
       * <code>optional bool skipRobots = 2 [default = false];</code>
       */
      public Builder setSkipRobots(boolean value) {
        bitField0_ |= 0x00000002;
        skipRobots_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>optional bool skipRobots = 2 [default = false];</code>
       */
      public Builder clearSkipRobots() {
        bitField0_ = (bitField0_ & ~0x00000002);
        skipRobots_ = false;
        onChanged();
        return this;
      }

      // @@protoc_insertion_point(builder_scope:ru.mail.go.webbase.blobs.HydraUrlOptions)
    }

    static {
      defaultInstance = new HydraUrlOptions(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:ru.mail.go.webbase.blobs.HydraUrlOptions)
  }

  private static com.google.protobuf.Descriptors.Descriptor
    internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_descriptor;
  private static
    com.google.protobuf.GeneratedMessage.FieldAccessorTable
      internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\027hydra_url_options.proto\022\030ru.mail.go.we" +
      "bbase.blobs\"@\n\017HydraUrlOptions\022\022\n\nproxyG" +
      "roup\030\001 \001(\t\022\031\n\nskipRobots\030\002 \001(\010:\005falseB\025B" +
      "\023HydraUrlOptionsBlob"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
      new com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner() {
        public com.google.protobuf.ExtensionRegistry assignDescriptors(
            com.google.protobuf.Descriptors.FileDescriptor root) {
          descriptor = root;
          internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_descriptor =
            getDescriptor().getMessageTypes().get(0);
          internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_fieldAccessorTable = new
            com.google.protobuf.GeneratedMessage.FieldAccessorTable(
              internal_static_ru_mail_go_webbase_blobs_HydraUrlOptions_descriptor,
              new java.lang.String[] { "ProxyGroup", "SkipRobots", });
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
