@interface MessageTransferMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _taskList; // +0x8
    MemoryMappedKV * _mmkv; // +0x10
    OpenCdnTransfer * _openCdnTransfer; // +0x18
    FileUploadingTransfer * _fileUploadingTransfer; // +0x20
    RecordTransfer * _recordTransfer; // +0x28
}
+ (id)shared;
- (void)updateTaskToDisk:(id)arg1;
- (void)removeTaskFromDisk:(id)arg1;
- (BOOL)restoreTaskFromDisk:(id)arg1;
- (void)setupAdapters;
- (id)taskForId:(id)arg1;
- (void)onTaskCreate:(id)arg1;
- (void)onTaskStart:(id)arg1;
- (void)onTaskStop:(id)arg1;
- (void)onTask:(id)arg1 progressChanged:(int)arg2;
- (void)onTaskCompleted:(id)arg1 error:(id)arg2;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)addTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (id)taskList;
- (void)setTaskList:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (id)openCdnTransfer;
- (void)setOpenCdnTransfer:(id)arg1;
- (id)fileUploadingTransfer;
- (void)setFileUploadingTransfer:(id)arg1;
- (id)recordTransfer;
- (void)setRecordTransfer:(id)arg1;
- (void).cxx_destruct;
@end
