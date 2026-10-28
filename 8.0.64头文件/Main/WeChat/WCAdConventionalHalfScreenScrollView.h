@interface WCAdConventionalHalfScreenScrollView : UIScrollView <WCFinderEmptyTipsViewDelegate, MMWebViewDelegate, UIScrollViewDelegate, WCAdConventionalHalfScreenWebViewControllerDelegate>
{
    BOOL _isContentViewFullyVisible; // +0x8
    WCAdCardBtnInfo * _actionInfo; // +0x10
    id <WCAdConventionalHalfScreenScrollViewDelegate> _halfScreenDelegate; // +0x18
    WCAdConventionalHalfScreenCloseBarView * _closeBarView; // +0x20
    WCFinderEmptyTipsView * _emptyTipsView; // +0x28
    double _emptyAreaHeight; // +0x30
    MMUIView * _scrollContentContainer; // +0x38
    WCAdConventionalHalfScreenWebViewController * _webViewController; // +0x40
    CGPoint _beginDraggingOffset; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configSubviews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutContentScrollViewSubviews:(BOOL)arg1;
- (void)onScrollViewDidFullyAppear;
- (id)scrollContentContainer;
- (id)closeBarView;
- (id)emptyTipsView;
- (void)setEmptyAreaHeight:(double)arg1;
- (void)loadWebViewContent;
- (void)showLoadingTips;
- (void)hideLoadingTips;
- (void)showErrorTips;
- (void)updateEmptyTipsViewPosition;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (void)initialWebView;
- (id)appendParamsToUrl:(id)arg1 andUpdateExtraInfo:(id)arg2 withDataItem:(id)arg3 notAppendParamsToActionLink:(BOOL)arg4;
- (id)appendParamsToUrl:(id)arg1 withAdvertiseInfo:(id)arg2;
- (id)appendParamsToUrl:(id)arg1 withAdvertiseInfo:(id)arg2 notAppendParamsToActionLink:(BOOL)arg3;
- (void)setWebViewContentScrollEnabled:(BOOL)arg1;
- (BOOL)isContentContainerScrolledToTop;
- (void)setContentContainerScrollToTop;
- (void)setContentContainerScrollToMid:(BOOL)arg1;
- (void)setContentContainerPinToTop;
- (BOOL)isContentContainerStickToBottom;
- (void)onConventionalHalfScreenWebViewUpdateTitle:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)fetchScrollAreaForOffset:(double)arg1 topLine:(double)arg2 bottomLine:(double)arg3;
- (long long)operateScrollAreaForArea:(long long)arg1 increase:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)didScrollViewEndDecelerating;
- (void)onScrollViewCeilingTopWithPercent:(double)arg1 animated:(BOOL)arg2;
- (void)onScrollViewDidChangeVisibleHeight:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (void)setCloseBarView:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (double)emptyAreaHeight;
- (void)setScrollContentContainer:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (CGPoint)beginDraggingOffset;
- (void)setBeginDraggingOffset:(CGPoint)arg1;
- (BOOL)isContentViewFullyVisible;
- (void)setIsContentViewFullyVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
