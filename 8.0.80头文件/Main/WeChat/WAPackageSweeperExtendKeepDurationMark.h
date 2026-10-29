@interface WAPackageSweeperExtendKeepDurationMark : NSObject <PBCoding>
{
    unsigned int _expirationTimeStamp; // +0x8
    unsigned int _aboveVersion; // +0xc
}
+ (void)PBArrayAdd_expirationTimeStamp;
+ (void)PBArrayAdd_aboveVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)expirationTimeStamp;
- (void)setExpirationTimeStamp:(unsigned int)arg1;
- (unsigned int)aboveVersion;
- (void)setAboveVersion:(unsigned int)arg1;
@end
