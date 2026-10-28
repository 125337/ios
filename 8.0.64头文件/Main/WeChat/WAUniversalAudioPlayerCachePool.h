@interface WAUniversalAudioPlayerCachePool : MMObject
{
    NSMutableDictionary * _cachePool; // +0x8
    NSObject<OS_dispatch_queue> * _synchronizationQueue; // +0x10
    unsigned long long _currentMemoryUsage; // +0x18
    unsigned long long _memoryCapacity; // +0x20
    unsigned long long _preferredMemoryUsageAfterPurge; // +0x28
}
- (id)initWithSuffix:(id)arg1;
- (void)dealloc;
- (void)addCache:(id)arg1 forIdentifier:(id)arg2;
- (id)cacheForKey:(id)arg1;
- (void)removeAllCache;
- (void)didReceiveMemoryWarning;
- (id)cachePool;
- (void)setCachePool:(id)arg1;
- (id)synchronizationQueue;
- (void)setSynchronizationQueue:(id)arg1;
- (unsigned long long)currentMemoryUsage;
- (void)setCurrentMemoryUsage:(unsigned long long)arg1;
- (unsigned long long)memoryCapacity;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (unsigned long long)preferredMemoryUsageAfterPurge;
- (void)setPreferredMemoryUsageAfterPurge:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
