@interface CommonHybridRouterHandlerBase : UnitRCObjcBaseClass <CommonHybridRouterHandler>
+ (void)notifyPageCreated:(id)arg1 params:(id)arg2;
- (id)getPlatformKey;
- (void)handleOpen:(id)arg1 callback:(id /* block */)arg2;
- (void)handleOpen:(id)arg1 customArgs:(id)arg2 callback:(id /* block */)arg3;
@end
