@interface WCBlockMonitorConfiguration : NSObject
{
    BOOL _bRunloopDynamicThreshold; // +0x8
    BOOL _bMainThreadHandle; // +0x9
    BOOL _bMainThreadProfile; // +0xa
    BOOL _bPrintCPUUsage; // +0xb
    BOOL _bGetCPUHighLog; // +0xc
    BOOL _bGetPowerConsumeStack; // +0xd
    BOOL _bFilterSameStack; // +0xe
    BOOL _bPrintMemomryUse; // +0xf
    BOOL _bPrintCPUFrequency; // +0x10
    BOOL _bGetDiskIOStack; // +0x11
    BOOL _bSensitiveRunloopHangDetection; // +0x12
    BOOL _bSuspendAllThreads; // +0x13
    BOOL _bEnableSnapshot; // +0x14
    BOOL _bPrintVMSummary; // +0x15
    BOOL _bPrintJSCType; // +0x16
    BOOL _bBusyThreadProfile; // +0x17
    BOOL _bMoreThreadInfo; // +0x18
    BOOL _bMoreKSCrashLogs; // +0x19
    BOOL _bCoreDumpAtCrash; // +0x1a
    BOOL _bCoreDumpAtNonCrash; // +0x1b
    BOOL _bUploadCoreDumpAfterCrash; // +0x1c
    BOOL _bSearchQueueNames; // +0x1d
    unsigned int _runloopTimeOut; // +0x20
    unsigned int _runloopLowThreshold; // +0x24
    unsigned int _checkPeriodTime; // +0x28
    unsigned int _perStackInterval; // +0x2c
    unsigned int _mainThreadCount; // +0x30
    float _limitCPUPercent; // +0x34
    float _limitLowerCPUPercent; // +0x38
    float _powerConsumeStackCPULimit; // +0x3c
    unsigned int _triggerToBeFilteredCount; // +0x40
    unsigned int _dumpDailyLimit; // +0x44
    unsigned int _memoryWarningThresholdInMB; // +0x48
    unsigned int _busyThreadProfileDuration; // +0x4c
    unsigned int _busyThreadProfileInterval; // +0x50
    unsigned long long _singleReadLimit; // +0x58
    unsigned long long _singleWriteLimit; // +0x60
    unsigned long long _totalReadLimit; // +0x68
    unsigned long long _totalWriteLimit; // +0x70
}
+ (id)defaultConfig;
- (id)description;
- (unsigned int)runloopTimeOut;
- (void)setRunloopTimeOut:(unsigned int)arg1;
- (unsigned int)runloopLowThreshold;
- (void)setRunloopLowThreshold:(unsigned int)arg1;
- (BOOL)bRunloopDynamicThreshold;
- (void)setBRunloopDynamicThreshold:(BOOL)arg1;
- (unsigned int)checkPeriodTime;
- (void)setCheckPeriodTime:(unsigned int)arg1;
- (BOOL)bMainThreadHandle;
- (void)setBMainThreadHandle:(BOOL)arg1;
- (BOOL)bMainThreadProfile;
- (void)setBMainThreadProfile:(BOOL)arg1;
- (unsigned int)perStackInterval;
- (void)setPerStackInterval:(unsigned int)arg1;
- (unsigned int)mainThreadCount;
- (void)setMainThreadCount:(unsigned int)arg1;
- (float)limitCPUPercent;
- (void)setLimitCPUPercent:(float)arg1;
- (float)limitLowerCPUPercent;
- (void)setLimitLowerCPUPercent:(float)arg1;
- (BOOL)bPrintCPUUsage;
- (void)setBPrintCPUUsage:(BOOL)arg1;
- (BOOL)bGetCPUHighLog;
- (void)setBGetCPUHighLog:(BOOL)arg1;
- (BOOL)bGetPowerConsumeStack;
- (void)setBGetPowerConsumeStack:(BOOL)arg1;
- (float)powerConsumeStackCPULimit;
- (void)setPowerConsumeStackCPULimit:(float)arg1;
- (BOOL)bFilterSameStack;
- (void)setBFilterSameStack:(BOOL)arg1;
- (unsigned int)triggerToBeFilteredCount;
- (void)setTriggerToBeFilteredCount:(unsigned int)arg1;
- (unsigned int)dumpDailyLimit;
- (void)setDumpDailyLimit:(unsigned int)arg1;
- (BOOL)bPrintMemomryUse;
- (void)setBPrintMemomryUse:(BOOL)arg1;
- (BOOL)bPrintCPUFrequency;
- (void)setBPrintCPUFrequency:(BOOL)arg1;
- (BOOL)bGetDiskIOStack;
- (void)setBGetDiskIOStack:(BOOL)arg1;
- (unsigned long long)singleReadLimit;
- (void)setSingleReadLimit:(unsigned long long)arg1;
- (unsigned long long)singleWriteLimit;
- (void)setSingleWriteLimit:(unsigned long long)arg1;
- (unsigned long long)totalReadLimit;
- (void)setTotalReadLimit:(unsigned long long)arg1;
- (unsigned long long)totalWriteLimit;
- (void)setTotalWriteLimit:(unsigned long long)arg1;
- (unsigned int)memoryWarningThresholdInMB;
- (void)setMemoryWarningThresholdInMB:(unsigned int)arg1;
- (BOOL)bSensitiveRunloopHangDetection;
- (void)setBSensitiveRunloopHangDetection:(BOOL)arg1;
- (BOOL)bSuspendAllThreads;
- (void)setBSuspendAllThreads:(BOOL)arg1;
- (BOOL)bEnableSnapshot;
- (void)setBEnableSnapshot:(BOOL)arg1;
- (BOOL)bPrintVMSummary;
- (void)setBPrintVMSummary:(BOOL)arg1;
- (BOOL)bPrintJSCType;
- (void)setBPrintJSCType:(BOOL)arg1;
- (BOOL)bBusyThreadProfile;
- (void)setBBusyThreadProfile:(BOOL)arg1;
- (unsigned int)busyThreadProfileDuration;
- (void)setBusyThreadProfileDuration:(unsigned int)arg1;
- (unsigned int)busyThreadProfileInterval;
- (void)setBusyThreadProfileInterval:(unsigned int)arg1;
- (BOOL)bMoreThreadInfo;
- (void)setBMoreThreadInfo:(BOOL)arg1;
- (BOOL)bMoreKSCrashLogs;
- (void)setBMoreKSCrashLogs:(BOOL)arg1;
- (BOOL)bCoreDumpAtCrash;
- (void)setBCoreDumpAtCrash:(BOOL)arg1;
- (BOOL)bCoreDumpAtNonCrash;
- (void)setBCoreDumpAtNonCrash:(BOOL)arg1;
- (BOOL)bUploadCoreDumpAfterCrash;
- (void)setBUploadCoreDumpAfterCrash:(BOOL)arg1;
- (BOOL)bSearchQueueNames;
- (void)setBSearchQueueNames:(BOOL)arg1;
@end

