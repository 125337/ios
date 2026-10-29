@interface MMMetricsMonitor : MMRootService <MMKernelExt, IExptServiceExt, MMStackReportConnectionDelegate, MMServiceProtocol>
{
    MMAppRunningInfo * m_runningInfo; // +0x8
    unsigned int m_checkCountMax; // +0x10
    unsigned int m_checkCountDefault; // +0x14
    unsigned int m_monitorTicks; // +0x18
    NSMutableArray * m_metricsInfos; // +0x20
    NSMutableArray * m_metricsInfosToInsert; // +0x28
    NSArray * m_threadInfos; // +0x30
    NSMutableArray * m_threadInfosToInsert; // +0x38
    NSMutableArray * m_businessDatasToInsert; // +0x40
    MMMetricsInfo * m_lastMetricsInfo; // +0x48
    MMMetricsInfo * m_lastRunMetricsInfo; // +0x50
    MMMetricsInfo * m_firstMetricsInfoForMemoryRising; // +0x58
    MMMetricsInfo * m_lastMetricsInfoForMemoryRising; // +0x60
    unsigned long long m_memoryPressureFlag; // +0x68
    unsigned long long m_memoryPressureFlagForReport; // +0x70
    unsigned long long m_userType; // +0x78
    unsigned long long m_maxUserType; // +0x80
    NSDictionary * m_baseInfo; // +0x88
    NSMutableDictionary * m_customInfo; // +0x90
    NSMutableDictionary * m_customInfoForUser; // +0x98
    NSRecursiveLock * m_dataLock; // +0xa0
    NSRecursiveLock * m_dbLock; // +0xa8
    AVCaptureDevice * m_backCaptureDevice; // +0xb0
    long long m_applicationState; // +0xb8
    MMCPUTimeProfiler * m_cpuTimeProfiler; // +0xc0
    MMGPUMonitor * m_gpuMonitor; // +0xc8
    MMLocationMonitor * m_locationMonitor; // +0xd0
    MMNetworkMonitor * m_networkMonitor; // +0xd8
    MMAudioMonitor * m_audioMonitor; // +0xe0
    NSThread * m_workingThread; // +0xe8
    NSString * m_metricsDataPath; // +0xf0
    NSString * m_configPath; // +0xf8
    MMMetricsDB * m_metricsDB; // +0x100
    MMMetricsMonitorConfig * m_config; // +0x108
    MMCPUTimeProfilerConfig * m_cpuTimeProfilerConfig; // +0x110
    MMGPUMonitorConfig * m_gpuMonitorConfig; // +0x118
    MMLocationMonitorConfig * m_locationMonitorConfig; // +0x120
    MMNetworkMonitorConfig * m_networkMonitorConfig; // +0x128
    MMAudioMonitorConfig * m_audioMonitorConfig; // +0x130
    BOOL m_shouldSaveDyldImage; // +0x138
    BOOL m_isUploadingFullData; // +0x139
    MMStackReportConnection * m_reportConnection; // +0x140
    MMMetricsUploadFileObserver * m_uploadFileObserver; // +0x148
    shared_ptr<MMMetricsUploadFileObserver2> m_uploadFileObserver2; // +0x150
    NSString * _scene; // +0x160
    NSString * _weAppScene; // +0x168
}
- (void)onServiceInit;
- (void)prepareInMain;
- (void)prepareMonitoring;
- (void)initPaths;
- (void)initOverheatingDetector;
- (void)initMonitors;
- (void)initMetricsDB;
- (void)onServiceTerminate;
- (void)clearData;
- (void)clearDataDelay;
- (unsigned long long)preGetMetricDataSize;
- (unsigned long long)cleanMetricData;
- (void)addBusinessData:(unsigned long long)arg1 content:(id)arg2;
- (void)startMonitoring;
- (void)stopMonitoring;
- (BOOL)autoStackReport;
- (void)addUserType:(unsigned long long)arg1;
- (void)removeUserType:(unsigned long long)arg1;
- (void)setCustomInfoWithKey:(id)arg1 value:(id)arg2;
- (void)setCustomInfo:(id)arg1 forUserType:(unsigned long long)arg2;
- (id)getCustomInfoForUserType:(unsigned long long)arg1;
- (id)defaultEventConfig;
- (void)setEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)metricsMonitorThread;
- (void)collectData;
- (void)saveData;
- (void)reportKVData;
- (void)reportEventData;
- (id)customInfoForUser:(unsigned long long)arg1;
- (id)reportHeadDictForCriticalEvent:(id)arg1;
- (id)reportHeadDictForCommonEvent:(unsigned long long)arg1 metricsInfo:(id)arg2 customInfo:(id)arg3;
- (void)uploadMetricsDBFrom:(double)arg1 to:(double)arg2;
- (void)reportFullDataFrom:(double)arg1 to:(double)arg2;
- (void)onReportFullDataFinished;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 eventTag:(unsigned long long)arg3 eventSubTag:(unsigned long long)arg4 customInfo:(id)arg5;
- (void)uploadCPUDataFrom:(double)arg1 to:(double)arg2 eventTag:(unsigned long long)arg3 eventSubTag:(unsigned long long)arg4 customInfo:(id)arg5;
- (id)currUsrName;
- (id)lastMetricsInfo;
- (id)lastRunMetricsInfo;
- (id)genMetricsInfo;
- (id)genMetricsInfoInternal:(BOOL)arg1;
- (id)collectMetricsInfoWithNotify:(BOOL)arg1 customizeBlock:(id /* block */)arg2;
- (void)_updateMetricsInfoForMemoryRising:(id)arg1;
- (unsigned int)_checkCountByDuration:(unsigned int)arg1;
- (id)getMetricsInfosFrom:(double)arg1 to:(double)arg2;
- (void)deviceMayBecomeOverheating:(id)arg1;
- (void)deviceMayResignOverheating:(id)arg1;
- (void)loadMonitorConfig;
- (void)saveMonitorConfig;
- (void)onAuthOK;
- (void)onExptItemListChange;
- (void)setupStrategyFromXLab;
- (void)onDyldImageChanged;
- (id)imageInfosToSave;
- (void)onStackReportCompleted:(BOOL)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)weAppScene;
- (void)setWeAppScene:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

