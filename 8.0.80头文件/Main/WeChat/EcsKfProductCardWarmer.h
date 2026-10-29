@interface EcsKfProductCardWarmer : NSObject
{
    EcsKfProductCardStorage * _storage; // +0x8
    EcsKfProductCardMemCache * _memCache; // +0x10
    NSMutableSet * _warmedTalkers; // +0x18
    NSObject<OS_dispatch_queue> * _queue; // +0x20
}
- (id)initWithStorage:(id)arg1 memCache:(id)arg2;
- (void)warmForTalker:(id)arg1 limit:(unsigned long long)arg2;
- (void)clearWarmedTalkers;
- (id)storage;
- (void)setStorage:(id)arg1;
- (id)memCache;
- (void)setMemCache:(id)arg1;
- (id)warmedTalkers;
- (void)setWarmedTalkers:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
