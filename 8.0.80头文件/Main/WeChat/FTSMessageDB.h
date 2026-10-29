@interface FTSMessageDB : NSObject
{
    FTSDB * _database; // +0x8
    BOOL _isHandlingUsernameFailIdRetry; // +0x10
    BOOL _isHandlingAutoReparing; // +0x11
}
- (BOOL)asyncCheckAndRepair:(id)arg1 completion:(id /* block */)arg2;
- (void)logFTSIndexStatus:(id)arg1;
- (void)dealloc;
- (BOOL)initDB:(id)arg1;
- (BOOL)createAllTable;
- (BOOL)dropAllTable;
- (void)preloadCacheUser;
- (BOOL)insertNewRowInUserNameIDTable:(id)arg1 lastLocalId:(unsigned int)arg2;
- (BOOL)batchInsertMsgToFTSTable:(id)arg1 forbidLog:(BOOL)arg2;
- (BOOL)batchInsertMsgToFTSTable:(id)arg1 forbidLog:(BOOL)arg2 outErrorCode:(unsigned int *)arg3;
- (BOOL)updateUserNameInvalid:(id)arg1;
- (BOOL)migrateToFTS5WithLimit:(int)arg1 isFinish:(BOOL *)arg2 cancelBlock:(id /* block */)arg3;
- (id)queryText:(id)arg1 limitUsrname:(id)arg2 cancelBlock:(id /* block */)arg3;
- (unsigned int)getNextCursorMesId:(id)arg1;
- (unsigned int)getPreCursorMesId:(id)arg1;
- (BOOL)hasInvalidRowsInChatTable;
- (BOOL)deleteInvalidRowsInChatTable:(unsigned int)arg1 outUsr:(id *)arg2 outRemains:(unsigned int *)arg3 cancelBlock:(id /* block */)arg4;
- (BOOL)updateToDeleteLocalIds:(id)arg1 usr:(id)arg2;
- (BOOL)deleteByRecordLimit:(unsigned int)arg1 finish:(BOOL *)arg2 operateCnt:(unsigned int *)arg3 cancelBlock:(id /* block */)arg4;
- (void)getAllSessions:(unsigned int *)arg1 andAllIndexMsg:(unsigned int *)arg2;
- (unsigned int)getIndexCountForUsr:(id)arg1;
- (unsigned int)getIndexTableIdForSession:(id)arg1 msgLocalId:(unsigned int)arg2 content:(id *)arg3;
- (void)getIndexProgressForSession:(id)arg1 preCursor:(unsigned long long *)arg2 nextCursor:(unsigned long long *)arg3 fts5Migrated:(BOOL *)arg4;
- (unsigned long long)calculateAllInvalidMsg;
- (void)addUserNameInvalidFail:(id)arg1;
- (void)retrySetUserNameInvalid;
- (BOOL)insertOrUpdateVoiceTransText:(id)arg1 forMsgWrap:(id)arg2 userName:(id)arg3;
- (id)database;
- (void)setDatabase:(id)arg1;
- (BOOL)isHandlingUsernameFailIdRetry;
- (void)setIsHandlingUsernameFailIdRetry:(BOOL)arg1;
- (BOOL)isHandlingAutoReparing;
- (void)setIsHandlingAutoReparing:(BOOL)arg1;
- (void).cxx_destruct;
@end
