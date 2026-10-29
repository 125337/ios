@interface MMLiteAppWebRenderViewController : MMUIViewController <YYWebViewDelegate, WXCustomWebViewControllerProtocol, ILiteAppJsApiPluginControllerProtocol, LVUICallbackControllerDelegate, MMLiteAppViewing>
{
    unsigned int _webviewId; // +0x70
    shared_ptr<LVUICallback> _lvUICallback; // +0x78
    BOOL _hasStore; // +0x88
    LiteAppStore * _store; // +0x90
    NSString * _sourceSource; // +0x98
    NSArray * _enableViews; // +0xa0
    NSArray * _enableActions; // +0xa8
    NSMutableDictionary * _hostInfoExtends; // +0xb0
    NSString * _sessionId; // +0xb8
    UIViewController<LiteAppParentViewControllerDelegate> * _liteAppParentViewController; // +0xc0
    id /* block */ _closedCallback; // +0xc8
    id /* block */ _willDisappearCallback; // +0xd0
    id <UIViewControllerTransitioningDelegate> _transitionMgr; // +0xd8
    NSString * _appId; // +0xe0
    NSString * _pkgPath; // +0xe8
    NSString * _baseLibPath; // +0xf0
    NSString * _pagePath; // +0xf8
    YYBaseWebView * _renderWebView; // +0x100
    MMLiteAppSchemeHandler * _schemeHandler; // +0x108
    LiteAppJsApiPluginScheduler * _jsApiPluginScheduler; // +0x110
    NSMutableDictionary * _extraData; // +0x118
    long long _wrStatusBarStyle; // +0x120
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)setStore:(id)arg1;
- (void)setSource:(id)arg1 enableActions:(id)arg2 enableViews:(id)arg3;
- (unsigned int)getLiteAppUuid;
- (id)getLiteAppSessionId;
- (void)setHostInfoExtends:(id)arg1;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useTransparentNavibar;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (id)getInitUrl;
- (id)getShareUrl;
- (id)m_initUrl;
- (id)getCurrentAppId;
- (id)getCurrentUrl;
- (id)extraInfo;
- (unsigned int)getCurrentScene;
- (unsigned char)getPermissionWithName:(id)arg1;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (BOOL)allowFayByImage;
- (BOOL)allowImagePreview;
- (BOOL)m_bOfflinePage;
- (BOOL)m_bIsJsapiUploadVideoUploading;
- (void)enableWebContentImageLongPressingTag;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (void)doJsApiInitEvent;
- (void)forceShowCloseButton;
- (void)setWebViewContentSize:(CGSize)arg1;
- (void)goToURL:(id)arg1;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (id)m_extraInfo;
- (void)setM_extraInfo:(id)arg1;
- (id)m_a8KeyLogicImpl;
- (id)m_jsLogicImpl;
- (id)webView;
- (void)setWebView:(id)arg1;
- (void)setStoreUiStatusBarStyle:(id)arg1 appUuid:(unsigned int)arg2 style:(long long)arg3;
- (long long)storeUiStatusBarStyle:(id)arg1 appUuid:(unsigned int)arg2;
- (void)publishGlobalEvent:(id)arg1 appUuid:(unsigned int)arg2 event:(id)arg3 params:(id)arg4;
- (id)jsApiPluginScheduler:(id)arg1 appUuid:(unsigned int)arg2;
- (id)extraData:(id)arg1 appUuid:(unsigned int)arg2;
- (id)getViewController;
- (BOOL)isHalfScreen;
- (id)getStore;
- (void)showPage:(const void *)arg1;
- (void)navigateBackAndReloadDebug:(id)arg1 appUuid:(unsigned int)arg2 pageNum:(int)arg3 qrcodeDebugQuery:(id)arg4;
- (void)onShowPageTimeStamp:(const void *)arg1;
- (void)onCreateLitePageViewFinish:(const void *)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setForbidRightGestureEnable:(BOOL)arg1;
- (void)setDragToClose:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)closeWindow:(BOOL)arg1;
- (void)setupWebView;
- (void)loadPage;
- (id)customURLSchemeHandlerDictionary;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (id)liteAppParentViewController;
- (void)setLiteAppParentViewController:(id)arg1;
- (id /* block */)closedCallback;
- (void)setClosedCallback:(id /* block */)arg1;
- (id /* block */)willDisappearCallback;
- (void)setWillDisappearCallback:(id /* block */)arg1;
- (id)transitionMgr;
- (void)setTransitionMgr:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pkgPath;
- (void)setPkgPath:(id)arg1;
- (id)baseLibPath;
- (void)setBaseLibPath:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)renderWebView;
- (void)setRenderWebView:(id)arg1;
- (id)schemeHandler;
- (void)setSchemeHandler:(id)arg1;
- (id)jsApiPluginScheduler;
- (void)setJsApiPluginScheduler:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (long long)wrStatusBarStyle;
- (void)setWrStatusBarStyle:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
