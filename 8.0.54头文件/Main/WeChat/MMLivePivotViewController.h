@interface MMLivePivotViewController : MMUIViewController <UIGestureRecognizerDelegate, MMLivePivotCollecitonViewZoomAnimatorExt, MMLivePivotItemViewControllerExt, MMLiveRoomDataCenterExt, MMLivePivotPanGestureExt, MMLivePreviewRelatedViewModelDelegate, MMLivePivotCollectionViewScrollDelegate, MMLivePivotCollectionViewUpdateDataExt, WCFinderLiveHomePageViewControllerDelegate, UICollectionViewDelegate, MMLivePivotViewDelegate, MMLiveContainerLogicControllerDelegate, MMLiveConflictHandling, MMLiveContainerLogicTargetViewControllerDelegate>
{
    BOOL isPresentingWithCustomTransition; // +0x68
    BOOL _isScrolling; // +0x69
    BOOL _fromLiveRedDot; // +0x6a
    BOOL _hasFetchedLivesSinceScrolling; // +0x6b
    BOOL _isTransfroming; // +0x6c
    BOOL _isPreviewDataUpdatingOnAnimation; // +0x6d
    BOOL _isPreviewRelatedLiveState; // +0x6e
    BOOL _hasShownEntryDialog; // +0x6f
    BOOL _disableInteractiveToMinimizeWindow; // +0x70
    BOOL _presented; // +0x71
    BOOL _isLiveAppearing; // +0x72
    BOOL _initialContentOffsetSet; // +0x73
    BOOL _shouldScrollToNextAfterReplacement; // +0x74
    BOOL _isRecommendationLoading; // +0x75
    BOOL _isLiveInMainScene; // +0x76
    BOOL _isShowEducationView; // +0x77
    BOOL _recommendationRefreshScheduled; // +0x78
    BOOL _needShowScrollUpTips; // +0x79
    BOOL _needShowScrollDownTips; // +0x7a
    BOOL _needFirstScrolledAfterExposedEducationForReporter; // +0x7b
    BOOL _isForceShowRoundCorner; // +0x7c
    BOOL _canNotPrepend; // +0x7d
    BOOL _relayoutFailOnViewDidAppear; // +0x7e
    BOOL _needScrollToNext; // +0x7f
    BOOL _needScrollToLast; // +0x80
    int _commentScene; // +0x84
    unsigned int _hasMoreData; // +0x88
    unsigned int _lastHomePageLeaveTime; // +0x8c
    NSMutableArray * _liveContentVMs; // +0x90
    long long _tabType; // +0x98
    id <MMLiveMorphDismissTarget> _morphDismissTarget; // +0xa0
    MMFinderLiveRelatedLiveParams * _relatedLiveParams; // +0xa8
    id /* block */ _dismissOrMinimizeCallback; // +0xb0
    long long _bottomMostSeenLiveIndex; // +0xb8
    NSString * _srcUrl; // +0xc0
    NSString * _sourceLiteAppId; // +0xc8
    WCFinderFullShareListTemplatePlugin * _jsapiPlugin; // +0xd0
    long long _currentIndex; // +0xd8
    MMLivePivotView * _pivotView; // +0xe0
    MMLivePivotCollectionView * _pivotCollectionView; // +0xe8
    NSMutableArray * _itemControllers; // +0xf0
    NSData * _lastBuffer; // +0xf8
    unsigned long long _initialPivotLiveId; // +0x100
    unsigned long long _pivotSessionId; // +0x108
    unsigned long long _initialPivotObjectId; // +0x110
    MMLivePreviewRelatedViewModel * _specialViewModel; // +0x118
    FinderCommByPass * _fetchMoreByPass; // +0x120
    NSArray * _replacementContentVMs; // +0x128
    NSIndexPath * _replacementSelectedIndexPath; // +0x130
    NSMutableSet * _scheduledRemoveItemKeys; // +0x138
    MMFinderLivePivotEducationView * _scrollUpTipsView; // +0x140
    unsigned long long _watchHistoryLiveCount; // +0x148
    NSArray * _exportIds; // +0x150
    NSMutableDictionary * _exportIdDictionary; // +0x158
    long long _selectedExportIdIndex; // +0x160
    long long _exportIdFetchStatus; // +0x168
    MMTimer * _recommendationRefreshTimer; // +0x170
    long long _recommendationRefreshInvokeTime; // +0x178
    double _lastContentOffset; // +0x180
    MMLiveDisplayLinkAnimator * _frameByFrameScrollAnimator; // +0x188
    MMLivePivotAutoSwipeInfo * _autoSwipeInfoAfterFetchRecommends; // +0x190
    WCFinderLiveBaseLogReporter * _reporter; // +0x198
    MMTimer * _detectionValidityTimer; // +0x1a0
    NSData * _lastCheckBuffer; // +0x1a8
    unsigned long long _lastdetectionValidityTimestamp; // +0x1b0
    WCFinderLiveHomePageViewController * _homePageVC; // +0x1b8
    MMTimer * _homePageCacheTimer; // +0x1c0
    MMTimer * _homePagePrefetchTimer; // +0x1c8
    long long _currOrientation; // +0x1d0
    unsigned long long _currSupportedInterfaceOrientations; // +0x1d8
    unsigned long long _lastVisibleLoadingEndDraggingTimestamp; // +0x1e0
    UITapGestureRecognizer * _pivotCollectionTapGesRecognizer; // +0x1e8
    UIPanGestureRecognizer * _specialLiveAnimatorGestureRecognizer; // +0x1f0
    UIViewPropertyAnimator * _pivotViewZoomOutAnimator; // +0x1f8
    UIViewPropertyAnimator * _pivotViewZoomInAnimator; // +0x200
    UICollectionView * _specialThumbnailCollectionView; // +0x208
    MMUILabel * _specialTitleLabel; // +0x210
    UIView * _topMaskView; // +0x218
    UIView * _bottomMaskView; // +0x220
    MMFinderLivePreviewExitButton * _previewExitButton; // +0x228
    WCLiveBlurButton * _specialCloseButton; // +0x230
    unsigned long long _targetIndex; // +0x238
    MMUIView * _pivotCollectionViewContainerView; // +0x240
    long long _startPreviewIndex; // +0x248
    NSMutableSet * _dataItemsSet; // +0x250
    CGSize _currentPivotViewSize; // +0x258
    CGRect _pivotCollectionViewFrame; // +0x268
}
+ (id)getUniqueKeyForDataItem:(id)arg1;
+ (id)createPivotItemViewControllerWithDataItem:(id)arg1;
+ (BOOL)checkIsReplayStatus:(id)arg1;
+ (BOOL)checkIsReplayStopgapStatus:(id)arg1;
- (void)enterRelatedLiveStatusWithParams:(id)arg1;
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
- (void)updatePreviewExitButtonAlphaOnScrolling:(id)arg1;
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
- (id)PRContentVMs;
- (id)init;
- (id)initWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 inMainScene:(BOOL)arg3;
- (id)initWithFinderLiveContentVM:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 inMainScene:(BOOL)arg4;
- (void)initData;
- (void)initNotifications;
- (void)dealloc;
- (void)setTabType:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillPush:(BOOL)arg1;
- (void)layoutUI;
- (void)layoutPivotCollectionView;
- (void)addPivotCollectionTapGesture;
- (void)handlePivotCollectionTapGesture:(id)arg1;
- (void)layoutSpecialThumbnailCollectionView;
- (void)layoutSpecialCollectionViewMaskView;
- (void)layoutSpecialPreviewExitButton;
- (void)updateSpecialCollectionViewMaskViewHidden;
- (BOOL)isSpecialViewModelStarted;
- (void)layoutSpecialTitleLabel;
- (void)layoutSpecialCloseButton;
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
- (void)prependFinderLiveContentVMs:(id)arg1 isWatchHistoryLive:(BOOL)arg2;
- (BOOL)appendFinderLiveContentVMs:(id)arg1;
- (BOOL)appendFinderLiveContentVMs:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)removeFinderLiveContentVMAtIndex:(unsigned long long)arg1;
- (void)removeLiveContentVMsWithTidList:(id)arg1;
- (void)scheduleRemoveFinderLiveContentVm:(id)arg1;
- (BOOL)resolveExternalConflicts;
- (BOOL)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (BOOL)handleConflictWithNewFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7;
- (BOOL)handleConflictForEnableHomePageTransitionContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6;
- (BOOL)shouldUseExtendAndScrollConflictResolvingForCommentScene:(int)arg1;
- (id)replacementContentVMsForExtendAndScrolling:(id)arg1 selectedIndex:(long long *)arg2;
- (BOOL)switchLiveAliasRoleType:(long long)arg1 liveTask:(id)arg2;
- (void)rejoinCurrentLive;
- (void)rejoinCurrentLiveWithLoadingText:(id)arg1;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 commentScene:(int)arg3;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 commentScene:(int)arg4;
- (void)replaceCurrentLiveWithFinderLiveContentVM:(id)arg1;
- (void)replaceCurrentLiveWithFinderLiveContentVM:(id)arg1 commentScene:(int)arg2;
- (void)replaceLiveWithFinderDataItem:(id)arg1 selectedIndex:(id)arg2 commentScene:(int)arg3;
- (void)setForbidScroll:(BOOL)arg1;
- (BOOL)forbidScroll;
- (long long)recommendationRefreshInvokeTime;
- (void)updatePivotCollectionViewBouncesIfNeeded;
- (void)appendOrMoveNewLiveVMToNextAndAutoScrollToNext:(id)arg1;
- (unsigned long long)getSupportedInterfaceOrientations;
- (void)needAutoSwipe:(id)arg1;
- (void)checkAutoSwipeAfterFetchRecommendsIfNeeded;
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
- (id)currentFinderLivePreviewOperationView;
- (id)currentLiveTask;
- (BOOL)shouldSupportInteractiveTransition;
- (BOOL)shouldInvokeInteractiveTransition;
- (BOOL)isPIPHandlerCreated;
- (BOOL)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (BOOL)shouldSupportSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (BOOL)shouldShowCloseButtonWhenMinimized;
- (void)rotateToOrientation:(long long)arg1;
- (void)updateCurrSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)changeCurrOrientation:(long long)arg1;
- (void)filterLiveContentVMs:(id)arg1;
- (void)didMoveToNewScene:(id)arg1;
- (void)initializeStateWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2;
- (void)initializeStateWithFinderLiveContentVM:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3;
- (void)bindPivotStayEnter;
- (void)reportPivotStayEnter;
- (void)prependFinderLiveHistoryDataItems;
- (void)extendAndReplaceFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 scrollToNextAfterReplacement:(BOOL)arg4;
- (void)fetchHistoryLives;
- (id)fetchMoreByPass;
- (void)onFetchRecommendedLives:(BOOL)arg1;
- (void)fetchRecommendedLives;
- (void)updateRecommendedLives:(BOOL)arg1 finderUserName:(id)arg2 joinliveGetliverelatedlistPullType:(unsigned int)arg3;
- (BOOL)isPreloadRecommendLiveCloseSwitch;
- (void)refreshRecommendedLives;
- (void)fetchRecommendedLivesPurgingUnseen:(BOOL)arg1 isFromJoinLiveRecommend:(BOOL)arg2 isJoinCurrentLive:(BOOL)arg3 joinliveGetliverelatedlistPullType:(unsigned int)arg4;
- (void)fetchRecommendedLivesPurgingUnseen:(BOOL)arg1;
- (void)fetchRecommendedLivesPurgingUnseen:(BOOL)arg1 isJoinCurrentLive:(BOOL)arg2;
- (void)purgeUnseenLives;
- (void)fetchLivesForPendingExportIdsWithOnCompleted:(id /* block */)arg1;
- (id)liveContentVMsWithDataItems:(id)arg1 sessionExtraKey:(id)arg2;
- (void)fetchMorePurchasedReplayFeeds;
- (void)fetchMoreUsrPageReplayFeeds;
- (id)currentItemController;
- (void)scrollDeferredToItemAtIndex:(id)arg1;
- (void)updateCurrOrientation;
- (CGRect)getWindowBounds;
- (void)handleUIOrientationChanged:(id)arg1;
- (BOOL)isCurrentInReplayTab;
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
- (void)showScrollUpTips;
- (void)onFollowConfirmPopup:(BOOL)arg1;
- (void)onJoinLive;
- (void)updateEnterSquareGesutreIfNeeded;
- (void)resetHomePagePrefetchTimer;
- (void)checkProcessPrefetchInteractiveHomePage;
- (void)prefetchInteractiveHomePageData;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (unsigned long long)displayEducationScrollTips;
- (void)udpateScrollEducationTipsFlag;
- (void)resetZoomAnimatorStatus;
- (void)updateBeforeZoomIn;
- (void)updateAfterZoomOut;
- (void)onPivotItemStartLiveFinished;
- (void)onInteractiveTransitionToMinimizationDidBegin;
- (void)onLiveViewEnterSquareAnimationBegin:(id)arg1 isPop:(BOOL)arg2;
- (void)onLiveViewEnterSquareAnimationEnd:(id)arg1 isPop:(BOOL)arg2;
- (id)takeSnapshotView;
- (void)updateInteractiveHomePageReportInfo;
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
- (void)addForbidScrollReason:(unsigned long long)arg1;
- (void)removeForbidScrollReason:(unsigned long long)arg1;
- (void)onFinderLiveHomePageReturn;
- (void)removeFinderLiveVCCache;
- (unsigned long long)liveRoomHomePageVCCacheDuration;
- (BOOL)enableVideoStreamWarmup;
- (BOOL)isPresentingWithCustomTransition;
- (void)setIsPresentingWithCustomTransition:(BOOL)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
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
- (long long)currentIndex;
- (id)pivotView;
- (void)setPivotView:(id)arg1;
- (id)pivotCollectionView;
- (void)setPivotCollectionView:(id)arg1;
- (id)itemControllers;
- (void)setItemControllers:(id)arg1;
- (CGSize)currentPivotViewSize;
- (void)setCurrentPivotViewSize:(CGSize)arg1;
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
- (unsigned long long)initialPivotLiveId;
- (BOOL)disableInteractiveToMinimizeWindow;
- (void)setDisableInteractiveToMinimizeWindow:(BOOL)arg1;
- (unsigned long long)pivotSessionId;
- (void)setPivotSessionId:(unsigned long long)arg1;
- (void)setInitialPivotObjectId:(unsigned long long)arg1;
- (id)specialViewModel;
- (void)setSpecialViewModel:(id)arg1;
- (BOOL)presented;
- (void)setPresented:(BOOL)arg1;
- (BOOL)isLiveAppearing;
- (void)setIsLiveAppearing:(BOOL)arg1;
- (BOOL)initialContentOffsetSet;
- (void)setInitialContentOffsetSet:(BOOL)arg1;
- (unsigned int)hasMoreData;
- (void)setHasMoreData:(unsigned int)arg1;
- (void)setFetchMoreByPass:(id)arg1;
- (id)replacementContentVMs;
- (void)setReplacementContentVMs:(id)arg1;
- (id)replacementSelectedIndexPath;
- (void)setReplacementSelectedIndexPath:(id)arg1;
- (BOOL)shouldScrollToNextAfterReplacement;
- (void)setShouldScrollToNextAfterReplacement:(BOOL)arg1;
- (id)scheduledRemoveItemKeys;
- (void)setScheduledRemoveItemKeys:(id)arg1;
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
- (id)reporter;
- (void)setReporter:(id)arg1;
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
- (id)specialLiveAnimatorGestureRecognizer;
- (void)setSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (id)pivotViewZoomOutAnimator;
- (void)setPivotViewZoomOutAnimator:(id)arg1;
- (id)pivotViewZoomInAnimator;
- (void)setPivotViewZoomInAnimator:(id)arg1;
- (id)specialThumbnailCollectionView;
- (void)setSpecialThumbnailCollectionView:(id)arg1;
- (id)specialTitleLabel;
- (void)setSpecialTitleLabel:(id)arg1;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg1;
- (id)previewExitButton;
- (void)setPreviewExitButton:(id)arg1;
- (id)specialCloseButton;
- (void)setSpecialCloseButton:(id)arg1;
- (BOOL)needScrollToNext;
- (void)setNeedScrollToNext:(BOOL)arg1;
- (BOOL)needScrollToLast;
- (void)setNeedScrollToLast:(BOOL)arg1;
- (unsigned long long)targetIndex;
- (void)setTargetIndex:(unsigned long long)arg1;
- (id)pivotCollectionViewContainerView;
- (void)setPivotCollectionViewContainerView:(id)arg1;
- (CGRect)pivotCollectionViewFrame;
- (void)setPivotCollectionViewFrame:(CGRect)arg1;
- (long long)startPreviewIndex;
- (void)setStartPreviewIndex:(long long)arg1;
- (id)dataItemsSet;
- (void)setDataItemsSet:(id)arg1;
- (void).cxx_destruct;
@end

