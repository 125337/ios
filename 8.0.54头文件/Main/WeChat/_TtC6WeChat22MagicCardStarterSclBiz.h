@interface _TtC6WeChat22MagicCardStarterSclBiz : _TtC6WeChat15MagicSclBaseBiz <MBCommonAdapterDelegate, _TtP6WeChat29IMagicCardSclBizInnerDelegate_>
{
     mbCommonAdapter; // +0x78
     mbVConsoleHelper; // +0x80
     pkgMgr; // +0x88
     jsapiContextImpl; // +0x90
     frameSetRootId; // +0x98
     _bizName; // +0xa8
     delegate; // +0xb8
     destroyCallback; // +0xc0
     bizConfig; // +0xd0
     mbJsApiList; // +0xd8
     appBrandJsApiList; // +0xe0
     frameSetRootMap; // +0xe8
     frameSetRootConfigWithViewCache; // +0xf0
     _preloadingMap; // +0xf8
     hasStarted; // +0x100
     hasStartedByPreload; // +0x101
     isBizActive; // +0x102
     PreloadMaxSize; // +0x108
     PRELOAD_ITEM_EXPIRED_TIME_MS; // +0x110
     bizVc; // +0x118
}
- (void)preloadWithRootConfig:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3 containerRect:(CGRect)arg4 preloadStrategy:(long long)arg5;
- (void)onStartUpCoverReadyWithFrameSetId:(id)arg1;
- (void)bindFrameSetViewWithRootConfig:(id)arg1 containerView:(id)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4;
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
- (long long)addCustomViewWithView:(id)arg1;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (id)init;
- (void).cxx_destruct;
@end

