@interface ICCollentionRefreshHeaderView : UIView
{
    long long _state; // +0x8
    id <ICCollentionRefreshHeaderViewDelegate> _delegate; // +0x10
    MMUIActivityIndicatorView * _loadingView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)setState:(long long)arg1;
- (void)icRefreshScrollViewDidScroll:(id)arg1;
- (void)icRefreshScrollViewDidEndDragging:(id)arg1;
- (void)icRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)icRefreshScrollViewTrigerAutoRefresh:(id)arg1;
- (long long)state;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
