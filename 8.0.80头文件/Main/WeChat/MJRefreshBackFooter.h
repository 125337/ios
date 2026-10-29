@interface MJRefreshBackFooter : MJRefreshFooter
{
    long long _lastRefreshCount; // +0x30
    double _lastBottomDelta; // +0x38
}
- (void)willMoveToSuperview:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (double)heightForContentBreakView;
- (double)happenOffsetY;
- (long long)lastRefreshCount;
- (void)setLastRefreshCount:(long long)arg1;
- (double)lastBottomDelta;
- (void)setLastBottomDelta:(double)arg1;
@end
