@interface WCFinderLiveIdentityModel : NSObject <PBCoding>
{
    NSArray * _aliasInfoArray; // +0x8
    unsigned long long _currentAliasRoleType; // +0x10
    unsigned long long _aliasRoleModAvailableTime; // +0x18
}
+ (void)PBArrayAdd_currentAliasRoleType;
+ (void)PBArrayAdd_aliasInfoArray;
+ (void)PBArrayAdd_aliasRoleModAvailableTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)currentAliasInfo;
- (BOOL)isValid;
- (id)aliasInfoArray;
- (void)setAliasInfoArray:(id)arg1;
- (unsigned long long)currentAliasRoleType;
- (void)setCurrentAliasRoleType:(unsigned long long)arg1;
- (unsigned long long)aliasRoleModAvailableTime;
- (void)setAliasRoleModAvailableTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

