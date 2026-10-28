@interface WCTableLiveSessionStorage : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
    Class m_sessionClass; // +0x18
    NSString * m_sessionType; // +0x20
    OrderedDictionary * m_sessionObjectOrderDict; // +0x28
    NSString * _identityID; // +0x30
    NSString * _sessionTableName; // +0x38
    WCTDatabase * _customDataBase; // +0x40
    NSRecursiveLock * _sessionCacheLock; // +0x48
}
+ (id)dataBaseWithSessionType:(id)arg1;
- (id)initWithSessionType:(id)arg1 withClass:(Class)arg2;
- (id)initWithSessionType:(id)arg1 targetDB:(id)arg2 customTableName:(id)arg3 withClass:(Class)arg4;
- (void)dealloc;
- (id)sessionType;
- (long long)sessionCount;
- (id)sessionAtIndex:(long long)arg1;
- (id)sessionWithSessionId:(id)arg1;
- (id)allSessions;
- (BOOL)addOrUpdateSession:(id)arg1;
- (BOOL)addOrUpdateSessionList:(id)arg1;
- (BOOL)deleteSessionAtIndex:(long long)arg1;
- (BOOL)deleteSessionWithSessionId:(id)arg1;
- (BOOL)deleteAllSessions;
- (void)clearSessionCache;
- (BOOL)deleteSessionCacheAndDB;
- (id)sessionDirectoryPath;
- (void)checkLoadData;
- (BOOL)isDefaultSessionTable;
- (void)initDB;
- (void)resortSessions;
- (id)getSessionId:(id)arg1;
- (id)identityID;
- (void)setIdentityID:(id)arg1;
- (id)sessionTableName;
- (void)setSessionTableName:(id)arg1;
- (id)customDataBase;
- (void)setCustomDataBase:(id)arg1;
- (id)sessionCacheLock;
- (void)setSessionCacheLock:(id)arg1;
- (void).cxx_destruct;
@end
