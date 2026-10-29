@interface MMOOMCrashReport : NSObject
+ (id)rebootTypeString:(unsigned long long)arg1;
+ (void)checkAndReport;
+ (void)setScene:(id)arg1;
+ (id)lastScene;
+ (void)setWeAppName:(id)arg1;
+ (id)lastWeAppName;
+ (void)userHasWatch:(BOOL)arg1;
+ (void)reportIDKeyData:(unsigned long long)arg1;
+ (void)reportKVData:(unsigned long long)arg1;
+ (void)reportFoomScene;
+ (void)reportWeAppFoomScene;
+ (void)reportWeAppBoomScene;
+ (void)reportWeAppSuspendOOMScene;
+ (void)reportWeAppCrashScene;
+ (void)reportWeAppQualityIssueForAppid:(id)arg1 nickname:(id)arg2 inScene:(id)arg3;
+ (void)reportLiveScene:(id)arg1;
+ (void)repotWCFinderScene:(id)arg1;
+ (void)logFinderOrLiveKV:(id)arg1;
+ (void)clearFinderKV;
+ (void)reportFinderExitReason:(unsigned long long)arg1;
@end

