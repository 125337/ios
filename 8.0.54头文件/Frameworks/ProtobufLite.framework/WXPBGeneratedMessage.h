@interface WXPBGeneratedMessage : NSObject <NSCopying>
{
    int[3] has_bits_; // +0x8
    int _serializedSize; // +0x14
    PBClassInfo * _classInfo; // +0x18
    id * _ivarValueDict; // +0x20
}
+ (id)newInitializedInstance;
+ (id)parseFromData:(id)arg1;
+ (id)parseFromJSONObject:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (void)initRequiredField;
- (void)dealloc;
- (int)indexOfPropertyWithGetter:(const char *)arg1;
- (int)indexOfPropertyWithSetter:(const char *)arg1;
- (void)setValue:(id)arg1 atIndex:(int)arg2;
- (id)valueAtIndex:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)hadIncloudeUnKnownField;
- (BOOL)mergeFromData:(id)arg1;
- (id)mergeFromCodedInputData:(CodedInputData *)arg1;
- (id)readValueFromCodedInputData:(CodedInputData *)arg1 fieldType:(unsigned char)arg2;
- (BOOL)isMessageInitialized:(id)arg1;
- (BOOL)isInitialized;
- (id)serializedData;
- (int)serializedSize;
- (int)computeValueSize:(id)arg1 fieldNumber:(int)arg2 fieldType:(unsigned char)arg3;
- (int)computeValueSizeNoTag:(id)arg1 fieldType:(unsigned char)arg2;
- (void)writeToCodedOutputData:(CodedOutputData *)arg1;
- (void)writeValueToCodedOutputData:(CodedOutputData *)arg1 value:(id)arg2 fieldNumber:(int)arg3 fieldType:(unsigned char)arg4;
- (void)writeValueToCodedOutputDataNoTag:(CodedOutputData *)arg1 value:(id)arg2 fieldType:(unsigned char)arg3;
- (void)setBaseRequest:(id)arg1;
- (id)baseResponse;
- (unsigned int)continueFlag;
- (BOOL)hasProperty:(int)arg1;
- (id)toJSONObject;
- (BOOL)mergeFromJSONObject:(id)arg1;
- (id)debugDescription;
- (id)debugDescription2;
@end

