@interface _TtC6WeChat22MagicCardStarterSclBiz : _TtC6WeChat15MagicSclBaseBiz <_TtP6WeChat29IMagicCardSclBizInnerDelegate_>
{
     mbCommonAdapter; // +0xa8
     mbVConsoleHelper; // +0xb0
     pkgMgr; // +0xb8
     jsapiContextImpl; // +0xc0
     frameSetRootId; // +0xc8
     _bizName; // +0xd8
     delegate; // +0xe8
     destroyCallback; // +0xf0
     bizConfig; // +0x100
     mbJsApiList; // +0x108
     appBrandJsApiList; // +0x110
     frameSetRootMap; // +0x118
     frameSetRootConfigWithViewCache; // +0x120
     _preloadingMap; // +0x128
     hasStarted; // +0x130
     hasStartedByPreload; // +0x131
     PreloadMaxSize; // +0x138
     PRELOAD_ITEM_EXPIRED_TIME_MS; // +0x140
     bizVc; // +0x148
}
- (void)preloadWithRootConfig:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3 containerRect:(CGRect)arg4 preloadStrategy:(long long)arg5;
- (void)onStartUpCoverReadyWithFrameSetId:(id)arg1;
- (void)bindFrameSetViewWithRootConfig:(id)arg1 containerView:(id)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4 viewId:(long long)arg5 callback:(id /* block */)arg6;
- (void)scrollAllOnScreenFrameSetViewWithRootConfig:(id)arg1 offsetHeight:(double)arg2 listViewTop:(double)arg3;
- (void)removeFrameSetViewWithRootConfig:(id)arg1 frameSetName:(id)arg2;
- (void)removeAllFrameSetViewWithRootConfig:(id)arg1;
- (void)activeWithViewController:(id)arg1;
- (void)deactive;
- (void)start;
- (void)onMainScriptInjected:(id)arg1;
- (void)destroy;
- (void)notifyJsEventWithJsEvent:(id)arg1;
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
