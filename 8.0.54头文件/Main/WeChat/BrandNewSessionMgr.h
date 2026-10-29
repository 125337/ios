@interface BrandNewSessionMgr : MMUserService <ISessionStorageDelegate, WXGImportMessageNotification, ISessionInfoExt, MMSessionRefreshExt, BrandTimelineMsgMgrExt, MMServiceProtocol, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt>
{
    BrandSessionCache * m_mainSessionCache; // +0x8
    BOOL m_isUpgradeFromOldVersion; // +0x10
    MMBaseSessionStorage * m_sessionStorage; // +0x18
    NSMutableDictionary * m_dictCellData; // +0x20
    NSData * m_oldSessionCacheData; // +0x28
    NSMutableArray * m_dicMsgListArray; // +0x30
    NSMutableArray * m_setUsrNameArray; // +0x38
}
- (void)onServiceInit;
- (void)internalInit;
- (void)dealloc;
- (void)unregisterExt;
- (BOOL)isServiceValid;
- (void)clearReadCountForBrand:(id)arg1;
- (void)deleteSessionOfUserName:(id)arg1 withDeleteContact:(BOOL)arg2 withDeleteMsg:(BOOL)arg3;
- (void)deleteSessionOfSession:(id)arg1 withDeleteContact:(BOOL)arg2 withDeleteMsg:(BOOL)arg3;
- (void)deleteAllSessions;
- (void)innerNotifyDeletedAllSession;
- (void)updateSessionOfUser:(id)arg1;
- (unsigned int)innerUpdateSessionForUser:(id)arg1;
- (unsigned int)updateOrAddSessionForUser:(id)arg1 AllowAdd:(BOOL)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)p_onAddMsgListArray:(id)arg1 notifyUserNameArray:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onSessionUpgrade;
- (void)onRebuildSessionStorage;
- (void)rebuildSessionStorage;
- (void)onImportMessageSuccess;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)onServiceMemoryWarning;
- (BOOL)isContactNeedProcess:(id)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (void)updateSessionCellData:(id)arg1;
- (unsigned int)sessionCount;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)getAllUserNamesOnSessionStorgae;
- (id)getLastUserNameOnSessionStorage;
- (id)getAllSession;
- (id)importSessions;
- (void)cleanUpNoMsgSessions:(id)arg1;
- (void)deleteOldVersionSessionCache;
- (id)pathForNewCache;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (void)topSessionOfUser:(id)arg1;
- (void)untopSessionOfUser:(id)arg1;
- (void)addSession:(id)arg1;
- (unsigned int)genSendMsgTime;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (id)m_mainSessionCache;
- (void)setM_mainSessionCache:(id)arg1;
- (void).cxx_destruct;
@end

