@interface WCTimeLineHeaderView : EGORefreshTableHeaderView
{
    MMActivityIndicator * m_reflashImageView; // +0x18
    UIImageView * m_tipBkg; // +0x20
    double _lastTopContentInset; // +0x28
    CGSize _lastScrollViewSize; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_loadForAccessbility;
- (void)onStateOfPulling;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)updateIndicatorLayoutWithScrollView:(id)arg1;
- (void)synchronizeLayoutWithScrollView:(id)arg1;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (CGSize)lastScrollViewSize;
- (void)setLastScrollViewSize:(CGSize)arg1;
- (double)lastTopContentInset;
- (void)setLastTopContentInset:(double)arg1;
- (void).cxx_destruct;
@end
