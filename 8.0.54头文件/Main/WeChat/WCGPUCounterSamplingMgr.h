@interface WCGPUCounterSamplingMgr : MMUserService <WCFinderLiveExt, MMGPUMonitorExt, MMServiceProtocol>
{
    WCSamplingConfig * _samplingConfig; // +0x8
    unsigned long long _appLaunchTime; // +0x10
    NSMutableDictionary * _reportEvents; // +0x18
    MMTimer * _reportTimer; // +0x20
    NSRecursiveLock * _sampleLock; // +0x28
    WCGPUCounterSamplingReporter * _samplingReporter; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startSampling;
- (void)stopSampling;
- (void)onReportTimerCallback;
- (void)doStackReport;
- (void)onIPXX:(id)arg1;
- (id)samplingConfig;
- (void)gpuMonitor:(id)arg1 didCollectSamplingTraceInfo:(id)arg2;
- (void)setSamplingConfig:(id)arg1;
- (unsigned long long)appLaunchTime;
- (void)setAppLaunchTime:(unsigned long long)arg1;
- (id)reportEvents;
- (void)setReportEvents:(id)arg1;
- (id)reportTimer;
- (void)setReportTimer:(id)arg1;
- (id)sampleLock;
- (void)setSampleLock:(id)arg1;
- (id)samplingReporter;
- (void)setSamplingReporter:(id)arg1;
- (void).cxx_destruct;
@end

