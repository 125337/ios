@interface WxpayKitReportContextRegistry : NSObject
+ (void)initialize;
+ (void)openCall:(unsigned long long)arg1 scene:(id)arg2;
+ (void)openCall:(unsigned long long)arg1 scene:(id)arg2 openContext:(id)arg3;
+ (void)openCall:(unsigned long long)arg1 scene:(id)arg2 resolvedOpenContext:(id)arg3;
+ (void)openCall:(unsigned long long)arg1 scene:(id)arg2 resolvedOpenContext:(id)arg3 nativeSessionId:(id)arg4;
+ (long long)spanForCall:(unsigned long long)arg1;
+ (long long)elapsedMsForCall:(unsigned long long)arg1;
+ (BOOL)claimFaultForCall:(unsigned long long)arg1;
+ (void)openPreloadScope:(unsigned long long)arg1 context:(id)arg2;
+ (void)setAppVer:(id)arg1 forCall:(unsigned long long)arg2;
+ (BOOL)claimContentFirstFrameForCall:(unsigned long long)arg1;
+ (void)attachEngineForCall:(unsigned long long)arg1 appUuid:(unsigned int)arg2 sessionId:(id)arg3 appId:(id)arg4 appVer:(id)arg5;
+ (id)contextForCall:(unsigned long long)arg1;
+ (id)contextForAppUuid:(unsigned int)arg1;
+ (void)releaseCall:(unsigned long long)arg1;
+ (void)resetForTest;
@end
