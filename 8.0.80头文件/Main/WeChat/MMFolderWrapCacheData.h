@interface MMFolderWrapCacheData : NSObject <PBCoding>
{
    unsigned int _totalProgress; // +0x8
    NSString * _cacheID; // +0x10
    NSRecursiveLock * _lock; // +0x18
}
+ (void)PBArrayAdd_cacheID;
+ (void)PBArrayAdd_totalProgress;
+ (void)initialize;
+ (id)loadFolderWrapCache;
+ (id)getShortPathFromFullPath:(id)arg1;
+ (id)getMd5KeyFromFullPath:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)saveFolderWrapCache;
- (id)getWrapCacheByFullPath:(id)arg1;
- (void)setWrapCache:(id)arg1 withFullPath:(id)arg2;
- (void)deleteCacheByFullPath:(id)arg1;
- (id)getWrapCacheKeys;
- (id)getWrapCacheByKey:(id)arg1;
- (id)cacheID;
- (void)setCacheID:(id)arg1;
- (unsigned int)totalProgress;
- (void)setTotalProgress:(unsigned int)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
