@interface EcsOpenNativeRouterHandler_brs_openArticle : EcsOpenNativeRouterHandler_Base
{
    id <EcsCoreEcsFireFrequencyControl_Ur> _preloadFC; // +0x8
}
- (id)init;
- (void)handlePreload:(id)arg1 context:(id)arg2 preloadConfig:(id)arg3 callback:(id)arg4;
- (void)handleOpen:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (BOOL)_openPreloadedH5Artice:(id)arg1 extraData:(id)arg2 navController:(id)arg3;
- (id)preloadFC;
- (void)setPreloadFC:(id)arg1;
- (void).cxx_destruct;
@end
