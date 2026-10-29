@interface MJRefreshHeader : MJRefreshComponent <CAAnimationDelegate>
{
    BOOL _isCollectionViewAnimationBug; // +0x30
    NSString * _lastUpdatedTimeKey; // +0x38
    double _ignoredScrollViewContentInsetTop; // +0x40
    double _insetTDelta; // +0x48
}
+ (id)headerWithRefreshingBlock:(id /* block */)arg1;
+ (id)headerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
- (void)prepare;
- (void)placeSubviews;
- (void)resetInset;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (void)headerEndingAction;
- (void)headerRefreshingAction;
- (id)linkTo:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)lastUpdatedTime;
- (void)setIgnoredScrollViewContentInsetTop:(double)arg1;
- (id)lastUpdatedTimeKey;
- (void)setLastUpdatedTimeKey:(id)arg1;
- (double)ignoredScrollViewContentInsetTop;
- (BOOL)isCollectionViewAnimationBug;
- (void)setIsCollectionViewAnimationBug:(BOOL)arg1;
- (double)insetTDelta;
- (void)setInsetTDelta:(double)arg1;
- (void).cxx_destruct;
@end
