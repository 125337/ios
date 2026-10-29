@interface BrandServiceDataItem : NSObject <PBCoding>
{
    BOOL _hasSetLocation; // +0x8
    unsigned int _receiveSwitchOffTime; // +0xc
}
+ (void)PBArrayAdd_hasSetLocation;
+ (void)PBArrayAdd_receiveSwitchOffTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)hasSetLocation;
- (void)setHasSetLocation:(BOOL)arg1;
- (unsigned int)receiveSwitchOffTime;
- (void)setReceiveSwitchOffTime:(unsigned int)arg1;
@end
