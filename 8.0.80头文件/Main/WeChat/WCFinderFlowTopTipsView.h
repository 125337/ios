@interface WCFinderFlowTopTipsView : UICollectionViewCell
{
    BOOL _onlyVisbleWhenFullyDragged; // +0x8
    id <WCFinderFlowTopTipsViewDelegate> _delegate; // +0x10
    double _triggerHeight; // +0x18
    WCFinderAnimationLoadingView * _loadingView; // +0x20
    UILabel * _tipsLabel; // +0x28
    unsigned long long _state; // +0x30
    double _pulldownHeight; // +0x38
    NSString * _normalTips; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
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
- (void)setTipsColor:(id)arg1;
- (void)finderFlowTopTipsViewDidScroll:(id)arg1;
- (void)finderFlowTopTipsViewDidEndDragging:(id)arg1;
- (void)finderFlowTopTipsViewDataSourceDidFinishedLoading:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)triggerHeight;
- (void)setTriggerHeight:(double)arg1;
- (BOOL)onlyVisbleWhenFullyDragged;
- (void)setOnlyVisbleWhenFullyDragged:(BOOL)arg1;
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
