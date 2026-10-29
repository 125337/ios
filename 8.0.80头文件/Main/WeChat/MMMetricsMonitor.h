@interface MMMetricsMonitor : MMRootService <MMKernelExt, IExptServiceExt, MMStackReportConnectionDelegate, MMServiceProtocol>
{
    MMAppRunningInfo * m_runningInfo; // +0x8
    unsigned int m_checkCountMax; // +0x10
    unsigned int m_checkCountDefault; // +0x14
    unsigned int m_monitorTicks; // +0x18
    unsigned int m_deviceNetworkUsageTicks; // +0x1c
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
    NSRecursiveLock * m_lastMetricsInfoLock; // +0xb0
    AVCaptureDevice * m_backCaptureDevice; // +0xb8
    long long m_applicationState; // +0xc0
    MMCPUMonitor * m_cpuMonitor; // +0xc8
    MMGPUMonitor * m_gpuMonitor; // +0xd0
    MMLocationMonitor * m_locationMonitor; // +0xd8
    MMNetworkMonitor * m_networkMonitor; // +0xe0
    MMAudioMonitor * m_audioMonitor; // +0xe8
    MMBatteryMonitor * m_batteryMonitor; // +0xf0
    NSThread * m_workingThread; // +0xf8
    NSString * m_metricsDataPath; // +0x100
    NSString * m_configPath; // +0x108
    MMMetricsDB * m_metricsDB; // +0x110
    MMMetricsMonitorConfig * m_config; // +0x118
    MMCPUMonitorConfig * m_cpuMonitorConfig; // +0x120
    MMGPUMonitorConfig * m_gpuMonitorConfig; // +0x128
    MMLocationMonitorConfig * m_locationMonitorConfig; // +0x130
    MMNetworkMonitorConfig * m_networkMonitorConfig; // +0x138
    MMAudioMonitorConfig * m_audioMonitorConfig; // +0x140
    MMBatteryMonitorConfig * m_batteryMonitorConfig; // +0x148
    BOOL m_shouldSaveDyldImage; // +0x150
    BOOL m_isUploadingFullData; // +0x151
    BOOL m_isExternalSymbolsSaved; // +0x152
    BOOL m_isCameraActive; // +0x153
    MMStackReportConnection * m_reportConnection; // +0x158
    shared_ptr<MMMetricsUploadFileObserver> m_uploadFileObserver; // +0x160
    NSString * _scene; // +0x170
    NSString * _weAppScene; // +0x178
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
- (id)requiredFilePath;
- (void)addBusinessData:(unsigned long long)arg1 content:(id)arg2;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)addUserType:(unsigned long long)arg1;
- (void)removeUserType:(unsigned long long)arg1;
- (void)setCustomInfoWithKey:(id)arg1 value:(id)arg2;
- (void)setCustomInfo:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)setCustomInfoWithKey:(id)arg1 value:(id)arg2 userType:(unsigned long long)arg3;
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
- (void)checkMetricsInfoForMemoryRising:(id)arg1;
- (void)checkMetricsInfoForDeviceNetworkUsage;
- (unsigned int)checkSampleCountByDuration:(unsigned int)arg1;
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
- (id)externalSymbolsToSave;
- (void)onStackReportCompleted:(BOOL)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)weAppScene;
- (void)setWeAppScene:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
