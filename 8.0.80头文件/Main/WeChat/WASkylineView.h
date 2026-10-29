@interface WASkylineView : UIView <FlutterEngineDelegate, IWASkylineView, YYWebViewInterface>
{
    BOOL allowsBackForwardNavigationGestures; // +0x8
    BOOL canGoBack; // +0x9
    BOOL canGoForward; // +0xa
    BOOL loading; // +0xb
    BOOL disablePreviewElement; // +0xc
    BOOL _isNewEngineHomePage; // +0xd
    BOOL _isMovingView; // +0xe
    BOOL _isSheetMode; // +0xf
    BOOL _fontShapeUseCoreText; // +0x10
    BOOL _isRouting; // +0x11
    BOOL _isFirst; // +0x12
    id <YYWebViewDelegate> wvDelegate; // +0x18
    UIScrollView * scrollView; // +0x20
    NSURLRequest * request; // +0x28
    id <WASkylineViewDelegate> _skylineDelegate; // +0x30
    id <IWASkylineRuntime> _skylineRuntime; // +0x38
    long long _windowId; // +0x40
    unsigned long long _loadingStage; // +0x48
    WASkylinePageCfg * _pageCfg; // +0x50
    WAFlutterViewController * _flutterVC; // +0x58
    UIColor * _backgroundColorContent; // +0x60
    WADebugSkylineOptions * _debugOptions; // +0x68
    WASkyLineRuntime * _runtime; // +0x70
    FlutterEngine * _flutterEngine; // +0x78
    FlutterMethodChannel * _skylineChannel; // +0x80
    FlutterMethodChannel * _skylineNotifyChannel; // +0x88
    WANativeViewPlugin * _nativeViewPlugin; // +0x90
    WATexturePlugin * _texturePlugin; // +0x98
    UIImageView * _snapshotImageView; // +0xa0
    NSMutableArray * _curInputWidgetIdQueue; // +0xa8
    UIView * _coverRoot; // +0xb0
    UIView * _coverColorView; // +0xb8
    UIView * _keyboardAnimView; // +0xc0
    CADisplayLink * _keyboardAnimDisplayLink; // +0xc8
    NSString * _contentsGravityOld; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)setSkylineRuntime:(id)arg1;
- (BOOL)isReady;
- (void)initFlutterView;
- (void)setIsSheetMode:(BOOL)arg1;
- (void)applySheetMode;
- (void)setBackgroundColorContent:(id)arg1;
- (void)setShowCover:(BOOL)arg1;
- (void)updateCoverColor;
- (id)rootScrollViewInfo;
- (void)onRuntimeReady;
- (void)onWindowReady;
- (void)notifyNavigateTo:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyRedirectTo:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyNavigateBack:(long long)arg1 calculatedDelta:(long long)arg2 animated:(BOOL)arg3 pageCfg:(id)arg4;
- (void)notifyAppLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyReLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyAutoReLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifySwitchTab:(long long)arg1 pageCfg:(id)arg2;
- (void)onRouteDone:(long long)arg1;
- (void)onNavigateBack:(long long)arg1;
- (void)onNavigateBackDone:(long long)arg1;
- (void)onPageFirstFrame:(long long)arg1;
- (void)onFlutterViewDidRender;
- (id)makeParam;
- (void)initViewInPage:(id)arg1;
- (void)moveViewToNewPage:(id)arg1;
- (void)moveViewToOldPage:(id)arg1;
- (void)initSkylineChannel;
- (void)setFrame:(CGRect)arg1;
- (void)updateWindowViewport;
- (long long)makeWindowId;
- (void)setIsMovingView:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)insertNativeView:(id)arg1 viewId:(long long)arg2;
- (void)removeNativeView:(long long)arg1;
- (void)snapshotBegin;
- (void)snapshotEnd;
- (id)snapshotSkyline;
- (BOOL)checkIsSubView:(id)arg1;
- (long long)getCurInputWidgetId;
- (void)onShowKeyboard:(id)arg1;
- (void)onHideKeyboard:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)startKeyboardAnim:(id)arg1;
- (void)stopKeyboardAnim:(id)arg1;
- (void)setKeyboardAnimDisplayLinkEnable:(BOOL)arg1;
- (void)refreshDisplay;
- (void)updateKeyboardEndFrame:(CGRect)arg1 duration:(double)arg2;
- (void)LoadRequest:(id)arg1;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)reload;
- (void)stopLoading;
- (void)goBack;
- (void)goForward;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)evaluateJavaScriptFromString:(id)arg1 overwriteReturnValue:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)enableJavaScriptPopup:(BOOL)arg1;
- (void)addScriptMessageHandlerName:(id)arg1;
- (id)wvDelegate;
- (void)setWvDelegate:(id)arg1;
- (id)scrollView;
- (id)request;
- (BOOL)allowsBackForwardNavigationGestures;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)arg1;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (BOOL)isLoading;
- (BOOL)disablePreviewElement;
- (void)setDisablePreviewElement:(BOOL)arg1;
- (id)skylineDelegate;
- (void)setSkylineDelegate:(id)arg1;
- (id)skylineRuntime;
- (long long)windowId;
- (void)setWindowId:(long long)arg1;
- (unsigned long long)loadingStage;
- (void)setLoadingStage:(unsigned long long)arg1;
- (id)pageCfg;
- (void)setPageCfg:(id)arg1;
- (BOOL)isNewEngineHomePage;
- (void)setIsNewEngineHomePage:(BOOL)arg1;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (BOOL)isMovingView;
- (id)backgroundColorContent;
- (BOOL)isSheetMode;
- (BOOL)fontShapeUseCoreText;
- (void)setFontShapeUseCoreText:(BOOL)arg1;
- (id)debugOptions;
- (void)setDebugOptions:(id)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (id)flutterEngine;
- (void)setFlutterEngine:(id)arg1;
- (id)skylineChannel;
- (void)setSkylineChannel:(id)arg1;
- (id)skylineNotifyChannel;
- (void)setSkylineNotifyChannel:(id)arg1;
- (id)nativeViewPlugin;
- (void)setNativeViewPlugin:(id)arg1;
- (id)texturePlugin;
- (void)setTexturePlugin:(id)arg1;
- (id)snapshotImageView;
- (void)setSnapshotImageView:(id)arg1;
- (BOOL)isRouting;
- (void)setIsRouting:(BOOL)arg1;
- (BOOL)isFirst;
- (void)setIsFirst:(BOOL)arg1;
- (id)curInputWidgetIdQueue;
- (void)setCurInputWidgetIdQueue:(id)arg1;
- (id)coverRoot;
- (void)setCoverRoot:(id)arg1;
- (id)coverColorView;
- (void)setCoverColorView:(id)arg1;
- (id)keyboardAnimView;
- (void)setKeyboardAnimView:(id)arg1;
- (id)keyboardAnimDisplayLink;
- (void)setKeyboardAnimDisplayLink:(id)arg1;
- (id)contentsGravityOld;
- (void)setContentsGravityOld:(id)arg1;
- (void).cxx_destruct;
@end
