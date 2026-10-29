@interface WCFinderMsgSessionMgr : MMUserService <IMsgExt, ITableSessionStorageDelegate, WCFinderRedDotNotifyExt, WCFinderSwitchExt, WCFinderFinderInitExt, MMServiceProtocol>
{
    NSMutableOrderedSet * m_asFansSessionIdListWithNewArrivalMsg; // +0x8
    WCFinderMsgSessionInfoStorage * _asFansSessionStorage; // +0x10
    WCFinderMsgSessionInfoStorage * _asAliasSessionStorage; // +0x18
    NSMutableDictionary * _sessionStoragesDic; // +0x20
    WCFinderMsgAuthorSessionMgr * _authorSessionMgr; // +0x28
    WCFinderMsgSessionInfoStorage * _asAuthorSessionStorage; // +0x30
    WCFinderMsgSessionStatusStorage * _sessionStatusStorage; // +0x38
    NSMutableSet * _finderUserNamesUpdated; // +0x40
    NSMutableSet * _sessionIdsForUpdatedStatusFromSvr; // +0x48
    NSMutableDictionary * _contactExtInfoDict; // +0x50
}
+ (id)userNameForMyAccountType:(unsigned int)arg1;
+ (unsigned int)accountTypeForUsername:(id)arg1;
+ (BOOL)isFinderContactUserName:(id)arg1;
+ (id)defaultFinderContactForUsername:(id)arg1;
- (id)init;
- (id)asAuthorSessionStorage;
- (id)getSessionStorageWithSessionID:(id)arg1;
- (id)sessionStorageForAccountType:(int)arg1 username:(id)arg2;
- (void)onServiceMemoryWarning;
- (void)updateLocalSessionUsernameForFinderMultipleAccounts;
- (BOOL)checkNeedCleanLocalAuthorSession;
- (BOOL)configAsAuthorSessionOwnerWithForceUpate:(BOOL)arg1 sessionStorage:(id)arg2;
- (void)tryUpdateAsAuthorSessionOwner;
- (BOOL)configAsAliasSessionOwnerWithForceUpate:(BOOL)arg1;
- (BOOL)updateSessionOwner:(id)arg1 otherValidUsernames:(id)arg2 myAccountType:(unsigned int)arg3 storage:(id)arg4;
- (void)removeRedDotForAccountType:(unsigned int)arg1 username:(id)arg2;
- (unsigned long long)sessionCountForMyAccountType:(unsigned int)arg1;
- (id)sessionInfoForAliasSessionEntrance;
- (id)asAuthorSessionViewControllerWithUsername:(id)arg1;
- (id)asAuthorGreetMsgSessionViewControllerWithUsername:(id)arg1;
- (id)asFansSessionViewController;
- (id)asAliasSessionViewController;
- (id)finderContactForUserName:(id)arg1 sessionId:(id)arg2 tryUpdate:(BOOL)arg3 commentScene:(int)arg4;
- (void)asyncGetSessionIdWithComment:(id)arg1 loadingVC:(id)arg2 finderUsername:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)asyncGetSessionIdWithComment:(id)arg1 loadingVC:(id)arg2 finderUsername:(id)arg3 sourceType:(int)arg4 completionBlock:(id /* block */)arg5;
- (void)asyncGetSessionIdWithFansUsername:(id)arg1 fansId:(id)arg2 loadingVC:(id)arg3 finderUsername:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)asyncGetSessionIdWithFansUsername:(id)arg1 fansId:(id)arg2 loadingVC:(id)arg3 finderUsername:(id)arg4 sourceType:(int)arg5 completionBlock:(id /* block */)arg6;
- (void)asyncGetSessionIdWithLikeId:(unsigned long long)arg1 username:(id)arg2 objectID:(id)arg3 loadingVC:(id)arg4 finderUsername:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)asyncGetSessionIdWithFavID:(id)arg1 username:(id)arg2 objectID:(id)arg3 loadingVC:(id)arg4 finderUsername:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)asyncGetSessionIdWithFavID:(id)arg1 username:(id)arg2 objectID:(id)arg3 loadingVC:(id)arg4 finderUsername:(id)arg5 sourceType:(int)arg6 completionBlock:(id /* block */)arg7;
- (void)asyncGetSessionIdWithFinderContact:(id)arg1 loadingVC:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)asyncGetSessionIdWithFinderContact:(id)arg1 myAccountType:(unsigned int)arg2 loadingVC:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)asyncStreamProfileGetSessionIdWithContact:(id)arg1 myAccountType:(unsigned int)arg2 loadingVC:(id)arg3 profileEnterSource:(int)arg4 feedID:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)asyncGetSessionIdWithListenBuffer:(id)arg1 username:(id)arg2 loadingVC:(id)arg3 finderUsername:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)asyncGetSessionIdForFinderLiveAnchorWithFinderContact:(id)arg1 objectId:(unsigned long long)arg2 liveContactExtInfo:(id)arg3 loadingVC:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)asyncGetSessionIdForFinderLiveAnchorWithFinderContact:(id)arg1 sourceType:(int)arg2 objectId:(unsigned long long)arg3 liveContactExtInfo:(id)arg4 loadingVC:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)asyncGetSessionIdForAnchorInFinderLiveLotteryWithUserName:(id)arg1 objectId:(unsigned long long)arg2 lotteryId:(id)arg3 liveContactExtInfo:(id)arg4 loadingVC:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)asyncGetSessionIdForAudienceInFinderLiveLotteryWithFinderContact:(id)arg1 myAccountType:(unsigned int)arg2 objectId:(unsigned long long)arg3 lotteryId:(id)arg4 loadingVC:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)asyncGetSessionIdWithFinderMention:(id)arg1 loadingVC:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)asyncGetSessionIdWithRequest:(id)arg1 loadingVC:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)openChatWithSessionId:(id)arg1 realChatFinderContact:(id)arg2 fromNav:(id)arg3 animated:(BOOL)arg4 reporter:(id)arg5;
- (void)openChatWithSessionId:(id)arg1 realChatFinderContact:(id)arg2 fromNav:(id)arg3 animated:(BOOL)arg4 sourceType:(int)arg5 reporter:(id)arg6;
- (id)msgContentLogicWithSessionId:(id)arg1 realChatFinderContact:(id)arg2;
- (void)adjustMsgContentLogic:(id)arg1 withSessionId:(id)arg2;
- (BOOL)adjustMsgContentLogic:(id)arg1 sessionStatus:(id)arg2 realChatFinderContact:(id)arg3;
- (void)enterSessionListWithCellDataSource:(id)arg1;
- (void)willQuitSessionListWithCellDataSource:(id)arg1;
- (void)quitSessionListWithCellDataSource:(id)arg1;
- (id)getUnreadPrivateMsgLastSession;
- (unsigned int)getUnreadCountForSessionId:(id)arg1;
- (void)clearUnreadCountForSessionId:(id)arg1;
- (void)deleteSessionWithSessionId:(id)arg1;
- (BOOL)isUserNeedProcess:(id)arg1;
- (id)addOrUpdateSessionWithSessionId:(id)arg1 wrapMsg:(id)arg2;
- (void)updateFinderRedDotForNewMsg:(id)arg1;
- (void)updateFinderRedDotForQuitPrivateMsgEntrance:(id)arg1;
- (void)updateFinderRedDotForClearUnread:(id)arg1;
- (void)tryUpdateSessionStatusFromSvrWithSessionId:(id)arg1 feedID:(id)arg2 sourceType:(int)arg3 userpageEnterType:(int)arg4 lastCommentScene:(int)arg5;
- (void)updateSessionStatusWithSessionId:(id)arg1 rejectMsgStatus:(BOOL)arg2;
- (id)sessionStatusWithSessionId:(id)arg1;
- (id)realChatUserWithSessionId:(id)arg1;
- (id)selfUserNameWithSessionId:(id)arg1;
- (BOOL)rejectMsgStatusWithSessionId:(id)arg1;
- (BOOL)canSendAttachmentForSessionId:(id)arg1;
- (BOOL)disableSendmsgNeedFollowForSessionId:(id)arg1;
- (BOOL)isSessionExistedWithSessionId:(id)arg1;
- (BOOL)adjustMsgUsersWithSessionId:(id)arg1 msgWrap:(id)arg2;
- (void)updateSessionStatusWithType:(unsigned int)arg1 svrSessionInfo:(id)arg2 username:(id)arg3;
- (id)recoverStatusFromSessionListWithSessionId:(id)arg1;
- (void)recoverSessionStatusFromSessionInfos:(id)arg1 myAccountType:(unsigned int)arg2 isInNormalSession:(BOOL)arg3;
- (void)recoverSessionStatus;
- (void)markSessionStatusDBNeedRecover;
- (void)makeSureSessionStatusExistWithType:(unsigned int)arg1 sessionInfo:(id)arg2 isInNormalSession:(BOOL)arg3;
- (void)callSessionStatusUpdatedExtWithSessionId:(id)arg1;
- (void)tryUpdatePrivateMsgContactExtInfoForSessionId:(id)arg1 sourceType:(int)arg2;
- (id)getPrivateMsgContactExtInfoForSessionId:(id)arg1;
- (void)onGreetMsgSessionUnreadStatusChanged:(id)arg1;
- (id)asFansSessionIdListWithNewArrivalMsg;
- (void)saveAsFansSessionIdListWithNewArrivalMsg;
- (void)clearAsFansSessionIdListWithNewArrivalMsg;
- (void)removeAllAliasSessionInAsFansSessionIdListWithNewArrivalMsg;
- (void)updateNewArrivalMsgWithSessionIds:(id)arg1;
- (void)removeAsFansSessionIdWithNewArrivalMsg:(id)arg1;
- (void)onAsFansSessionMsgTipsChange;
- (void)finderLiveIdentityChange;
- (id)importSessionsForSessionType:(id)arg1 identityID:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)_batchAddMsgListForSession:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onFinderNotifyUnreadSystemCountUpdate:(BOOL)arg1 finderUsername:(id)arg2;
- (void)onFinderInitSuccessful;
- (void)onFinderCancellationAccount;
- (void)onFinderCreateAccount;
- (void)onFinderUserprepare;
- (unsigned long long)getPrivateMsgTotalUnreadCountByUsername:(id)arg1;
- (unsigned long long)getWxPrivateUnreadCount;
- (id)asFansSessionStorage;
- (void)setAsFansSessionStorage:(id)arg1;
- (id)asAliasSessionStorage;
- (void)setAsAliasSessionStorage:(id)arg1;
- (id)sessionStoragesDic;
- (void)setSessionStoragesDic:(id)arg1;
- (id)authorSessionMgr;
- (void)setAuthorSessionMgr:(id)arg1;
- (void)setAsAuthorSessionStorage:(id)arg1;
- (id)sessionStatusStorage;
- (void)setSessionStatusStorage:(id)arg1;
- (id)finderUserNamesUpdated;
- (void)setFinderUserNamesUpdated:(id)arg1;
- (id)sessionIdsForUpdatedStatusFromSvr;
- (void)setSessionIdsForUpdatedStatusFromSvr:(id)arg1;
- (id)contactExtInfoDict;
- (void)setContactExtInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
