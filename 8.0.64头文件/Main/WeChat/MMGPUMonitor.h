@interface MMGPUMonitor : NSObject <MMStackReportConnectionDelegate>
{
    NSRecursiveLock * m_lock; // +0x8
    BOOL m_hasInit; // +0x10
    BOOL m_isSampling; // +0x11
    id <MTLDevice> m_defaultDevice; // +0x18
    MMGPUMonitorConfig * m_config; // +0x20
    NSMutableArray * m_interceptClassNames; // +0x28
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
- (BOOL)hasCrashedInGPUCounterSampling;
- (void)initSampling;
- (id)getTimestampCounterSet:(id)arg1;
- (void)startSampling;
- (void)stopSampling;
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
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (id)checkCriticalEventWithConfig:(id)arg1 userType:(unsigned long long)arg2 metricsInfos:(id)arg3;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 averageUsage:(float)arg3 eventTag:(unsigned long long)arg4 eventSubTag:(unsigned long long)arg5 eventInfo:(id)arg6 inRecordDB:(id)arg7;
- (id)stackInfosFromSamples:(id)arg1;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
