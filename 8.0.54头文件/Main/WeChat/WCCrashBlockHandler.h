@interface WCCrashBlockHandler : NSObject <WCCrashBlockMonitorDelegate>
{
    unsigned int _reportCount; // +0x8
    unsigned long long _readSize; // +0x10
    unsigned long long _writeSize; // +0x18
}
- (id)init;
- (id)getCrashBlockPluginConfiguration;
- (void)refreshKSCrashReportAppVersion;
- (void)onClientVersionChange;
- (void)tryGetInfomationOfFileDescriptorOfDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)arg1 blockTime:(unsigned long long)arg2 runloopThreshold:(unsigned int)arg3;
- (void)onCrashBlockMonitorGetDumpFile:(id)arg1 withDumpType:(unsigned long long)arg2;
- (void)onCrashBlockMonitorDumpType:(unsigned long long)arg1 filter:(unsigned long long)arg2;
- (id)onCrashBlockMonitorGetCustomUserInfoForDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorCurrentCPUTooHigh;
- (void)onCrashBlockMonitorIntervalCPUTooHigh;
- (void)onCrashBlockMonitorDiskIOReportReadDump:(BOOL)arg1 writeDump:(BOOL)arg2;
- (void)onCrashBlockMonitorDiskIOReportRepeat;
- (void)onCrashBlockMonitorThermalStateChanged:(long long)arg1;
- (void)onCrashBlockMonitorMainThreadBlock;
- (void)onCrashBlockMonitorMemoryExcessive:(BOOL)arg1 footprint:(unsigned long long)arg2 available:(unsigned long long)arg3;
- (void)onCrashBlockMonitorRunloopHangDetected:(unsigned long long)arg1;
- (void)p_reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3 dumpType:(unsigned long long)arg4;
- (void)onMMCrashGetFile:(id)arg1;
- (unsigned long long)readSize;
- (void)setReadSize:(unsigned long long)arg1;
- (unsigned long long)writeSize;
- (void)setWriteSize:(unsigned long long)arg1;
- (unsigned int)reportCount;
- (void)setReportCount:(unsigned int)arg1;
@end

