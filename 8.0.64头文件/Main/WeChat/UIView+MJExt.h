@interface UIView (MJExt)
- (void)mj_setHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)mj_presentView:(id)arg1 withStyle:(unsigned long long)arg2 height:(double)arg3 completion:(id /* block */)arg4;
- (void)mj_presentView:(id)arg1 withStyle:(unsigned long long)arg2 height:(double)arg3 animated:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)mj_presentView:(id)arg1 withStyle:(unsigned long long)arg2 heightStart:(double)arg3 heightEnd:(double)arg4 animated:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)mj_dismissView:(id)arg1 completion:(id /* block */)arg2;
- (void)mj_dismissView:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)mj_createAndAddMask;
- (id)mj_takeSnapshot;
@end
