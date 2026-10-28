@interface FTSWeShopDB : NSObject
{
    FTSDB * _database; // +0x8
}
- (void)dealloc;
- (BOOL)initDB:(id)arg1;
- (BOOL)clearTables;
- (long long)getWeShopLastSyncUpdateSeq;
- (BOOL)insertOrUpdateWeShopLastSyncUpdateSeq:(long long)arg1;
- (BOOL)modifyRowsTransactionInWeShopTablesWithInsertOrUpdateItems:(id)arg1 deleteItems:(id)arg2 syncUpdateSeq:(long long)arg3;
- (id)queryTextInWeShopTables:(id)arg1 limit:(unsigned long long)arg2 cancelBlock:(id /* block */)arg3;
- (id)database;
- (void)setDatabase:(id)arg1;
- (void).cxx_destruct;
@end
