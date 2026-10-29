@interface SettingNotificationMgr : MMUserService <MMServiceProtocol>
{
    MMNotificationSetting * _cachedNotificationSetting; // +0x8
}
+ (BOOL)isApnsContentNewSettingUI;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)refreshSetting;
- (BOOL)checkIsVoipTipsClose;
- (BOOL)checkIsOpenNewVoIPRingToneSound;
- (id)mmkvMapID;
- (BOOL)notificationHeadImgOn;
- (long long)notificationContentSetting;
- (id)getAllPushNotifySettingParams;
- (void)reportPushNotifySettingChangeWithSetting:(long long)arg1;
- (id)cachedNotificationSetting;
- (void)setCachedNotificationSetting:(id)arg1;
- (void).cxx_destruct;
@end
