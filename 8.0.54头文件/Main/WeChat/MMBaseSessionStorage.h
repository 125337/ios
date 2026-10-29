@interface MMBaseSessionStorage : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
    Class m_sessionClass; // +0x18
    NSString * m_sessionType; // +0x20
    NSMutableArray * m_sessionObjectList; // +0x28
    NSMutableSet * m_tempSessionObjects; // +0x30
    id <ISessionStorageDelegate> m_delegate; // +0x38
    SessionStorageSetting * m_setting; // +0x40
}
+ (void)processVersionUpdate;
- (id)initWithSessionType:(id)arg1 withClass:(Class)arg2;
- (void)dealloc;
- (id)sessionType;
- (long long)sessionCount;
- (id)sessionAtIndex:(long long)arg1;
- (id)sessionWithSessionId:(id)arg1;
- (id)allSessions;
- (BOOL)addOrUpdateSession:(id)arg1;
- (BOOL)addOrUpdateSessionList:(id)arg1;
- (BOOL)addOrUpdateTempSession:(id)arg1;
- (BOOL)isTempSession:(id)arg1;
- (BOOL)isTempSessionWithSessionId:(id)arg1;
- (BOOL)clearAllTempSessions;
- (BOOL)deleteSessionAtIndex:(long long)arg1;
- (BOOL)deleteSessionWithSessionId:(id)arg1;
- (BOOL)deleteAllSessions;
- (void)clearSessionCache;
- (void)clearSessionCacheAndReimportSession;
- (BOOL)deleteSessionCacheAndDB;
- (BOOL)copySessionCacheToSessionType:(id)arg1;
- (id)sessionDirectoryPath;
- (void)updateSessionSetting;
- (BOOL)checkSessionVersion;
- (void)checkLoadData;
- (void)initDB;
- (void)resortSessions;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

