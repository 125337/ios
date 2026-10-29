@interface WeVisSettingReporter : NSObject
+ (void)reportWithInfo:(id)arg1 action:(int)arg2 cgiSettingsInfo:(id)arg3 scene:(id)arg4;
+ (void)reportCgiFail;
+ (void)reportLoadingFail;
+ (void)reportSingleAction:(int)arg1;
+ (void)reportSysMsgCgi;
+ (void)reportSettingUsage:(id)arg1 scene:(int)arg2;
+ (void)reportSettingInfo:(id)arg1 scene:(int)arg2;
@end

