@interface WCFinderNativeDramaIAAFeedViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, MMTipsViewControllerDelegate, WCFinderNativeDramaIAAFeedViewModelDelegate>
{
    BOOL _volumeOn; // +0x70
    id <WCFinderNativeDramaIAAFeedViewControllerDelegate> _delegate; // +0x78
    WCFinderNativeDramaIAAFeedViewModel * _viewModel; // +0x80
    WCFinderFeedListView * _feedListView; // +0x88
    WCFinderNativeDramaIAAFeedCountDownTipsView * _countDownTipsView; // +0x90
    WCFinderNativeDramaIAAFeedConfigView * _configView; // +0x98
    long long _countDown; // +0xa0
    MMTimer * _timer; // +0xa8
}
- (id)initWithParams:(id)arg1;
- (BOOL)shouldHideNavigationBar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)_appWillEnterForeground;
- (void)_appDidEnterBackground;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setupUI;
- (void)_setupFeedListView;
- (void)_startCountDown;
- (void)_countDownTimerTrigger;
- (void)_showNotSatisfiedWarningAlert;
- (void)_showSatisfiedAlert;
- (void)_showAlertWithTitle:(id)arg1 cancelStyleText:(id)arg2 confirmStyleText:(id)arg3;
- (void)_updateCountDownTipsView;
- (void)_updateConfigView;
- (void)_dismissViewController;
- (void)viewModelUnlockStateDidChange:(id)arg1;
- (void)viewModelPromotionStateDidChange:(id)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListStartMediaPlay;
- (void)finderFeedListVideoMediaIsPause:(BOOL)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onClickEmptyBackgroundViewToHideTips:(id)arg1;
- (void)_continueUnlock;
- (id)_commonParams;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)countDownTipsView;
- (void)setCountDownTipsView:(id)arg1;
- (id)configView;
- (void)setConfigView:(id)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
- (BOOL)volumeOn;
- (void)setVolumeOn:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
