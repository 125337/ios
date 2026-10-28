@interface EcsOpenWxaRouter : EcsOpenBaseRouter
{
    id <EcsCoreEcsFireFrequencyControl_Ur> _preloadFC; // +0x8
}
- (id)init;
- (BOOL)canHandle:(id)arg1 context:(id)arg2;
- (void)handlePreload:(id)arg1 context:(id)arg2 preloadConfig:(id)arg3 callback:(id)arg4;
- (void)handleOpen:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (void)updateWAAppOpenParameter:(id)arg1 byContext:(id)arg2;
- (id)createWAAppOpenParameter:(id)arg1;
- (BOOL)hasSupportFeatureWithJumpInfo:(id)arg1;
- (id)preloadFC;
- (void)setPreloadFC:(id)arg1;
- (void).cxx_destruct;
@end
