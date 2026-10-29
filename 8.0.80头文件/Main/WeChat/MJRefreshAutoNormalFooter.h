@interface MJRefreshAutoNormalFooter : MJRefreshAutoStateFooter
{
    UIActivityIndicatorView * _loadingView; // +0x30
    long long _activityIndicatorViewStyle; // +0x38
}
- (id)loadingView;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (void)prepare;
- (void)placeSubviews;
- (void)setState:(long long)arg1;
- (void)setLoadingView:(id)arg1;
- (long long)activityIndicatorViewStyle;
- (void).cxx_destruct;
@end
