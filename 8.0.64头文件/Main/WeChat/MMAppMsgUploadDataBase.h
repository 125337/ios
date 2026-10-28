@interface MMAppMsgUploadDataBase : MMObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _uploadfileTable; // +0x10
}
- (id)init;
- (void)reloadDatabase;
- (void)createTables;
- (void)dealloc;
- (BOOL)tryCleanData;
- (id)createTableWithName:(id)arg1 objectClass:(Class)arg2;
- (BOOL)updateAMUItemInDB:(id)arg1;
- (BOOL)deleteAMUItemInDB:(id)arg1;
- (BOOL)deleteAllItemForUser:(id)arg1;
- (BOOL)deleteAMUItemForMsg:(id)arg1;
- (id)getAMUItem:(unsigned int)arg1;
- (id)MMAppMsgUploadRootDir;
- (id)MMAppMsgUploadDBPath;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)uploadfileTable;
- (void)setUploadfileTable:(id)arg1;
- (void).cxx_destruct;
@end
