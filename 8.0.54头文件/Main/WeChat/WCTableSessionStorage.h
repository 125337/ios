@interface WCTableSessionStorage : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
    Class m_sessionClass; // +0x18
    NSString * m_sessionType; // +0x20
    NSMutableArray * m_sessionObjectList; // +0x28
    NSMutableSet * m_tempSessionObjects; // +0x30
    id <ITableSessionStorageDelegate> m_delegate; // +0x38
    TableSessionStorageSetting * m_setting; // +0x40
    NSString * _identityID; // +0x48
    NSString * _sessionTableName; // +0x50
    WCTDatabase * _customDataBase; // +0x58
}
+ (id)dataBaseWithSessionType:(id)arg1;
+ (void)processVersionUpdate;
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
- (BOOL)isDefaultSessionTable;
- (id)_settingPath;
- (void)initDB;
- (void)resortSessions;
- (BOOL)renameDefaultTableNameTo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)identityID;
- (void)setIdentityID:(id)arg1;
- (id)sessionTableName;
- (void)setSessionTableName:(id)arg1;
- (id)customDataBase;
- (void)setCustomDataBase:(id)arg1;
- (void).cxx_destruct;
@end

