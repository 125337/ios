@interface WASessionMgr : MMUserService <ISessionStorageDelegate, IMMNewSessionMgrExt, ISessionInfoExt, IMsgExt, WAContactMgrExtension, MMServiceProtocol, IMMNewSessionMgrFilterExt>
{
    MMBaseSessionStorage * _sessionStorage; // +0x8
    NSMutableDictionary * _dicUserName2CellData; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupData;
- (unsigned int)sessionCount;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (void)deleteSessionAtIndex:(long long)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (void)updateMainFrameSession;
- (void)clearMainFrameSessionUnreadCount;
- (id)getAllSessions;
- (void)addOrUpdateSession:(id)arg1;
- (void)addOrUpdateSessionList:(id)arg1;
- (void)removeCellDataCacheWithUserNameList:(id)arg1;
- (unsigned int)updateSessionForUser:(id)arg1;
- (void)updateSessionForContactListChanged:(id)arg1;
- (void)updateSessionAndNotifyUI:(id)arg1;
- (void)deleteAllSessions;
- (void)deleteSessionMessage:(id)arg1;
- (void)callExtOnSessionChange;
- (unsigned int)totalUnreadCount;
- (id)dictionaryOfFromBusiness2SubUserNameSet;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (id)genMainFrameSessionInfo;
- (id)getMainFrameSessionMessageUserName;
- (void)updateMainFrameSessionWithNotify:(BOOL)arg1;
- (void)deleteMainFrameSession;
- (void)onGetDraft:(id)arg1 contact:(id)arg2;
- (void)onModifyDraft:(id)arg1 contact:(id)arg2 draftTime:(unsigned int)arg3;
- (id)importSessions;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)onModifyWeAppContactList:(id)arg1;
- (void)onDeleteWeAppContact:(id)arg1;
- (void).cxx_destruct;
@end
