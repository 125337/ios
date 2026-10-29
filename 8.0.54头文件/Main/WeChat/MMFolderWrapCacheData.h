@interface MMFolderWrapCacheData : NSObject <PBCoding>
{
    BOOL _isSharedCache; // +0x8
    unsigned int _totalProgress; // +0xc
    NSMutableDictionary * _dicCache; // +0x10
    NSString * _cacheID; // +0x18
    NSRecursiveLock * _lock; // +0x20
}
+ (void)PBArrayAdd_cacheID;
+ (void)PBArrayAdd_dicCache;
+ (void)PBArrayAdd_totalProgress;
+ (void)initialize;
+ (id)loadFolderWrapCache;
+ (id)getCacheKeyFromFullPath:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)saveFolderWrapCache;
- (id)getWrapCacheByKey:(id)arg1;
- (void)setWrapCache:(id)arg1 withKey:(id)arg2;
- (void)deleteCacheByKey:(id)arg1;
- (id)dicCache;
- (void)setDicCache:(id)arg1;
- (id)cacheID;
- (void)setCacheID:(id)arg1;
- (unsigned int)totalProgress;
- (void)setTotalProgress:(unsigned int)arg1;
- (BOOL)isSharedCache;
- (void)setIsSharedCache:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

