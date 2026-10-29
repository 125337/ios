@interface WASkyLineRuntime : NSObject <IWASkylineRuntime>
{
    void * _runtimeShell; // +0x8
    BOOL _isDestroyed; // +0x10
    BOOL _isReady; // +0x11
    id <WASkylineRuntimeDelegate> _delegate; // +0x18
    WASkylineRuntimeInfo * _runtimeInfo; // +0x20
    NSMutableDictionary * _skylineViewDic; // +0x28
    NSMutableDictionary * _flutterVCDic; // +0x30
    WANativeViewPlugin * _nativeViewPlugin; // +0x38
    MMContext * _userContext; // +0x40
    MMTimer * _timer; // +0x48
    NSMutableArray * _pendingRouteBlock; // +0x50
}
+ (id)getVersionString;
+ (void)onSkylineCppLog:(int)arg1 file:(const char *)arg2 line:(int)arg3 str:(const char *)arg4 strLen:(int)arg5;
- (id)init;
- (void)dealloc;
- (void)setRuntimeInfo:(id)arg1;
- (BOOL)waitWindowReady:(id)arg1;
- (id)innerLoadResource:(id)arg1;
- (id)getNativeViewPlugin;
- (void)innerRunServiceBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)createRuntime;
- (double)destroyRuntime;
- (void)destroyRuntimeHolder;
- (RuntimeDelegate *)runtimeDelegate;
- (void)destroyWindow:(id)arg1;
- (void)sendUITaskRunner:(id)arg1;
- (void)sendJsContext:(id)arg1;
- (long long)getRuntimeHolderPtr;
- (void)sendRouteBlock:(id /* block */)arg1;
- (void)notifyNavigateTo:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyRedirectTo:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyNavigateBack:(long long)arg1 pageId:(long long)arg2 calculatedDelta:(long long)arg3 animated:(BOOL)arg4 pageCfg:(id)arg5;
- (void)notifyAppLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyReLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyAutoReLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifySwitchTab:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (shared_ptr<skyline::PageConfig>)makePageConfig:(id)arg1;
- (void)updateWindowViewport:(long long)arg1 size:(CGSize)arg2;
- (void)updateDarkMode:(BOOL)arg1 isDarkMode:(BOOL)arg2;
- (void)updateKeyboardHeight:(long long)arg1 widgetId:(long long)arg2 height:(double)arg3 duration:(double)arg4;
- (id)getSkylineViewByWindowId:(long long)arg1;
- (void)runServiceBlock:(id /* block */)arg1;
- (void)runServiceBlock:(id /* block */)arg1 atTime:(double)arg2;
- (void)runServiceBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (id)loadResourceSync:(id)arg1;
- (void)loadResourceAsync:(id)arg1 requestId:(int)arg2;
- (void)writeTempFileAsync:(id)arg1 fileType:(id)arg2 callback:(id /* block */)arg3;
- (void)onNotifyRuntimeReady;
- (void)onNotifyWindowReady:(long long)arg1;
- (void)onNotifyWindowDestroy:(long long)arg1;
- (void)onNotifyRouteDone:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyNavigateBack:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyNavigateBackDone:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyFirstFrame:(long long)arg1 pageId:(long long)arg2 totalSpan:(double)arg3;
- (void)onKVReport:(unsigned int)arg1 content:(id)arg2;
- (void)onIDKeyReport:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (BOOL)nativeViewUseTexture:(id)arg1 nativeViewType:(id)arg2 extraData:(id)arg3;
- (void)onUpdateMapCustomCallout:(long long)arg1 markerId:(long long)arg2 anchorX:(double)arg3 anchorY:(double)arg4 alwaysDisplay:(BOOL)arg5 imgData:(id)arg6;
- (void)handleNativeViewPointerEvent:(id)arg1;
- (BOOL)isJsc2Enabled;
- (BOOL)isDestroyed;
- (void)setIsDestroyed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)runtimeInfo;
- (BOOL)isReady;
- (void)setIsReady:(BOOL)arg1;
- (id)skylineViewDic;
- (void)setSkylineViewDic:(id)arg1;
- (id)flutterVCDic;
- (void)setFlutterVCDic:(id)arg1;
- (id)nativeViewPlugin;
- (void)setNativeViewPlugin:(id)arg1;
- (id)userContext;
- (void)setUserContext:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)pendingRouteBlock;
- (void)setPendingRouteBlock:(id)arg1;
- (void).cxx_destruct;
@end

