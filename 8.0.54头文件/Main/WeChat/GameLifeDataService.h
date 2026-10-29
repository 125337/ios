@interface GameLifeDataService : MMUserService <IMsgExt, ISessionInfoExt, ISessionStorageDelegate, MMServiceProtocol>
{
    int _notShowAppPanelItemIndex; // +0x8
    GameLifeDb * _db; // +0x10
    WCTTable * _contactTable; // +0x18
    WCTTable * _sessionInfoTable; // +0x20
    MMBaseSessionStorage * _conversationStorage; // +0x28
    GameLifeEnteredRedDotCache * _enteredRedDotCache; // +0x30
}
- (void)getSessionInfoByTalker:(id)arg1 selfUsername:(id)arg2 scene:(unsigned int)arg3 extInfo:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)getBatchSessionInfoWithTypeBySessionId:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getSessionIdFromServer:(id)arg1 talker:(id)arg2 scene:(unsigned int)arg3 extInfo:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)getLocalSessionInfoByTalker:(id)arg1 selfUsername:(id)arg2;
- (id)getLocalSessionInfoBySessionId:(id)arg1;
- (id)getAllSessionInfo;
- (BOOL)insertOrUpdateWithSessionId:(id)arg1 selfUsername:(id)arg2 talker:(id)arg3 sessionType:(unsigned int)arg4;
- (BOOL)insertOrUpdateWithSessionId:(id)arg1 selfUsername:(id)arg2 talker:(id)arg3 extInfo:(id)arg4 sessionType:(unsigned int)arg5;
- (BOOL)insertOrUpdate:(id)arg1;
- (BOOL)deleteBySessionId:(id)arg1;
- (id)getDynamicPanelItems:(id)arg1;
- (id)wordIfSendPicDisabled:(id)arg1;
- (id)wordIfCameraDisabled:(id)arg1;
- (id)wordIfStaticPanelDisabled:(unsigned int)arg1 sessionId:(id)arg2;
- (id)wordIfDynamicPanelDisabled:(unsigned int)arg1 sessionId:(id)arg2;
- (BOOL)shouldShowAttachButton;
- (BOOL)shouldShowSendPic;
- (BOOL)shouldShowCamera;
- (BOOL)shouldShowEmotionBoard;
- (BOOL)shouldShowStaticPanel:(unsigned int)arg1;
- (id)convertFromAppPanel:(id)arg1 selfUsername:(id)arg2 talker:(id)arg3;
- (BOOL)isEntryWithRedDotHadEntered:(id)arg1;
- (void)setEntryWithRedDotEntered;
- (BOOL)isShowAttachmentButtonRedDot;
- (long long)getInputToolWeAppNotShowIndex;
- (id)addPathParams:(id)arg1 selfUsername:(id)arg2 talker:(id)arg3;
- (void)notifyConversationUpdated;
- (id)getConversationBySessionId:(id)arg1;
- (id)getAllConversation;
- (void)bindConversationsWithContactAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)checkHistoryConversation;
- (void)updateLastMsgWithSessionId:(id)arg1 lastMsg:(id)arg2;
- (id)addOrUpdateConversationWithSessionId:(id)arg1 wrapMsg:(id)arg2 selfUsername:(id)arg3 talker:(id)arg4 isSender:(BOOL)arg5;
- (BOOL)addOrUpdateConversation:(id)arg1;
- (BOOL)deleteConversationBySessionId:(id)arg1;
- (void)updateLastConversationMsgType:(id)arg1 withExtInfo:(id)arg2;
- (id)getLastUnReadConversationInfo;
- (BOOL)clearConversationUnreadCount:(id)arg1;
- (unsigned int)getConversationUnreadCount:(id)arg1;
- (unsigned int)getConversationTotalUnreadCount;
- (void)reportMsgUnreadState;
- (void)getContacts:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getContactsFromServer:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)getContactFromLocal:(id)arg1;
- (void)getContactsFromLocal:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)insertOrUpdateContact:(id)arg1;
- (BOOL)deleteContact:(id)arg1;
- (void)checkContactsExpired:(id)arg1 withConversaton:(id)arg2;
- (void)isBlackListAssociateWithWAGame:(id)arg1 callback:(id /* block */)arg2;
- (void)setBlackListAssociateWithWAGame:(id)arg1 setBalck:(BOOL)arg2 isAssociate:(BOOL)arg3 callback:(id /* block */)arg4;
- (id)init;
- (void)createGameLifeConversationStorage;
- (BOOL)isUserNeedProcess:(id)arg1;
- (id)addOrUpdateConversationWithSessionId:(id)arg1 wrapMsg:(id)arg2;
- (void)testClearDB;
- (void)adjustMsgContentLogic:(id)arg1 withSessionId:(id)arg2;
- (id)importSessions;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupDb;
- (void)closeDb;
- (id)db;
- (void)setDb:(id)arg1;
- (id)contactTable;
- (void)setContactTable:(id)arg1;
- (id)sessionInfoTable;
- (void)setSessionInfoTable:(id)arg1;
- (id)conversationStorage;
- (void)setConversationStorage:(id)arg1;
- (id)enteredRedDotCache;
- (void)setEnteredRedDotCache:(id)arg1;
- (int)notShowAppPanelItemIndex;
- (void)setNotShowAppPanelItemIndex:(int)arg1;
- (void).cxx_destruct;
@end

