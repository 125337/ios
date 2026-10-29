@interface PBUnknownFieldSet : ZTIN6google8protobuf11TestMessageE <NSCopying>
{
    NSMutableDictionary * _fields; // +0x8
}
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)clear;
- (int)fieldCount;
- (id)ensureFields;
- (void)addVarint:(unsigned long long)arg1 number:(int)arg2;
- (void)addFixed32:(unsigned int)arg1 number:(int)arg2;
- (void)addFixed64:(unsigned long long)arg1 number:(int)arg2;
- (void)addLengthDelimited:(id)arg1 number:(int)arg2;
- (void)deleteByNumber:(int)arg1;
- (int)serializedSize;
- (BOOL)mergeFieldFrom:(int)arg1 input:(CodedInputData *)arg2;
- (void)writeToCodedOutputData:(CodedOutputData *)arg1;
@end
