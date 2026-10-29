@interface StatusDBCache : NSObject
{
    os_unfair_lock_s m_lock; // +0x8
    BOOL _isCacheReady; // +0xc
    BOOL _isCacheLoading; // +0xd
    BOOL _isReleased; // +0xe
    NSMutableDictionary * _cacheMap; // +0x10
    NSMutableSet * _cachedUsers; // +0x18
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x20
}
- (id)init;
- (BOOL)isTextStateExpired:(id)arg1;
- (id)filterExpiredTextState:(id)arg1;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (id)selectTextStateWithStateId:(id)arg1;
- (id)selectTSModelWithStateId:(id)arg1;
- (id)getStatusInfoListCache;
- (BOOL)updateCache:(id)arg1;
- (BOOL)initCacheAsync;
- (BOOL)prepareCacheAsync:(id)arg1;
- (id)prepareCacheSync:(id)arg1;
- (BOOL)initCacheAsyncImpl;
- (void)showToast:(id)arg1;
- (BOOL)deleteAndRefreshCache:(id)arg1;
- (BOOL)deleteAndRefreshCacheWithId:(id)arg1;
- (id)copyCacheItem:(id)arg1;
- (BOOL)isCacheLoadReady;
- (void)releaseCache;
- (BOOL)isCacheReleaed;
- (id)cacheMap;
- (BOOL)isCacheReady;
- (void)setIsCacheReady:(BOOL)arg1;
- (BOOL)isCacheLoading;
- (void)setIsCacheLoading:(BOOL)arg1;
- (BOOL)isReleased;
- (void)setIsReleased:(BOOL)arg1;
- (id)cachedUsers;
- (void)setCachedUsers:(id)arg1;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void).cxx_destruct;
@end
