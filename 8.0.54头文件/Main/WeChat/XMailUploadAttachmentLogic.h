@interface XMailUploadAttachmentLogic : NSObject <ICdnComMgrExt>
{
    BOOL _shouldAlertErrMsg; // +0x8
    id /* block */ _uploadResultBlock; // +0x10
    XMailUploadAttachmentTask * _curTask; // +0x18
    OrderedDictionary * _taskList; // +0x20
}
- (BOOL)addUploadAttachmentTaskWithFileName:(id)arg1 filePath:(id)arg2;
- (void)checkQueue;
- (void)startUploadCurTask;
- (void)endCurTask;
- (void)OnCdnUpload:(id)arg1;
- (id /* block */)uploadResultBlock;
- (void)setUploadResultBlock:(id /* block */)arg1;
- (id)curTask;
- (void)setCurTask:(id)arg1;
- (id)taskList;
- (void)setTaskList:(id)arg1;
- (BOOL)shouldAlertErrMsg;
- (void)setShouldAlertErrMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end

