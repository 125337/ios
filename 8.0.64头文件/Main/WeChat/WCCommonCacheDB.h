@interface WCCommonCacheDB : NSObject
{
    long long _cacheLimitCount; // +0x8
    WCTDatabase * _database; // +0x10
    WCTTable * _cacheTable; // +0x18
}
+ (id)GetDBConfigPath;
+ (id)GetDBPath;
- (id)init;
- (BOOL)reloadDataBase;
- (void)changeToRelativePath;
- (BOOL)createCacheTable;
- (BOOL)addCommonCacheObj:(id)arg1;
- (id)getCacheWithFileMd5:(id)arg1;
- (void)removeCachesWithFileMd5:(id)arg1;
- (void)removeCachesWithFilePath:(id)arg1;
- (void)removeCachesWithAggregateName:(id)arg1;
- (void)updateLastUseTime:(id)arg1;
- (void)removeCacheByLRU;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (long long)cacheLimitCount;
- (void)setCacheLimitCount:(long long)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)cacheTable;
- (void)setCacheTable:(id)arg1;
- (void).cxx_destruct;
@end
