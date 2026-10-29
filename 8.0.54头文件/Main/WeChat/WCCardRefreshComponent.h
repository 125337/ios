@interface WCCardRefreshComponent : UIView
{
    UIEdgeInsets _scrollViewOriginalInset; // +0x8
    BOOL _automaticallyChangeAlpha; // +0x28
    id /* block */ _refreshingBlock; // +0x30
    id /* block */ _endRefreshingCompletionBlock; // +0x38
    long long _state; // +0x40
    UIScrollView * _scrollView; // +0x48
    double _pullingPercent; // +0x50
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
- (void)beginRefreshing;
- (void)endRefreshing;
- (BOOL)isRefreshing;
- (BOOL)isAutoChangeAlpha;
- (void)setAutomaticallyChangeAlpha:(BOOL)arg1;
- (void)setPullingPercent:(double)arg1;
- (void)setState:(long long)arg1;
- (void)executeRefreshingCallback;
- (id /* block */)refreshingBlock;
- (void)setRefreshingBlock:(id /* block */)arg1;
- (id /* block */)endRefreshingCompletionBlock;
- (void)setEndRefreshingCompletionBlock:(id /* block */)arg1;
- (long long)state;
- (UIEdgeInsets)scrollViewOriginalInset;
- (id)scrollView;
- (double)pullingPercent;
- (BOOL)isAutomaticallyChangeAlpha;
- (void).cxx_destruct;
@end

