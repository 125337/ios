@interface MSEHTMLInfoManager : NSObject <WKNavigationDelegate>
{
    id <GETHTMLInfoDelegate> _delegate; // +0x8
    WKWebView * _jsparseWebView; // +0x10
    NSString * _title; // +0x18
}
- (void)loadingURL:(id)arg1;
- (void)parserThumbImageFromWebView:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jsparseWebView;
- (void)setJsparseWebView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

