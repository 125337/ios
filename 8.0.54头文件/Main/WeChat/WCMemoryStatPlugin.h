@interface WCMemoryStatPlugin : MatrixPlugin
{
    WCMemoryRecordManager * m_recordManager; // +0x8
    WCMemoryStatRecord * m_lastRecord; // +0x10
    WCMemoryStatRecord * m_currRecord; // +0x18
    NSTimer * m_autoDumpTimer; // +0x20
    id <WCMemoryStatPluginDelegate> _delegate; // +0x28
}
+ (id)getTag;
- (id)init;
- (void)deplayTryReportOOMInfo;
- (void)uploadRecord:(id)arg1 withCustomInfo:(id)arg2;
- (void)allocationsDumpAndGenerateReportData:(id)arg1 customInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)leaksCheckAndGenerateReportData:(id)arg1 customInfo:(id)arg2 callback:(id /* block */)arg3;
- (id)recordList;
- (id)recordOfLastRun;
- (id)recordByLaunchTime:(unsigned long long)arg1;
- (unsigned long long)pluginMemoryUsed;
- (unsigned long long)getMemoryStatDataSize;
- (void)cleanMemoryStatData;
- (void)setCurrentRecordInvalid;
- (void)reportErrorCode:(int)arg1;
- (void)registerNotification;
- (BOOL)start;
- (BOOL)startVMRegionsLogging;
- (BOOL)startMemoryLogging;
- (BOOL)enableAllocationsLogger;
- (BOOL)enableLeaksChecker;
- (void)stop;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(BOOL)arg2;
- (void)didReceiveMemoryWarningNotification;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

