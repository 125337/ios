@interface WXGBackupIndexDB : NSObject
{
    WCTDatabase * _indexDB; // +0x8
    unsigned long long _indexCount; // +0x10
    unsigned long long _indexFailedCount; // +0x18
    unsigned long long _recoverInfoCount; // +0x20
    unsigned long long _recoverInfoFailedCount; // +0x28
    NSString * _indexDBPath; // +0x30
}
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)closeDB;
- (void)removeDBFile;
- (void)insertIndexObject:(id)arg1;
- (void)insertMigrationObject:(id)arg1;
- (long long)getLastTimeOfSession:(id)arg1;
- (id)getMsgListIDForSession:(id)arg1;
- (BOOL)deleteIndexObjectByMsgID:(id)arg1;
- (id)getAllSessionName;
- (void)insertRecoverInfo:(id)arg1;
- (id)getRecoverInfoOfSession:(id)arg1;
- (unsigned long long)getTotalSessionCount;
- (id)p_getMsgListTable;
- (id)p_getMigrationTable;
- (id)p_getRecoverInfoTable;
- (BOOL)runTransaction:(id /* block */)arg1;
- (id)indexDB;
- (void)setIndexDB:(id)arg1;
- (unsigned long long)indexCount;
- (void)setIndexCount:(unsigned long long)arg1;
- (unsigned long long)indexFailedCount;
- (void)setIndexFailedCount:(unsigned long long)arg1;
- (unsigned long long)recoverInfoCount;
- (void)setRecoverInfoCount:(unsigned long long)arg1;
- (unsigned long long)recoverInfoFailedCount;
- (void)setRecoverInfoFailedCount:(unsigned long long)arg1;
- (id)indexDBPath;
- (void)setIndexDBPath:(id)arg1;
- (void).cxx_destruct;
@end

