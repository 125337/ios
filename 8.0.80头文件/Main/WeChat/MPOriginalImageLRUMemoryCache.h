@interface MPOriginalImageLRUMemoryCache : NSObject
{
    unsigned long long _countLimit; // +0x8
    unsigned long long _costLimit; // +0x10
    NSMutableDictionary * _store; // +0x18
    NSMutableDictionary * _costs; // +0x20
    NSMutableDictionary * _ownerByKey; // +0x28
    NSMutableDictionary * _groupByKey; // +0x30
    NSMutableDictionary * _ownerGroupIndex; // +0x38
    NSMutableArray * _lruKeys; // +0x40
    NSLock * _lock; // +0x48
    unsigned long long _cost; // +0x50
}
- (id)initWithCountLimit:(unsigned long long)arg1 costLimit:(unsigned long long)arg2;
- (unsigned long long)currentCost;
- (unsigned long long)count;
- (void)touchKeyUnlocked:(id)arg1;
- (void)indexKeyUnlocked:(id)arg1 owner:(id)arg2 group:(long long)arg3;
- (void)unindexKeyUnlocked:(id)arg1;
- (void)removeObjectForKeyUnlocked:(id)arg1;
- (void)evictIfNeededUnlocked;
- (void)setObjectUnlocked:(id)arg1 forKey:(id)arg2 owner:(id)arg3 group:(long long)arg4 cost:(unsigned long long)arg5;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 owner:(id)arg3 group:(long long)arg4 cost:(unsigned long long)arg5;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)allKeys;
- (unsigned long long)removeOwner:(id)arg1 exceptGroup:(long long)arg2;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (unsigned long long)costLimit;
- (void)setCostLimit:(unsigned long long)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)costs;
- (void)setCosts:(id)arg1;
- (id)ownerByKey;
- (void)setOwnerByKey:(id)arg1;
- (id)groupByKey;
- (void)setGroupByKey:(id)arg1;
- (id)ownerGroupIndex;
- (void)setOwnerGroupIndex:(id)arg1;
- (id)lruKeys;
- (void)setLruKeys:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (unsigned long long)cost;
- (void)setCost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
