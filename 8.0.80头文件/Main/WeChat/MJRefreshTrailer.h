@interface MJRefreshTrailer : MJRefreshComponent
{
    double _ignoredScrollViewContentInsetRight; // +0x30
    long long _lastRefreshCount; // +0x38
    double _lastRightDelta; // +0x40
}
+ (id)trailerWithRefreshingBlock:(id /* block */)arg1;
+ (id)trailerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)placeSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)linkTo:(id)arg1;
- (double)happenOffsetX;
- (double)widthForContentBreakView;
- (double)ignoredScrollViewContentInsetRight;
- (void)setIgnoredScrollViewContentInsetRight:(double)arg1;
- (long long)lastRefreshCount;
- (void)setLastRefreshCount:(long long)arg1;
- (double)lastRightDelta;
- (void)setLastRightDelta:(double)arg1;
@end
