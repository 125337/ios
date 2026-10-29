@interface WNRTEAttributeListInfo : NSObject <NSCopying>
{
    unsigned int index; // +0x8
    unsigned int _headIndex; // +0xc
}
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)headIndex;
- (void)setHeadIndex:(unsigned int)arg1;
@end

