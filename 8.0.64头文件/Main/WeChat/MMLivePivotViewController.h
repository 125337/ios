@interface MMLivePivotViewController : MMUIViewController <UIGestureRecognizerDelegate, MMLivePivotItemViewControllerExt, MMLiveRoomDataCenterExt, MMLivePivotCollectionViewScrollDelegate, MMLivePivotCollectionViewUpdateDataExt, WCFinderLiveHomePageViewControllerDelegate, MMLiveTaskMgrExt, UICollectionViewDelegate, MMLivePivotViewDelegate, MMLiveContainerLogicControllerDelegate, MMLiveConflictHandling, MMLiveContainerLogicTargetViewControllerDelegate>
{
    BOOL isPresentingWithCustomTransition; // +0x70
    BOOL _fromLiveRedDot; // +0x71
    BOOL _hasFetchedLivesSinceScrolling; // +0x72
    BOOL _isEmbededInLiveFeed; // +0x73
    BOOL _isEmbededInLiveFeedByReusing; // +0x74
    BOOL _useAnchoredBypass; // +0x75
    BOOL _disableHistoryLives; // +0x76
    BOOL _isTransfroming; // +0x77
    BOOL _isPreviewDataUpdatingOnAnimation; // +0x78
    BOOL _isPreviewRelatedLiveState; // +0x79
    BOOL _hasShownEntryDialog; // +0x7a
    BOOL _disableInteractiveToMinimizeWindow; // +0x7b
    BOOL _useVerticalFullscreenMinimization; // +0x7c
    BOOL _presented; // +0x7d
    BOOL _isLiveAppearing; // +0x7e
    BOOL _hasAppeared; // +0x7f
    BOOL _initialContentOffsetSet; // +0x80
    BOOL _shouldScrollToNextAfterReplacement; // +0x81
    BOOL _isRecommendationLoading; // +0x82
    BOOL _isLiveInMainScene; // +0x83
    BOOL _isShowEducationView; // +0x84
    BOOL _recommendationRefreshScheduled; // +0x85
    BOOL _needShowScrollUpTips; // +0x86
    BOOL _needShowScrollDownTips; // +0x87
    BOOL _needFirstScrolledAfterExposedEducationForReporter; // +0x88
    BOOL _isForceShowRoundCorner; // +0x89
    BOOL _canNotPrepend; // +0x8a
    BOOL _relayoutFailOnViewDidAppear; // +0x8b
    BOOL _enablePanningProfile; // +0x8c
    BOOL _needScrollToNext; // +0x8d
    BOOL _needScrollToLast; // +0x8e
    int _commentScene; // +0x90
    unsigned int _hasMoreData; // +0x94
    unsigned int _lastHomePageLeaveTime; // +0x98
    NSMutableArray * _liveContentVMs; // +0xa0
    long long _tabType; // +0xa8
    id <MMLiveMorphDismissTarget> _morphDismissTarget; // +0xb0
    MMFinderLiveRelatedLiveParams * _relatedLiveParams; // +0xb8
    id /* block */ _dismissOrMinimizeCallback; // +0xc0
    long long _bottomMostSeenLiveIndex; // +0xc8
    NSString * _srcUrl; // +0xd0
    NSString * _sourceLiteAppId; // +0xd8
    WCFinderFullShareListTemplatePlugin * _jsapiPlugin; // +0xe0
    long long _currentIndex; // +0xe8
    MMLivePivotCollectionView * _pivotCollectionView; // +0xf0
    NSMutableArray * _itemControllers; // +0xf8
    NSData * _lastBuffer; // +0x100
    MMFinderLiveRouterParams * _routeParam; // +0x108
    unsigned long long _initialPivotLiveId; // +0x110
    unsigned long long _pivotSessionId; // +0x118
    unsigned long long _initialPivotObjectId; // +0x120
    MMLivePreviewRelatedViewModel * _specialViewModel; // +0x128
    MMLivePivotView * _pivotView; // +0x130
    FinderCommByPass * _fetchMoreByPass; // +0x138
    NSArray * _replacementContentVMs; // +0x140
    NSIndexPath * _replacementSelectedIndexPath; // +0x148
    unsigned long long _replacementHistoryCount; // +0x150
    NSMutableSet * _scheduledRemoveItemKeys; // +0x158
    NSString * _stateId; // +0x160
    MMFinderLivePivotEducationView * _scrollUpTipsView; // +0x168
    unsigned long long _watchHistoryLiveCount; // +0x170
    NSArray * _exportIds; // +0x178
    NSMutableDictionary * _exportIdDictionary; // +0x180
    long long _selectedExportIdIndex; // +0x188
    long long _exportIdFetchStatus; // +0x190
    MMTimer * _recommendationRefreshTimer; // +0x198
    long long _recommendationRefreshInvokeTime; // +0x1a0
    double _lastContentOffset; // +0x1a8
    MMLiveDisplayLinkAnimator * _frameByFrameScrollAnimator; // +0x1b0
    MMLivePivotAutoSwipeInfo * _autoSwipeInfoAfterFetchRecommends; // +0x1b8
    MMLiveTaskId * _lastHistoryFetchingTaskId; // +0x1c0
    NSMutableSet * _backupFeedsSet; // +0x1c8
    WCFinderLiveBaseLogReporter * _reporter; // +0x1d0
    MMLivePivotBlockingLoadReportContext * _blockingLoadContext; // +0x1d8
    MMTimer * _detectionValidityTimer; // +0x1e0
    NSData * _lastCheckBuffer; // +0x1e8
    unsigned long long _lastdetectionValidityTimestamp; // +0x1f0
    WCFinderLiveHomePageViewController * _homePageVC; // +0x1f8
    MMTimer * _homePageCacheTimer; // +0x200
    MMTimer * _homePagePrefetchTimer; // +0x208
    long long _currOrientation; // +0x210
    unsigned long long _currSupportedInterfaceOrientations; // +0x218
    unsigned long long _lastVisibleLoadingEndDraggingTimestamp; // +0x220
    UITapGestureRecognizer * _pivotCollectionTapGesRecognizer; // +0x228
    UIPanGestureRecognizer * _panningProfileGestureRecognizer; // +0x230
    WCFinderFullScreenAnimatedTransitioning * _panningProfileAnimator; // +0x238
    unsigned long long _recommendationPrefetchRemainingItemsThreshold; // +0x240
    unsigned long long _initialScrollDisabledReasons; // +0x248
    UIPanGestureRecognizer * _specialLiveAnimatorGestureRecognizer; // +0x250
    UIView * _collectionViewContainer; // +0x258
    UIViewPropertyAnimator * _pivotViewZoomOutAnimator; // +0x260
    UIViewPropertyAnimator * _pivotViewZoomInAnimator; // +0x268
    UIView * _relatedLiveThumbnailsContainerView; // +0x270
    MMLiveScrollGradientMaskingView * _relatedLiveThumbnailsMaskingView; // +0x278
    UICollectionView * _specialThumbnailCollectionView; // +0x280
    MMUILabel * _specialTitleLabel; // +0x288
    MMFinderLivePreviewExitButton * _previewExitButton; // +0x290
    UIView * _relatedLiveHeaderHitTargetView; // +0x298
    unsigned long long _targetIndex; // +0x2a0
    long long _startPreviewIndex; // +0x2a8
    NSMutableSet * _dataItemsSet; // +0x2b0
}
+ (id)getUniqueKeyForDataItem:(id)arg1;
+ (BOOL)checkIsReplayStatus:(id)arg1;
+ (BOOL)checkIsReplayStopgapStatus:(id)arg1;
- (void)fetchDataWithLastBuffer:(id)arg1;
- (void)fetchNextPageSpecialWithLastBuffer:(id)arg1;
- (void)handleViewChangedEvent:(id)arg1 source:(unsigned long long)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)setZoomInAnimatorStateProgress:(double)arg1 fast:(BOOL)arg2 onPanGesture:(id)arg3;
- (void)setBackwardZoomInAnimatorStateOnPanGesture:(id)arg1;
- (void)setZoomOutAnimatorStateProgress:(double)arg1 fast:(BOOL)arg2 onPanGesture:(id)arg3;
- (void)setBackwardZoomOutAnimatorStateOnPanGesture:(id)arg1;
- (id)genNewPivotViewZoomInAnimator;
- (id)genNewPivotViewZoomOutAnimator;
- (void)prepareItemVCsForPRState;
- (void)resetContentsAfterMinifyWithReversed:(BOOL)arg1;
- (void)prepareItemVCsForNormalState;
- (void)resetContentsAfterExpendWithReversed:(BOOL)arg1;
- (void)translateStateToContentVMs:(id)arg1 selectedIndex:(id)arg2 withEndBlock:(id /* block */)arg3;
- (void)removePreviousLivesWithEndBlock:(id /* block */)arg1;
- (void)prependRelatedLiveContentVMs:(id)arg1 withEndBlock:(id /* block */)arg2;
- (void)appendRelatedLives:(id)arg1;
- (void)scrollToItemWithIndex:(unsigned long long)arg1;
- (void)preloadNextViewController;
- (void)scrollToNextRoom;
- (void)preloadLastViewController;
- (void)scrollToLastRoom;
- (void)resetContentVMsToRelatedAfterScroll;
- (BOOL)isSpecialViewModelUpdating;
- (void)logSpecialViewModelStatus;
- (BOOL)canHandleRelatedLiveTransform;
- (BOOL)canAppendNextPageRelatedLiveWith:(long long)arg1;
- (id)relatedItemVCWithIndex:(long long)arg1;
- (long long)relatedItemCount;
- (void)onSelectItemAtIndexPath:(unsigned long long)arg1;
- (void)onSpecialCollectionViewScroll;
- (void)onBannerInfoUpdate;
- (void)fetchNextPageSpecial;
- (void)initGesture;
- (void)exitRelatedStatueImmediately;
- (void)onRelatedLivePivotItemStartLiveFinished;
- (void)updateRelatedVMWith:(id)arg1;
- (void)relatedLiveDidScroll:(id)arg1;
- (void)completeScrollingOfRelatedLive:(id)arg1;
- (id)currentPRLiveViewController;
- (id)currentPRPlayVM;
- (id)currentPRPlayDataItem;
- (id)currentPRLiveTask;
- (id)currentPRItemController;
- (unsigned long long)currentPRIndex;
- (id)PRItemControllers;
- (id)displayPRContentVMs;
- (void)doZoomOutAnimator;
- (void)doZoomInAnimator;
- (void)layoutRelatedLiveViews;
- (void)clearRelatedLiveViews;
- (void)layoutSpecialTitleLabel;
- (void)layoutSpecialThumbnailCollectionView;
- (void)layoutSpecialPreviewExitButton;
- (void)layoutRelatedLiveHeaderHitTargetView;
- (CGAffineTransform)collectionViewTransformationInRelatedLive;
- (void)onPreviewExitButtonTapped;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)initData;
- (void)initNotifications;
- (void)dealloc;
- (void)setTabType:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)willDisappear;
- (void)layoutUI;
- (void)layoutPivotCollectionView;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)addPivotCollectionTapGesture;
- (void)handlePivotCollectionTapGesture:(id)arg1;
- (void)onCloseButtonClicked;
- (void)resetView;
- (void)removeViews;
- (void)removeDatas;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)inner_supportedInterfaceOrientations;
- (BOOL)shouldHonorInterfaceOrientationPreferenceForViewController:(id)arg1;
- (unsigned long long)currentOrientationMask;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)removeJsapiPlugin;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)preJoinCurrentLive;
- (void)joinCurrentLive;
- (void)replaceFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2;
- (void)prependFinderLiveContentVMs:(id)arg1;
- (unsigned long long)prependFinderLiveContentVMs:(id)arg1 isWatchHistoryLive:(BOOL)arg2;
- (BOOL)appendFinderLiveContentVMs:(id)arg1;
- (BOOL)appendFinderLiveContentVMs:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)removeFinderLiveContentVMAtIndex:(unsigned long long)arg1;
- (void)removeLiveContentVMsWithTidList:(id)arg1;
- (void)scheduleRemoveFinderLiveContentVm:(id)arg1;
- (BOOL)resolveExternalConflicts;
- (BOOL)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (BOOL)handleConflictWithNewFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7 useVerticalFullscreenMinimization:(BOOL)arg8 routeParam:(id)arg9;
- (BOOL)handleConflictForEnableHomePageTransitionContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6;
- (BOOL)shouldUseExtendAndScrollConflictResolvingForCommentScene:(int)arg1;
- (id)replacementContentVMsForExtendAndScrolling:(id)arg1 selectedIndex:(long long *)arg2 historyCount:(unsigned long long *)arg3;
- (BOOL)switchLiveAliasRoleType:(long long)arg1 liveTask:(id)arg2;
- (void)rejoinCurrentLive;
- (void)rejoinCurrentLiveWithLoadingText:(id)arg1;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 useVerticalFullscreenMinimization:(BOOL)arg3;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 useVerticalFullscreenMinimization:(BOOL)arg4;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 commentScene:(int)arg3 useVerticalFullscreenMinimization:(BOOL)arg4;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 commentScene:(int)arg4 useVerticalFullscreenMinimization:(BOOL)arg5;
- (void)replaceCurrentLiveWithFinderLiveContentVM:(id)arg1;
- (void)replaceCurrentLiveWithFinderLiveContentVM:(id)arg1 commentScene:(int)arg2;
- (void)replaceLiveWithFinderDataItem:(id)arg1 selectedIndex:(id)arg2 commentScene:(int)arg3;
- (long long)recommendationRefreshInvokeTime;
- (void)updatePivotCollectionViewBouncesIfNeeded;
- (void)appendOrMoveNewLiveVMToNextAndAutoScrollToNext:(id)arg1;
- (unsigned long long)getSupportedInterfaceOrientations;
- (void)needAutoSwipe:(id)arg1;
- (void)checkAutoSwipeAfterFetchRecommendsIfNeeded;
- (id)currentContentVM;
- (long long)currentLiveScrollIndex;
- (long long)relatedCgiReportCurObjectIndex;
- (long long)relatedLiveShowPosition;
- (id)relatedCgiReportReadStats;
- (void)setInitialPivotLiveId:(unsigned long long)arg1;
- (unsigned long long)initialPivotObjectId;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)checkAndApplyLiveViewScrollingFxWithScrollView:(id)arg1 isForce:(BOOL)arg2;
- (id)currentDisplayItemControllers;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)isPreviewRelatedState;
- (id)itemViewControllerWithIndex:(long long)arg1;
- (long long)itemCount;
- (BOOL)canShowHeaderView;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (id)blurView;
- (id)liveTaskId;
- (id)liveView;
- (id)displayContentView;
- (id)minimizeSrcView;
- (CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (BOOL)isForcePortraitForExtend;
- (void)setIsForcePortraitForExtend:(BOOL)arg1;
- (void)showView;
- (void)hideView;
- (id)currentLiveViewController;
- (id)currentReplayViewController;
- (id)currentPlayVM;
- (id)currentPlayDataItem;
- (id)currentLiveTask;
- (BOOL)shouldSupportInteractiveTransition;
- (BOOL)shouldInvokeInteractiveTransition;
- (void)onLiveMinimizeWindowDidShiftIntoListChanged:(BOOL)arg1;
- (BOOL)isPIPHandlerCreated;
- (BOOL)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (BOOL)shouldSupportSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (BOOL)shouldShowCloseButtonWhenMinimized;
- (void)rotateToOrientation:(long long)arg1;
- (void)updateCurrSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)changeCurrOrientation:(long long)arg1;
- (void)filterLiveContentVMs:(id)arg1;
- (void)didMoveToNewScene:(id)arg1;
- (void)initializeStateWithFinderLiveContentVMs:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)initializeStateWithFinderLiveContentVM:(id)arg1 exportIds:(id)arg2 selectedIndex:(unsigned long long)arg3;
- (void)bindPivotStayEnter;
- (void)reportPivotStayEnter;
- (void)prependFinderLiveHistoryDataItems;
- (void)extendAndReplaceFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 historyCount:(unsigned long long)arg4 scrollToNextAfterReplacement:(BOOL)arg5;
- (void)fetchHistoryLives;
- (id)fetchMoreByPass;
- (void)onFetchRecommendedLives:(BOOL)arg1;
- (void)fetchRecommendedLives;
- (void)fetchRecommendedLivesIfNeeded;
- (void)updateRecommendedLives:(BOOL)arg1 finderUserName:(id)arg2 joinliveGetliverelatedlistPullType:(unsigned int)arg3;
- (BOOL)isPreloadRecommendLiveCloseSwitch;
- (void)refreshRecommendedLives;
- (void)fetchRecommendedLivesPurgingUnseen:(BOOL)arg1 isJoinCurrentLive:(BOOL)arg2 joinliveGetliverelatedlistPullType:(unsigned int)arg3;
- (void)fetchMoreLivesWithDefaultRecommendationPurgingUnseen:(BOOL)arg1 isJoinCurrentLive:(BOOL)arg2 stateId:(id)arg3;
- (void)fetchMoreLivesWithAlternativeItemsSource:(id)arg1 stateId:(id)arg2;
- (void)fetchRecommendedLivesPurgingUnseen:(BOOL)arg1;
- (void)fetchRecommendedLivesPurgingUnseen:(BOOL)arg1 isJoinCurrentLive:(BOOL)arg2;
- (void)purgeBackupFeeds;
- (void)purgeUnseenLives;
- (void)fetchLivesForPendingExportIdsWithOnCompleted:(id /* block */)arg1;
- (id)liveContentVMsWithDataItems:(id)arg1 sessionExtraKey:(id)arg2;
- (void)fetchMorePurchasedReplayFeeds;
- (void)fetchMoreUsrPageReplayFeeds;
- (id)currentItemController;
- (void)scrollDeferredToItemAtIndex:(id)arg1;
- (void)updateCurrOrientation;
- (void)handleUIOrientationChanged:(id)arg1;
- (BOOL)isCurrentInReplayTab;
- (id)createPivotItemViewControllerWithDataItem:(id)arg1;
- (void)handleForCurrentUnDispayingPivotItem;
- (id)toWatchHistoryReporter;
- (void)completeScrollingOfScrollView:(id)arg1;
- (void)notifyTemplateIfNeedOnLiveScrollTo:(id)arg1;
- (void)updateCommentSceneOnSlideEnterRoom;
- (unsigned long long)footerDisplayState;
- (void)setCurrentIndex:(long long)arg1;
- (void)onLiveAppearingChanged;
- (void)reportLiveViewInvisibleIfNeed;
- (void)performBlockAfterOrientationPortrait:(id /* block */)arg1 ignoreTopWindowOrientation:(BOOL)arg2;
- (void)showScrollTipsViewWithHeight:(double)arg1 viewModel:(id)arg2;
- (void)scrollToLastLiveTaskAndDismissEducationView;
- (void)scrollToNextLiveTaskAndDismissEducationView;
- (void)scrollToNextLiveTask;
- (void)scrollToNextLiveTaskAnimated:(BOOL)arg1;
- (void)scrollToNextLiveTaskAfterExpandingWithDuration:(double)arg1;
- (BOOL)tryShowScrollingForRecommendationsTip;
- (BOOL)tryShowScrollingForHistoryTip;
- (void)onFollowConfirmPopup:(BOOL)arg1;
- (void)onJoinLive;
- (void)onCloseAndLeaveLive;
- (void)updateEnterSquareGesutreIfNeeded;
- (void)resetHomePagePrefetchTimer;
- (void)checkProcessPrefetchInteractiveHomePage;
- (void)prefetchInteractiveHomePageData;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)relatedLiveGestureShouldBeginAtVelocity:(CGPoint)arg1;
- (BOOL)panningProfileGestureShouldBeginAtVelocity:(CGPoint)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (unsigned long long)displayEducationScrollTips;
- (void)resetZoomAnimatorStatus;
- (void)onPivotItemStartLiveFinished;
- (void)onInteractiveTransitionToMinimizationDidBegin;
- (void)onWillTransitionToMinimize;
- (void)onLiveViewEnterSquareAnimationBegin:(id)arg1 isPop:(BOOL)arg2;
- (void)onLiveViewEnterSquareAnimationEnd:(id)arg1 isPop:(BOOL)arg2;
- (id)takeSnapshotView;
- (void)updateInteractiveHomePageReportInfo;
- (BOOL)enableHorizontalFullscreenMinimization;
- (BOOL)enableVerticalFullscreenMinimization;
- (BOOL)enableVerticalFullscreenInteractiveDismissFromTopToBottom;
- (BOOL)enableVerticalFullscreenInteractiveDismissFromBottomToTop;
- (BOOL)enableHorizontalFullscreenInteractiveDismissFromLeftToRight;
- (BOOL)enableHorizontalFullscreenInteractiveDismissFromEdge;
- (BOOL)useMorphEgdeGesture;
- (BOOL)useVerticalInteractiveDismissTransition;
- (BOOL)useHorizontalInteractiveDismissTransition;
- (BOOL)useMorphDismiss;
- (void)onLiveViewInteractiveDismissTransitionStart;
- (void)onLiveViewInteractiveDismissTransitionCancel;
- (id)prevailingGestureRecognizerBetweenGestureRecognizer:(id)arg1 andPanMinimizationGestureRecognizer:(id)arg2;
- (void)onScrollByDisplayLinkEnd;
- (unsigned long long)dataItemsCount;
- (unsigned long long)currentPivotItemIndex;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewDidTransitionToNewSize;
- (void)registerYReportSdk;
- (void)removeObserverForForegroundNotification;
- (void)handleEnterForeground:(id)arg1;
- (void)handleEnterBackground:(id)arg1;
- (void)startDetectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)detectionFeedsValidity;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (BOOL)accessibilityPerformEscape;
- (BOOL)scrollEnabled;
- (void)setForbidScroll:(BOOL)arg1 forReason:(unsigned long long)arg2;
- (void)onFinderLiveHomePageReturn;
- (void)removeLiveHomePageVCCache;
- (unsigned long long)liveRoomHomePageVCCacheDuration;
- (BOOL)enableVideoStreamWarmup;
- (void)reportBlockingLoadStatus;
- (void)onLiveTask:(id)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (void)handlePanningProfileGesture:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)pushSwipeGestureDestinationForViewController:(id)arg1;
- (id)alternativeItemsSource;
- (BOOL)isPresentingWithCustomTransition;
- (void)setIsPresentingWithCustomTransition:(BOOL)arg1;
- (id)liveContentVMs;
- (void)setLiveContentVMs:(id)arg1;
- (long long)tabType;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)morphDismissTarget;
- (void)setMorphDismissTarget:(id)arg1;
- (BOOL)fromLiveRedDot;
- (void)setFromLiveRedDot:(BOOL)arg1;
- (id)relatedLiveParams;
- (void)setRelatedLiveParams:(id)arg1;
- (id /* block */)dismissOrMinimizeCallback;
- (void)setDismissOrMinimizeCallback:(id /* block */)arg1;
- (BOOL)hasFetchedLivesSinceScrolling;
- (void)setHasFetchedLivesSinceScrolling:(BOOL)arg1;
- (long long)bottomMostSeenLiveIndex;
- (void)setBottomMostSeenLiveIndex:(long long)arg1;
- (id)srcUrl;
- (void)setSrcUrl:(id)arg1;
- (id)sourceLiteAppId;
- (void)setSourceLiteAppId:(id)arg1;
- (id)jsapiPlugin;
- (void)setJsapiPlugin:(id)arg1;
- (BOOL)isEmbededInLiveFeed;
- (void)setIsEmbededInLiveFeed:(BOOL)arg1;
- (BOOL)isEmbededInLiveFeedByReusing;
- (void)setIsEmbededInLiveFeedByReusing:(BOOL)arg1;
- (long long)currentIndex;
- (id)pivotCollectionView;
- (void)setPivotCollectionView:(id)arg1;
- (id)itemControllers;
- (void)setItemControllers:(id)arg1;
- (BOOL)useAnchoredBypass;
- (void)setUseAnchoredBypass:(BOOL)arg1;
- (BOOL)disableHistoryLives;
- (void)setDisableHistoryLives:(BOOL)arg1;
- (BOOL)isTransfroming;
- (void)setIsTransfroming:(BOOL)arg1;
- (BOOL)isPreviewDataUpdatingOnAnimation;
- (void)setIsPreviewDataUpdatingOnAnimation:(BOOL)arg1;
- (BOOL)isPreviewRelatedLiveState;
- (void)setIsPreviewRelatedLiveState:(BOOL)arg1;
- (BOOL)hasShownEntryDialog;
- (void)setHasShownEntryDialog:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)routeParam;
- (void)setRouteParam:(id)arg1;
- (unsigned long long)initialPivotLiveId;
- (BOOL)disableInteractiveToMinimizeWindow;
- (void)setDisableInteractiveToMinimizeWindow:(BOOL)arg1;
- (unsigned long long)pivotSessionId;
- (void)setPivotSessionId:(unsigned long long)arg1;
- (void)setInitialPivotObjectId:(unsigned long long)arg1;
- (BOOL)useVerticalFullscreenMinimization;
- (void)setUseVerticalFullscreenMinimization:(BOOL)arg1;
- (id)specialViewModel;
- (void)setSpecialViewModel:(id)arg1;
- (id)pivotView;
- (void)setPivotView:(id)arg1;
- (BOOL)presented;
- (void)setPresented:(BOOL)arg1;
- (BOOL)isLiveAppearing;
- (void)setIsLiveAppearing:(BOOL)arg1;
- (BOOL)hasAppeared;
- (void)setHasAppeared:(BOOL)arg1;
- (BOOL)initialContentOffsetSet;
- (void)setInitialContentOffsetSet:(BOOL)arg1;
- (unsigned int)hasMoreData;
- (void)setHasMoreData:(unsigned int)arg1;
- (void)setFetchMoreByPass:(id)arg1;
- (id)replacementContentVMs;
- (void)setReplacementContentVMs:(id)arg1;
- (id)replacementSelectedIndexPath;
- (void)setReplacementSelectedIndexPath:(id)arg1;
- (unsigned long long)replacementHistoryCount;
- (void)setReplacementHistoryCount:(unsigned long long)arg1;
- (BOOL)shouldScrollToNextAfterReplacement;
- (void)setShouldScrollToNextAfterReplacement:(BOOL)arg1;
- (id)scheduledRemoveItemKeys;
- (void)setScheduledRemoveItemKeys:(id)arg1;
- (id)stateId;
- (void)setStateId:(id)arg1;
- (id)scrollUpTipsView;
- (void)setScrollUpTipsView:(id)arg1;
- (unsigned long long)watchHistoryLiveCount;
- (void)setWatchHistoryLiveCount:(unsigned long long)arg1;
- (id)exportIds;
- (void)setExportIds:(id)arg1;
- (id)exportIdDictionary;
- (void)setExportIdDictionary:(id)arg1;
- (long long)selectedExportIdIndex;
- (void)setSelectedExportIdIndex:(long long)arg1;
- (long long)exportIdFetchStatus;
- (void)setExportIdFetchStatus:(long long)arg1;
- (BOOL)isRecommendationLoading;
- (void)setIsRecommendationLoading:(BOOL)arg1;
- (BOOL)isLiveInMainScene;
- (void)setIsLiveInMainScene:(BOOL)arg1;
- (BOOL)isShowEducationView;
- (void)setIsShowEducationView:(BOOL)arg1;
- (id)recommendationRefreshTimer;
- (void)setRecommendationRefreshTimer:(id)arg1;
- (void)setRecommendationRefreshInvokeTime:(long long)arg1;
- (BOOL)recommendationRefreshScheduled;
- (void)setRecommendationRefreshScheduled:(BOOL)arg1;
- (BOOL)needShowScrollUpTips;
- (void)setNeedShowScrollUpTips:(BOOL)arg1;
- (BOOL)needShowScrollDownTips;
- (void)setNeedShowScrollDownTips:(BOOL)arg1;
- (BOOL)needFirstScrolledAfterExposedEducationForReporter;
- (void)setNeedFirstScrolledAfterExposedEducationForReporter:(BOOL)arg1;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg1;
- (BOOL)isForceShowRoundCorner;
- (void)setIsForceShowRoundCorner:(BOOL)arg1;
- (id)frameByFrameScrollAnimator;
- (void)setFrameByFrameScrollAnimator:(id)arg1;
- (id)autoSwipeInfoAfterFetchRecommends;
- (void)setAutoSwipeInfoAfterFetchRecommends:(id)arg1;
- (id)lastHistoryFetchingTaskId;
- (void)setLastHistoryFetchingTaskId:(id)arg1;
- (id)backupFeedsSet;
- (void)setBackupFeedsSet:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)blockingLoadContext;
- (void)setBlockingLoadContext:(id)arg1;
- (id)detectionValidityTimer;
- (void)setDetectionValidityTimer:(id)arg1;
- (id)lastCheckBuffer;
- (void)setLastCheckBuffer:(id)arg1;
- (unsigned long long)lastdetectionValidityTimestamp;
- (void)setLastdetectionValidityTimestamp:(unsigned long long)arg1;
- (id)homePageVC;
- (void)setHomePageVC:(id)arg1;
- (id)homePageCacheTimer;
- (void)setHomePageCacheTimer:(id)arg1;
- (unsigned int)lastHomePageLeaveTime;
- (void)setLastHomePageLeaveTime:(unsigned int)arg1;
- (id)homePagePrefetchTimer;
- (void)setHomePagePrefetchTimer:(id)arg1;
- (BOOL)canNotPrepend;
- (void)setCanNotPrepend:(BOOL)arg1;
- (long long)currOrientation;
- (void)setCurrOrientation:(long long)arg1;
- (unsigned long long)currSupportedInterfaceOrientations;
- (void)setCurrSupportedInterfaceOrientations:(unsigned long long)arg1;
- (BOOL)relayoutFailOnViewDidAppear;
- (void)setRelayoutFailOnViewDidAppear:(BOOL)arg1;
- (unsigned long long)lastVisibleLoadingEndDraggingTimestamp;
- (void)setLastVisibleLoadingEndDraggingTimestamp:(unsigned long long)arg1;
- (id)pivotCollectionTapGesRecognizer;
- (void)setPivotCollectionTapGesRecognizer:(id)arg1;
- (id)panningProfileGestureRecognizer;
- (void)setPanningProfileGestureRecognizer:(id)arg1;
- (id)panningProfileAnimator;
- (void)setPanningProfileAnimator:(id)arg1;
- (BOOL)enablePanningProfile;
- (void)setEnablePanningProfile:(BOOL)arg1;
- (unsigned long long)recommendationPrefetchRemainingItemsThreshold;
- (void)setRecommendationPrefetchRemainingItemsThreshold:(unsigned long long)arg1;
- (unsigned long long)initialScrollDisabledReasons;
- (void)setInitialScrollDisabledReasons:(unsigned long long)arg1;
- (id)specialLiveAnimatorGestureRecognizer;
- (void)setSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (id)collectionViewContainer;
- (void)setCollectionViewContainer:(id)arg1;
- (id)pivotViewZoomOutAnimator;
- (void)setPivotViewZoomOutAnimator:(id)arg1;
- (id)pivotViewZoomInAnimator;
- (void)setPivotViewZoomInAnimator:(id)arg1;
- (id)relatedLiveThumbnailsContainerView;
- (void)setRelatedLiveThumbnailsContainerView:(id)arg1;
- (id)relatedLiveThumbnailsMaskingView;
- (void)setRelatedLiveThumbnailsMaskingView:(id)arg1;
- (id)specialThumbnailCollectionView;
- (void)setSpecialThumbnailCollectionView:(id)arg1;
- (id)specialTitleLabel;
- (void)setSpecialTitleLabel:(id)arg1;
- (id)previewExitButton;
- (void)setPreviewExitButton:(id)arg1;
- (id)relatedLiveHeaderHitTargetView;
- (void)setRelatedLiveHeaderHitTargetView:(id)arg1;
- (BOOL)needScrollToNext;
- (void)setNeedScrollToNext:(BOOL)arg1;
- (BOOL)needScrollToLast;
- (void)setNeedScrollToLast:(BOOL)arg1;
- (unsigned long long)targetIndex;
- (void)setTargetIndex:(unsigned long long)arg1;
- (long long)startPreviewIndex;
- (void)setStartPreviewIndex:(long long)arg1;
- (id)dataItemsSet;
- (void)setDataItemsSet:(id)arg1;
- (void).cxx_destruct;
@end
