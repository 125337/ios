@interface NSObject (MJKVO)
- (void)mj_observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)mj_observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 notifyUntilChanged:(BOOL)arg4 block:(id /* block */)arg5;
- (void)mj_observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)mj_unobserve:(id)arg1 keyPath:(id)arg2;
- (void)mj_unobserve:(id)arg1;
- (void)mj_unobserveAll;
@end
