@interface WeAvatarScreenView : UIView <IMBViewDelegate, IMBPkgManagement, IMBFileSystem, IMBLifecycle, IMBBizContextDelegate>
{
    unsigned char _isOnRNNoise; // +0x8
    WebGLAudioManager * _audioManager; // +0x10
    MagicBrushBiz * _biz; // +0x18
    WKWebView * _innerRuntimeView; // +0x20
    WeAvatarPackageLogic * _pkgLogic; // +0x28
    CGRect _glFrame; // +0x30
}
+ (void)setAvatarViewHidden:(BOOL)arg1 InViews:(id)arg2;
- (void)destroy;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)dispatchEvent:(id)arg1 args:(id)arg2;
- (void)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (void)injectLibs;
- (void)injectFinderUserName:(id)arg1;
- (void)injectScripts;
- (void)prepareAndInjectCodeAsync;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)provideMainScript:(id /* block */)arg1;
- (id)provideFileSystem;
- (id)getFileDataByPath:(id)arg1;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)onResume;
- (void)onPause;
- (void)onDestroy:(int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (id)audioManager;
- (void)setAudioManager:(id)arg1;
- (id)biz;
- (void)setBiz:(id)arg1;
- (id)innerRuntimeView;
- (void)setInnerRuntimeView:(id)arg1;
- (id)pkgLogic;
- (void)setPkgLogic:(id)arg1;
- (unsigned char)isOnRNNoise;
- (void)setIsOnRNNoise:(unsigned char)arg1;
- (CGRect)glFrame;
- (void)setGlFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
