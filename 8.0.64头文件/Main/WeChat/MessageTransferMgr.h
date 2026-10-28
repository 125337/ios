@interface MessageTransferMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _taskList; // +0x8
    OpenCdnTransfer * _openCdnTransfer; // +0x10
    FileUploadingTransfer * _fileUploadingTransfer; // +0x18
    RecordTransfer * _recordTransfer; // +0x20
}
+ (id)shared;
- (void)setupAdapters;
- (void)onTaskCreate:(id)arg1;
- (void)onTaskStart:(id)arg1;
- (void)onTaskStop:(id)arg1;
- (void)onTask:(id)arg1 progressChanged:(int)arg2;
- (void)onTaskCompleted:(id)arg1 error:(id)arg2;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (id)taskForId:(id)arg1;
- (void)addTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (id)taskList;
- (void)setTaskList:(id)arg1;
- (id)openCdnTransfer;
- (void)setOpenCdnTransfer:(id)arg1;
- (id)fileUploadingTransfer;
- (void)setFileUploadingTransfer:(id)arg1;
- (id)recordTransfer;
- (void)setRecordTransfer:(id)arg1;
- (void).cxx_destruct;
@end
