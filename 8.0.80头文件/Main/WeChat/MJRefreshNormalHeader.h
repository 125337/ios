@interface MJRefreshNormalHeader : MJRefreshStateHeader
{
    UIImageView * _arrowView; // +0x30
    UIActivityIndicatorView * _loadingView; // +0x38
    long long _activityIndicatorViewStyle; // +0x40
}
- (id)arrowView;
- (id)loadingView;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (void)prepare;
- (void)placeSubviews;
- (void)setState:(long long)arg1;
- (id)flipsHorizontallyInOppositeLayoutDirectionViews;
- (void)setLoadingView:(id)arg1;
- (long long)activityIndicatorViewStyle;
- (void).cxx_destruct;
@end
