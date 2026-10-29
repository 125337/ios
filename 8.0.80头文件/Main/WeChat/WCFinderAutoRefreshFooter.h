@interface WCFinderAutoRefreshFooter : MJRefreshAutoFooter <WCFinderDataLoadTipsDelegate>
{
    BOOL _shouldAdjustPositionForEmptySpace; // +0x30
    double _defaultFooterHeight; // +0x38
    WCFinderDataLoadTips * _loadingTips; // +0x40
    WCFinderNoMoreView * _noMoreView; // +0x48
}
- (void)prepare;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setState:(long long)arg1;
- (void)showRetryTips:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (void)updateFooterHeightIfNeeded;
- (double)calculateLoadingCenterY;
- (id)loadingTips;
- (id)noMoreView;
- (BOOL)shouldAdjustPositionForEmptySpace;
- (void)setShouldAdjustPositionForEmptySpace:(BOOL)arg1;
- (double)defaultFooterHeight;
- (void)setDefaultFooterHeight:(double)arg1;
- (void)setLoadingTips:(id)arg1;
- (void)setNoMoreView:(id)arg1;
- (void).cxx_destruct;
@end
