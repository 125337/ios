@interface QMapLRUCache : NSObject
{
    NSString * _name; // +0x8
    id <QMapLRUCacheDelegate> _delegate; // +0x10
    unsigned long long _totalCostLimit; // +0x18
    unsigned long long _countLimit; // +0x20
    NSMutableDictionary * _map; // +0x28
    QMapLinkList * _linkList; // +0x30
    NSLock * _lock; // +0x38
}
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)name;
- (void)setName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)totalCostLimit;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (id)map;
- (void)setMap:(id)arg1;
- (id)linkList;
- (void)setLinkList:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
