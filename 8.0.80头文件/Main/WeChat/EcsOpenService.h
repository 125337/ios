@interface EcsOpenService : MMUserService <MMServiceProtocol>
+ (id)onGetBaseRouters;
+ (id)onGetBaseNativeRouterHandlers;
- (void)onServiceInit;
- (void)preload:(id)arg1;
- (void)preloadWithBase64Str:(id)arg1;
- (void)preload:(id)arg1 context:(id)arg2 config:(id)arg3;
- (void)preloadWithBase64Str:(id)arg1 context:(id)arg2 config:(id)arg3;
- (void)open:(id)arg1 context:(id)arg2;
- (void)open:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
- (void)openWithBase64Str:(id)arg1 context:(id)arg2;
- (void)openWithBase64Str:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
- (void)openWithJson:(id)arg1 context:(id)arg2;
- (void)openWithJson:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
- (void)openInternalWithContext:(id)arg1 jumpInfo:(id)arg2 jumpInfoJson:(id)arg3 openAction:(id /* block */)arg4 callback:(id /* block */)arg5;
@end
