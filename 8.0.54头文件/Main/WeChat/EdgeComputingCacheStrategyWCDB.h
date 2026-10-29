@interface EdgeComputingCacheStrategyWCDB : EdgeComputingCacheStrategyBase
{
    WCTDatabase * _dataBase; // +0x8
    WCTTable * _cacheDataTable; // +0x10
}
- (id)getTableName;
- (void)reset;
- (void)close;
- (id)genDBPath;
- (void)save:(id)arg1;
- (void)remove:(id)arg1;
- (void)clear;
- (void)deleteExpire:(unsigned long long)arg1;
- (id)query:(id)arg1;
- (unsigned long long)count;
- (void).cxx_destruct;
@end

