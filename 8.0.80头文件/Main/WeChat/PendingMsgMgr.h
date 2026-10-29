@interface PendingMsgMgr : MMUserService <IMsgExt, BaseMsgViewControllerExt, MMServiceProtocol>
{
    NSMutableDictionary * _sessionInfos; // +0x8
    PendingMsgStorage * _storage; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (id)getFirstInfo:(id)arg1;
- (BOOL)containsInfo:(id)arg1 msgLocalId:(unsigned int)arg2;
- (id)getInfos:(id)arg1;
- (void)onAddMsg:(id)arg1 type:(int)arg2 fromMsgLogicController:(id)arg3;
- (void)addInfo:(id)arg1 chatName:(id)arg2;
- (void)deleteInfo:(id)arg1 msgLocalId:(unsigned int)arg2;
- (void)deleteAllInfos:(id)arg1;
- (id)handleNewMsg:(id)arg1 inSession:(BOOL)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)handleAddMsg:(id)arg1 outsideSession:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)onExitBaseMsgSession:(id)arg1;
- (id)sessionInfos;
- (void)setSessionInfos:(id)arg1;
- (id)storage;
- (void)setStorage:(id)arg1;
- (void).cxx_destruct;
@end
