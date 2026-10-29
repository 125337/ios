@interface W1wPersonalMsgSessionStorage : NSObject
{
    BOOL m_helloMsgReddot; // +0x8
    BOOL _hasSyncedHelloMsgSessionListWithDB; // +0x9
    NSMutableOrderedSet * m_helloMsgSessionList; // +0x10
    NSString * _username; // +0x18
    WCTableSessionStorage * _sessionStorage; // +0x20
}
+ (id)sessionDB;
+ (id)customTableNameForUsername:(id)arg1;
- (id)initWithUsername:(id)arg1 targetDB:(id)arg2;
- (void)addOrUpdateSessionForSessionID:(id)arg1 message:(id)arg2;
- (void)addOrUpdateSession:(id)arg1;
- (void)updateSessionID:(id)arg1 lastMessage:(id)arg2;
- (unsigned long long)sessionCount;
- (unsigned long long)sessionListCount;
- (unsigned long long)sessionHelloListCount;
- (id)validHelloSessionIds;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)helloSessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoForSessionID:(id)arg1;
- (id)sessionInfoForToUserName:(id)arg1;
- (BOOL)clearUnreadCountForSessionID:(id)arg1;
- (void)clearAllUnreadCount;
- (void)deleteSessionID:(id)arg1;
- (void)deleteSessionAndClearHelloFlag:(id)arg1;
- (unsigned long long)allUnreadCount;
- (id)getHelloMsgListMMKVName;
- (id)helloMsgSessionList;
- (void)saveHelloMsgSessionList;
- (BOOL)hasHelloMsgSessionList;
- (BOOL)clearAllHelloMsgSessionList;
- (BOOL)addHelloMsgWithSessionIds:(id)arg1;
- (BOOL)removeHelloMsgSessionWithSessionId:(id)arg1;
- (BOOL)isHelloMsgWithSessionId:(id)arg1;
- (void)syncHelloMsgSessionListWithDB;
- (id)getHelloMsgReddotMMKVName;
- (BOOL)helloMsgReddot;
- (void)setHelloMsgReddot:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (BOOL)hasSyncedHelloMsgSessionListWithDB;
- (void)setHasSyncedHelloMsgSessionListWithDB:(BOOL)arg1;
- (void).cxx_destruct;
@end
