@interface GameCenterGlobalSettingFetchInfo : MMObject <PBCoding>
{
    unsigned int _lastGlobalSettingFetchTime; // +0x8
}
+ (void)PBArrayAdd_lastGlobalSettingFetchTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)lastGlobalSettingFetchTime;
- (void)setLastGlobalSettingFetchTime:(unsigned int)arg1;
@end
