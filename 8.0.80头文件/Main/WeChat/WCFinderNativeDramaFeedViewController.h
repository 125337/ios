@interface WCFinderNativeDramaFeedViewController : MMUIViewController <WCFinderNativeDramaFeedViewModelDelegate, WCFinderFeedListViewDelegate, WCFinderNativeDramaEpisodeListProtocol, WCFinderNativeDramaHalfScreenDataCacheable, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedListTransitionHelperDelegate, WCFinderFeedListViewReportDelegate, UIGestureRecognizerDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _popDetailOnce; // +0x70
    BOOL _feedPageVisible; // +0x71
    BOOL _shouldCheckGuideExitDestination; // +0x72
    BOOL _hasCompletionReminderExposure; // +0x73
    WCFinderNativeDramaFeedViewModel * _viewModel; // +0x78
    NSMutableDictionary * _halfScreenViewModels; // +0x80
    WCFinderFeedListView * _feedListView; // +0x88
    UILabel * _navigationTittleLabel; // +0x90
    UIPanGestureRecognizer * _tipsPanGesture; // +0x98
    WCFinderNativeDramaPromotionCoordinator * _promotionCoordinator; // +0xa0
    NSMutableSet * _shownCompletionReminderIdentifiers; // +0xa8
    WCFinderFullMultiMediaTableViewCell * _completionReminderCell; // +0xb0
    unsigned long long _completionReminderGeneration; // +0xb8
    NSString * _reportRootFeedID; // +0xc0
    unsigned long long _reportExitType; // +0xc8
}
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithParams:(id)arg1;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_appWillEnterForeground;
- (BOOL)_isCoveredByPushOrPresent;
- (void)_appDidEnterBackground;
- (void)_setupUI;
- (void)_setupFeedListView;
- (void)_setupNavigationTitle;
- (void)_onPanGestureChanged:(id)arg1;
- (void)viewModel:(id)arg1 feedItemDidChangeWithDiff:(id)arg2;
- (void)_updateFooterView;
- (id)_currentContentVM;
- (unsigned long long)_currentEpisodeID;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (void)finderFeedListStartMediaPlay;
- (void)finderFeedListVideoMediaIsPause:(BOOL)arg1 pauseType:(long long)arg2;
- (void)finderFeedListViewDidEndScrollingAnimation:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (void)finderFeedListViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)finderFeedListView:(id)arg1 playRateDidChanged:(double)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)finderFeedListViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3 contentVM:(id)arg4;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (void)curFeedHalfScreenIsShow:(BOOL)arg1;
- (void)_showCompletionReminderIfNeededAtPosition:(double)arg1 videoDuration:(double)arg2 contentVM:(id)arg3;
- (void)_dismissCompletionReminderAnimated:(BOOL)arg1;
- (void)_didEndScrolling;
- (void)_updateNavigationTitleVisibility;
- (int)feedViewControllerScene;
- (int)fromViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)extInfoInLog21874;
- (id)halfScreen:(id)arg1 jumpToDramaWithInfo:(id)arg2 episodeID:(unsigned long long)arg3;
- (id)nativeDramaDetailHalfScreenViewModel;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)minimizePageBizKey;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (BOOL)finderFeedListView:(id)arg1 disabledMinimizeForContentTid:(id)arg2;
- (id)tipsPanGesture;
- (BOOL)popDetailOnce;
- (void)setPopDetailOnce:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)halfScreenViewModels;
- (void)setHalfScreenViewModels:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)navigationTittleLabel;
- (void)setNavigationTittleLabel:(id)arg1;
- (void)setTipsPanGesture:(id)arg1;
- (id)promotionCoordinator;
- (void)setPromotionCoordinator:(id)arg1;
- (BOOL)feedPageVisible;
- (void)setFeedPageVisible:(BOOL)arg1;
- (id)shownCompletionReminderIdentifiers;
- (void)setShownCompletionReminderIdentifiers:(id)arg1;
- (id)completionReminderCell;
- (void)setCompletionReminderCell:(id)arg1;
- (unsigned long long)completionReminderGeneration;
- (void)setCompletionReminderGeneration:(unsigned long long)arg1;
- (BOOL)shouldCheckGuideExitDestination;
- (void)setShouldCheckGuideExitDestination:(BOOL)arg1;
- (id)reportRootFeedID;
- (void)setReportRootFeedID:(id)arg1;
- (unsigned long long)reportExitType;
- (void)setReportExitType:(unsigned long long)arg1;
- (BOOL)hasCompletionReminderExposure;
- (void)setHasCompletionReminderExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
