@interface WCBlockMonitorConfigHandler : NSObject
{
    WCBlockMonitorConfiguration * m_currentConfiguration; // +0x8
}
+ (int)getDeviceCPUCount;
- (id)init;
- (void)setConfiguration:(id)arg1;
- (unsigned int)getRunloopTimeOut;
- (unsigned int)getRunloopLowThreshold;
- (BOOL)getRunloopDynamicThresholdEnabled;
- (float)getCPUUsagePercent;
- (float)getLowerCPUUsagePercent;
- (BOOL)getMainThreadHandle;
- (unsigned int)getCheckPeriodTime;
- (unsigned int)getPerStackInterval;
- (BOOL)getMainThreadProfile;
- (int)getMainThreadCount;
- (BOOL)getShouldPrintCPUUsage;
- (BOOL)getShouldGetCPUHighLog;
- (BOOL)getShouldGetPowerConsumeStack;
- (float)getPowerConsumeCPULimit;
- (BOOL)getShouldFilterSameStack;
- (unsigned int)getTriggerFilterCount;
- (unsigned int)getDumpDailyLimit;
- (BOOL)getShouldPrintMemoryUse;
- (BOOL)getShouldPrintCPUFrequency;
- (BOOL)getShouldGetDiskIOStack;
- (unsigned long long)getSingleReadLimit;
- (unsigned long long)getSingleWriteLimit;
- (unsigned long long)getTotalReadLimit;
- (unsigned long long)getTotalWriteLimit;
- (unsigned int)getMemoryWarningThresholdInMB;
- (BOOL)getSensitiveRunloopHangDetection;
- (BOOL)getShouldSuspendAllThreads;
- (BOOL)getShouldEnableSnapshot;
- (BOOL)getShouldPrintVMSummary;
- (BOOL)getShouldPrintJSCType;
- (BOOL)getShouldEnableBusyThreadProfile;
- (unsigned int)getBusyThreadProfileDuration;
- (unsigned int)getBusyThreadProfileInterval;
- (BOOL)getShouldEnableMoreThreadInfo;
- (BOOL)getShouldEnableMoreKSCrashLogs;
- (BOOL)getShouldCoreDumpAtCrash;
- (BOOL)getShouldCoreDumpAtNonCrash;
- (BOOL)getShouldUploadCoreDumpAfterCrash;
- (BOOL)getShouldSearchQueueNames;
- (void).cxx_destruct;
@end

