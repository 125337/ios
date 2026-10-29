@interface WCFinderLiveHomePageFooterView : UICollectionReusableView
{
    double _triggerWidth; // +0x8
    id <WCFinderLiveHomePageFooterViewActionDelegate> _delegate; // +0x10
    unsigned long long _state; // +0x18
    WCFinderAnimationLoadingView * _loadingView; // +0x20
    double _pulldownWidth; // +0x28
}
+ (id)footerIdentifier;
+ (double)footerWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)setLoadingImage:(id)arg1;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (BOOL)isLoadingNow;
- (void)onResumeOfLoading;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)didEndDragging:(id)arg1;
- (double)triggerWidth;
- (void)setTriggerWidth:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (double)pulldownWidth;
- (void)setPulldownWidth:(double)arg1;
- (void).cxx_destruct;
@end

