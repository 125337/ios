@interface FriendAsistSessionMgr : MMUserService <VerifyRecordReliableSyncExt, MMServiceProtocol, IMsgExt, IMMNewSessionMgrExt, IContactMgrExt>
{
    NSMutableDictionary * m_dicUnReadCount; // +0x8
    BOOL _verifyRecordUnreadCountRefreshInFlight; // +0x10
    BOOL _verifyRecordUnreadCountRefreshPending; // +0x11
    BOOL _verifyRecordUnreadCountRefreshShouldNotify; // +0x12
    SendVerifyMsgBusinessCardImageLogic * _businessCardImageLogic; // +0x18
    NSObject<OS_dispatch_queue> * _verifyRecordUnreadCountQueue; // +0x20
    NSNumber * _verifyRecordUnreadCountCache; // +0x28
    NSString * _verifyRecordUnreadCountCacheAccountUserName; // +0x30
    unsigned long long _verifyRecordUnreadCountCacheReadVersion; // +0x38
    id /* block */ _verifyRecordActiveSyncDebounceBlock; // +0x40
    NSMutableOrderedSet * _verifyRecordPendingMsgSvrIDs; // +0x48
}
- (void)onServiceInit;
- (id)init;
- (unsigned int)getUnreadCountForChat:(id)arg1;
- (unsigned int)getLegacyUnreadCountForChat:(id)arg1;
- (unsigned int)getVerifyRecordUnreadCountForChat:(id)arg1;
- (unsigned int)getVisibleLegacyUnreadCountForChat:(id)arg1;
- (void)invalidateVerifyRecordUnreadCountCacheAndRefresh;
- (void)markVerifyRecordUnreadAsReadForAccountUserName:(id)arg1 readVersion:(unsigned long long)arg2;
- (void)notifyFriendAssistUnreadCountChanged;
- (void)refreshVerifyRecordUnreadCountAndNotify:(BOOL)arg1;
- (id)GetHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(BOOL)arg3;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(int)arg3 OnlyTo:(BOOL)arg4;
- (id)GetUnreadDBHelloMessages:(id)arg1;
- (id)GetArrHelloAndUpToCloudVerifyRecordMsg:(id)arg1 HelloUser:(id)arg2 Limit:(int)arg3 OnlyTo:(BOOL)arg4;
- (void)ClearUnRead:(id)arg1 HelloUser:(id)arg2;
- (void)ClearMsg:(id)arg1;
- (void)ClearMsg:(id)arg1 HelloUser:(id)arg2;
- (BOOL)clearObsoleteHelloMessagesForUser:(id)arg1 excludingMsgServerIds:(id)arg2 beforeCreateTime:(unsigned int)arg3;
- (id)GetLastMessage:(id)arg1 OnlyTo:(BOOL)arg2;
- (id)GetLastMessage:(id)arg1 HelloUser:(id)arg2 OnlyTo:(BOOL)arg3;
- (id)GetLastHelloAndUpToCloudVerifyRecordMsg:(id)arg1 HelloUser:(id)arg2 OnlyTo:(BOOL)arg3;
- (void)fillTicketIfNeededInVerifyWrapMsg:(id)arg1 fromReceivedMsg:(id)arg2;
- (void)deleteStaleLocalVerifyRecordAndTriggerActiveSyncAfterReAddIfNeeded:(BOOL)arg1 userName:(id)arg2 opCode:(unsigned int)arg3 msgId:(unsigned long long)arg4;
- (void)AddHelloMsg:(id)arg1 helloWord:(id)arg2 opCode:(unsigned int)arg3 msgId:(unsigned long long)arg4;
- (void)AddFirstHelloMsg:(id)arg1 helloWord:(id)arg2 opCode:(unsigned int)arg3 msgId:(unsigned long long)arg4;
- (BOOL)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3;
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2;
- (void)updateBlackContactHelloUnreadStatus:(unsigned int)arg1;
- (void)asyncUpdateBlackContactHelloUnreadStatus:(unsigned int)arg1;
- (id)getBusinessCardImageLogic;
- (void)setHadMMContactDeleteFlagToHelloMesWrap:(id)arg1;
- (BOOL)clearHadDeleteHelloInInsertNewHelloMsg:(id)arg1 HelloUser:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)onVerifyRecordInitialHistorySyncCompletedWithMaxVersion:(unsigned long long)arg1;
- (void)onVerifyRecordReliableSyncDataReceived:(id)arg1;
- (void)scheduleVerifyRecordReconciliationForChatName:(id)arg1 messageList:(id)arg2;
- (void)OnAddMsgForSpecialSession:(id)arg1 MsgList:(id)arg2;
- (void)OnMsgNotAddDBSession:(id)arg1 MsgList:(id)arg2;
- (void)moveOldData;
- (void)onSessionUpgrade;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onNewContact:(id)arg1;
- (id)genBusinessCardImgWrap:(id)arg1;
- (id)businessCardImageLogic;
- (void)setBusinessCardImageLogic:(id)arg1;
- (id)verifyRecordUnreadCountQueue;
- (void)setVerifyRecordUnreadCountQueue:(id)arg1;
- (id)verifyRecordUnreadCountCache;
- (void)setVerifyRecordUnreadCountCache:(id)arg1;
- (id)verifyRecordUnreadCountCacheAccountUserName;
- (void)setVerifyRecordUnreadCountCacheAccountUserName:(id)arg1;
- (unsigned long long)verifyRecordUnreadCountCacheReadVersion;
- (void)setVerifyRecordUnreadCountCacheReadVersion:(unsigned long long)arg1;
- (BOOL)verifyRecordUnreadCountRefreshInFlight;
- (void)setVerifyRecordUnreadCountRefreshInFlight:(BOOL)arg1;
- (BOOL)verifyRecordUnreadCountRefreshPending;
- (void)setVerifyRecordUnreadCountRefreshPending:(BOOL)arg1;
- (BOOL)verifyRecordUnreadCountRefreshShouldNotify;
- (void)setVerifyRecordUnreadCountRefreshShouldNotify:(BOOL)arg1;
- (id /* block */)verifyRecordActiveSyncDebounceBlock;
- (void)setVerifyRecordActiveSyncDebounceBlock:(id /* block */)arg1;
- (id)verifyRecordPendingMsgSvrIDs;
- (void)setVerifyRecordPendingMsgSvrIDs:(id)arg1;
- (void).cxx_destruct;
@end
