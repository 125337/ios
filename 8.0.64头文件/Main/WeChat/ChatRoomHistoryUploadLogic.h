@interface ChatRoomHistoryUploadLogic : MMUserService <RecordUploadCDNMgrDelegate, MMServiceProtocol>
{
    RecordUploadCDNMgr * _recordUploadCDNMgr; // +0x8
    CMessageWrap * _uploadingRecordMsg; // +0x10
    NSString * _chatroomId; // +0x18
    MMTimer * _uploadTimer; // +0x20
    NSArray * _arrSelectedMsgs; // +0x28
    NSString * _uploadingTaskId; // +0x30
    CdnUploadTaskInfo * _uploadInfo; // +0x38
    ChatRoomHistoryShareStat * _oRoomHistoryStat; // +0x40
    NSString * _lastUploadErrMsg; // +0x48
}
- (id)init;
- (void)dealloc;
- (BOOL)uploadHistory:(id)arg1 arrMsg:(id)arg2 chatroom:(id)arg3;
- (void)invalidate;
- (void)OnUploadProgressChanged:(id)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)OnUploadRecordForHistory:(id)arg1 uploadInfo:(id)arg2 errMsg:(id)arg3;
- (id)uploadingTaskId;
- (void)setUploadingTaskId:(id)arg1;
- (id)uploadInfo;
- (void)setUploadInfo:(id)arg1;
- (id)oRoomHistoryStat;
- (void)setORoomHistoryStat:(id)arg1;
- (id)lastUploadErrMsg;
- (void)setLastUploadErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
