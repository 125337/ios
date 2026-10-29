@interface WCCrashBlockMonitorPlugin : MatrixPlugin
{
    id <WCReportStrategyDelegate> _reportDelegate; // +0x8
    WCCrashBlockMonitor * _cbMonitor; // +0x10
    NSMutableArray * _uploadingLagFileIDArray; // +0x18
    NSMutableArray * _uploadingCrashFileIDArray; // +0x20
    NSMutableSet * _uploadingCoreDumpIDs; // +0x28
    NSObject<OS_dispatch_queue> * _pluginReportQueue; // +0x30
    unsigned long long _dumpUploadType; // +0x38
    unsigned long long _currentUploadType; // +0x40
    NSString * _currentUploadDate; // +0x48
}
+ (id)getTag;
+ (BOOL)hasCrashReport;
+ (BOOL)haveLagFiles;
+ (BOOL)haveLagFilesOnDate:(id)arg1;
+ (BOOL)haveLagFilesOnType:(unsigned long long)arg1;
+ (BOOL)haveLagFilesOnDate:(id)arg1 onType:(unsigned long long)arg2;
- (id)init;
- (BOOL)start;
- (void)stop;
- (void)setupPluginListener:(id)arg1;
- (void)destroy;
- (void)reportIssue:(id)arg1;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(BOOL)arg2;
- (void)resetAppFullVersion:(id)arg1 shortVersion:(id)arg2;
- (void)handleBackgroundLaunch;
- (void)handleSuspend;
- (void)startBlockMonitor;
- (void)stopBlockMonitor;
- (void)startTrackCPU;
- (void)stopTrackCPU;
- (BOOL)isBackgroundCPUTooSmall;
- (BOOL)lowerCPUUsage;
- (BOOL)recoverCPUUsage;
- (BOOL)setRunloopThreshold:(unsigned int)arg1;
- (BOOL)lowerRunloopThreshold;
- (BOOL)recoverRunloopThreshold;
- (void)setShouldSuspendAllThreads:(BOOL)arg1;
- (id)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(BOOL)arg3;
- (void)setUserID:(unsigned long long)arg1;
- (unsigned int)lastJSCType;
- (BOOL)isLagUploading:(id)arg1;
- (void)addLagToUploadingArray:(id)arg1;
- (void)removeLagFromUploadingArray:(id)arg1;
- (BOOL)isCrashUploading:(id)arg1;
- (void)addCrashToUploadingArray:(id)arg1;
- (void)removeCrashFromUploadingArray:(id)arg1;
- (void)notifyAppEnterForeground;
- (void)delayReportCrash;
- (void)autoClean;
- (void)autoReportCrash;
- (void)reportCrash;
- (void)autoReportLag;
- (void)reportAllLagFile;
- (void)reportAllLagFileOnDate:(id)arg1;
- (void)reportOneTypeLag:(unsigned long long)arg1 onDate:(id)arg2;
- (void)reportTodayOneTypeLag;
- (void)reportTodayOneTypeLagLimit:(id)arg1;
- (void)reportTodayOneTypeLagWithlimitUploadConfig:(id)arg1 withLimitReportCount:(unsigned long long)arg2 withLimitReportIDs:(id)arg3;
- (id)getMatrixIssueFromReportTaskData:(id)arg1 withReportType:(int)arg2 quickUpload:(BOOL)arg3;
- (void)reportCoreDumpWithTaskDataArray:(id)arg1;
- (void)reportCoreDumpWithTaskData:(id)arg1;
- (void)reportAllCoreDump;
- (void)reportCoreDumpWithCrashReportID:(id)arg1;
- (void)reportCoreDumpWithFileID:(id)arg1 FilePath:(id)arg2;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)cbMonitor;
- (void)setCbMonitor:(id)arg1;
- (id)uploadingLagFileIDArray;
- (void)setUploadingLagFileIDArray:(id)arg1;
- (id)uploadingCrashFileIDArray;
- (void)setUploadingCrashFileIDArray:(id)arg1;
- (id)uploadingCoreDumpIDs;
- (void)setUploadingCoreDumpIDs:(id)arg1;
- (id)pluginReportQueue;
- (void)setPluginReportQueue:(id)arg1;
- (unsigned long long)dumpUploadType;
- (void)setDumpUploadType:(unsigned long long)arg1;
- (unsigned long long)currentUploadType;
- (void)setCurrentUploadType:(unsigned long long)arg1;
- (id)currentUploadDate;
- (void)setCurrentUploadDate:(id)arg1;
- (void).cxx_destruct;
@end

