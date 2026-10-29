@interface KVOController : NSObject
{
    NSMapTable * m_objectInfosMap; // +0x8
    _opaque_pthread_mutex_t m_mutex; // +0x10
    id _observer; // +0x50
}
+ (id)controllerWithObserver:(id)arg1;
- (id)initWithObserver:(id)arg1 retainObserved:(BOOL)arg2;
- (id)initWithObserver:(id)arg1;
- (void)dealloc;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)unobserve:(id)arg1 keyPath:(id)arg2;
- (void)unobserve:(id)arg1;
- (void)unobserveAll;
- (void)_observe:(id)arg1 info:(id)arg2;
- (void)_unobserve:(id)arg1 info:(id)arg2;
- (void)_unobserve:(id)arg1;
- (void)_unobserveAll;
- (id)observer;
- (void).cxx_destruct;
@end
