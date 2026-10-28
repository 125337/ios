@interface WCFinderLiveDiscoveryMoreLiveViewController : MMCPUIViewController <WCFinderLocationServiceExt, WCFinderDiscoveryLiveTabPageViewModelDelegate, WCFinderRedDotExt, MMLimitedModeEntryViewControllerExt, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _directlyOpenJumpInfoPage; // +0x70
    BOOL _isLocationServiceAuthrized; // +0x71
    id /* block */ _cacheModelUpdateBlock; // +0x78
    WCFinderRedDotCtrlInfo * _finderLiveEntryRedDotCtrlInfo; // +0x80
    id <WCFinderLiveDiscoveryMoreLiveViewControllerDelegate> _delegate; // +0x88
    UIView * _placeHolderView; // +0x90
    WCFinderTabPageModel * _liveModel; // +0x98
    WCFinderLiveDiscoveryCacheModel * _cacheModel; // +0xa0
    unsigned long long _selectedSubTabId; // +0xa8
    WCFinderDiscoveryLiveTabPageViewModel * _viewModel; // +0xb0
}
- (id)initWithLiveCacheModel:(id)arg1 tabId:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAppear;
- (void)willDisappear;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (id)cacheViewModel;
- (void)setRedDotModeObjectID:(id)arg1;
- (void)refreshPage;
- (void)onBackButtonClicked:(id)arg1;
- (void)onSearchClicked;
- (void)_openJumpInfoPageWithCtrlInfo:(id)arg1;
- (id)liveModel;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(BOOL)arg1;
- (void)onFinderGetLiveTabsInfoFinished:(BOOL)arg1;
- (void)checkAbnormalLiveIfNeeded;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id /* block */)cacheModelUpdateBlock;
- (void)setCacheModelUpdateBlock:(id /* block */)arg1;
- (id)finderLiveEntryRedDotCtrlInfo;
- (void)setFinderLiveEntryRedDotCtrlInfo:(id)arg1;
- (BOOL)directlyOpenJumpInfoPage;
- (void)setDirectlyOpenJumpInfoPage:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)placeHolderView;
- (void)setPlaceHolderView:(id)arg1;
- (void)setLiveModel:(id)arg1;
- (id)cacheModel;
- (void)setCacheModel:(id)arg1;
- (BOOL)isLocationServiceAuthrized;
- (void)setIsLocationServiceAuthrized:(BOOL)arg1;
- (unsigned long long)selectedSubTabId;
- (void)setSelectedSubTabId:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
