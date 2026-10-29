@interface WCFinderLFUCache : NSObject <WCFinderCacheBaseProtocol>
{
    unsigned long long _costLimit; // +0x8
    unsigned long long _countLimit; // +0x10
    id <WCFinderCacheDelegate> _delegate; // +0x18
    long long _strategy; // +0x20
    NSString * _name; // +0x28
    unsigned long long _totalCount; // +0x30
    unsigned long long _totalCost; // +0x38
    WCFinderDoublyLinkedList * _freqNodeList; // +0x40
    NSMutableDictionary * _nodeDict; // +0x48
    NSRecursiveLock * _lock; // +0x50
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
- (unsigned long long)totalCount;
- (unsigned long long)totalCost;
- (id)freqNodeList;
- (id)nodeDict;
- (id)description;
- (unsigned long long)costLimit;
- (void)setCostLimit:(unsigned long long)arg1;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)strategy;
- (void)setStrategy:(long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTotalCount:(unsigned long long)arg1;
- (void)setTotalCost:(unsigned long long)arg1;
- (void)setFreqNodeList:(id)arg1;
- (void)setNodeDict:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

