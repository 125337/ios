@interface BrandFansMsgSessionStorage : NSObject
{
    NSString * _bizuin; // +0x8
    WCTableSessionStorage * _sessionStorage; // +0x10
}
+ (id)sessionDB;
+ (id)customTableNameForBizuin:(id)arg1;
- (id)initWithBizuin:(id)arg1 targetDB:(id)arg2;
- (void)addOrUpdateSessionForSessionID:(id)arg1 message:(id)arg2;
- (void)addOrUpdateSession:(id)arg1;
- (void)updateSessionID:(id)arg1 lastMessage:(id)arg2;
- (unsigned long long)sessionCount;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoForSessionID:(id)arg1;
- (BOOL)clearUnreadCountForSessionID:(id)arg1;
- (void)clearAllUnreadCount;
- (void)deleteSessionID:(id)arg1;
- (unsigned long long)allUnreadCount;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (void).cxx_destruct;
@end
