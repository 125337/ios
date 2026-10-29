@interface EcsCoreEcsOpenService_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsOpenService_Ur>
+ (id)sharedInstance;
- (void)registerNativeRouterHandler:(id)arg1 handler:(id)arg2;
- (void)unregisterNativeRouterHandler:(id)arg1;
- (void)preload:(id)arg1 context:(id)arg2 preloadConfig:(id)arg3 callback:(id /* block */)arg4;
- (void)open:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
- (void)openJson:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
@end
