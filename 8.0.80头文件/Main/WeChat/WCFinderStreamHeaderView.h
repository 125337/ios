@interface WCFinderStreamHeaderView : UICollectionReusableView
{
    id <WCFinderStreamHeaderViewDelegate> _delegate; // +0x8
    double _triggerHeight; // +0x10
    WCFinderAnimationLoadingView * _loadingView; // +0x18
    UILabel * _tipsLabel; // +0x20
    unsigned long long _state; // +0x28
    double _pulldownHeight; // +0x30
    NSString * _normalTips; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setLoadingImage:(id)arg1;
- (void)configNormalTips:(id)arg1;
- (void)setLoadingTop:(double)arg1;
- (BOOL)isLoadingNow;
- (void)onResumeOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfNoMore:(id)arg1;
- (void)onStateOfNone;
- (void)streamRefreshScrollViewDidScroll:(id)arg1;
- (void)streamRefreshScrollViewDidEndDragging:(id)arg1;
- (void)streamRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)triggerHeight;
- (void)setTriggerHeight:(double)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (double)pulldownHeight;
- (void)setPulldownHeight:(double)arg1;
- (id)normalTips;
- (void)setNormalTips:(id)arg1;
- (void).cxx_destruct;
@end
