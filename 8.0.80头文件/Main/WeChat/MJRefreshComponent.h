@interface MJRefreshComponent : UIView
{
    UIEdgeInsets _scrollViewOriginalInset; // +0x8
    UIScrollView * _scrollView; // +0x28
    BOOL _automaticallyChangeAlpha; // +0x30
    double _fastAnimationDuration; // +0x38
    double _slowAnimationDuration; // +0x40
    id /* block */ _refreshingBlock; // +0x48
    id _refreshingTarget; // +0x50
    SEL _refreshingAction; // +0x58
    id /* block */ _beginRefreshingCompletionBlock; // +0x60
    id /* block */ _endRefreshingAnimateCompletionBlock; // +0x68
    id /* block */ _endRefreshingAnimationBeginAction; // +0x70
    id /* block */ _endRefreshingCompletionBlock; // +0x78
    long long _state; // +0x80
    NSArray * _flipsHorizontallyInOppositeLayoutDirectionViews; // +0x88
    NSArray * _additionalFlipsViews; // +0x90
    double _pullingPercent; // +0x98
    UIPanGestureRecognizer * _pan; // +0xa0
}
- (id)autoChangeTransparency:(BOOL)arg1;
- (id)afterBeginningAction:(id /* block */)arg1;
- (id)endingAnimationBeginningAction:(id /* block */)arg1;
- (id)afterEndingAction:(id /* block */)arg1;
- (id)linkTo:(id)arg1;
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
- (void)i18nDidChange;
- (void)setRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
- (void)setState:(long long)arg1;
- (void)beginRefreshing;
- (void)beginRefreshingWithCompletionBlock:(id /* block */)arg1;
- (void)endRefreshing;
- (void)endRefreshingWithCompletionBlock:(id /* block */)arg1;
- (BOOL)isRefreshing;
- (void)setAutoChangeAlpha:(BOOL)arg1;
- (BOOL)isAutoChangeAlpha;
- (void)setAutomaticallyChangeAlpha:(BOOL)arg1;
- (void)setPullingPercent:(double)arg1;
- (void)executeRefreshingCallback;
- (id)setAnimationDisabled;
- (void)setEndRefreshingAnimateCompletionBlock:(id /* block */)arg1;
- (double)fastAnimationDuration;
- (void)setFastAnimationDuration:(double)arg1;
- (double)slowAnimationDuration;
- (void)setSlowAnimationDuration:(double)arg1;
- (id /* block */)refreshingBlock;
- (void)setRefreshingBlock:(id /* block */)arg1;
- (id)refreshingTarget;
- (void)setRefreshingTarget:(id)arg1;
- (SEL)refreshingAction;
- (void)setRefreshingAction:(SEL)arg1;
- (id /* block */)beginRefreshingCompletionBlock;
- (void)setBeginRefreshingCompletionBlock:(id /* block */)arg1;
- (id /* block */)endRefreshingAnimateCompletionBlock;
- (id /* block */)endRefreshingAnimationBeginAction;
- (void)setEndRefreshingAnimationBeginAction:(id /* block */)arg1;
- (id /* block */)endRefreshingCompletionBlock;
- (void)setEndRefreshingCompletionBlock:(id /* block */)arg1;
- (long long)state;
- (UIEdgeInsets)scrollViewOriginalInset;
- (id)scrollView;
- (id)flipsHorizontallyInOppositeLayoutDirectionViews;
- (id)additionalFlipsViews;
- (double)pullingPercent;
- (BOOL)isAutomaticallyChangeAlpha;
- (id)pan;
- (void)setPan:(id)arg1;
- (void).cxx_destruct;
@end
