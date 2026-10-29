@interface WCFinderLiveMsgSessionInfoStorage : NSObject
{
    WCTableLiveSessionStorage * _sessionStorage; // +0x8
    NSString * _finderUsername; // +0x10
    NSString * _logName; // +0x18
}
- (id)initWithSessionType:(id)arg1 logName:(id)arg2;
- (id)initWithSessionType:(id)arg1 finderUsername:(id)arg2 targetDB:(id)arg3 logName:(id)arg4;
- (id)finderTableName:(id)arg1;
- (id)finderDataWithName:(id)arg1;
- (unsigned long long)sessionCount;
- (void)addOrUpdateSessionWithSessionId:(id)arg1 wrapMsg:(id)arg2 result:(id)arg3 updateBlock:(id /* block */)arg4;
- (BOOL)addOrUpdateSessionWithSessionId:(id)arg1 sessionInfo:(id)arg2;
- (BOOL)deleteSessionWithSessionId:(id)arg1;
- (id)findSessionWithSessionId:(id)arg1;
- (void)findSessionWithSessionId:(id)arg1 result:(id)arg2;
- (id)sessionInfoWithSessionId:(id)arg1;
- (id)findSessionWithLiveId:(unsigned long long)arg1 liveIdentity:(unsigned int)arg2 selfUserName:(id)arg3;
- (id)unreadCountNumber;
- (id)clearUnreadCountWithSessionId:(id)arg1;
- (BOOL)updateLastMsgWithSessionId:(id)arg1 lastMsg:(id)arg2;
- (void)removeAllSessionInStorage:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)logName;
- (void)setLogName:(id)arg1;
- (void).cxx_destruct;
@end

