@interface WCFinderCommentListHeaderRefreshView : EGORefreshTableHeaderView
{
    NSString * _normalTitle; // +0x18
    double _triggerHeight; // +0x20
    WCFinderAnimationLoadingView * _loadingView; // +0x28
    UILabel * _tipsLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setNormalTitle:(id)arg1;
- (void)onStateOfPulling;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfNoMore:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (id)normalTitle;
- (double)triggerHeight;
- (void)setTriggerHeight:(double)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
