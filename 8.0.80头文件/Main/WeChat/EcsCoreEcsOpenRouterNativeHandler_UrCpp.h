@interface EcsCoreEcsOpenRouterNativeHandler_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsOpenRouterNativeHandler_Ur>
+ (id)sharedInstance;
- (void)registerNativeUriHandler:(id)arg1 handler:(id)arg2;
- (void)unregisterNativeUriHandler:(id)arg1;
- (id)name;
- (BOOL)canHandle:(id)arg1 context:(id)arg2;
- (void)handlePreload:(id)arg1 context:(id)arg2 preloadConfig:(id)arg3 callback:(id /* block */)arg4;
- (void)handleOpen:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
@end
