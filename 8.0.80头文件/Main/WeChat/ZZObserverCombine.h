@interface ZZObserverCombine : NSObject <IZZReactive>
{
    NSArray * _poList; // +0x8
    id /* block */ _map; // +0x10
    id /* block */ _filter; // +0x18
    id /* block */ _next; // +0x20
    id /* block */ _nextAction; // +0x28
    id /* block */ _filterAction; // +0x30
    id _mapAction; // +0x38
}
+ (id)createWithPOList:(id)arg1 mapAction:(id)arg2;
- (void)getReturnValue:(void *)arg1;
- (id)getIDRetrunValue;
- (id)install;
- (id)fire;
- (id)installAndFire;
- (id)headPO;
- (id /* block */)next;
- (id /* block */)filter;
- (id /* block */)map;
- (id)poList;
- (void)setPoList:(id)arg1;
- (void)setMap:(id /* block */)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setNext:(id /* block */)arg1;
- (id /* block */)nextAction;
- (void)setNextAction:(id /* block */)arg1;
- (id /* block */)filterAction;
- (void)setFilterAction:(id /* block */)arg1;
- (id)mapAction;
- (void)setMapAction:(id)arg1;
- (void).cxx_destruct;
@end
