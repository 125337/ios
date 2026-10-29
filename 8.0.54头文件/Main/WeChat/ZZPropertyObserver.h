@interface ZZPropertyObserver : NSObject <IZZReactive>
{
    id _instance; // +0x8
    NSString * _propertyName; // +0x10
    id /* block */ _map; // +0x18
    id /* block */ _filter; // +0x20
    id /* block */ _next; // +0x28
    id /* block */ _nextAction; // +0x30
    id /* block */ _filterAction; // +0x38
    id _mapAction; // +0x40
    NSString * _tag; // +0x48
    id _removeObserverAction; // +0x50
    void * _data; // +0x58
    ZZPropertyObserver * _prePO; // +0x60
    ZZPropertyObserver * _nextPO; // +0x68
}
+ (id)createWithInstance:(id)arg1 propertyName:(id)arg2;
- (id)initWithInstance:(id)arg1 propertyName:(id)arg2;
- (void)dealloc;
- (id /* block */)observerProperty;
- (void)regetDataIfNeed;
- (void)resetObserverIfNeed;
- (void)addObserver:(id)arg1;
- (void)removeObserver;
- (void)notiValueChanged;
- (void)getReturnValue:(void *)arg1;
- (id)getIDRetrunValue;
- (void)setPropertyValue:(void *)arg1;
- (void)setIDPropertyValue:(id)arg1;
- (id)install;
- (id)fire;
- (id)installAndFire;
- (id)headPO;
- (id /* block */)next;
- (id /* block */)filter;
- (id /* block */)map;
- (id)target;
- (id)instance;
- (id)propertyName;
- (void)setMap:(id /* block */)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setNext:(id /* block */)arg1;
- (id /* block */)nextAction;
- (void)setNextAction:(id /* block */)arg1;
- (id /* block */)filterAction;
- (void)setFilterAction:(id /* block */)arg1;
- (id)mapAction;
- (void)setMapAction:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)removeObserverAction;
- (void)setRemoveObserverAction:(id)arg1;
- (void *)data;
- (void)setData:(void *)arg1;
- (id)prePO;
- (void)setPrePO:(id)arg1;
- (id)nextPO;
- (void)setNextPO:(id)arg1;
- (void).cxx_destruct;
@end

