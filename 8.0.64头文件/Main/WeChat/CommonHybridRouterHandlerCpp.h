@interface CommonHybridRouterHandlerCpp : UnitRCObjcBaseProxyClass <CommonHybridRouterHandler>
+ (void)registerRouterHandler:(id)arg1 handler:(id)arg2;
+ (void)unregisterRouterHandler:(id)arg1;
- (void)handleOpen:(id)arg1 callback:(id /* block */)arg2;
- (id)getPlatformKey;
@end
