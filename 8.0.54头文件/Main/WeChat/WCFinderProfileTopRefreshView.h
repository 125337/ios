@interface WCFinderProfileTopRefreshView : UIView
{
    BOOL _enable; // +0x8
    id /* block */ _refreshBlock; // +0x10
    long long _state; // +0x18
    id <WCFinderProfileTopRefreshViewDelegate> _delegate; // +0x20
}
+ (id)topRefreshViewWithTrigger:(id /* block */)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)endRefreshing;
- (void)updatePollingProgress:(double)arg1;
- (double)expectInsetTop;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;
- (void)onScrollView:(id)arg1 refreshDistance:(double)arg2;
- (void)willBeginRefresh;
- (void)didBeginRefresh;
- (id /* block */)refreshBlock;
- (void)setRefreshBlock:(id /* block */)arg1;
- (long long)state;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end

