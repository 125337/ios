@interface WCFinderNativeDramaFeedViewController_Mask : MMUIViewController <WCFinderNativeDramaFeedViewModelDelegate_Mask, WCFinderFeedListViewDelegate, WCFinderNativeDramaFeedUnlockViewDelegate, WCFinderNativeDramaEpisodeListProtocol, WCFinderNativeDramaIAAFeedViewControllerDelegate, WCFinderNativeDramaHalfScreenDataCacheable, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedListTransitionHelperDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _popDetailOnce; // +0x70
    FinderNativeDramaInfo * _info; // +0x78
    WCFinderNativeDramaFeedViewModel_Mask * _viewModel; // +0x80
    WCFinderNativeDramaHalfScreenViewModel * _nativeDramaDetailHalfScreenViewModel; // +0x88
    WCFinderNativeDramaPromotionDataService * _nativeDramaDataService; // +0x90
    WCFinderFeedListView * _feedListView; // +0x98
}
- (id)initWithParams:(id)arg1;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_setupUI;
- (void)_setupFeedListView;
- (void)_setupNavigationTitle;
- (void)viewModel:(id)arg1 feedItemDidChangeWithDiff:(id)arg2;
- (void)_updateFooterView;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListView:(id)arg1 playRateDidChanged:(double)arg2;
- (id)getCurMediaListObject;
- (void)_updateContentVMWithEpisodeID:(unsigned long long)arg1;
- (BOOL)_reloadItemIfNeed:(unsigned long long)arg1;
- (unsigned long long)_currentEpisodeID;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)view:(id)arg1 didTriggerUnlockActionWithModel:(id)arg2;
- (BOOL)halfScreen:(id)arg1 jumpToEpisode:(unsigned long long)arg2;
- (void)nativeDramaIAAFeedController:(id)arg1 didUnlockEpisode:(unsigned long long)arg2;
- (id)nativeDramaDetailHalfScreenViewModel;
- (id)minimizePageBizKey;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)popDetailOnce;
- (void)setPopDetailOnce:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setNativeDramaDetailHalfScreenViewModel:(id)arg1;
- (id)nativeDramaDataService;
- (void)setNativeDramaDataService:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (void).cxx_destruct;
@end
