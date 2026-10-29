@interface WCFinderHalfScreenWebVC : MMUIHalfScreenViewController <MMWebViewDelegate, WCFinderEmptyTipsViewDelegate, WCFinderHalfScreenProtocol, WCFinderStreamProfileDragBarViewDelegate>
{
    MMWebViewController * _webViewController; // +0x70
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x78
    WCFinderEmptyTipsView * _emptyTipsView; // +0x80
    NSString * _url; // +0x88
    double _heightRatio; // +0x90
}
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)updateWithUrl:(id)arg1;
- (void)initWebView;
- (void)updateFinderUI;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (id)dragBarView;
- (id)emptyTipsView;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (void)setDragBarView:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (void).cxx_destruct;
@end
