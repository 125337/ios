@interface WCFinderThreadSafeLRUCache : NSObject
{
    MMLRUCache * _cache; // +0x8
    NSRecursiveLock * _lock; // +0x10
}
- (id)initWithCapacity:(unsigned int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned int)capacity;
- (unsigned long long)count;
- (id)allKeys;
- (id)allObjects;
- (id)allKeysAndObjects;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
