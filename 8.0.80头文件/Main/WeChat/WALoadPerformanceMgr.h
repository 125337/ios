@interface WALoadPerformanceMgr : MMUserService <MMServiceProtocol>
{
    unsigned long long _lanchStartTimeStamp; // +0x8
    unsigned long long _navigateToStartTimeStamp; // +0x10
    unsigned long long _redirectToStartTimeStamp; // +0x18
    unsigned long long _switchTabTimeStamp; // +0x20
    unsigned long long _lastWebviewID; // +0x28
    long long _lastActionType; // +0x30
    NSString * _currentAppID; // +0x38
    unsigned int _currentVersion; // +0x40
}
- (id)init;
- (void)logPerformanceWithType:(long long)arg1 costTime:(unsigned long long)arg2 withAppID:(id)arg3 fromPreloadTask:(BOOL)arg4;
- (void)logPerformancePreloadCostTime:(unsigned long long)arg1 withAppID:(id)arg2 isPreload:(BOOL)arg3;
- (void)logFromJSWithAppID:(id)arg1 message:(id)arg2;
- (void)logLaunchAppWithAppID:(id)arg1 version:(unsigned int)arg2;
- (unsigned int)logAppRouteActionType:(long long)arg1 webviewID:(unsigned long long)arg2 appType:(unsigned int)arg3;
- (void)reportLoadPerformanceInfo:(unsigned int)arg1 reportType:(unsigned long long)arg2 appType:(unsigned int)arg3;
- (void).cxx_destruct;
@end
