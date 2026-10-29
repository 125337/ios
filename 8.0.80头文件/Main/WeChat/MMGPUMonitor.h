@interface MMGPUMonitor : NSObject <MMStackReportConnectionDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    BOOL m_hasInit; // +0x10
    BOOL m_isMonitoring; // +0x11
    BOOL m_isStartMonitoring; // +0x12
    MMGPUMonitorConfig * m_config; // +0x18
    NSMutableArray * m_interceptClassNames; // +0x20
    MMMetricsRecordDB * m_db; // +0x28
    NSMutableArray * m_samplesToInsert; // +0x30
    void * m_samplesToMerge; // +0x38
    void * m_criticalEventDetectors; // +0x40
    MMStackReportConnection * m_reportConnection; // +0x48
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setConfig:(id)arg1;
- (void)setRecordDB:(id)arg1;
- (void)setCriticalEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (BOOL)hasCrashedInGPUCounterSampling;
- (void)initSampling;
- (id)getTimestampCounterSet:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)renderTargetSampleCountShouldBe1;
- (void)renderTargetColorAtttachmentCountShouldGreaterThan1;
- (void)defaultRasterSampleCountShouldBe1;
- (void)depthAttachmentSampleCountShouldBe1;
- (void)stencilAttachmentSampleCountShouldBe1;
- (void)checkRenderPassSampleCountForRciVOIP:(id)arg1;
- (void)beginSamplingWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (void)beginSamplingWithCommandBuffer:(id)arg1 computePassDescriptor:(id)arg2;
- (void)beginSamplingWithCommandBuffer:(id)arg1 blitPassDescriptor:(id)arg2;
- (void)beginSamplingWithCommandBuffer:(id)arg1 parallelRenderRenderPassDescriptor:(id)arg2;
- (void)endSamplingWithCommandBuffer:(id)arg1;
- (void)markCommandBufferAsSampled:(id)arg1;
- (BOOL)hasCommandBufferSampled:(id)arg1;
- (void)bindSamplingTraceInfo:(id)arg1 withCommandBuffer:(id)arg2;
- (void)recordCommitCallStack:(id)arg1;
- (void)reportSamplingTraceInfo:(id)arg1;
- (id)samplesToSave;
- (void)saveData;
- (void)checkEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)uploadPendingEvents;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 averageUsage:(float)arg3 eventTag:(unsigned long long)arg4 eventSubTag:(unsigned long long)arg5 eventInfo:(id)arg6 inRecordDB:(id)arg7;
- (id)stackInfosFromSamples:(id)arg1;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
