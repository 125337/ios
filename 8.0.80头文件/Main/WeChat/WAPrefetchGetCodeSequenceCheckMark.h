@interface WAPrefetchGetCodeSequenceCheckMark : NSObject <PBCoding>
{
    unsigned int _expirationTimeStamp; // +0x8
}
+ (void)PBArrayAdd_expirationTimeStamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)expirationTimeStamp;
- (void)setExpirationTimeStamp:(unsigned int)arg1;
@end
