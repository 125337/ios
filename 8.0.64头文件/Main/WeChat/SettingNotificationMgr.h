@interface SettingNotificationMgr : MMUserService <MMServiceProtocol>
+ (BOOL)isApnsContentSettingOpen;
- (BOOL)checkIsVoipTipsClose;
- (BOOL)checkIsOpenNewVoIPRingToneSound;
- (id)mmkvMapID;
- (long long)notificationContentSetting;
@end
