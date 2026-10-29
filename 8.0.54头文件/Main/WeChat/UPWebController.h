@interface UPWebController : UIViewController <UIAlertViewDelegate, WKNavigationDelegate, WKUIDelegate>
{
    UPWKWebViewJavascriptBridge * _bridge; // +0x8
    WKWebView * _webView; // +0x10
    WKWebView * _tempWebView; // +0x18
    UINavigationBar * _naviBar; // +0x20
    BOOL _subPage; // +0x28
    id <UPWebPayDelegate> _delegate; // +0x30
    NSString * _startPage; // +0x38
    NSString * _displayTitle; // +0x40
}
+ (double)rotatedWidth;
+ (double)rotatedHeight;
+ (double)rotatedOffset;
+ (double)displayWidth;
+ (double)displayHeight;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadWebPage;
- (void)setupNavigationBar;
- (void)setCustomNavigationBarBackground;
- (void)rotateCustomNavigationBarBackground;
- (void)addBackBtn;
- (void)btnClosePressed:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
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
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)startPage;
- (void)setStartPage:(id)arg1;
- (BOOL)subPage;
- (void)setSubPage:(BOOL)arg1;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
@end

