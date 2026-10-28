@interface UBBaseSignal : NSObject
{
    unsigned long long _maxObservers; // +0x8
    id /* block */ _observerAdded; // +0x10
    id /* block */ _observerRemoved; // +0x18
    id _fire; // +0x20
    id _fireForSignalObserver; // +0x28
    NSMutableArray * _signalObservers; // +0x30
}
- (id)initWithProtocol:(id)arg1;
- (id)debugDescription;
- (void)setMaxObservers:(unsigned long long)arg1;
- (unsigned long long)observerCount;
- (id)addObserver:(id)arg1 callback:(id /* block */)arg2;
- (id)addObserver:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (id)addObserver:(id)arg1 priority:(unsigned long long)arg2 callback:(id /* block */)arg3;
- (id)addObserver:(id)arg1 queue:(id)arg2 priority:(unsigned long long)arg3 callback:(id /* block */)arg4;
- (void)removeObserver:(id)arg1;
- (void)removeAllObservers;
- (void)removeSignalObserver:(id)arg1;
- (void)_purgeDeallocedListeners;
- (void)_fireNewData:(id)arg1 forSignalObservers:(id)arg2;
- (void)_fireData:(id)arg1 forSignalObservers:(id)arg2;
- (unsigned long long)maxObservers;
- (id /* block */)observerAdded;
- (void)setObserverAdded:(id /* block */)arg1;
- (id /* block */)observerRemoved;
- (void)setObserverRemoved:(id /* block */)arg1;
- (id)fire;
- (id)fireForSignalObserver;
- (id)signalObservers;
- (void)setSignalObservers:(id)arg1;
- (void).cxx_destruct;
@end
