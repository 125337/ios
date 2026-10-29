@interface MMNewSessionMgr : MMUserService <IEnterpriseMsgExt, ISessionInfoExt, EmoticonDescMgrExt, MMSessionRefreshExt, WCDBSpecifiedRecoverViewControllerDelegate, MMServiceProtocol, IMsgExt, IContactMgrExt>
{
    NSMutableArray * m_arrSession; // +0x8
    MMSessionDB * m_sessionStorage; // +0x10
    NSString * m_nsActiveUserName; // +0x18
    SessionSortLogic * m_oSessionSortLogic; // +0x20
    unsigned int m_uiTotalUnReadCount; // +0x28
    unsigned int m_appIconTotalUnreadCount; // +0x2c
    NSMutableDictionary * m_dicAtMeCount; // +0x30
    NSMutableDictionary * m_dicNewInvCount; // +0x38
    NSMutableDictionary * m_dicTransferCount; // +0x40
    NSMutableDictionary * m_dictAACount; // +0x48
    NSMutableDictionary * m_dictExclusiveHbCount; // +0x50
    NSMutableDictionary * m_dictUpdatableMsgDigest; // +0x58
    NSMutableDictionary * m_dicGroupUndoneCount; // +0x60
    MMChatContentUploadLogic * m_chatUploadLogic; // +0x68
    NSArray * m_sessionFilterArray; // +0x70
    BOOL m_shouldReload; // +0x78
    BOOL m_shouldChangeUnreadCount; // +0x79
    NSMutableArray * m_notifySessionChangeArray; // +0x80
    NSMutableArray * m_notifyNewMsgArrivingArray; // +0x88
    BOOL m_bNotifySound; // +0x90
    SessionForwardRecordLogic * m_forwardRecordLogic; // +0x98
    NSMutableDictionary * m_dicAtMeType; // +0xa0
    BOOL _recoverViewControllerShown; // +0xa8
}
+ (id)getSessionName:(id)arg1;
- (id)getSessionFilterArray;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (void)onServiceClearData;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)p_refreshNewSessionMgr;
- (void)p_notifySessionChangeArrayAddObject:(id)arg1;
- (void)p_notifyNewMsg:(id)arg1 withNotifyFlag:(long long)arg2;
- (unsigned int)GetSessionCount;
- (id)GetSessionAtIndex:(unsigned int)arg1;
- (id)GetSessionUserNameAtIndex:(unsigned int)arg1;
- (id)GetFirstUntopSessionUserName;
- (id)GetSessionInfoList;
- (void)CleanupPreLoadSessionCache;
- (void)AsyncFulFillSession:(id)arg1;
- (void)SyncFulFillSession:(id)arg1;
- (long long)getUnreadCountInSession:(id)arg1;
- (id)GetSessionByUserName:(id)arg1;
- (long long)GetSessionIndexByUserName:(id)arg1;
- (unsigned int)GetTotalUnreadCount;
- (unsigned int)GetTotalUnreadCountForAppIcon;
- (unsigned int)GetActiveUserUnreadCount;
- (id)SessionEnumerator;
- (id)mainSessionEnumerator;
- (id)SessionNewArray;
- (void)AddOrModifySession:(id)arg1 withNotifyFlag:(long long)arg2;
- (void)AddOrModifySession:(id)arg1 withNotifyFlag:(long long)arg2 immediateRefresh:(BOOL)arg3;
- (void)AddOrModifySession:(id)arg1 targetContactUserName:(id)arg2 withNotifyFlag:(long long)arg3;
- (void)AddOrModifySession:(id)arg1 targetContactUserName:(id)arg2 withNotifyFlag:(long long)arg3 immediateRefresh:(BOOL)arg4;
- (void)updateTimeForSessionByUserName:(id)arg1;
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2;
- (void)clearAtMeCount:(id)arg1;
- (void)clearNewInvCount:(id)arg1;
- (void)clearNewInvApprove:(id)arg1;
- (void)clearTransferCount:(id)arg1;
- (void)clearAAMessageCount:(id)arg1;
- (void)clearExclusiveHbMessageCount:(id)arg1;
- (void)clearUpdatableMsgNotify:(id)arg1;
- (void)clearNeedContactVerifyFlag:(id)arg1;
- (void)clearGroupUndoneSessionFlag:(id)arg1;
- (void)clearChatRoomSpecialAttentionFlag:(id)arg1;
- (void)DeleteSessionOfUser:(id)arg1;
- (void)DeleteSessionOfUsernames:(id)arg1;
- (void)DeleteSessionWithoutDeleteMessage:(id)arg1;
- (void)hideSession:(id)arg1;
- (void)DeleteAllSession;
- (void)p_batchDeleteSessions;
- (void)DeleteMsgButKeepSession:(id)arg1;
- (id)GetUserNamesOnSessionList;
- (id)GetSyncUserNamesOnSessionListWithMaxCount:(unsigned int)arg1;
- (void)SetActiveSession:(id)arg1;
- (BOOL)IsActiveUser:(id)arg1;
- (id)GetActiveUser;
- (BOOL)HasActiveUser;
- (unsigned int)GenSendMsgTime;
- (unsigned int)GetSessionModifyTimeInSeconds:(id)arg1;
- (BOOL)IsSessionNeedDelayLoad;
- (void)temporaryTopSessionByContact:(id)arg1;
- (BOOL)IsSessionWithNullMsg:(id)arg1;
- (id)recentForwardSessions;
- (void)deleteExpiredSessionForwardRecord;
- (BOOL)checkContactHasSession:(id)arg1;
- (void)TopSessionByName:(id)arg1;
- (void)UntopSessionByName:(id)arg1;
- (BOOL)IsTopSessionCountExceed;
- (BOOL)isSessionTopable:(id)arg1;
- (void)AddSessionToTop:(id)arg1;
- (void)unfoldSessionByName:(id)arg1;
- (void)unfoldAllSessions;
- (void)foldSessionByNames:(id)arg1;
- (long long)foldSessionCount;
- (BOOL)isFoldTopSession;
- (BOOL)shouldFoldSession:(id)arg1;
- (BOOL)isSelfToSelfSession:(id)arg1;
- (BOOL)shouldUnfoldSessionForNewMsgWrap:(id)arg1;
- (id)genSessionInfoByUserName:(id)arg1;
- (id)genSessionInfoByContact:(id)arg1;
- (id)genSessionInfoByContact:(id)arg1 allowEmptyLastMsg:(BOOL)arg2;
- (void)tryToBuildSession:(BOOL)arg1;
- (void)appFirstBecomeActive;
- (void)p_buildSession:(BOOL)arg1;
- (BOOL)checkWhetherTheSessionIsAbnormal:(id)arg1;
- (BOOL)checkIfSessionsCorrupted:(id)arg1;
- (void)showWCDBSpecifiedRecoverVCAndReport;
- (void)checkLoadData;
- (void)fixUnreadCountForLastSession;
- (void)filterSessionDeleted:(id)arg1 modified:(id)arg2;
- (void)resortSessions;
- (void)tryGetContactImage:(id)arg1;
- (id)getContactByNameForce:(id)arg1;
- (void)processContactWhenAddMsg:(id)arg1;
- (BOOL)checkStrangerFirstChat:(id)arg1;
- (BOOL)realCheckStrangerFirstChat:(id)arg1;
- (BOOL)checkContactVerifySysmsgSwitch;
- (void)executeContactVerifyBanner;
- (BOOL)isUserNeedProcess:(id)arg1;
- (BOOL)isMsgNeedProcess:(id)arg1;
- (BOOL)isNeedSaveSessionInfo:(id)arg1;
- (void)processOnAddMsgWithNotifyFlag:(long long)arg1 UsrName:(id)arg2;
- (BOOL)isNeedCallNewMsgArrival:(id)arg1;
- (void)deleteSessionsAtIndexes:(id)arg1;
- (unsigned int)getSessionIndexOfUser:(id)arg1;
- (void)fulFillSession:(id)arg1;
- (void)fulFillSession:(id)arg1 loadDetails:(BOOL)arg2;
- (void)recountUnReadCount;
- (void)recountUnReadCountAndFireExtension;
- (void)checkAutoClearUnreadForSession:(id)arg1;
- (BOOL)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (id)GetSessionDeleteInfo:(id)arg1;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)updateSessions:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)checkSessionTop:(id)arg1 contact:(id)arg2;
- (void)checkSessionTopWithContact:(id)arg1;
- (void)onAddMsgDigetstForSession:(id)arg1;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)deleteAtUserList:(id)arg1;
- (void)setContact:(id)arg1 AtUserList:(id)arg2;
- (void)addContact:(id)arg1 AtUser:(id)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onDeleteContactIsShouldKeep:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)checkAndMergeTopFlag;
- (void)rebuildAndUpdateSessionInfo;
- (unsigned int)GetUnReadCountExcludingActiveUser:(id)arg1;
- (void)updateGroupUndoneSessionFlagForRoom:(id)arg1;
- (void)disableGroupUndoneSessionFlagForRoom:(id)arg1;
- (void)ModifySessionOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (void)onRecovered:(BOOL)arg1;
- (unsigned int)getTimeElapsedSinceLastSessionListFix;
- (void)setTimeOfLastSessionListFix;
- (void)modifySessionWithoutNotify:(id)arg1;
- (void)updateSession:(id)arg1 lastMsgSvrId:(long long)arg2;
- (BOOL)recoverViewControllerShown;
- (void)setRecoverViewControllerShown:(BOOL)arg1;
- (void).cxx_destruct;
@end

