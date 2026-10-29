@interface EdgeComputingDataDao : MMObject
{
    NSString * configID; // +0x8
    NSArray * fieldConfigModels; // +0x10
    EdgeComputingWCDBManager * dbManager; // +0x18
}
- (id)init:(id)arg1 withFieldConfigModels:(id)arg2;
- (void)dealloc;
- (BOOL)checkTableExist;
- (BOOL)createTable;
- (BOOL)createIndex;
- (void)updateTable;
- (BOOL)dropTable;
- (BOOL)insertPatch:(id)arg1;
- (BOOL)insert:(id)arg1;
- (BOOL)deleteExpire:(unsigned long long)arg1;
- (unsigned long long)queryRowNum;
- (BOOL)checkColumnExist:(id)arg1;
- (id)getDBFieldType:(unsigned int)arg1;
- (id)getDBFieldName:(id)arg1;
- (id)getDBTableName:(id)arg1;
- (id)getAndCheckEdgeDBPath;
- (void).cxx_destruct;
@end

