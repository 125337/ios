@interface TaskListUploadProcessor : UploadStateProcessor <MultiMediaUploadTaskDelegate>
{
    CMessageWrap * _msgWrap; // +0x8
    unsigned long long _uploadTaskTotalSize; // +0x10
    NSMutableArray * _uploadTaskList; // +0x18
    MultiMediaUploadTask * _currentTask; // +0x20
}
- (id)initWithContext:(id)arg1;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)checkUploadQueue;
- (unsigned long long)remainUploadSize:(id)arg1 exceptTask:(id)arg2;
- (unsigned long long)getUploadTaskTotalSize;
- (void)OnMultiMediaUploadTaskFail:(id)arg1;
- (void)OnMultiMediaUploadTaskSucc:(id)arg1;
- (void)OnMultiMediaUploadTask:(id)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (unsigned long long)uploadTaskTotalSize;
- (void)setUploadTaskTotalSize:(unsigned long long)arg1;
- (id)uploadTaskList;
- (void)setUploadTaskList:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (void).cxx_destruct;
@end
