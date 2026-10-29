@interface FBSDKWebDialogView : UIView <WKNavigationDelegate>
{
    UIButton * _closeButton; // +0x8
    UIActivityIndicatorView * _loadingView; // +0x10
    WKWebView * _webView; // +0x18
    id <FBSDKWebDialogViewDelegate> _delegate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)loadURL:(id)arg1;
- (void)stopLoading;
- (void)drawRect:(CGRect)arg1;
- (void)layoutSubviews;
- (void)_close:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

