@interface EcsOpenService : MMUserService <MMServiceProtocol>
+ (id)onGetBaseRouters;
+ (id)onGetBaseNativeRouterHandlers;
- (void)onServiceInit;
- (void)preload:(id)arg1;
- (void)preloadWithBase64Str:(id)arg1;
- (void)open:(id)arg1 context:(id)arg2;
- (void)open:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
- (void)openWithBase64Str:(id)arg1 context:(id)arg2;
- (void)openWithBase64Str:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
- (void)openWithJson:(id)arg1 context:(id)arg2;
- (void)openWithJson:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
@end
