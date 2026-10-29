@interface _TtC6WeChat22MagicCardStarterSclBiz : _TtC6WeChat15MagicSclBaseBiz <_TtP6WeChat13IMagicBaseBiz_, _TtP6WeChat29IMagicCardSclBizInnerDelegate_>
{
     mbCommonAdapter; // +0xa8
     mbVConsoleHelper; // +0xb0
     pkgMgr; // +0xb8
     jsapiContextImpl; // +0xc0
     frameSetRootId; // +0xc8
     _bizName; // +0xd8
     delegate; // +0xe8
     lifecycleListeners; // +0xf0
     bizConfig; // +0xf8
     mbJsApiList; // +0x100
     appBrandJsApiList; // +0x108
     frameSetRootMap; // +0x110
     frameSetRootConfigWithViewCache; // +0x118
     _preloadingMap; // +0x120
     hasStarted; // +0x128
     hasStartedByPreload; // +0x129
     PreloadMaxSize; // +0x130
     bizVc; // +0x138
     isPreloaded; // +0x140
     initBizCacheTime; // +0x148
     initBizTimeoutTask; // +0x150
}
- (void)preloadWithRootConfig:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3 containerRect:(CGRect)arg4 preloadStrategy:(long long)arg5;
- (void)onStartUpCoverReadyWithFrameSetId:(id)arg1;
- (void)bindFrameSetViewWithRootConfig:(id)arg1 containerView:(id)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4 viewId:(long long)arg5 callback:(id /* block */)arg6;
- (void)scrollAllOnScreenFrameSetViewWithRootConfig:(id)arg1 offsetHeight:(double)arg2 listViewTop:(double)arg3;
- (void)removeFrameSetViewWithRootConfig:(id)arg1 frameSetName:(id)arg2;
- (void)removeAllFrameSetViewWithRootConfig:(id)arg1;
- (long long)preload:(id)arg1;
- (void)activateWithViewController:(id)arg1;
- (void)deactivate;
- (void)resume;
- (void)pause;
- (void)addLifecycleListener:(id)arg1;
- (void)removeLifeccycleListener:(id)arg1;
- (void)sendEventWithEvent:(id)arg1;
- (void)sendEventWithName:(id)arg1 data:(id)arg2;
- (id)provideMagicBrush;
- (void)testEvaluateScriptWithScript:(id)arg1 callback:(id /* block */)arg2;
- (void)start;
- (void)onMainScriptInjected:(id)arg1;
- (void)destroy;
- (void)notifyJsEventWithJsEvent:(id)arg1;
- (void)handleJsApiEventWithEvent:(id)arg1 extraInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onDestroy:(int)arg1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (id)getBizAppConfig;
- (void)redraw;
- (long long)addCustomViewWithView:(id)arg1;
- (id)getParentViewController;
- (id)getAppId;
- (id)init;
- (void).cxx_destruct;
@end
