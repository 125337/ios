@interface WCFinderWebViewPageSheet : MMPageSheetBaseViewController <WKNavigationDelegate>
{
    NSString * _titleString; // +0x70
    NSString * _ruleUrl; // +0x78
    id /* block */ _clickCancelBlock; // +0x80
    WCFinderAnimationLoadingView * _loadingView; // +0x88
    unsigned long long _loadType; // +0x90
    YYWKWebView * _h5WebView; // +0x98
    UIImageView * _retryImageView; // +0xa0
    UILabel * _retryLabel; // +0xa8
}
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (double)pageSheetContentHeight;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)h5WebView;
- (void)setupDetailContainer;
- (void)updateUIForCurrentState;
- (void)reloadInnerView;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)onClickRetry:(id)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)ruleUrl;
- (void)setRuleUrl:(id)arg1;
- (id /* block */)clickCancelBlock;
- (void)setClickCancelBlock:(id /* block */)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)loadType;
- (void)setLoadType:(unsigned long long)arg1;
- (void)setH5WebView:(id)arg1;
- (id)retryImageView;
- (void)setRetryImageView:(id)arg1;
- (id)retryLabel;
- (void)setRetryLabel:(id)arg1;
- (void).cxx_destruct;
@end
