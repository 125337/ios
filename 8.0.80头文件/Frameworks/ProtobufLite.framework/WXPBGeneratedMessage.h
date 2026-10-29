@interface WXPBGeneratedMessage : ZTIN6google8protobuf11TestMessageE <NSCopying>
{
    int[3] _hasBits; // +0x8
    int : 31 _serializedSize; // +0x14
    int : 1 _hasUnknownFields; // +0x17
    void * _classInfo; // +0x18
    id * _ivarValueDict; // +0x20
}
+ (id)parseFromJSONObject:(id)arg1;
+ (id)parseFromJSONString:(id)arg1;
+ (id)newInitializedInstance;
+ (id)parseFromData:(id)arg1;
+ (id)parseFromData:(id)arg1 cacheUnknownFields:(BOOL)arg2;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)toJSONObject;
- (BOOL)mergeFromJSONObject:(id)arg1;
- (id)toJSONString;
- (void *)toJSONValue:(void *)arg1;
- (void *)toJSONValue:(void *)arg1 value:(id)arg2 fieldType:(unsigned char)arg3;
- (BOOL)mergeFromJSONString:(id)arg1;
- (BOOL)parseJSONValue:(const void *)arg1;
- (id)parseJSONValue:(const void *)arg1 fieldInfo:(struct *)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (void)initRequiredField;
- (void)dealloc;
- (void)clear;
- (int)indexOfPropertyWithName:(const char *)arg1;
- (int)indexOfPropertyWithGetter:(const char *)arg1;
- (int)indexOfPropertyWithSetter:(const char *)arg1;
- (void)clearOneOfValueByIndex:(int)arg1;
- (void)setValue:(id)arg1 atIndex:(int)arg2;
- (id)valueAtIndex:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)mergeFromData:(id)arg1;
- (BOOL)mergeFromData:(id)arg1 cacheUnknownFields:(BOOL)arg2;
- (BOOL)hasUnknownFields;
- (void)discardUnknownFields;
- (id)unknownFields;
- (void)setUnknownFields:(id)arg1;
- (id)mutableUnknownFields;
- (id)mergeFromCodedInputData:(CodedInputData *)arg1 cacheUnknownFields:(BOOL)arg2;
- (id)readValueFromCodedInputData:(CodedInputData *)arg1 fieldType:(unsigned char)arg2;
- (BOOL)isMessageInitialized:(id)arg1;
- (BOOL)isInitialized;
- (id)serializedData;
- (int)serializedSize;
- (int)computeValueSize:(id)arg1 fieldNumber:(int)arg2 fieldType:(unsigned char)arg3;
- (int)computeValueSizeNoTag:(id)arg1 fieldType:(unsigned char)arg2;
- (int)computeMapValueSize:(id)arg1 fieldNumber:(int)arg2 keyType:(unsigned char)arg3 valueType:(unsigned char)arg4 cachedEntrySizes:(id)arg5;
- (void)writeToCodedOutputData:(CodedOutputData *)arg1;
- (void)writeValueToCodedOutputData:(CodedOutputData *)arg1 value:(id)arg2 fieldNumber:(int)arg3 fieldType:(unsigned char)arg4;
- (void)writeValueToCodedOutputDataNoTag:(CodedOutputData *)arg1 value:(id)arg2 fieldType:(unsigned char)arg3;
- (void)writeMapValueToCodedOutputData:(CodedOutputData *)arg1 value:(id)arg2 fieldNumber:(int)arg3 keyType:(unsigned char)arg4 valueType:(unsigned char)arg5;
- (void)setBaseRequest:(id)arg1;
- (id)baseResponse;
- (unsigned int)continueFlag;
- (BOOL)hasProperty:(int)arg1;
- (id)debugDescription;
- (id)debugDescription2;
@end
