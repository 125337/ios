@interface WAWebViewPullDownRefreshView : UIView
{
    BOOL _isRefreshing; // +0x8
    BOOL _isAnimating; // +0x9
    BOOL _isAppear; // +0xa
    BOOL _isDragging; // +0xb
    BOOL _waitGoPull; // +0xc
    BOOL _waitGoStop; // +0xd
    BOOL _haveDotAnim; // +0xe
    id <WAWebViewPullDownRefreshViewDelegate> _delegate; // +0x10
    DotLoadingView * _dotLoadingView; // +0x18
    double _animateDestY; // +0x20
    double _beginDragingY; // +0x28
    double _pullBeginTime; // +0x30
    UIScrollView * _scrollView; // +0x38
}
- (id)initWithScrollView:(id)arg1 withMode:(long long)arg2;
- (void)setMode:(long long)arg1;
- (void)startRefreshing;
- (void)stopRefreshing;
- (void)clearWait;
- (BOOL)exeWait;
- (void)goPull;
- (void)goStop;
- (void)layoutSubviews;
- (double)getScrollViewY;
- (void)setScrollViewY:(double)arg1 animated:(BOOL)arg2;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (void)onScrollViewWillBeginDragging;
- (void)onScrollViewDidScroll;
- (void)onScrollViewDidEndDraggingWillDecelerate:(BOOL)arg1;
- (void)onScrollViewWillBeginDecelerating;
- (void)onScrollViewDidEndScrollingAnimation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRefreshing;
- (void)setIsRefreshing:(BOOL)arg1;
- (id)dotLoadingView;
- (void)setDotLoadingView:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (double)animateDestY;
- (void)setAnimateDestY:(double)arg1;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (double)beginDragingY;
- (void)setBeginDragingY:(double)arg1;
- (BOOL)waitGoPull;
- (void)setWaitGoPull:(BOOL)arg1;
- (BOOL)waitGoStop;
- (void)setWaitGoStop:(BOOL)arg1;
- (double)pullBeginTime;
- (void)setPullBeginTime:(double)arg1;
- (BOOL)haveDotAnim;
- (void)setHaveDotAnim:(BOOL)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end
