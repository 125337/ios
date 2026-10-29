@interface PBCoder : NSObject
{
    id <PBCoding> m_obj; // +0x8
    BOOL m_isTopObject; // +0x10
    NSData * m_inputData; // +0x18
    CodedInputData * m_inputStream; // +0x20
    NSNumberFormatter * m_numberFormatter; // +0x28
    NSMutableData * m_outputData; // +0x30
    CodedOutputData * m_outputStream; // +0x38
    void * m_encodeItems; // +0x40
}
+ (id)encodeObject:(id)arg1 withPropertyTable:(id)arg2;
+ (BOOL)encodeObject:(id)arg1 withPropertyTable:(id)arg2 toFile:(id)arg3;
+ (BOOL)decodeObject:(id)arg1 fromData:(id)arg2 withProperty:(id)arg3 andTagIndexMap:(const void *)arg4;
+ (id)encodeDataWithObject:(id)arg1;
+ (id)encodeDataWithSizeForObject:(id)arg1;
+ (BOOL)encodeObject:(id)arg1 toFile:(id)arg2;
+ (id)decodeObjectOfClass:(Class)arg1 fromFile:(id)arg2;
+ (id)decodeObjectOfClass:(Class)arg1 fromData:(id)arg2;
+ (BOOL)decodeObject:(id)arg1 fromFile:(id)arg2;
+ (BOOL)decodeObject:(id)arg1 fromData:(id)arg2;
+ (id)decodeContainerOfClass:(Class)arg1 withValueClass:(Class)arg2 fromFile:(id)arg3;
+ (id)decodeContainerOfClass:(Class)arg1 withValueClass:(Class)arg2 fromData:(id)arg3;
+ (BOOL)appendData:(id)arg1 toPath:(id)arg2;
+ (long long)getFiLeSize:(id)arg1;
+ (BOOL)appendOneArrayValue:(id)arg1 toFile:(id)arg2;
+ (BOOL)appendOneSetValue:(id)arg1 toFile:(id)arg2;
+ (BOOL)appendOneDictionaryValue:(id)arg1 forKey:(id)arg2 toFile:(id)arg3;
+ (BOOL)appendArray:(id)arg1 toFile:(id)arg2;
+ (BOOL)appendSet:(id)arg1 toFile:(id)arg2;
+ (BOOL)appendDictionary:(id)arg1 toFile:(id)arg2;
+ (BOOL)appendOneArrayValue:(id)arg1 toData:(id)arg2;
+ (BOOL)appendOneSetValue:(id)arg1 toData:(id)arg2;
+ (BOOL)appendOneDictionaryValue:(id)arg1 forKey:(id)arg2 toData:(id)arg3;
+ (BOOL)appendArray:(id)arg1 toData:(id)arg2;
+ (BOOL)appendSet:(id)arg1 toData:(id)arg2;
+ (BOOL)appendDictionary:(id)arg1 toData:(id)arg2;
- (id)initForReadingWithData:(id)arg1;
- (id)initForWritingWithTarget:(id)arg1;
- (void)dealloc;
- (void)writeRootObject;
- (unsigned long long)prepareCPropertyForEndcode:(id)arg1 withTarget:(id)arg2;
- (unsigned long long)prepareCValueForEndcode:(int)arg1 withValue:(id)arg2 withTag:(unsigned int)arg3;
- (unsigned long long)prepareBasicObjectForEncode:(id)arg1 withPropertyType:(id)arg2;
- (unsigned long long)prepareUnPackedContainerForEncode:(id)arg1 withPropertyIndex:(int)arg2 withSubCType:(int)arg3;
- (unsigned long long)preparePBObjectForEncode:(id)arg1 withPropertyTable:(id)arg2;
- (unsigned long long)prepareObjectForEncode:(id)arg1 withPropertyType:(id)arg2;
- (id)getEncodeDataWithForceWriteSize:(BOOL)arg1;
- (id)getEncodeDataWithPropertyTable:(id)arg1;
- (id)decodeOneValueOfCType:(int)arg1;
- (id)decodeOneArrayOfValueClass:(Class)arg1 orValueCType:(int)arg2 ignoreSize:(BOOL)arg3;
- (id)decodeOneSetOfValueClass:(Class)arg1 orValueCType:(int)arg2 ignoreSize:(BOOL)arg3;
- (id)decodeOneDictionaryOfValueClass:(Class)arg1 orValueCType:(int)arg2 ignoreSize:(BOOL)arg3;
- (void)decodeOne_C_Property:(id)arg1 ofObject:(id)arg2;
- (void)decodeOneProperty:(id)arg1 ofObject:(id)arg2;
- (void)decodeObject:(id)arg1 withProperty:(id)arg2 andTagIndexMap:(const void *)arg3;
- (id)decodeOneObject:(id)arg1 ofClass:(Class)arg2;
- (id)decodeOneObject:(id)arg1 withProperty:(id)arg2 andTagIndexMap:(const void *)arg3;
- (void).cxx_destruct;
@end

