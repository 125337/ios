@interface WCBlockMonitorMgr : NSObject <WCPowerConsumeStackCollectorDelegate>
{
    NSThread * m_monitorThread; // +0x8
    BOOL m_bStop; // +0x10
    long long m_currentState; // +0x18
    unsigned long long m_nIntervalTime; // +0x20
    unsigned long long m_nLastTimeInterval; // +0x28
    MatrixStackInfo m_lastMainThreadCallStack; // +0x30
    unsigned long long m_blockDiffTime; // +0x3a8
    unsigned int m_firstSleepTime; // +0x3b0
    NSString * m_potenHandledLagFile; // +0x3b8
    WCMainThreadHandler * m_pointMainThreadHandler; // +0x3c0
    __CFRunLoopObserver * m_runLoopBeginObserver; // +0x3c8
    __CFRunLoopObserver * m_runLoopEndObserver; // +0x3d0
    __CFRunLoopObserver * m_initializationBeginRunloopObserver; // +0x3d8
    __CFRunLoopObserver * m_initializationEndRunloopObserver; // +0x3e0
    NSObject<OS_dispatch_queue> * m_asyncDumpQueue; // +0x3e8
    WCCPUHandler * m_cpuHandler; // +0x3f0
    BOOL m_bTrackCPU; // +0x3f8
    WCFilterStackHandler * m_stackHandler; // +0x400
    WCPowerConsumeStackCollector * m_powerConsumeStackCollector; // +0x408
    unsigned int m_memoryMonitorTickTock; // +0x410
    unsigned int m_printMemoryTickTok; // +0x414
    unsigned int m_printCPUFrequencyTickTok; // +0x418
    BOOL m_suspendAllThreads; // +0x41c
    BOOL m_enableSnapshot; // +0x41d
    BOOL m_moreThreadInfo; // +0x41e
    timeval m_recordStackTime; // +0x420
    BOOL m_memoryExceeded; // +0x430
    BOOL m_busyThreadProfile; // +0x431
    unsigned int m_busyThreadProfileDuration; // +0x434
    unsigned int m_busyThreadProfileInterval; // +0x438
    WCBusyThreadHandler * m_busyThreadHandler; // +0x440
    id <WCBlockMonitorDelegate> _delegate; // +0x448
    WCBlockMonitorConfigHandler * _monitorConfigHandler; // +0x450
}
+ (id)shareInstance;
+ (void)checkRunloopDuration;
+ (unsigned long long)diffTime:(timeval *)arg1 endTime:(timeval *)arg2;
- (void)resetConfiguration:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)freeCpuHighThreadArray;
- (void)start;
- (void)stop;
- (void)handleBackgroundLaunch;
- (void)handleSuspend;
- (id)getUserInfoForCurrentDumpForDumpType:(unsigned long long)arg1;
- (void)willTerminate;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)willResignActive;
- (void)thermalStateDidChange;
- (void)setCPUUsagePercent:(float)arg1;
- (void)setPerStackInterval:(unsigned int)arg1;
- (void)addMonitorThread;
- (void)threadProc;
- (void)recordCurrentStack;
- (unsigned long long)check;
- (unsigned long long)needFilter;
- (void)resetStatus;
- (void)addRunLoopObserver;
- (void)removeRunLoopObserver;
- (id)dumpFileWithType:(unsigned long long)arg1;
- (void)clearLaunchLagRecord;
- (void)clearDumpInBackgroundLaunch;
- (void)startTrackCPU;
- (void)stopTrackCPU;
- (BOOL)isBackgroundCPUTooSmall;
- (BOOL)lowerCPUUsage;
- (BOOL)recoverCPUUsage;
- (BOOL)lowerRunloopThreshold;
- (BOOL)recoverRunloopThreshold;
- (BOOL)setRunloopThreshold:(unsigned int)arg1;
- (BOOL)setRunloopThreshold:(unsigned int)arg1 isFirstTime:(BOOL)arg2;
- (void)setShouldSuspendAllThreads:(BOOL)arg1;
- (id)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(BOOL)arg3;
- (void)powerConsumeStackCollectorConclude:(id)arg1;
- (void)makeThreadProfile;
- (void)makeLockTrace;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)monitorConfigHandler;
- (void)setMonitorConfigHandler:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
