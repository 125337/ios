@interface EcsOpenLiteAppRouter : EcsOpenBaseRouter
- (BOOL)canHandle:(id)arg1 context:(id)arg2;
- (void)handlePreload:(id)arg1 context:(id)arg2 preloadConfig:(id)arg3 callback:(id)arg4;
- (void)handleOpen:(id)arg1 context:(id)arg2 callback:(id)arg3;
@end
