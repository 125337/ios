@interface TingHybridCreateHandler : CommonHybridRouterHandlerBase
+ (void)setup;
+ (id)plugins;
+ (id)pluginsWithVC:(id)arg1;
+ (id)defaultRouterParams;
- (id)getPlatformKey;
- (void)handleOpen:(id)arg1 customArgs:(id)arg2 callback:(id /* block */)arg3;
- (void)handleOpenInner:(id)arg1 customArgs:(id)arg2 callback:(id /* block */)arg3;
@end
