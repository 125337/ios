@interface lzCacheCleanManager : NSObject
{
    NSDate * _lastCleanDate; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)cleanCache:(id)arg1 filterBlock:(id /* block */)arg2 queue:(id)arg3;
- (void)removeFiles:(id)arg1 cacheMgr:(id)arg2;
- (BOOL)isFileCaching:(id)arg1 cacheMgr:(id)arg2;
- (id)scanCachePath:(id)arg1;
- (BOOL)isExpFile:(id)arg1;
- (void).cxx_destruct;
@end

