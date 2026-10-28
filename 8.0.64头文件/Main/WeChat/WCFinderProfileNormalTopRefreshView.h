@interface WCFinderProfileNormalTopRefreshView : WCFinderProfileTopRefreshView
{
    WCFinderAnimationLoadingView * _loadingView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)willBeginRefresh;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
