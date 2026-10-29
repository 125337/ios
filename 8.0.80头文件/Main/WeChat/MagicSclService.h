@interface MagicSclService : NSObject <MBCommonAdapterDelegate, _TtP6WeChat28MagicSclJsApiContextDelegate_, IMBPublicService, IMBLifecycle, IMBPlugin, IMBViewDelegate>
{
    MBCommonAdapter * _mbCommonAdapter; // +0x8
    _TtC6WeChat20MagicSclJsApiContext * _jsApiContext; // +0x10
    _TtC6WeChat25MagicSclServicePkgManager * _pkgMgr; // +0x18
    NSMutableDictionary * _canvasIdToBizName; // +0x20
    id <IMBPublicServiceDispatcher> _dispatcher; // +0x28
}
- (id)init;
- (void)dealloc;
- (id)getPkgMgr;
- (id)provideConfig:(id)arg1;
- (id)provideLifecycle;
- (void)setupDispatcher:(id)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onDestroy:(int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (id)getPkgVersion;
- (id)getPkgInfo;
- (id)mbCommonAdapter;
- (id)jsApiContext;
- (id)providePlugin:(id)arg1;
- (id)getSclDelegate:(id)arg1;
- (void)setCanvasStatusWithBizName:(id)arg1 frameSetId:(id)arg2 params:(id)arg3;
- (BOOL)setFlutterCanvasMaxFpsWithBizName:(id)arg1 params:(id)arg2;
- (void)setGestureRectsWithBizName:(id)arg1 frameSetId:(id)arg2 canvasId:(unsigned int)arg3 rects:(id)arg4;
- (void)startUpCoverViewReadyWithBizName:(id)arg1 frameSetId:(id)arg2;
- (void)takeCanvasSnapshotWithCanvasId:(unsigned int)arg1 imageBlock:(id /* block */)arg2;
- (void)removeStartupCoverViewWithInstanceName:(id)arg1 frameSetId:(id)arg2;
- (void)registerExternalTextureWithType:(id)arg1 textureId:(long long)arg2 extraData:(id)arg3 retBlock:(id /* block */)arg4;
- (void)unRegisterExternalTextureWithType:(id)arg1 textureId:(long long)arg2 retBlock:(id /* block */)arg3;
- (void)operateExternalTextureWithType:(id)arg1 textureId:(long long)arg2 action:(id)arg3 extraData:(id)arg4 retBlock:(id /* block */)arg5;
- (void)prepareResourceWithType:(id)arg1 textureId:(long long)arg2 extraData:(id)arg3 retBlock:(id /* block */)arg4;
- (void)eventWithType:(id)arg1 textureId:(long long)arg2 reportInfo:(id)arg3 retBlock:(id /* block */)arg4;
- (void)preDownloadVideoResourceWithSrc:(id)arg1 downloadRatio:(long long)arg2 reportInfo:(id)arg3 retBlock:(id /* block */)arg4;
- (void)cancelPreDownloadVideoResourceWithSrc:(id)arg1 retBlock:(id /* block */)arg2;
- (id)getFrameSetWithFrameSetId:(id)arg1;
- (void)reportFrameSetReadyWithFrameSetId:(id)arg1;
- (void)setFrameSetStatusWithFrameSetId:(id)arg1 params:(id)arg2;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)setMbCommonAdapter:(id)arg1;
- (void)setJsApiContext:(id)arg1;
- (id)pkgMgr;
- (void)setPkgMgr:(id)arg1;
- (id)canvasIdToBizName;
- (void)setCanvasIdToBizName:(id)arg1;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (void).cxx_destruct;
@end
