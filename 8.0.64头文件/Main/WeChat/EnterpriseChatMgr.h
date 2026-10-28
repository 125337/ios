@interface EnterpriseChatMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IEnterpriseBizTransferExt>
{
    NSMutableSet * m_markingMsgRead; // +0x8
    NSMutableSet * m_pendingMarkMsgRead; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)enterChat:(id)arg1;
- (void)quitChat:(id)arg1;
- (void)markChatRead:(id)arg1;
- (void)qyStatusNotify:(id)arg1 bizChatId:(id)arg2;
- (void)handleQyMsgStateNotifyResp:(id)arg1;
- (unsigned int)genRandomClienMsgId;
- (void)statusNotify:(id)arg1 code:(int)arg2 arg:(id)arg3;
- (void)handleStatusNotifyResp:(id)arg1;
- (void)statusNotifyEnterSession:(id)arg1;
- (void)statusNotifyQuitSession:(id)arg1;
- (void)statusNotifyMarkRead:(id)arg1;
- (void)onRemoteDeviceEnterChat:(id)arg1;
- (void)onRemoteDeviceQuitChat:(id)arg1;
- (void)onRemoteDeviceMarkChatRead:(id)arg1;
- (void)clearUnReadForRemoteDevice:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)bizTransferReq:(unsigned int)arg1 bizBody:(id)arg2 mainBrandUserName:(id)arg3;
- (void)handleBizTransfer:(id)arg1;
- (void)onBizTransferResult:(int)arg1 errorMsg:(id)arg2 cmd:(unsigned int)arg3 bodyData:(id)arg4 mainBrandUserName:(id)arg5;
- (void)requestInviteShareInfo:(id)arg1;
- (void).cxx_destruct;
@end
