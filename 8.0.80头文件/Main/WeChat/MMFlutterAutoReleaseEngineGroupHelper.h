@interface MMFlutterAutoReleaseEngineGroupHelper : NSObject
{
    MMFlutterEngineGroup * _engineGroup; // +0x8
    long long _interval; // +0x10
    NSTimer * _memReportTimer; // +0x18
    EngineGroupMemReporter * _memReporter; // +0x20
}
- (id)initWithEngineGroup:(id)arg1 autoReleaseInterval:(long long)arg2;
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
- (id)memReportTimer;
- (void)setMemReportTimer:(id)arg1;
- (id)memReporter;
- (void)setMemReporter:(id)arg1;
- (void).cxx_destruct;
@end
