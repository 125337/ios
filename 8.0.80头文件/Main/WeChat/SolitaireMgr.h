@interface SolitaireMgr : MMUserService <IMsgExt, SolitaireAnalysiserDelegate, IMMNewSessionMgrExt, OpenUploadMgrExt, ISendMessageExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicSessionHandlers; // +0x8
    NSMutableDictionary * _dicFoldInfo; // +0x10
    NSMutableSet * _unFoldSet; // +0x18
    SolitaireAnalysiser * _analysiser; // +0x20
    NSObject<OS_dispatch_queue> * _writeQueue; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)dicSessionHandlers;
- (id)dicFoldInfo;
- (id)unFoldSet;
- (id)analysiser;
- (void)insertNeedSolitaireAnalysisMsgRecordWithChatName:(id)arg1 LocalId:(unsigned int)arg2;
- (id)getSolitaireSessionHandlerWithUserName:(id)arg1;
- (id)getSolitaireWithIdentifier:(id)arg1 chatName:(id)arg2;
- (id)getSolitaireListWithChatName:(id)arg1;
- (BOOL)isSolitaireWithMessage:(id)arg1;
- (void)analysisSolitaireWithContent:(id)arg1 ChatName:(id)arg2 Block:(id /* block */)arg3;
- (id)getSolitaireWithMessageWrap:(id)arg1;
- (void)reportWhenJoinSolitaire:(id)arg1;
- (id)getNewestSolitaireObj:(id)arg1;
- (id)getXmlInfoWithSolitaireObj:(id)arg1;
- (id)getFoldInfoWithMsg:(id)arg1;
- (void)setUnFoldWithMsg:(id)arg1;
- (void)cleanAllUnFold;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (BOOL)onAnalysisSolitaireInfoObj:(id)arg1 MsgWrap:(id)arg2;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)onSendAppMsgSucc:(id)arg1;
- (void)OnSendMessageSuccess:(id)arg1;
- (void)updateSolitaireSvrIdWithMessage:(id)arg1;
- (void)setDicSessionHandlers:(id)arg1;
- (void)setDicFoldInfo:(id)arg1;
- (void)setUnFoldSet:(id)arg1;
- (void)setAnalysiser:(id)arg1;
- (id)writeQueue;
- (void)setWriteQueue:(id)arg1;
- (void).cxx_destruct;
@end
