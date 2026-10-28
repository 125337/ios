@interface MMCPUTimeProfiler : NSObject <MMStackReportConnectionDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    BOOL m_isSampling; // +0x10
    NSThread * m_workingThread; // +0x18
    MMCPUTimeProfilerConfig * m_config; // +0x20
    unsigned int m_usleepTime; // +0x28
    MMMetricsRecordDB * m_db; // +0x30
    NSMutableArray * m_samplesToInsert; // +0x38
    void * m_samplesToMerge; // +0x40
    void * m_eventConfigs; // +0x48
    MMStackReportConnection * m_reportConnection; // +0x50
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setConfig:(id)arg1;
- (void)setEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)setRecordDB:(id)arg1;
- (void)startSampling;
- (void)stopSampling;
- (void)timeProfilerThread;
- (id)samplesToSave;
- (void)saveData;
- (void)dumpAllThreads;
- (void)addSample:(id)arg1;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (id)checkCriticalEventWithConfig:(id)arg1 userType:(unsigned long long)arg2 metricsInfos:(id)arg3;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 averageUsage:(float)arg3 eventTag:(unsigned long long)arg4 eventSubTag:(unsigned long long)arg5 eventInfo:(id)arg6 inRecordDB:(id)arg7;
- (id)stackInfosFromSamples:(id)arg1;
- (void)resetReportCount;
- (void)startProfileForCurrentThread;
- (void)stopProfileForCurrentThread;
- (id)samplesForCurrentThread;
- (id)generateStackReportDict:(id)arg1;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
