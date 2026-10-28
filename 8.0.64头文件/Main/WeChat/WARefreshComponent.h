@interface WARefreshComponent : UIView
{
    UIEdgeInsets _scrollViewOriginalInset; // +0x8
    UIScrollView * _scrollView; // +0x28
    id /* block */ _refreshingBlock; // +0x30
    id /* block */ _beginRefreshingCompletionBlock; // +0x38
    id /* block */ _endRefreshingCompletionBlock; // +0x40
    long long _state; // +0x48
    double _pullingPercent; // +0x50
    UIPanGestureRecognizer * _pan; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepare;
- (void)layoutSubviews;
- (void)placeSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)addObservers;
- (void)removeObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (void)beginRefreshing;
- (void)beginRefreshingWithCompletionBlock:(id /* block */)arg1;
- (void)endRefreshing;
- (void)endRefreshingWithCompletionBlock:(id /* block */)arg1;
- (BOOL)isRefreshing;
- (void)setPullingPercent:(double)arg1;
- (void)executeRefreshingCallback;
- (id /* block */)refreshingBlock;
- (void)setRefreshingBlock:(id /* block */)arg1;
- (id /* block */)beginRefreshingCompletionBlock;
- (void)setBeginRefreshingCompletionBlock:(id /* block */)arg1;
- (id /* block */)endRefreshingCompletionBlock;
- (void)setEndRefreshingCompletionBlock:(id /* block */)arg1;
- (long long)state;
- (UIEdgeInsets)scrollViewOriginalInset;
- (id)scrollView;
- (double)pullingPercent;
- (id)pan;
- (void)setPan:(id)arg1;
- (void).cxx_destruct;
@end
