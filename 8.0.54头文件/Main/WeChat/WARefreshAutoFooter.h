@interface WARefreshAutoFooter : WARefreshFooter
{
    BOOL _automaticallyRefresh; // +0x30
    double _triggerAutomaticallyRefreshPercent; // +0x38
}
- (void)willMoveToSuperview:(id)arg1;
- (BOOL)adjustContentInset;
- (void)prepare;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isAutomaticallyRefresh;
- (void)setAutomaticallyRefresh:(BOOL)arg1;
- (double)triggerAutomaticallyRefreshPercent;
- (void)setTriggerAutomaticallyRefreshPercent:(double)arg1;
@end

