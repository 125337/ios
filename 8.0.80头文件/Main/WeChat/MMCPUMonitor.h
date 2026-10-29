@interface MMCPUMonitor : NSObject <MMStackReportConnectionDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    BOOL m_isMonitoring; // +0x10
    BOOL m_hasEventDetector; // +0x11
    NSThread * m_workingThread; // +0x18
    MMCPUMonitorConfig * m_config; // +0x20
    unsigned int m_usleepTime; // +0x28
    MMMetricsRecordDB * m_db; // +0x30
    NSMutableArray * m_samplesToInsert; // +0x38
    void * m_samplesToMerge; // +0x40
    void * m_criticalEventDetectors; // +0x48
    MMCPUPeriodicEventDetector * m_periodicEventDetector; // +0x50
    MMStackReportConnection * m_reportConnection; // +0x58
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setConfig:(id)arg1;
- (void)setRecordDB:(id)arg1;
- (void)setCriticalEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)cpuMonitorThread;
- (id)samplesToSave;
- (void)saveData;
- (id)dumpAllThreads;
- (void)addSamples:(id)arg1;
- (void)checkEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)checkPeriodicEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)uploadPendingEvents;
- (void)uploadPendingCriticalEvents;
- (void)uploadPendingPeriodicEvents;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadPeriodicEvent:(id)arg1;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 averageUsage:(float)arg3 eventTag:(unsigned long long)arg4 eventSubTag:(unsigned long long)arg5 eventInfo:(id)arg6 inRecordDB:(id)arg7;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 averageUsage:(float)arg3 minUsage:(float)arg4 eventTag:(unsigned long long)arg5 eventSubTag:(unsigned long long)arg6 eventInfo:(id)arg7 inRecordDB:(id)arg8;
- (id)stackInfosFromSamples:(id)arg1;
- (void)resetReportCount;
- (void)startProfileForCurrentThread;
- (void)stopProfileForCurrentThread;
- (id)samplesForCurrentThread;
- (id)generateStackReportDict:(id)arg1;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
