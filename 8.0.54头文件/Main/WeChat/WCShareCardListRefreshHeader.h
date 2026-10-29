@interface WCShareCardListRefreshHeader : WCCardRefreshComponent
{
    double _insetTDelta; // +0x28
    MMUIActivityIndicatorView * _loadingView; // +0x30
}
+ (id)headerWithRefreshingBlock:(id /* block */)arg1;
- (void)prepare;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (void)endRefreshing;
- (id)loadingView;
- (void)setPullingPercent:(double)arg1;
- (double)insetTDelta;
- (void)setInsetTDelta:(double)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

