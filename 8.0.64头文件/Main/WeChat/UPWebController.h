@interface UPWebController : UIViewController <WKNavigationDelegate, WKUIDelegate>
{
    UPWKWebViewJavascriptBridge * _bridge; // +0x8
    WKWebView * _webView; // +0x10
    WKWebView * _tempWebView; // +0x18
    UIButton * _backBtn; // +0x20
    BOOL _subPage; // +0x28
    BOOL _isWCDPage; // +0x29
    BOOL _isDownloadPage; // +0x2a
    id <UPWebPayDelegate> _delegate; // +0x30
    NSString * _startPage; // +0x38
    NSString * _displayTitle; // +0x40
    id /* block */ _payResultCallback; // +0x48
}
+ (double)rotatedWidth;
+ (double)rotatedHeight;
+ (double)rotatedOffset;
+ (double)displayWidth;
+ (double)displayHeight;
- (void)viewDidLoad;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadWebPage;
- (BOOL)isIPhoneXScreen;
- (BOOL)isChinese;
- (void)setupNavigationBar;
- (id)mediumFontWithSize:(double)arg1;
- (void)setCustomTitleView:(id)arg1 gapWidth:(double)arg2;
- (void)setCustomNavigationBarBackground;
- (void)rotateCustomNavigationBarBackground;
- (void)addBackBtn;
- (void)btnClosePressed:(id)arg1;
- (void)registerForWebMessage;
- (BOOL)openNewPage:(id)arg1;
- (void)onClosePage;
- (void)payResult:(id)arg1 error:(id *)arg2;
- (void)onBackEnable:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)startPage;
- (void)setStartPage:(id)arg1;
- (BOOL)subPage;
- (void)setSubPage:(BOOL)arg1;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
- (id /* block */)payResultCallback;
- (void)setPayResultCallback:(id /* block */)arg1;
- (BOOL)isWCDPage;
- (void)setIsWCDPage:(BOOL)arg1;
- (BOOL)isDownloadPage;
- (void)setIsDownloadPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
