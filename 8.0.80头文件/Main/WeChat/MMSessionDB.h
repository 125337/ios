@interface MMSessionDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
    NSMutableDictionary * m_sessionCache; // +0x18
    MMSessionSetting * m_sessionSetting; // +0x20
    LSMFileStorage * m_fileStorage; // +0x28
    NSCache * m_preLoadSessionCache; // +0x30
    WCTTable * m_tableSessionDeleteInfo; // +0x38
    WCTTable * m_tableSessionLastMsgInfo; // +0x40
    BOOL m_disableAutoFixLastMsg; // +0x48
}
- (id)init;
- (void)initDB;
- (id)GetAllSession:(BOOL *)arg1;
- (id)GetAllSession;
- (BOOL)dbAddOrModifySession:(id)arg1;
- (BOOL)dbAddOrModifySessions:(id)arg1;
- (BOOL)dbDeleteSession:(id)arg1;
- (BOOL)dbDeleteSessions:(id)arg1;
- (void)dbImportSessions:(id)arg1;
- (void)tryLoadSessionSetting;
- (void)saveSessionSetting;
- (void)SetSessionImported;
- (long long)GetSessionImportTime;
- (BOOL)saveSessionInfo:(id)arg1;
- (void)saveSessionInfos:(id)arg1;
- (id)loadSessionOfUser:(id)arg1;
- (void)deleteSessionOfUser:(id)arg1;
- (unsigned int)GetSessionModifyTimeInSeconds:(id)arg1;
- (void)ImportSessions:(id)arg1;
- (unsigned int)GetSessionVersion;
- (void)SetSessionVersion:(unsigned int)arg1;
- (unsigned int)GetSessionFailCount;
- (void)SetSessionFailCount:(unsigned int)arg1;
- (unsigned int)GetSessionCount;
- (void)SetSessionCount:(unsigned int)arg1;
- (void)CleanupPreLoadSessionCache;
- (void)ASyncFulFillSession:(id)arg1;
- (void)FulFillSession:(id)arg1 checkStatus:(BOOL)arg2;
- (void)AddSession:(id)arg1;
- (void)ModifySession:(id)arg1;
- (void)AddOrModifySessions:(id)arg1;
- (void)DeleteSessionByUserName:(id)arg1;
- (void)DeleteSessions:(id)arg1;
- (BOOL)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (id)GetSessionDeleteInfo:(id)arg1;
- (BOOL)DeleteOutOfDateSessionDeleteInfo;
- (void)onRenewMMDB;
- (void)updateSession:(id)arg1 lastMsgSvrId:(long long)arg2;
- (void)removeSessionLastMsgRecords:(id)arg1;
- (long long)getSessionLastMsgId:(id)arg1;
- (void)checkSessionLastMsgUpdate:(id)arg1;
- (void).cxx_destruct;
@end
