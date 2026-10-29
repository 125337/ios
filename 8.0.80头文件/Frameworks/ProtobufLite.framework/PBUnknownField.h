@interface PBUnknownField : ZTIN6google8protobuf11TestMessageE <NSCopying>
{
    int _number; // +0x8
    int _type; // +0xc
    union _storage; // +0x10
}
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)varint;
- (void)setVarint:(unsigned long long)arg1;
- (unsigned int)fixed32;
- (void)setFixed32:(unsigned int)arg1;
- (unsigned long long)fixed64;
- (void)setFixed64:(unsigned long long)arg1;
- (id)lengthDelimited;
- (void)setLengthDelimited:(id)arg1;
- (int)number;
- (void)setNumber:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
@end
