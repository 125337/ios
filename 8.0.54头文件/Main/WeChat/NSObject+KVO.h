@interface NSObject (KVO)
- (void)Observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)Observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)Observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)Observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)Unobserve:(id)arg1 keyPath:(id)arg2;
- (void)Unobserve:(id)arg1;
- (void)UnobserveAll;
- (id)KVOController;
- (void)setKVOController:(id)arg1;
- (id)KVOControllerNonRetaining;
- (void)setKVOControllerNonRetaining:(id)arg1;
@end

