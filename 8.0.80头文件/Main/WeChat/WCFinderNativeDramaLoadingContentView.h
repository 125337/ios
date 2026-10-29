@interface WCFinderNativeDramaLoadingContentView : UIView <UIContentView, WCFinderDataLoadTipsDelegate>
{
    WCFinderNativeDramaLoadingConfiguration * _appliedConfiguration; // +0x8
    WCFinderDataLoadTips * _loadingView; // +0x10
}
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_updateUI;
- (void)layoutSubviews;
- (void)onDataLoadTipsClickRetry;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
