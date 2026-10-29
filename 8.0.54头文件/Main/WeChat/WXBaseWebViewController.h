@interface WXBaseWebViewController : MMUIViewController <UIGestureRecognizerDelegate, WebViewA8KeyLogicDelegate, WebViewJSLogicDelegate, UIScrollViewDelegate, MMJSApiVerifyMgrDelegate, YYWebViewDelegate, WXCustomWebViewControllerProtocol>
{
    WKWebView<YYWebViewInterface> * webView; // +0x68
    MMURLHandler * m_urlHandler; // +0x70
    UIButton * m_loadFailView; // +0x78
    NSMutableDictionary * m_jsInitInfo; // +0x80
    WCDeepLinkHandler * m_deepLinkHandler; // +0x88
    MMJSApiVerifyMgr * m_apiVerifyMgr; // +0x90
    id /* block */ _OnInitReadyNotifyBlock; // +0x98
    BOOL m_bShowOnNewMainFrameBanner; // +0xa0
    NSMutableDictionary * _dicJsapiGetA8keyHadnleBlocks; // +0xa8
    long long m_loadingCount; // +0xb0
    UILongPressGestureRecognizer * m_longPressGestureRecognizer; // +0xb8
    BOOL _bLongPressingWebContentImage; // +0xc0
    unsigned long long _longPressingWebContentImageEndTimeStamp; // +0xc8
    NSString * m_jump; // +0xd0
    BOOL m_viewDidAppear; // +0xd8
    BOOL m_isPageLoadFail; // +0xd9
    BOOL m_bIFrame; // +0xda
    BOOL _bIsDraggingScroll; // +0xdb
    BOOL _bIsBackForwardNavigationType; // +0xdc
    NSString * _lastURL; // +0xe0
    BOOL m_isFinishLoaded; // +0xe8
    BOOL m_enableAutoPlay; // +0xe9
    BOOL _m_bOfflinePage; // +0xea
    BOOL _m_bIsJsapiUploadVideoUploading; // +0xeb
    BOOL _enableCommitCurrentUrl; // +0xec
    NSMutableDictionary * m_extraInfo; // +0xf0
    WebViewJSLogicImpl * _m_jsLogicImpl; // +0xf8
    NSString * _m_initUrl; // +0x100
    WebViewA8KeyLogicImpl * _m_a8KeyLogicImpl; // +0x108
    id /* block */ _m_blockOnWebViewDidTerminate; // +0x110
    id <WXCustomWebViewControllerDelegate> _m_delegate; // +0x118
    NSString * _m_lastCheckCpKey; // +0x120
    NSURL * _wkLastCommitingNavigationUrl; // +0x128
    NSURL * _onceRewindNavigationUrl; // +0x130
    MMWebViewUniversalLinkMinitorLogic * _ulMonitorLogic; // +0x138
}
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (void)setEnableAutoPlay:(BOOL)arg1;
- (id)webviewForInitialization;
- (void)internalInitWithUrl:(id)arg1 extraInfo:(id)arg2;
- (BOOL)IsBitsetSet:(unsigned int)arg1 forUrl:(id)arg2;
- (unsigned int)GetGeneralBitSetForUrl:(id)arg1;
- (BOOL)hasUrlPermission:(id)arg1;
- (id)getUrlPermission:(id)arg1;
- (void)sendGetA8KeyEvent;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getShareUrl;
- (void)tryStartOutlinkDetect;
- (void)startLoadWeb;
- (void)notifyToJSBridgeVisibilityChanged:(BOOL)arg1;
- (void)markNeedCheckUrlAndRemoveLastCheckedUrl:(id)arg1;
- (void)setCurrentUrl:(id)arg1;
- (id)getRequestingOrCurrentUrl;
- (void)clearScrollBackgroundColor;
- (void)goToURL:(id)arg1;
- (id)getCurrentUrl;
- (id)getCurrentAppId;
- (id)getInitUrl;
- (id)extraInfo;
- (unsigned int)getCurrentScene;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (BOOL)allowFayByImage;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (void)doJsApiInitEvent;
- (void)forceShowCloseButton;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (void)logUseWebviewSchemeToJumpWithUrl:(id)arg1;
- (BOOL)isBackForwardNavigationType;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (BOOL)allowsAutoMediaPlay;
- (id)getWXHookScriptStr;
- (void)webViewDidCommitLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidReceiveServerRedirect:(id)arg1 navigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webViewDidReceiveNavigationResponse:(id)arg1 andGetIsCancelNavigation:(BOOL *)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (BOOL)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (void)webViewControllerDidRecieveSvrRedirect:(id)arg1;
- (void)webViewControllerDidReceiveResponse:(id)arg1 isMainFrame:(BOOL)arg2 andGetIsCancelNavigation:(BOOL *)arg3;
- (void)webViewControllerDidCommitLoad:(id)arg1;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webviewControllerDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewControllerContentProcessDidTerminate:(id)arg1;
- (void)webViewControllerTitleDidChange:(id)arg1;
- (id)webViewControllerPreInjectScriptStr;
- (void)webViewControllerDidStartSyncA8Key:(id)arg1;
- (void)webViewControllerForceSyncA8KeyError;
- (id)webViewControllerBackgroundColor;
- (void)webViewControllerJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (void)webViewControllerCanGoBackChanged:(BOOL)arg1;
- (void)cleanJSAPIDelegate;
- (void)handleWebViewVCDismiss;
- (id)getPreInjectScriptStr;
- (void)delayHandleUrl:(id)arg1;
- (void)handleJumpProfileUrl:(id)arg1 profileRange:(_NSRange)arg2;
- (BOOL)shouldRewindWebNavigation:(id)arg1;
- (void)onGetA8Key:(BOOL)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (void)onUpdatedPermisson;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)onStartGetA8Key:(id)arg1;
- (id)getCurrentWebviewViewController;
- (void)onFinishedHandleJSApi;
- (BOOL)isBridgedInNewMode;
- (BOOL)isUseAllOneWXJS;
- (BOOL)isGetingA8Key;
- (unsigned char)getJSApiPermission:(id)arg1;
- (void)processJSAPICall:(id)arg1 funcDef:(id)arg2 funcBlock:(id /* block */)arg3 failHandleBlock:(id /* block */)arg4 apiPermission:(unsigned char)arg5;
- (id)getAuthorizedMonitorEvents:(id)arg1;
- (BOOL)isDisableRecordHistory;
- (void)onDomReady;
- (void)onPageStateChange:(id)arg1;
- (void)diagnose_onJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (id)currentPermissionKeyUrlString;
- (id)currentWebviewEnvInfo;
- (id)getJSFunctionDef:(id)arg1;
- (unsigned int)getA8KeyRequestId;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (BOOL)getJSApiFrequncyCheckResult:(id)arg1;
- (BOOL)getJSApiEnvCompatibility:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initWebViewObservers;
- (void)removeWebViewObservers;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)keyboardDidShow:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)enableLongPressDetect;
- (void)enableWebContentImageLongPressingTag;
- (BOOL)allowImagePreview;
- (void)onLongPressOnWebview:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)delaySetFontsWithSize:(id)arg1;
- (unsigned int)webviewCurrentFontLevel;
- (unsigned int)webviewCurrentFontScale;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)m_extraInfo;
- (void)setM_extraInfo:(id)arg1;
- (id)m_jsLogicImpl;
- (id)m_initUrl;
- (id)m_a8KeyLogicImpl;
- (BOOL)m_bOfflinePage;
- (id /* block */)m_blockOnWebViewDidTerminate;
- (void)setM_blockOnWebViewDidTerminate:(id /* block */)arg1;
- (BOOL)m_bIsJsapiUploadVideoUploading;
- (void)setM_bIsJsapiUploadVideoUploading:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_lastCheckCpKey;
- (void)setM_lastCheckCpKey:(id)arg1;
- (id)wkLastCommitingNavigationUrl;
- (void)setWkLastCommitingNavigationUrl:(id)arg1;
- (id)onceRewindNavigationUrl;
- (void)setOnceRewindNavigationUrl:(id)arg1;
- (id)ulMonitorLogic;
- (void)setUlMonitorLogic:(id)arg1;
- (BOOL)enableCommitCurrentUrl;
- (void)setEnableCommitCurrentUrl:(BOOL)arg1;
- (void).cxx_destruct;
@end

