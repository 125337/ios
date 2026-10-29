@interface MessageRevokeMgr : MMUserService <ISendMessageExt, IMsgExt, MMServiceProtocol>
{
    NSMutableArray * _arrRevokeInfo; // +0x8
}
- (void)onServiceInit;
- (void)addOrUpdateOccupyMsgRevokeInfo:(id)arg1 overwriteMsgID:(unsigned long long)arg2;
- (void)onServiceClearData;
- (BOOL)RevokeMsg:(id)arg1 MsgWrap:(id)arg2 Counter:(unsigned int)arg3 revokeTicket:(id)arg4 viewController:(id)arg5;
- (void)sendRevorkRequest:(id)arg1 revokeInfo:(id)arg2;
- (void)onRevokeMsgFinish:(id)arg1 response:(id)arg2 revokeInfo:(id)arg3;
- (void)onRevokeMsgFinish:(id)arg1 response:(id)arg2 msgWrap:(id)arg3;
- (id)getMessageWrapWithOverwriteMsgID:(long long)arg1 chatName:(id)arg2;
- (BOOL)isOpenRevokeWhenSending;
- (int)getSendingSendStatusWithMsg:(id)arg1;
- (id)getRevokeInfoWithMessage:(id)arg1;
- (id)getRevokeInfoWithSvrID:(long long)arg1;
- (BOOL)deleteRevokeInfoWithMessage:(id)arg1;
- (void)deleteLocalProcessRevokeMsgWithToast:(id)arg1;
- (void)replaceRevokedMsg:(id)arg1;
- (BOOL)revokeMsgIfNeed:(id)arg1;
- (void)OnSendMessageSuccess:(id)arg1;
- (void)OnSendMessageFail:(id)arg1;
- (void)OnMsgSendFail:(id)arg1;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)onGetSvrIdWithUploadMsg:(id)arg1 SvrId:(unsigned long long)arg2;
- (void)onRevokeMsg:(id)arg1;
- (id)arrRevokeInfo;
- (void)setArrRevokeInfo:(id)arg1;
- (void).cxx_destruct;
@end

