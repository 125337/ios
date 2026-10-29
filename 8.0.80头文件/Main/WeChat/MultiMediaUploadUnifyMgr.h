@interface MultiMediaUploadUnifyMgr : RecordBaseUploadCDNMgr <RecordUploadOrchestratorDelegate, IForwardScheduleQueueExt>
{
    id <RecordUploadCDNMgrDelegate> _delegate; // +0x8
    RecordUploadOrchestrator * _currentTask; // +0x10
    NSMutableArray * _arrUploadingTask; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)OnForwardScheduleQueueAdvanced;
- (void)setDelegate:(id)arg1;
- (BOOL)IsRecordMsgUploading:(id)arg1;
- (void)StartUploadRecordMsg:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (void)checkQueue;
- (id)getTaskWithMsgWrap:(id)arg1;
- (id)getCurMsgWrap;
- (void)onNeedUpdateMediaWrap:(id)arg1 bitSet:(int)arg2;
- (void)OnUploadProgressChanged:(id)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)onUploadRecordMsgDataSuccess:(id)arg1;
- (void)onHistoryRecordDataUploadFinish:(id)arg1 cdnInfo:(id)arg2 errorMsg:(id)arg3;
- (void)onRecordUploadProcessFlowFinish:(id)arg1;
- (id)delegate;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)arrUploadingTask;
- (void)setArrUploadingTask:(id)arg1;
- (void).cxx_destruct;
@end
