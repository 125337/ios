@interface WCFinderCollectionHalfHeaderRefreshView : EGORefreshTableHeaderView
{
    double _triggerHeight; // +0x18
    WCFinderAnimationLoadingView * _loadingView; // +0x20
    UILabel * _tipsLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onStateOfPulling;
- (void)onStateOfNormal;
- (void)onStateOfNormal:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfNoMore:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (double)triggerHeight;
- (void)setTriggerHeight:(double)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
