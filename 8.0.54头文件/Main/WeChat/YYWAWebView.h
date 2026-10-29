@interface YYWAWebView : WKWebView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, YYWebViewInterface>
{
    BOOL disablePreviewElement; // +0x8
    BOOL _inputFocusing; // +0x9
    BOOL _ignoreSafeAreaChange; // +0xa
    BOOL _isHitDisableContextMenuText; // +0xb
    BOOL _bDisablePopup; // +0xc
    BOOL _isTestHitWKContentView; // +0xd
    BOOL _isHitTongCeng; // +0xe
    BOOL _isHitSelectableText; // +0xf
    id <YYWebViewDelegate> wvDelegate; // +0x10
    id <YYWAWebViewDelegate> _nativeDelegate; // +0x18
    id <YYWAWebViewSyncJSAPIDelegate> _syncJSApiDelegate; // +0x20
    YYWAWebViewScriptMessageHandler * _scriptMessageHandler; // +0x28
    UIView * _wkHitView; // +0x30
    NSMutableDictionary * _gestureEnableDic; // +0x38
    UIEdgeInsets _oldSafeArea; // +0x40
}
+ (id)processPool;
- (id)defaultConfigurationWithPreInjectJSStr:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)configCustomUserAgent;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (id)request;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)evaluateJavaScriptFromString:(id)arg1 overwriteReturnValue:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)enableJavaScriptPopup:(BOOL)arg1;
- (void)makeAllowDecision:(id /* block */)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1;
- (void)_webViewWebProcessDidBecomeResponsive:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)becomeFirstResponder;
- (id)hitWKWebNativeTest:(id)arg1 point:(CGPoint)arg2 withEvent:(id)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)delayTongCengChangedScrollView:(id)arg1;
- (void)onTongCengChangedScrollView:(id)arg1;
- (void)setIgnoreSafeAreaChange:(BOOL)arg1;
- (UIEdgeInsets)safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (id)wvDelegate;
- (void)setWvDelegate:(id)arg1;
- (BOOL)disablePreviewElement;
- (void)setDisablePreviewElement:(BOOL)arg1;
- (id)nativeDelegate;
- (void)setNativeDelegate:(id)arg1;
- (id)syncJSApiDelegate;
- (void)setSyncJSApiDelegate:(id)arg1;
- (BOOL)inputFocusing;
- (void)setInputFocusing:(BOOL)arg1;
- (BOOL)ignoreSafeAreaChange;
- (BOOL)isHitDisableContextMenuText;
- (void)setIsHitDisableContextMenuText:(BOOL)arg1;
- (BOOL)bDisablePopup;
- (void)setBDisablePopup:(BOOL)arg1;
- (id)scriptMessageHandler;
- (void)setScriptMessageHandler:(id)arg1;
- (BOOL)isTestHitWKContentView;
- (void)setIsTestHitWKContentView:(BOOL)arg1;
- (BOOL)isHitTongCeng;
- (void)setIsHitTongCeng:(BOOL)arg1;
- (BOOL)isHitSelectableText;
- (void)setIsHitSelectableText:(BOOL)arg1;
- (id)wkHitView;
- (void)setWkHitView:(id)arg1;
- (id)gestureEnableDic;
- (void)setGestureEnableDic:(id)arg1;
- (UIEdgeInsets)oldSafeArea;
- (void)setOldSafeArea:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end

