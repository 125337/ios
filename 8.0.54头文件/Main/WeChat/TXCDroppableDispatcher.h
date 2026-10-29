@interface TXCDroppableDispatcher : NSObject
{
    Lock _lock; // +0x8
    NSMutableArray * _cachedObjects; // +0x48
}
- (id)init;
- (void)dispatchObject:(id)arg1 shouldDrop:(id /* block */)arg2 withOperation:(id /* block */)arg3 inQueue:(id)arg4;
- (long long)cacheCount;
- (void)removeObject:(id)arg1;
- (id)cachedObjects;
- (void)setCachedObjects:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

