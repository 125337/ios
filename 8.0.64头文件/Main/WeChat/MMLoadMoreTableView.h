@interface MMLoadMoreTableView : MMTableView
{
    UIEdgeInsets _insetsBefore; // +0x40
    BOOL _disableLoadMore; // +0x60
    float _startLoadingAnimationDuration; // +0x64
    float _stopLoadingAnimationDuration; // +0x68
    id <MMLoadMoreTableViewDelegate> _loadMoreDelegate; // +0x70
    UIView * _loadingView; // +0x78
}
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)setLoadingView:(id)arg1;
- (void)setDisableLoadMore:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onScrollViewWillBeginDecelerating;
- (void)startLoadMore;
- (void)onLoadDone;
- (id)loadMoreDelegate;
- (void)setLoadMoreDelegate:(id)arg1;
- (id)loadingView;
- (BOOL)disableLoadMore;
- (float)startLoadingAnimationDuration;
- (void)setStartLoadingAnimationDuration:(float)arg1;
- (float)stopLoadingAnimationDuration;
- (void)setStopLoadingAnimationDuration:(float)arg1;
- (void).cxx_destruct;
@end
