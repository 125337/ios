@interface MemoryStatReporter : NSObject <MMStackReportConnectionDelegate>
{
    NSString * m_reportPath; // +0x8
    NSString * m_configPath; // +0x10
    MemoryReportTask * m_uploadTask; // +0x18
    NSMutableArray * m_taskList; // +0x20
    WCMemoryStatPlugin * m_plugin; // +0x28
    BOOL m_isAllReport; // +0x30
    MMStackReportConnection * m_connection; // +0x38
    MMStackReportConnection * m_dumpReportConnection; // +0x40
}
- (id)initWithReportPath:(id)arg1;
- (BOOL)addSummaryReportTask:(unsigned long long)arg1 customInfo:(id)arg2;
- (void)uploadAllSummaryReport;
- (void)reportWithDumpData:(id)arg1;
- (BOOL)canReport:(id)arg1;
- (void)saveTasks;
- (void)loadTasks;
- (id)nextTask;
- (BOOL)hasNextTask;
- (void)doNextReport;
- (void)doSummaryReport:(id)arg1;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void)onReportUploadCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

