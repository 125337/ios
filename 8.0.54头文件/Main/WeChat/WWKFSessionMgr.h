@interface WWKFSessionMgr : MMUserService <ISessionStorageDelegate, IMMNewSessionMgrExt, ISessionInfoExt, IMsgExt, IWWKFContactMgrExt, IOpenImResourceMgrExt, MMServiceProtocol, IMMNewSessionMgrFilterExt>
{
    MMBaseSessionStorage * _sessionStorage; // +0x8
    NSMutableDictionary * _dicUserName2CellData; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupData;
- (id)genMainFrameSessionInfo;
- (void)updateMainFrameSession;
- (void)deleteMainFrameSession;
- (id)getMainFrameSessionMessageUserName;
- (void)updateMainFrameSessionWithNotify:(BOOL)arg1;
- (void)clearMainFrameSessionUnreadCount;
- (BOOL)updateSessionForUser:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (id)importSessionsForSessionType:(id)arg1;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)onWWKFContactUpdated:(id)arg1;
- (void)onGetOpenImResourceDone:(id)arg1;
- (unsigned int)sessionCount;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)genSessionCellDataWithSessionInfo:(id)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (void)deleteSessionAtIndex:(long long)arg1;
- (void)deleteAllSessions;
- (void)deleteSessionMessage:(id)arg1;
- (id)updateMainSessionUnreadInfo;
- (void)callExtOnSessionChange;
- (void)changeUnreadCount:(long long)arg1 forUsername:(id)arg2;
- (id)getAllSessions;
- (void)addOrUpdateSession:(id)arg1;
- (void)addOrUpdateSessionList:(id)arg1;
- (void)updateSessionAndNotifyUI:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (id)dicUserName2CellData;
- (void)setDicUserName2CellData:(id)arg1;
- (void).cxx_destruct;
@end

