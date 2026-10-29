@interface WCCrashBlockMonitor : NSObject <WCBlockMonitorDelegate>
{
    BOOL _bInstallSuccess; // +0x8
    NSString * _appVersion; // +0x10
    NSString * _appShortVersion; // +0x18
    void * * _onHandleSignalCallBack; // +0x20
    void * * _onAppendAdditionalInfoCallBack; // +0x28
    id <WCCrashBlockMonitorDelegate> _delegate; // +0x30
    WCBlockMonitorConfiguration * _bmConfiguration; // +0x38
    WCBlockMonitorMgr * _blockMonitor; // +0x40
}
+ (BOOL)p_isDumpTypeRelatedToFOOM:(unsigned long long)arg1;
- (id)init;
- (BOOL)installKSCrash:(BOOL)arg1;
- (void)enableBlockMonitor;
- (void)startBlockMonitor;
- (void)stopBlockMonitor;
- (void)resetAppFullVersion:(id)arg1 shortVersion:(id)arg2;
- (void)handleBackgroundLaunch;
- (void)handleSuspend;
- (void)startTrackCPU;
- (void)stopTrackCPU;
- (BOOL)isBackgroundCPUTooSmall;
- (BOOL)lowerCPUUsage;
- (BOOL)recoverCPUUsage;
- (BOOL)setRunloopThreshold:(unsigned int)arg1;
- (BOOL)lowerRunloopThreshold;
- (BOOL)recoverRunloopThreshold;
- (void)setShouldSuspendAllThreads:(BOOL)arg1;
- (void)setUserID:(unsigned long long)arg1;
- (id)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(BOOL)arg3;
- (BOOL)shouldReportCoreDumpAfterCrash;
- (unsigned int)lastJSCType;
- (void)onBlockMonitor:(id)arg1 beginDump:(unsigned long long)arg2 blockTime:(unsigned long long)arg3 runloopThreshold:(unsigned int)arg4;
- (void)onBlockMonitor:(id)arg1 enterNextCheckWithDumpType:(unsigned long long)arg2;
- (void)onBlockMonitor:(id)arg1 getDumpFile:(id)arg2 withDumpType:(unsigned long long)arg3;
- (void)onBlockMonitor:(id)arg1 dumpType:(unsigned long long)arg2 filter:(unsigned long long)arg3;
- (id)onBlockMonitor:(id)arg1 getCustomUserInfoForDumpType:(unsigned long long)arg2;
- (void)onBlockMonitorCurrentCPUTooHigh:(id)arg1;
- (void)onBlockMonitorIntervalCPUTooHigh:(id)arg1;
- (void)onBlockMonitorThermalStateChanged:(id)arg1 thermalState:(long long)arg2;
- (void)onBlockMonitorMainThreadBlock:(id)arg1;
- (void)onBlockMonitorMemoryExcessive:(id)arg1 exceeded:(BOOL)arg2 footprint:(unsigned long long)arg3 available:(unsigned long long)arg4;
- (void)onBlockMonitor:(id)arg1 runloopHangDetected:(unsigned long long)arg2;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)appShortVersion;
- (void)setAppShortVersion:(id)arg1;
- (void * *)onHandleSignalCallBack;
- (void)setOnHandleSignalCallBack:(void * *)arg1;
- (void * *)onAppendAdditionalInfoCallBack;
- (void)setOnAppendAdditionalInfoCallBack:(void * *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bmConfiguration;
- (void)setBmConfiguration:(id)arg1;
- (BOOL)bInstallSuccess;
- (void)setBInstallSuccess:(BOOL)arg1;
- (id)blockMonitor;
- (void)setBlockMonitor:(id)arg1;
- (void).cxx_destruct;
@end
