@interface MJRefreshAutoFooter : MJRefreshFooter
{
    BOOL _automaticallyRefresh; // +0x30
    BOOL _triggerByDrag; // +0x31
    double _triggerAutomaticallyRefreshPercent; // +0x38
    long long _autoTriggerTimes; // +0x40
    long long _leftTriggerTimes; // +0x48
}
- (void)beginRefreshingWithoutValidation;
- (void)willMoveToSuperview:(id)arg1;
- (void)prepare;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (BOOL)unlimitedTrigger;
- (void)beginRefreshing;
- (void)setState:(long long)arg1;
- (void)resetTriggerTimes;
- (void)setHidden:(BOOL)arg1;
- (void)setAutoTriggerTimes:(long long)arg1;
- (BOOL)isAutomaticallyRefresh;
- (void)setAutomaticallyRefresh:(BOOL)arg1;
- (double)triggerAutomaticallyRefreshPercent;
- (void)setTriggerAutomaticallyRefreshPercent:(double)arg1;
- (long long)autoTriggerTimes;
- (BOOL)triggerByDrag;
- (void)setTriggerByDrag:(BOOL)arg1;
- (long long)leftTriggerTimes;
- (void)setLeftTriggerTimes:(long long)arg1;
@end
