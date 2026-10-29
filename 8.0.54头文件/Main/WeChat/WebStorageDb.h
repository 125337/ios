@interface WebStorageDb : NSObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _tableWebStorageConfig; // +0x10
    WCTTable * _tableWebStorageGlobalConfig; // +0x18
}
- (BOOL)initDb;
- (void)createTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)closeDb;
- (void)closeDbBeforeInit;
- (BOOL)setConfig:(id)arg1 Key:(id)arg2 ValueSzie:(unsigned int)arg3 WeightStr:(id)arg4 ExpireTimestamp:(unsigned int)arg5 FilePath:(id)arg6;
- (id)getGlobalConfig:(id)arg1 WeightStr:(id)arg2;
- (BOOL)insertWeightIfNeed:(id)arg1 WeightStr:(id)arg2;
- (void)adjustRealWeight:(id)arg1;
- (BOOL)compareWeightStr:(id)arg1 WeightStr2:(id)arg2;
- (long long)getStorageSize:(id)arg1;
- (id)getWebStorageConfig:(id)arg1 Key:(id)arg2;
- (id)getNewestWebStorageConfig:(id)arg1;
- (id)getStorageAppIdList;
- (id)getAscendingWeightStrArray:(id)arg1;
- (id)getOldestWebStorageConfig:(id)arg1 WeightStr:(id)arg2;
- (id)getExpireConfigList;
- (BOOL)deleteConfig:(id)arg1 Key:(id)arg2;
- (BOOL)deleteConfigsWith:(id)arg1;
- (BOOL)deleteGlobalConfigsWith:(id)arg1;
- (BOOL)deleteGlobalConfig:(id)arg1 WeightStr:(id)arg2;
- (id)getAllConfig;
- (id)getAllGlobalConfig;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableWebStorageConfig;
- (void)setTableWebStorageConfig:(id)arg1;
- (id)tableWebStorageGlobalConfig;
- (void)setTableWebStorageGlobalConfig:(id)arg1;
- (void).cxx_destruct;
@end

