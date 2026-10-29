@interface WCCrashBlockConfigMgr : MMRootService <IExptServiceExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicMainThreadMonitorCongfig; // +0x8
}
+ (BOOL)isMMLiveHeavyUser;
+ (id)getConfigFilePath;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)lazyInitConfigMgr;
- (void)setupStrategy;
- (void)addCustomStrategy:(id)arg1 sampleRatio:(float)arg2 lagMaxCount:(long long)arg3 network:(unsigned long long)arg4;
- (float)liveUserSampleRatio;
- (float)finderSampleRatio;
- (BOOL)isLiveHeavyUser;
- (float)flutterSampleRatio;
- (id)getBlockMointorConfiguration;
- (void)onExptItemListChange;
- (void)loadDumpReportConfig;
- (void)saveDumpReportConfig;
- (BOOL)getBlockMonitorOpen;
- (float)getCPUUsagePercent;
- (float)getLowerCPUUsage;
- (BOOL)getMainThreadHandle;
- (int)getDeviceUnder;
- (unsigned int)getPerStackInterval;
- (BOOL)getMainThreadProfileEnabled;
- (BOOL)getShouldGetCPUHighLog;
- (BOOL)getShouldGetPowerConsumeStack;
- (float)getPowerConsumeCPULimit;
- (BOOL)getShouldPrintCPUFrequency;
- (unsigned int)getRunloopDefaultThreshold;
- (unsigned int)getRunloopLowThreshold;
- (BOOL)getRunloopDynamicThresholdEnabled;
- (BOOL)getRunloopSensitiveHangDetectionEnabled;
- (BOOL)getShouldSuspendAllThreads;
- (BOOL)getShouldEnableSnapshot;
- (unsigned int)getLagDumpDailyLimit;
- (BOOL)getBusyThreadProfileEnabled;
- (unsigned int)getBusyThreadProfileDuration;
- (unsigned int)getBusyThreadProfileInterval;
- (BOOL)getMoreThreadInfoEnabled;
- (BOOL)getCoreDumpEnabledAtCrash;
- (BOOL)getCoreDumpEnabledAtNonCrash;
- (BOOL)getCoreDumpUploadAfterCrash;
- (BOOL)getSearchQueueNames;
- (BOOL)getStdioBufferEnabled;
- (BOOL)getJscBacktraceEnabled;
- (BOOL)getCorruptCrashUploadEnabled;
- (id)dicMainThreadMonitorCongfig;
- (void)setDicMainThreadMonitorCongfig:(id)arg1;
- (void).cxx_destruct;
@end

