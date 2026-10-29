@interface EcsOpenWxaRouter : EcsOpenBaseRouter
{
    NSDictionary * _nextActionHandlers; // +0x8
    id <EcsCoreEcsFireFrequencyControl_Ur> _preloadFC; // +0x10
}
- (id)createNextActionHandlers;
- (void)handleNextAction:(id)arg1 jumpInfo:(id)arg2 context:(id)arg3;
- (id)init;
- (BOOL)canHandle:(id)arg1 context:(id)arg2;
- (void)handlePreload:(id)arg1 context:(id)arg2 preloadConfig:(id)arg3 callback:(id)arg4;
- (void)handleOpen:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (void)updateWAAppOpenParameter:(id)arg1 byContext:(id)arg2;
- (void)updateWAAppOpenParameter:(id)arg1 byChatMsgContext:(id)arg2;
- (void)updateWAAppOpenParameter:(id)arg1 byWxaExtraData:(id)arg2;
- (void)updateWAAppOpenParameter:(id)arg1 byHalfPageConfig:(id)arg2;
- (id)createWAAppOpenParameter:(id)arg1;
- (unsigned long long)capsuleMenuTypeWithHalfPageConfig:(id)arg1;
- (BOOL)hasSupportFeatureWithJumpInfo:(id)arg1;
- (void)trackerOnLaunComPlete:(id)arg1 launchInfoBundle:(id)arg2 renderType:(unsigned int)arg3 version:(id)arg4;
- (id)nextActionHandlers;
- (id)preloadFC;
- (void)setPreloadFC:(id)arg1;
- (void).cxx_destruct;
@end
