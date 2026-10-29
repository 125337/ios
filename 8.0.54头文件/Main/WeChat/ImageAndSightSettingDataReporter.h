@interface ImageAndSightSettingDataReporter : NSObject
+ (void)reportDataAtLaunchSuccess;
+ (void)reportDataAtLeaveSettingController;
+ (void)reportDataAtScene:(unsigned long long)arg1;
+ (void)reportDataAtOptionChanged:(unsigned long long)arg1 isSwitchOn:(BOOL)arg2;
@end

