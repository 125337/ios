@interface WCCanvasUltraWebViewComponent : WCCanvasComponent
{
    MMWebViewController * _webViewController; // +0x8
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)initViews;
- (void)initWebView;
- (id)fetchRequestUrlWithUrl:(id)arg1 andUpdateExtraInfo:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)setComponentContentViewScrollEnabled:(BOOL)arg1;
- (BOOL)isComponentContentViewScrolledToTop;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (BOOL)isChildViewController;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (void).cxx_destruct;
@end
