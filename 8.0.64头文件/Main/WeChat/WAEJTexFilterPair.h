@interface WAEJTexFilterPair : NSObject <NSCopying>
{
    unsigned int _format; // +0x8
    unsigned int _type; // +0xc
}
- (id)initWithFormat:(unsigned int)arg1 type:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)format;
- (void)setFormat:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
@end
