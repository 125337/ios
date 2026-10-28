@interface WCFinderNativeDramaFeedViewController_Maskless : MMUIViewController <WCFinderNativeDramaFeedViewModelDelegate_Maskless, WCFinderFeedListViewDelegate, WCFinderNativeDramaEpisodeListProtocol, WCFinderNativeDramaHalfScreenDataCacheable, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedListTransitionHelperDelegate, UIGestureRecognizerDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _popDetailOnce; // +0x70
    FinderNativeDramaInfo * _info; // +0x78
    WCFinderNativeDramaFeedViewModel_Maskless * _viewModel; // +0x80
    WCFinderNativeDramaHalfScreenViewModel * _nativeDramaDetailHalfScreenViewModel; // +0x88
    MMTimer * _promotionTimer; // +0x90
    long long _countDown; // +0x98
    NSMutableSet * _viewedPromotions; // +0xa0
    WCFinderFeedListView * _feedListView; // +0xa8
    UIPanGestureRecognizer * _tipsPanGesture; // +0xb0
}
- (id)initWithParams:(id)arg1;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_appWillEnterForeground;
- (void)_appDidEnterBackground;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setupUI;
- (void)_setupFeedListView;
- (void)_setupNavigationTitle;
- (void)_updatePromotionTipsIfNeedWithCell:(id)arg1 forRowAtIndex:(long long)arg2 contentVM:(id)arg3;
- (void)_disabledFeedInteractiveIfNeed;
- (void)_enabledFeedInteractive;
- (void)_promotionCountDownTimerTrigger;
- (id)_promotionTipsStringWithCountDown:(long long)arg1;
- (void)_onPanGestureChanged:(id)arg1;
- (void)finderFeedListView:(id)arg1 playRateDidChanged:(double)arg2;
- (void)viewModel:(id)arg1 feedItemDidChangeWithDiff:(id)arg2;
- (void)_updateFooterView;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (void)finderFeedListStartMediaPlay;
- (void)finderFeedListVideoMediaIsPause:(BOOL)arg1;
- (void)finderFeedListViewDidEndScrollingAnimation:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)getCurMediaListObject;
- (unsigned long long)_currentEpisodeID;
- (void)_fetchPromotionIfNeedWithContentVM:(id)arg1;
- (void)_startCountDownIfNeed;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)halfScreen:(id)arg1 jumpToEpisode:(unsigned long long)arg2;
- (id)nativeDramaDetailHalfScreenViewModel;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)minimizePageBizKey;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)tipsPanGesture;
- (void)_reportPromotionDisplay;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)popDetailOnce;
- (void)setPopDetailOnce:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setNativeDramaDetailHalfScreenViewModel:(id)arg1;
- (id)promotionTimer;
- (void)setPromotionTimer:(id)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
- (id)viewedPromotions;
- (void)setViewedPromotions:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (void)setTipsPanGesture:(id)arg1;
- (void).cxx_destruct;
@end
