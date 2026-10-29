@interface BrandFansMsgSessionStorage : NSObject
{
    int _bizType; // +0x8
    NSString * _bizuin; // +0x10
    WCTableSessionStorage * _sessionStorage; // +0x18
}
+ (id)sessionDB;
+ (id)customTableNameForBizuin:(id)arg1;
- (id)initWithBizuin:(id)arg1 bizType:(int)arg2 targetDB:(id)arg3;
- (void)addOrUpdateSessionForSessionID:(id)arg1 message:(id)arg2;
- (void)addOrUpdateSession:(id)arg1;
- (void)updateSessionID:(id)arg1 lastMessage:(id)arg2;
- (unsigned long long)sessionCount;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoForSessionID:(id)arg1;
- (id)sessionInfoForOpenID:(id)arg1;
- (BOOL)clearUnreadCountForSessionID:(id)arg1;
- (void)clearAllUnreadCount;
- (void)deleteSessionID:(id)arg1;
- (unsigned long long)allUnreadCount;
- (void)unreadCountSinceTimestamp:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)unreadCountSinceTimestamp:(unsigned int)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)msgSessions;
- (unsigned long long)msgSessionCount;
- (id)msgSessionInfoAtIndex:(long long)arg1;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (void).cxx_destruct;
@end
