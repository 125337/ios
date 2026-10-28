@interface WAContainerScrollViewLogic : NSObject <UIScrollViewDelegate>
{
    BOOL _enable; // +0x8
    BOOL _customDecelerate; // +0x9
    unsigned int _scrollViewId; // +0xc
    WAJSCoreService * _service; // +0x10
    WAWebViewController * _webview; // +0x18
    UIScrollView * _scrollView; // +0x20
    id <UIScrollViewDelegate> _realDelegate; // +0x28
    WAScrollViewAnimView * _animView; // +0x30
}
- (void)dealloc;
- (void)startAnimateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 startPoint:(CGPoint)arg6 endPoint:(CGPoint)arg7;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)notifyEvent:(id)arg1 params:(id)arg2;
- (id)commonParams:(id)arg1;
- (id)paramsWith:(id)arg1 extraParams:(id)arg2;
- (void)makeAnimView;
- (void)updateAnimView;
- (void)deleAnimView;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (BOOL)customDecelerate;
- (void)setCustomDecelerate:(BOOL)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
- (unsigned int)scrollViewId;
- (void)setScrollViewId:(unsigned int)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)realDelegate;
- (void)setRealDelegate:(id)arg1;
- (id)animView;
- (void)setAnimView:(id)arg1;
- (void).cxx_destruct;
@end
