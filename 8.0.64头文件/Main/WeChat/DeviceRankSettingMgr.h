@interface DeviceRankSettingMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    DeviceRankSetting * _rankSetting; // +0x8
    BOOL bSettingChanged; // +0x10
}
- (id)init;
- (id)getRankSettingFilePath;
- (void)loadRankSetting;
- (void)saveRankSetting;
- (BOOL)NeedRecordDataNotify;
- (void)SetRecordDataNotify:(BOOL)arg1;
- (BOOL)NeedRankNotify;
- (void)SetRankNotify:(BOOL)arg1;
- (BOOL)NeedLikeNotify;
- (void)SetLikeNotify:(BOOL)arg1;
- (BOOL)NeedTakePartIn;
- (void)SetTakePartIn:(BOOL)arg1;
- (void)UpdateSettingFromSVR;
- (void)UpdateSettingTOSVR;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
