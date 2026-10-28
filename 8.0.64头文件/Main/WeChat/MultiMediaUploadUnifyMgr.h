@interface MultiMediaUploadUnifyMgr : NSObject <MultiMediaUploadProcessControllerDelegate>
{
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x8
    id <RecordUploadCDNMgrDelegate> _delegate; // +0x10
    MultiMediaUploadProcessController * _currentTask; // +0x18
    NSMutableArray * _arrUploadingTask; // +0x20
}
- (id)init;
- (void)setDelegate:(id)arg1;
- (BOOL)IsMultiMediaMsgUploading:(id)arg1;
- (void)StartUploadMultiMediaMsg:(id)arg1;
- (void)StopUploadMultiMediaMsg:(id)arg1;
- (void)StopUploadMultiMediaMsgByUsername:(id)arg1;
- (void)checkQueue;
- (id)getTaskWithMsgWrap:(id)arg1;
- (void)onNeedUpdateMediaWrap:(id)arg1 bitSet:(int)arg2;
- (void)OnUploadProgressChanged:(id)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)onUploadRecordMsgDataSuccess:(id)arg1;
- (void)onHistoryRecordDataUploadFinish:(id)arg1 cdnInfo:(id)arg2 errorMsg:(id)arg3;
- (void)onMultiMediaUploadProcessFlowFinish:(id)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (id)delegate;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)arrUploadingTask;
- (void)setArrUploadingTask:(id)arg1;
- (void).cxx_destruct;
@end
