@interface WCGPUCounterSamplingReporter : NSObject <MMStackReportConnectionDelegate>
{
    NSMutableArray * _samplingTaskList; // +0x8
    WCGPUCounterSamplingTask * _uploadingTask; // +0x10
    MMStackReportConnection * _reportConnection; // +0x18
    NSObject<OS_dispatch_queue> * _saveGPUSamplingDumpToLibraryQueue; // +0x20
    WCGPUCounterSamplingConfig * _samplingConfig; // +0x28
}
- (id)init;
- (void)addReport:(unsigned long long)arg1 reportData:(id)arg2;
- (BOOL)reportDirectlyWithreportID:(unsigned long long)arg1 reportData:(id)arg2;
- (void)reportAll;
- (unsigned int)lastReportTime;
- (unsigned int)reportCount;
- (BOOL)canReport:(id)arg1;
- (void)saveTasksToLibrary;
- (void)saveConfigToLibrary;
- (void)loadTasksFromLibrary;
- (id)nextTask;
- (BOOL)hasNextTask;
- (void)doReport;
- (void)onStackReportCompleted:(BOOL)arg1;
- (void)onReportCompleted:(BOOL)arg1;
- (id)samplingTaskList;
- (void)setSamplingTaskList:(id)arg1;
- (id)uploadingTask;
- (void)setUploadingTask:(id)arg1;
- (id)reportConnection;
- (void)setReportConnection:(id)arg1;
- (id)saveGPUSamplingDumpToLibraryQueue;
- (void)setSaveGPUSamplingDumpToLibraryQueue:(id)arg1;
- (id)samplingConfig;
- (void)setSamplingConfig:(id)arg1;
- (void).cxx_destruct;
@end

