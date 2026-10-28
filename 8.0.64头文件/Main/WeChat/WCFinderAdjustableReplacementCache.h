@interface WCFinderAdjustableReplacementCache : NSObject <WCFinderCacheDelegate, WCFinderCacheBaseProtocol>
{
    unsigned long long _costLimit; // +0x8
    unsigned long long _countLimit; // +0x10
    id <WCFinderCacheDelegate> _delegate; // +0x18
    long long _strategy; // +0x20
    double _lfuRatio; // +0x28
    NSString * _name; // +0x30
    WCFinderLRUCache * _lruCache; // +0x38
    WCFinderLRUCache * _lruCacheForGhost; // +0x40
    WCFinderLRUCache * _lfuCache; // +0x48
    WCFinderLRUCache * _lfuCacheForGhost; // +0x50
    NSMutableDictionary * _cacheList; // +0x58
    NSRecursiveLock * _lock; // +0x60
}
- (id)initWithName:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)safeRemoveObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)trimToCount:(unsigned long long)arg1;
- (void)trimToCost:(unsigned long long)arg1;
- (void)setCountLimit:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCost;
- (id)lruCache;
- (id)lruCacheForGhost;
- (id)lfuCache;
- (id)lfuCacheForGhost;
- (id)cacheList;
- (void)cache:(id)arg1 didEvictObject:(id)arg2;
- (id)description;
- (unsigned long long)costLimit;
- (unsigned long long)countLimit;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)strategy;
- (void)setStrategy:(long long)arg1;
- (double)lfuRatio;
- (void)setLfuRatio:(double)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setLruCache:(id)arg1;
- (void)setLruCacheForGhost:(id)arg1;
- (void)setLfuCache:(id)arg1;
- (void)setLfuCacheForGhost:(id)arg1;
- (void)setCacheList:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
