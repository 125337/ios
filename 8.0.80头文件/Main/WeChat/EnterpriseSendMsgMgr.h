@interface EnterpriseSendMsgMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * arySendMsgRunningQueue; // +0x8
    NSMutableArray * arySendMsgWaitingQueue; // +0x10
    id <EnterpriseSendMsgMgrDelegate> delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)sendMsg:(id)arg1;
- (void)checkWaitingQueue;
- (void)batchSendMsg:(id)arg1;
- (id)microMsgReq2WrapMsg:(id)arg1;
- (void)handleSendMsgListFail:(id)arg1;
- (void)handleSendMsgListSuc:(id)arg1 microMsgReqList:(id)arg2;
- (void)handleSendMsgResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
