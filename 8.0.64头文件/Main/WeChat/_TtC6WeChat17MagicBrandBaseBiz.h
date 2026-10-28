@interface _TtC6WeChat17MagicBrandBaseBiz : _TtC6WeChat15MagicSclBaseBiz <_TtP6WeChat30MagicBrandJsApiContextDelegate_>
{
     flutterPlugin; // +0xa8
     mbCommonAdapter; // +0xb0
     pkgMgr; // +0xb8
     bizVc; // +0xc0
     $__lazy_storage_$_preInitedFrameSetRoot; // +0xc8
     jsapiContextImpl; // +0xd0
     testPendingJs; // +0xd8
}
- (id)externalViewDelegate;
- (void)start;
- (void)pause;
- (void)resume;
- (void)destroy;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)showPopupWindowWithMask:(BOOL)arg1 maskColor:(long long)arg2;
- (void)dismissPopupWindow;
- (void)showCustomHalfScreenDialogWithExtra:(id)arg1;
- (void)invokeFlutterApiWithEvent:(id)arg1 data:(id)arg2 callback:(id /* block */)arg3;
- (void)getBrandServiceSessionIdWithCallback:(id /* block */)arg1;
- (void)getBrandServiceJumpPathsWithCallback:(id /* block */)arg1;
- (id)getParentViewController;
- (void)testJsWithTestJs:(id)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onDestroy:(int)arg1;
- (id)bizAppConfig;
- (id)init;
- (void).cxx_destruct;
@end
