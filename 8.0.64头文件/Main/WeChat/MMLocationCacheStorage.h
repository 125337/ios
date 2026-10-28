@interface MMLocationCacheStorage : MMObject <PBCoding>
{
    NSRecursiveLock * _lock; // +0x8
    NSMutableArray * _caches; // +0x10
}
+ (void)PBArrayAdd_caches;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)lastCacheItem;
- (void)addCacheItem:(id)arg1;
- (id)caches;
- (void)setCaches:(id)arg1;
- (void).cxx_destruct;
@end
