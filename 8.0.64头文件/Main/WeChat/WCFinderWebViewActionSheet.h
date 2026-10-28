@interface WCFinderWebViewActionSheet : WCActionSheet <WKNavigationDelegate>
{
    NSString * _titleString; // +0x8
    NSString * _ruleUrl; // +0x10
    id /* block */ _clickAcceptBlock; // +0x18
    id /* block */ _clickCancelBlock; // +0x20
    UIView * _tipsView; // +0x28
    MMUIButton * _acceptBtn; // +0x30
    WCFinderAnimationLoadingView * _loadingView; // +0x38
    unsigned long long _loadType; // +0x40
    YYWKWebView * _h5WebView; // +0x48
    UIImageView * _retryImageView; // +0x50
    UILabel * _retryLabel; // +0x58
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)h5WebView;
- (id)retryImageView;
- (id)retryLabel;
- (id)getTipsActionSheetView;
- (void)onClickCancelBtn;
- (void)onClickAcceptBtn;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)onClickRetry:(id)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)ruleUrl;
- (void)setRuleUrl:(id)arg1;
- (id /* block */)clickAcceptBlock;
- (void)setClickAcceptBlock:(id /* block */)arg1;
- (id /* block */)clickCancelBlock;
- (void)setClickCancelBlock:(id /* block */)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)acceptBtn;
- (void)setAcceptBtn:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)loadType;
- (void)setLoadType:(unsigned long long)arg1;
- (void)setH5WebView:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (void)setRetryLabel:(id)arg1;
- (void).cxx_destruct;
@end
