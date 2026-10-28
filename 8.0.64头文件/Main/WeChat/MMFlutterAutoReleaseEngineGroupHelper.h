@interface MMFlutterAutoReleaseEngineGroupHelper : NSObject
{
    MMFlutterEngineGroup * _engineGroup; // +0x8
    long long _interval; // +0x10
    BOOL _releaseEngineGroup; // +0x18
    BOOL _recreateContext; // +0x19
    BOOL _swapMemInBackground; // +0x1a
    BOOL _syncToFileInBackground; // +0x1b
    id /* block */ _releaseCallback; // +0x20
    NSTimer * _memReportTimer; // +0x28
    EngineGroupMemReporter * _memReporter; // +0x30
}
- (id)initWithEngineGroup:(id)arg1 autoReleaseInterval:(long long)arg2 releaseEngineGroup:(BOOL)arg3 recreateEngineGroup:(BOOL)arg4 recreateContext:(BOOL)arg5 swapMemInBackground:(BOOL)arg6 syncToFileInBackground:(BOOL)arg7 releaseCallback:(id /* block */)arg8;
- (void)startReportTimer;
- (void)stopReportTimer;
- (void)applicationBecameActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)recordMemInfo;
- (void)delayReleaseEngineGroup;
- (void)releaseEngineGroupMemory;
- (void)freeEngineGroupMemory;
- (void)removeDelayReleaseEngineGroup;
- (void)releaseRunnable;
- (void)releaseEngineGroup;
- (void)releaseEngineGroupRecreate:(BOOL)arg1 releaseType:(long long)arg2;
- (id)memReportTimer;
- (void)setMemReportTimer:(id)arg1;
- (id)memReporter;
- (void)setMemReporter:(id)arg1;
- (void).cxx_destruct;
@end
