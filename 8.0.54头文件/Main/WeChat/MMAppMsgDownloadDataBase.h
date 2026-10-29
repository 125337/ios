@interface MMAppMsgDownloadDataBase : MMObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _downloadfileTable; // +0x10
}
- (id)init;
- (void)reloadDatabase;
- (void)createTables;
- (void)dealloc;
- (BOOL)tryCleanData;
- (id)createTableWithName:(id)arg1 objectClass:(Class)arg2;
- (BOOL)updateAMDItemInDB:(id)arg1;
- (BOOL)deleteAMDItemInDB:(id)arg1;
- (id)getAMDItemInDB:(id)arg1;
- (id)getAMDItemInDBFromSvrId:(long long)arg1;
- (id)MMAppMsgDownloadRootDir;
- (id)MMAppMsgDownloadDBPath;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)downloadfileTable;
- (void)setDownloadfileTable:(id)arg1;
- (void).cxx_destruct;
@end

