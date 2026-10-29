@interface BrandSessionMgr : MMUserService <ISessionStorageDelegate, WXGImportMessageNotification, ISessionInfoExt, MMSessionRefreshExt, PBMessageObserverDelegate, MMServiceProtocol, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt>
{
    BrandSessionCache * m_sessionCache; // +0x8
    BOOL m_isUpgradeFromOldVersion; // +0x10
    MMBaseSessionStorage * m_sessionStorage; // +0x18
    NSMutableDictionary * m_dictCellData; // +0x20
    NSData * m_oldSessionCacheData; // +0x28
    NSMutableArray * m_dicMsgListArray; // +0x30
    NSMutableArray * m_setUsrNameArray; // +0x38
    MemoryMappedKV * _mappedKV; // +0x40
}
- (unsigned int)getNewArrivalCount;
- (BOOL)hasNewArrival;
- (void)clearNewArrivalCount;
- (void)clearReadCountForBrand:(id)arg1;
- (void)clearReadCountForBrandSet:(id)arg1;
- (void)deleteSessionOfUserName:(id)arg1 withDeleteContact:(BOOL)arg2 withDeleteMsg:(BOOL)arg3;
- (void)deleteSessionOfSession:(id)arg1 withDeleteContact:(BOOL)arg2 withDeleteMsg:(BOOL)arg3;
- (void)deleteAllSessions;
- (void)innerNotifyDeletedAllSession;
- (void)updateSessionOfUser:(id)arg1;
- (unsigned int)innerUpdateSessionForUser:(id)arg1;
- (void)updateSession;
- (unsigned int)updateOrAddSessionForUser:(id)arg1 AllowAdd:(BOOL)arg2;
- (void)recordLastBrandMsgSvrIDWhenEnterBrandSessionHolder;
- (void)recordLastBrandMsgSvrIDWhenExitSessionWithBrand:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onGetDraft:(id)arg1 contact:(id)arg2;
- (void)onModifyDraft:(id)arg1 contact:(id)arg2 draftTime:(unsigned int)arg3;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)p_onAddMsgListArray:(id)arg1 notifyUserNameArray:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isSessionCacheValid;
- (id)pathForSessionCache;
- (void)saveSessionCache;
- (void)tryLoadSessionCache;
- (void)rebuildSessionCacheFromDB;
- (id)lastMessageFromSessionCache;
- (void)updateSessionCacheWithMsgWrap:(id)arg1 hasNewArrival:(BOOL)arg2;
- (void)updateSessionCacheOnReadCountChangeWithMsgWrap:(id)arg1;
- (void)clearSessionCacheNewArrival;
- (void)clearSessionCacheNewArrivalWhenPopBrandName:(id)arg1;
- (void)tryInvalidateSessionCacheForUser:(id)arg1;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onSessionUpgrade;
- (void)onRebuildSessionStorage;
- (void)rebuildSessionStorage;
- (void)onImportMessageSuccess;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)onServiceMemoryWarning;
- (BOOL)isContactNeedProcess:(id)arg1;
- (void)addBrandSessionHolderToSessionList;
- (id)genMainFrameSessionInfo;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (void)updateSessionCellData:(id)arg1;
- (unsigned int)sessionCount;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)getAllUserNamesOnSessionStorgae;
- (id)getLastUserNameOnSessionStorage;
- (id)importSessions;
- (void)cleanUpNoMsgSessions:(id)arg1;
- (void)deleteOldVersionSessionCache;
- (id)pathForNewCache;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (void)topSessionOfUser:(id)arg1;
- (void)untopSessionOfUser:(id)arg1;
- (void)addSession:(id)arg1;
- (unsigned int)genSendMsgTime;
- (void)getOrUpdateStrategy;
- (id)getMenuEntryListInfo;
- (id)mappedKV;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleStrategyResp:(id)arg1;
- (id)m_sessionCache;
- (void)setM_sessionCache:(id)arg1;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
@end
