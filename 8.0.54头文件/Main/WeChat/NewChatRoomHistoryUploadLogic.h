@interface NewChatRoomHistoryUploadLogic : MMUserService <HistoryMsgUploadMgrDelegate, MMServiceProtocol>
{
    BOOL _isUploadFail; // +0x8
    NSString * _uploadingTaskID; // +0x10
    CdnUploadTaskInfo * _uploadInfo; // +0x18
    ChatRoomHistoryShareStat * _oRoomHistoryStat; // +0x20
    NSString * _lastUploadErrMsg; // +0x28
    HistoryMsgUploadTask * _task; // +0x30
    HistoryMsgUploadMgr * _uploadMgr; // +0x38
}
- (BOOL)uploadHistory:(id)arg1 arrMsg:(id)arg2 chatroom:(id)arg3;
- (void)invalidate;
- (void)stopUploadHistory;
- (void)onUploadDataFinish:(id)arg1 taskInfo:(id)arg2;
- (void)onUploadDataFail:(id)arg1;
- (id)uploadingTaskID;
- (void)setUploadingTaskID:(id)arg1;
- (id)uploadInfo;
- (void)setUploadInfo:(id)arg1;
- (id)oRoomHistoryStat;
- (void)setORoomHistoryStat:(id)arg1;
- (BOOL)isUploadFail;
- (void)setIsUploadFail:(BOOL)arg1;
- (id)lastUploadErrMsg;
- (void)setLastUploadErrMsg:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (void).cxx_destruct;
@end

