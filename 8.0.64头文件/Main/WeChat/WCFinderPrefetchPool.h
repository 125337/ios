@interface WCFinderPrefetchPool : NSObject
{
    NSMutableDictionary * _cacheDict; // +0x8
    NSMutableDictionary * _waitingCgiDict; // +0x10
    NSMutableDictionary * _waitingToDropDict; // +0x18
    NSMutableDictionary * _droppedCacheDict; // +0x20
}
- (id)init;
- (void)saveRequest:(id)arg1 extraData:(id)arg2 cachedKey:(id)arg3;
- (void)saveResponse:(id)arg1 validityPeriod:(unsigned long long)arg2 cachedKey:(id)arg3;
- (void)saveCache:(id)arg1 withCachedKey:(id)arg2;
- (id)prefetchCacheWithCachedKey:(id)arg1;
- (void)removePrefetchCacheWithCachedKey:(id)arg1;
- (void)addWaitingCgi:(id)arg1 cachedKey:(id)arg2;
- (void)removeWaitingCgiWithCachedKey:(id)arg1;
- (id)waitingCgiWithCachedKey:(id)arg1;
- (void)cleanExpiredCache;
- (void)_cleanExpiredCache;
- (void)addWaitingToDropCache:(id)arg1 cachedKey:(id)arg2;
- (void)removeWaitingToDropCacheWithRequestId:(unsigned long long)arg1 cachedKey:(id)arg2;
- (id)waitingToDropCacheWithRequestId:(unsigned long long)arg1 cachedKey:(id)arg2;
- (void)addDroppedCache:(id)arg1 cachedKey:(id)arg2;
- (void)removeAllDroppedCachesWithCachedKey:(id)arg1;
- (id)droppedCachesAfterTimestamp:(unsigned long long)arg1 cachedKey:(id)arg2;
- (id)waitingToDropKeyWith:(unsigned long long)arg1 cachedKey:(id)arg2;
- (id)cacheDict;
- (id)waitingCgiDict;
- (id)waitingToDropDict;
- (id)droppedCacheDict;
- (id)defaultMMKVMapID;
- (id)finderPrefetchCGIMMKV;
- (void)setCacheDict:(id)arg1;
- (void)setWaitingCgiDict:(id)arg1;
- (void)setWaitingToDropDict:(id)arg1;
- (void)setDroppedCacheDict:(id)arg1;
- (void).cxx_destruct;
@end
