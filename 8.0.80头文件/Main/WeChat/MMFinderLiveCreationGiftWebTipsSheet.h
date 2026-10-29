@interface MMFinderLiveCreationGiftWebTipsSheet : MMPageSheetBaseView <WKNavigationDelegate>
{
    WKWebView * _webView; // +0x8
    UIActivityIndicatorView * _loadingIndicator; // +0x10
    NSString * _urlString; // +0x18
}
- (id)initWithURL:(id)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)loadWebContent;
- (void)setupPageSheetConfig;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)urlString;
- (void)setUrlString:(id)arg1;
- (void).cxx_destruct;
@end
