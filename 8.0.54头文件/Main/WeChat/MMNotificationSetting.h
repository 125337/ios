@interface MMNotificationSetting : NSObject
{
    BOOL _isAlertSettingOn; // +0x8
    BOOL _isNotificationCenterSettingOn; // +0x9
    BOOL _isLockScreenSettingOn; // +0xa
    BOOL _isSoundSettingOn; // +0xb
    BOOL _isBadgeSettingOn; // +0xc
    BOOL _isNeverShowPushDetail; // +0xd
    long long _showPreviewsSetting; // +0x10
    long long _alertStyle; // +0x18
    long long _authorizationStatus; // +0x20
}
- (BOOL)canShowAlert;
- (BOOL)isAllSettingOff;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)isAlertSettingOn;
- (void)setIsAlertSettingOn:(BOOL)arg1;
- (BOOL)isNotificationCenterSettingOn;
- (void)setIsNotificationCenterSettingOn:(BOOL)arg1;
- (BOOL)isLockScreenSettingOn;
- (void)setIsLockScreenSettingOn:(BOOL)arg1;
- (BOOL)isSoundSettingOn;
- (void)setIsSoundSettingOn:(BOOL)arg1;
- (BOOL)isBadgeSettingOn;
- (void)setIsBadgeSettingOn:(BOOL)arg1;
- (BOOL)isNeverShowPushDetail;
- (void)setIsNeverShowPushDetail:(BOOL)arg1;
- (long long)showPreviewsSetting;
- (void)setShowPreviewsSetting:(long long)arg1;
- (long long)alertStyle;
- (void)setAlertStyle:(long long)arg1;
- (long long)authorizationStatus;
- (void)setAuthorizationStatus:(long long)arg1;
@end

