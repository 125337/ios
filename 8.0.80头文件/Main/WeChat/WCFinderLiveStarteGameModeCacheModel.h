@interface WCFinderLiveStarteGameModeCacheModel : NSObject
{
    BOOL _userChange; // +0x8
    unsigned int _cachedJoinTeamMode; // +0xc
    NSString * _appId; // +0x10
    GameTeamUpSpecialGiftSettingDetail * _cachedGameTeamUpSpecialGiftSettingDetail; // +0x18
}
- (void)updateJoinTeamMode:(unsigned int)arg1 userChange:(BOOL)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)userChange;
- (void)setUserChange:(BOOL)arg1;
- (unsigned int)cachedJoinTeamMode;
- (void)setCachedJoinTeamMode:(unsigned int)arg1;
- (id)cachedGameTeamUpSpecialGiftSettingDetail;
- (void)setCachedGameTeamUpSpecialGiftSettingDetail:(id)arg1;
- (void).cxx_destruct;
@end
