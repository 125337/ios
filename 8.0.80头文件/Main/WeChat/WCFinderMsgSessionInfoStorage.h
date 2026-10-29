@interface WCFinderMsgSessionInfoStorage : NSObject
{
    BOOL _acceptAllMyAccountUsername; // +0x8
    BOOL _showingGreetMsgSessionList; // +0x9
    BOOL _needUpdateGreetMsgSession; // +0xa
    NSMutableOrderedSet * m_newArrivalMsgSessionList; // +0x10
    WCTableSessionStorage * _sessionStorage; // +0x18
    WCTableSessionStorage * _greetMsgSessionStorage; // +0x20
    NSString * _finderUsername; // +0x28
    NSString * _logName; // +0x30
    WCFinderMsgSessionInfo * _greetMsgSessionInfo; // +0x38
    WCFinderMsgSessionOwnerInfo * _ownerInfo; // +0x40
    NSMutableSet * _validMyAccountUsernames; // +0x48
}
- (id)initWithNormalSessionType:(id)arg1 logName:(id)arg2 baseStorageDelagate:(id)arg3;
- (id)initWithNormalSessionType:(id)arg1 finderUsername:(id)arg2 targetDB:(id)arg3 logName:(id)arg4 baseStorageDelagate:(id)arg5;
- (id)finderTableName:(id)arg1;
- (id)greetTableName:(id)arg1;
- (id)finderDataWithName:(id)arg1;
- (id)ownerInfoWithName:(id)arg1;
- (unsigned long long)sessionCount;
- (void)addGreetMsgSessionWithSessionType:(id)arg1 greetSessionId:(id)arg2 targetDB:(id)arg3 unreadStatus:(BOOL)arg4 baseStorageDelagate:(id)arg5;
- (void)addOrUpdateSessionWithSessionId:(id)arg1 wrapMsg:(id)arg2 result:(id)arg3 updateBlock:(id /* block */)arg4;
- (BOOL)deleteSessionWithSessionId:(id)arg1;
- (id)findSessionWithSessionId:(id)arg1;
- (void)findSessionWithSessionId:(id)arg1 result:(id)arg2;
- (id)sessionInfoWithSessionId:(id)arg1;
- (id)unreadCountNumber;
- (BOOL)clearAllTempSessionsInGreetMsgSessionList;
- (id)clearUnreadCountWithSessionId:(id)arg1;
- (BOOL)updateLastMsgWithSessionId:(id)arg1 lastMsg:(id)arg2;
- (BOOL)isGreetMsgSessionUnread;
- (BOOL)hasUnreadInGreetSessionList;
- (void)makeSureLoadGreetMsgSession;
- (BOOL)updateGreetMsgSessionUnreadStatus:(BOOL)arg1;
- (BOOL)updateGreetMsgSessionUnreadStatusForClearUnread;
- (void)updateGreetMsgSessionInfo;
- (void)updateGreetMsgSessionWithSessionInfo:(id)arg1;
- (id)pathOfNewArrivalMsgSessionListData;
- (id)_pathOfNewArrivalMsgSessionListDataWithDirectoryName:(id)arg1;
- (void)saveNewArrivalMsgSessionList;
- (id)newArrivalMsgSessionList;
- (BOOL)hasNewArrivalMsgSessionList;
- (BOOL)clearAllNewArrivalMsgSessionList;
- (BOOL)updateNewArrivalMsgWithSessionIds:(id)arg1;
- (BOOL)removeNewArrivalMsgSessionWithSessionId:(id)arg1;
- (id)pathOfOwnerInfo;
- (id)_pathOfOwnerInfoWithDirectoryName:(id)arg1;
- (id)_legacyPathOfOwnerInfoWithDirectoryName:(id)arg1;
- (void)migrateLegacyOwnerInfoIfNeeded;
- (id)ownerInfo;
- (id)owner;
- (void)saveOwnerInfo;
- (void)updateOwner:(id)arg1 otherValidUsernames:(id)arg2 defaultOwnerAccessBlock:(id /* block */)arg3 hideSessionBlock:(id /* block */)arg4 removeSessionBlock:(id /* block */)arg5;
- (void)updateOtherValidUsernames:(id)arg1;
- (BOOL)isValidMyAccountUsername:(id)arg1;
- (void)clearDataForChangeOwner;
- (void)removeAllSessionInStorage:(id)arg1;
- (BOOL)renameLocalSessionTableNameForMasterFinder:(id)arg1;
- (BOOL)acceptAllMyAccountUsername;
- (void)setAcceptAllMyAccountUsername:(BOOL)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (id)greetMsgSessionStorage;
- (void)setGreetMsgSessionStorage:(id)arg1;
- (BOOL)showingGreetMsgSessionList;
- (void)setShowingGreetMsgSessionList:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)logName;
- (void)setLogName:(id)arg1;
- (id)greetMsgSessionInfo;
- (void)setGreetMsgSessionInfo:(id)arg1;
- (BOOL)needUpdateGreetMsgSession;
- (void)setNeedUpdateGreetMsgSession:(BOOL)arg1;
- (void)setOwnerInfo:(id)arg1;
- (id)validMyAccountUsernames;
- (void)setValidMyAccountUsernames:(id)arg1;
- (void).cxx_destruct;
@end
