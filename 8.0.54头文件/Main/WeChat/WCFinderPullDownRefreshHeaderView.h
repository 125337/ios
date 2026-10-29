@interface WCFinderPullDownRefreshHeaderView : EGORefreshTableHeaderView
{
    id <WCFinderPullDownRefreshHeaderViewStatusDelegate> _statusDelegate; // +0x18
    double _triggerHeight; // +0x20
    unsigned long long _triggerMode; // +0x28
    WCFinderAnimationLoadingView * _loadingView; // +0x30
    UILabel * _tipsLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 configWithImageName:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 configWithImage:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 configWithImage:(id)arg2 configWithImageName:(id)arg3;
- (void)setState:(int)arg1;
- (void)onStateOfPulling;
- (BOOL)isLoadingNow;
- (BOOL)isOnLoadingRefreshState;
- (void)onResumeOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfNoMore:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (id)statusDelegate;
- (void)setStatusDelegate:(id)arg1;
- (double)triggerHeight;
- (void)setTriggerHeight:(double)arg1;
- (unsigned long long)triggerMode;
- (void)setTriggerMode:(unsigned long long)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

