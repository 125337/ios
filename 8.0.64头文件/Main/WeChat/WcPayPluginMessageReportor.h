@interface WcPayPluginMessageReportor : NSObject
+ (void)reportNotifyMessage:(id)arg1 event:(unsigned long long)arg2;
+ (void)reportShowMessage:(id)arg1;
+ (void)reportMessage:(id)arg1 event:(unsigned long long)arg2;
+ (BOOL)isTargetMsg:(id)arg1;
+ (BOOL)isWxPayPlugin:(id)arg1;
+ (BOOL)isAppMsg:(id)arg1;
+ (BOOL)isOpenSwitch;
+ (void)updateReportSwitch;
+ (void)resetData;
@end
