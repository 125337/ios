@interface SessionStorageSetting : NSObject <PBCoding>
{
    BOOL _isHasRecord; // +0x8
    unsigned int _sessionVersion; // +0xc
}
+ (void)PBArrayAdd_isHasRecord;
+ (void)PBArrayAdd_sessionVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isHasRecord;
- (void)setIsHasRecord:(BOOL)arg1;
- (unsigned int)sessionVersion;
- (void)setSessionVersion:(unsigned int)arg1;
@end
