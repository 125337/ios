@interface WAUpdatableMsgMgr : MMUserService <PBMessageObserverDelegate, IMsgExt, MMServiceProtocol>
{
    WAUpdatableMsgStorage * _updatableMsgStorage; // +0x8
    NSMutableSet * _runningReq; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)openSubscribeEntryWithShareKey:(id)arg1;
- (void)subscribeSystemMsgWithShareKey:(id)arg1;
- (id)getLatestUpdatableMsgInfoWithShareKey:(id)arg1 curInfo:(id)arg2;
- (BOOL)tryUpdateUpdatableMsgInfoWithShareKey:(id)arg1 curInfo:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetUpdatableMsgInfoResponse:(id)arg1;
- (void)handleGetChatToolMsgInfoResponse:(id)arg1;
- (void)delayCallExtAndTryUpdateShareKey:(id)arg1;
- (void)callExtAndTryUpdateShareKey:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void).cxx_destruct;
@end
