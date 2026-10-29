@interface BrsNotificationPushUtils : NSObject
+ (BOOL)isWeChatPushClosed;
+ (BOOL)isSystemPushClosed;
+ (BOOL)checkAndShowPushPermissionTipsDialog;
+ (void)gotoNotificationSettingsPage;
+ (void)gotoSystemAppSettingsPage;
+ (void)reportExposeWithPermissionType:(long long)arg1;
+ (void)reportIKnowActionWithPermissionType:(long long)arg1;
+ (void)reportGoToSettingsActionWithPermissionType:(long long)arg1;
@end
