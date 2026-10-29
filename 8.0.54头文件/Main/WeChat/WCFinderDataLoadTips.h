@interface WCFinderDataLoadTips : UIView
{
    id <WCFinderDataLoadTipsDelegate> _delegate; // +0x8
    MMUIButton * _tipsButton; // +0x10
    WCFinderAnimationLoadingView * _loadingView; // +0x18
    WCFinderDataLoadTipsConfig * _config; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateConfig:(id)arg1;
- (void)setupLoading;
- (void)setupTipsBtn;
- (void)startLoadingState;
- (void)endLoadingState;
- (void)showTips:(id)arg1 canRetry:(BOOL)arg2;
- (void)showEmptyTips:(id)arg1;
- (void)showRetryTips:(id)arg1;
- (void)clear;
- (void)retryButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipsButton;
- (void)setTipsButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

