@interface WCFinderLiveCompleteViewController : MMLiveCompleteViewController <UINavigationControllerDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, ILinkEventExt, WCFinderContactExt, WCActionSheetDelegate, WCFinderLiveCompleteLiveContentViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderLiveCompleteLiveVideoContentViewDelegate, WCFinderLiveCompleteRecommendContentViewDelegate, MMLiveMorphDismissTarget, MMFinderAnchorAudienceAnalysisViewDelegate, MMFinderLiveCompleteNoticeViewDelegate, MMLiveCompleteStatisticsViewDelegate>
{
    WCFinderLiveCompleteLiveContentView * _liveContainerView; // +0x70
    BOOL _isAudience; // +0x78
    BOOL _hasFollowOperation; // +0x79
    BOOL _isFollowButtonExposed; // +0x7a
    BOOL _isAnchorProfileExposeReported; // +0x7b
    BOOL _isPrevNavBarNeedToShown; // +0x7c
    BOOL _isCloseByAnchor; // +0x7d
    BOOL _isNotFirstEnter; // +0x7e
    BOOL _enteredForCompletion; // +0x7f
    BOOL _anchorNpsSurveySubmitted; // +0x80
    BOOL _needHideNavBarForDisappear; // +0x81
    BOOL _isHiddenVideoListContainerView; // +0x82
    BOOL _replayPrivilege; // +0x83
    BOOL _loadingMoreRecommend; // +0x84
    BOOL _noMoreRecommendData; // +0x85
    BOOL _hasInitializeStyleInfo; // +0x86
    BOOL _hasCheckFinderVideoContainer; // +0x87
    BOOL _hasCheckHasLiveOrSubscribeContainer; // +0x88
    BOOL _singleFlowPanEnterTriggered; // +0x89
    BOOL _singleFlowPanEnterShouldRemoveOnDisappear; // +0x8a
    BOOL _singleFlowFirstExposeReported; // +0x8b
    BOOL _isInBackground; // +0x8c
    BOOL _isReplaySettingFirstExposed; // +0x8d
    BOOL _isDataStatContainerFirstExposed; // +0x8e
    BOOL _showHomePageViewController; // +0x8f
    BOOL _hasLoadedGetLiveInfo; // +0x90
    BOOL _openAudienceNewReplayCardView; // +0x91
    BOOL _openAudienceNewLiveCardView; // +0x92
    BOOL _openAudienceNewLiveRecomend; // +0x93
    BOOL _openPullPageVC; // +0x94
    BOOL _completeVCHasReported; // +0x95
    BOOL _authCollectJumpDispatched; // +0x96
    BOOL _replaySubscriptionExposeReported; // +0x97
    BOOL _anchorLiveInfoLoaded; // +0x98
    BOOL _recommendFeedLoaded; // +0x99
    unsigned int _liveDurationSeconds; // +0x9c
    unsigned int _recommendContainerId; // +0xa0
    int _anchorDisplayElementFlag; // +0xa4
    MMFinderLiveTask * _liveTask; // +0xa8
    unsigned long long _liveId; // +0xb0
    NSString * _roomId; // +0xb8
    unsigned long long _detailLabelState; // +0xc0
    FinderLiveInfo * _finderLiveInfo; // +0xc8
    WCFinderContact * _anchorContact; // +0xd0
    WCFinderGetLiveInfoModel * _getLiveInfoModel; // +0xd8
    FinderJumpInfo * _loyaltyCardJumpInfo; // +0xe0
    UIView * _backgroundView; // +0xe8
    WCFinderLiveCompleteDataView * _liveStatDataContainerView; // +0xf0
    MMFinderAnchorReplaySettingContainerView * _anchorReplaySettingContainerView; // +0xf8
    MMUIView * _headImageBorderBgView; // +0x100
    MMHeadImageView * _finderAnchorHeadImageView; // +0x108
    UIView * _toAnchorProfileView; // +0x110
    MMUILabel * _finderAnchorNameLabel; // +0x118
    MMUIButton * _finderToAnchorProfileLabel; // +0x120
    UIImageView * _finderToAnchorProfileArrow; // +0x128
    WCFinderAuthInfoIconView * _finderAnchorAuthIconView; // +0x130
    MMUILabel * _liveEndingLabel; // +0x138
    MMUILabel * _liveVideoLengthLabel; // +0x140
    MMUIButton * _backBarButton; // +0x148
    MMUIButton * _anchorTaskButton; // +0x150
    MMUIButton * _followButton; // +0x158
    WCFinderLiveOverReporter * _reporter; // +0x160
    WCFinderLiveCompletePageReporter * _pageReporter; // +0x168
    WCFinderLiveCompleteNavigateHelper * _navigateHelper; // +0x170
    WCFinderLiveAudienceLogReporter * _audienceLogReporter; // +0x178
    MMUILabel * _liveEndingDescLabel; // +0x180
    unsigned long long _contentType; // +0x188
    double _liveContainerViewHeight; // +0x190
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x198
    FinderLiveNoticeListInfo * _liveNoticeListInfo; // +0x1a0
    MMFinderLiveReserveNoticeLogic * _reserveNoticeLogic; // +0x1a8
    FinderObject * _finderObject; // +0x1b0
    NextLiveNotificationButton * _nextLiveNotificationButton; // +0x1b8
    UIView * _anchorDiagnoseEducationView; // +0x1c0
    MMUILabel * _anchorDiagnoseTitleLabel; // +0x1c8
    MMUILabel * _anchorDiagnoseDetailLabel; // +0x1d0
    UIImageView * _anchorDiagnoseArrowView; // +0x1d8
    NSArray * _jumpInfos; // +0x1e0
    FinderJumpInfo * _npsSurveyJumpInfo; // +0x1e8
    MMLiteAppView * _anchorNpsSurveyView; // +0x1f0
    WCFinderLiveCompleteRecommendContentView * _recommendContentView; // +0x1f8
    WCFinderLiveCompleteLiveVideoContentView * _videoContentView; // +0x200
    NSArray * _dataItemList; // +0x208
    NSData * _lastBuffer; // +0x210
    MMUILabel * _liveEndingReplayStatusLabel; // +0x218
    double _lastViewBottom; // +0x220
    WCFinderLiveCompleteScrollView * _scrollView; // +0x228
    WCFinderLiveCompletePageViewModel * _pageViewModel; // +0x230
    UICollectionView * _pageCollectionView; // +0x238
    NSMutableArray * _recommendDataItemArrCache; // +0x240
    long long _recommendFlowStyle; // +0x248
    NSData * _recommendLoadMoreLastBuffer; // +0x250
    WCFinderAnimationLoadingView * _recommendLoadMoreLoadingView; // +0x258
    FinderLiveSquareStyleInfo * _styleInfo; // +0x260
    FinderLiveTabInfo * _tabInfoCache; // +0x268
    UIView * _liveCardSingleFlowSwipeTipContainerView; // +0x270
    MMUIImageView * _liveCardSingleFlowSwipeArrowIconView; // +0x278
    MMUILabel * _liveCardSingleFlowSwipeTipLabel; // +0x280
    FinderLiveAbnormalClosedPageInfo * _audienceAbnormalClosedPageInfo; // +0x288
    WCFinderLiveCompleteLiveReplayView * _audienceReplayView; // +0x290
    WCFinderLiveCompleteReplaySubscriptionView * _replaySubscriptionView; // +0x298
    WCFinderDataItem * _replayDataItem; // +0x2a0
    WCFinderLiveCompleteShoppingView * _shoppingView; // +0x2a8
    FinderGetWindowProductProfileCardInfoResponse * _shopInfo; // +0x2b0
    unsigned long long _displayElementFlag; // +0x2b8
    WCFinderLiveCompleteLiveBannerContentView * _bannerContentView; // +0x2c0
    WCFinderLiveCompleteHelpView * _helpView; // +0x2c8
    WCFinderNavLiveStreamPreFetchParams * _prefetchParams; // +0x2d0
    WCFinderLiveHomePageViewController * _homePageVC; // +0x2d8
    UIView * _snapShotImgView; // +0x2e0
    MMTimer * _refreshPrefetchTimer; // +0x2e8
    WCFinderLiveCompleteReplayHelper * _replayHelper; // +0x2f0
    unsigned long long _audienceLoadDataControl; // +0x2f8
    WCFinderLiveCompleteLiveAudienceCardView * _audienceCardView; // +0x300
    WCFinderLiveCompleteLiveAudienceSimpleCardView * _audienceSimpleCardView; // +0x308
    WCFinderLiveCompleteMoreFooterView * _moreFooterView; // +0x310
    FinderLiveAnchorQuestEntrance * _anchorQuestEntrance; // +0x318
    MMFinderAnchorAudienceAnalysisView * _anchorAudienceAnalysisView; // +0x320
    MMFinderLiveCompleteNoticeView * _anchorNoticeView; // +0x328
    MMLiveQueue * _anchorNotices; // +0x330
    MMLiveStatistics * _anchorStatistics; // +0x338
    MMLiveCompleteStatisticsView * _anchorStatisticsView; // +0x340
    MMUIActivityIndicatorView * _anchorLoadingView; // +0x348
}
- (id)initWithLiveTask:(id)arg1 reporter:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)removeSingleFlowCompleteVCFromStack;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (long long)preferredStatusBarStyle;
- (void)checkReport;
- (void)fetchProfileReplayInfoWithCompletionBlock:(id /* block */)arg1;
- (void)fetchShopInfo;
- (void)fetchProfileExtInfo;
- (void)updateLiveContainerViewData:(BOOL)arg1;
- (void)beginUpdateLiveContainerViewData;
- (void)updateReport;
- (void)loadDataDelayCGIIfNeeded:(BOOL)arg1;
- (void)checkSquareJumpPrefetch;
- (void)updateRecommendLiveViewOpenSquareSwitch;
- (void)preloadLiveStream;
- (void)stopPrefetchLiveStream;
- (void)refreshPrefetchData:(unsigned int)arg1;
- (BOOL)defaultReplayEnableOnOff;
- (void)checkAndUpdateRecommendContentView:(id)arg1 tabInfo:(id)arg2;
- (void)reportSingleFlowFirstExposeIfNeededWithDataItem:(id)arg1;
- (long long)updateWithVideoList:(id)arg1;
- (void)updateGoToProfileButtonState;
- (void)updateLiveDuration;
- (void)updateFinderAnchorInfo;
- (void)updateWithLiveInfo;
- (id)closeLivePageData;
- (BOOL)canShowLiveContainer;
- (BOOL)canShowVideoList;
- (BOOL)canShowRecommendLive;
- (BOOL)canShowShop;
- (void)setupBlurBackground;
- (id)pageViewModel;
- (void)onLiveCompletePageViewModelUpdatePage:(long long)arg1;
- (BOOL)showNavBar;
- (BOOL)useTransparentNavibar;
- (id)pageCollectionView;
- (double)getFixedViewWidthForIPad;
- (void)layoutPageCollectionView;
- (void)layoutUI;
- (BOOL)showNavigationBarSepLine;
- (void)layoutAllAudienceItemsView;
- (void)layoutBackBarButton;
- (void)layoutTopLabels;
- (void)layoutLiveEndingDescLabel;
- (void)layoutAudienceView;
- (void)layoutAudienceView:(double)arg1;
- (void)layoutAudienceFollowButton;
- (double)layoutAnchorView;
- (void)layoutLiveStatDataViewsWithTop:(double *)arg1;
- (void)layoutAnchorStatisticsViewWithTop:(double *)arg1;
- (void)onLiveReplaySettingDetailLinkClicked;
- (double)layoutHelpViewWithFinalizedTop:(double)arg1;
- (BOOL)layoutBannerContentViewWithTop:(double *)arg1;
- (void)layoutAnchorAudienceAnalysisViewsWithTop:(double *)arg1;
- (unsigned int)configThankGuideWaitTime;
- (void)layoutAnchorReplaySettingViewsWithTop:(double *)arg1;
- (id)replayCoverUrl;
- (void)layoutReplayStatusLabel;
- (void)layoutAnchorNoticeViewWithTop:(double *)arg1;
- (void)layoutAnchorDiagnoseEducationViewWithTop:(double *)arg1;
- (void)layoutAnchorNpsSurveyViewWithTop:(double *)arg1;
- (void)layoutAnchorTaskButton;
- (void)layoutLiveContainerView:(unsigned long long)arg1;
- (void)layoutAudienceCardView;
- (BOOL)hasAudienceReplayCardView;
- (BOOL)hasAudienceLiveCardView;
- (BOOL)useAudienceSimpleCardView;
- (id)visibleAudienceCardView;
- (void)layoutAudienceSimpleCardView;
- (void)layoutAudienceReplayView;
- (BOOL)canShowReplaySubscriptionView;
- (void)layoutReplaySubscriptionView;
- (void)onReplaySubscriptionButtonTapped;
- (void)doReplaySubscriptionOpWithObjectId:(unsigned long long)arg1 isSubscribed:(BOOL)arg2;
- (void)layoutShoppingView;
- (BOOL)canShowAudienceReplayView;
- (BOOL)hasReplayContentForAudienceRelatedContent;
- (BOOL)hasLiveNoticeContentForAudienceRelatedContent;
- (BOOL)hasShopWindowContentForAudienceRelatedContent;
- (BOOL)hasReplaySubscriptionContentForAudienceRelatedContent;
- (long long)audienceRelatedContentTypeToShow;
- (BOOL)shouldShowReplayByAudienceRelatedContentPriority;
- (BOOL)shouldShowLiveNoticeByAudienceRelatedContentPriority;
- (BOOL)shouldShowShopWindowByAudienceRelatedContentPriority;
- (BOOL)shouldShowReplaySubscriptionByAudienceRelatedContentPriority;
- (void)onAudienceReplayViewClick:(id)arg1;
- (void)layoutVideoContentContainerView;
- (void)updateScrollViewContentSize:(CGSize)arg1;
- (double)videoContentViewWidthAndHeightScale;
- (void)layoutLiveRecommendContentView;
- (void)setContentType:(unsigned long long)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (double)calculateNewFinderAnchorHeadImageViewTopOffsetForIPad;
- (void)updateItemsPositionForIPad;
- (BOOL)checkHasDataDetailEntrance;
- (void)updateAbnormalClosedWording;
- (void)actionButtonClick:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)reserveNoticeLogic;
- (void)completeLiveContentViewDidTapTopArea;
- (void)completeLiveContentViewDidTapBottomArea;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onClickWatchLive;
- (void)deleteVCWhenFromStreamProfile;
- (void)actionButtonClick:(unsigned long long)arg1;
- (void)liveCompleteLiveVideoContentViewActionButtonClick:(id)arg1;
- (void)liveCompleteLiveVideoContentViewMediaClick:(id)arg1 dataItem:(id)arg2;
- (void)liveCompleteLiveVideoContentViewMediaReport:(id)arg1 dataItem:(id)arg2;
- (void)onClickRLivePreview:(unsigned long long)arg1;
- (void)onClickRLivePreview:(unsigned long long)arg1 reserveScene:(unsigned int)arg2;
- (void)handleLiveNoticeForUser:(unsigned long long)arg1 reserveScene:(unsigned int)arg2;
- (void)layoutActionButtonWhenClick:(int)arg1;
- (void)updateContentViewHeight:(unsigned long long)arg1;
- (void)reserveNextLive:(BOOL)arg1;
- (void)realReserveNextLive:(BOOL)arg1;
- (BOOL)shouldShowReplaySwitch;
- (BOOL)shouldShowRelayStatusLabel;
- (BOOL)shouldShowReplayOpenTipView;
- (BOOL)shouldShowAnchorAudienceAnalysisView;
- (BOOL)shouldShowAnchorNotice;
- (BOOL)shouldShowLikeEntry;
- (BOOL)shouldShowAnchorDiagnose;
- (BOOL)shouldShowAnchorNpsSurvey;
- (id)finderLiveTaskId;
- (BOOL)isFromQRCode;
- (id)followButton;
- (id)anchorContact;
- (id)profileBizNickname;
- (id)profileBizHeadImgUrl;
- (void)delayRequestCGIIfNeeded:(id /* block */)arg1;
- (void)onFollowButtonClicked;
- (void)updateFollowButtonIfNeed;
- (void)refreshAudienceFollowInfo;
- (void)followBizContact;
- (void)followFinderContact;
- (void)onClickProfileLabel;
- (void)onGoToProfilePage;
- (void)gotoFinderBrandLiveSubscribeProfile;
- (void)onDoneButtonClicked:(id)arg1;
- (void)onAnchorTaskButtonClicked:(id)arg1;
- (void)onClickEnterAnchorLiveEducationFinderFeed:(id)arg1;
- (void)onAudienceAnalysisViewTapped:(id)arg1;
- (id)getCurrentJumpInfo;
- (BOOL)isEnterDiagnose;
- (void)setIsEnterDiagnose:(BOOL)arg1;
- (double)enterDiagnoseTime;
- (void)setEnterDiagnoseTime:(double)arg1;
- (id)lastDiagnoseJumpInfo;
- (void)setLastDiagnoseJumpInfo:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderBizContactFollowStatusUpdate:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isLimitMode;
- (id)createReportLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (id)createVerticalSeperator;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)getDisplayVoiceOverLiveLength:(unsigned int)arg1;
- (void)onFinderLiveCloseWithAbnormalClosedPageInfoWithLiveId:(unsigned long long)arg1 closePageInfo:(id)arg2;
- (id)compleScrollView;
- (void)liveCompleteRecommendLiveMoreButtonClick:(id)arg1 tabId:(unsigned long long)arg2;
- (void)liveCompleteRecommendLiveItemViewClick:(id)arg1 dataItem:(id)arg2;
- (void)liveCompleteRecommendLiveItemViewReport:(id)arg1;
- (void)liveCompleteRecommendLiveGoSquareClick:(id)arg1;
- (BOOL)shouldShowLiveCardSingleFlowSwipeTip;
- (void)layoutLiveCardSingleFlowSwipeTipView;
- (id)liveCardSingleFlowSwipeArrowIconView;
- (id)liveCardSingleFlowSwipeTipLabel;
- (id)getHomePageParams;
- (void)updateHomePageViewController;
- (void)openMoreLiveFromMMLiveOperationWithTabId:(unsigned long long)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onCreateNoticeRequestedByLiveCompleteNoticeView:(id)arg1;
- (void)onShowNoticeDetailsRequestedByLiveCompleteNoticeView:(id)arg1;
- (void)fetchAnchorNoticeViewContent;
- (id)pageReporter;
- (id)replayHelper;
- (id)navigateHelper;
- (long long)overrideUserInterfaceStyle;
- (void)registerYReportSdk;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)setLastViewBottom:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)checkSingleFlowPanEnterIfNeeded:(id)arg1;
- (void)performSingleFlowPanEnterWithDataItem:(id)arg1;
- (void)prepareBottomToTopMorphTransitionFromView;
- (void)layoutRecommendLoadMoreLoadingView;
- (BOOL)isRecommendLoadMoreFooterVisible;
- (void)checkTriggerRecommendLoadMoreIfFooterVisible;
- (void)triggerRecommendLoadMoreIfNeededOnScroll:(id)arg1;
- (void)triggerRecommendLoadMore;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)recommendAutoPlay;
- (void)checkAutoPlay;
- (void)exposeReport;
- (void)checkExposeReport;
- (BOOL)isViewExpose:(id)arg1 percentage:(double)arg2;
- (void)layoutAudienceMoreFooterView;
- (void)reportMoreFooterViewIfNeeded:(BOOL)arg1;
- (void)updateExperimentSwitch:(id)arg1;
- (BOOL)canOpenPullPageVC;
- (BOOL)isSquareSwitchEnabled;
- (BOOL)loadAllDataSuccess;
- (void)onCompleteStatisticsViewExpansionRequested:(id)arg1;
- (void)onCompleteStatisticsViewDetailsNavigationRequested:(id)arg1;
- (void)onCompleteStatisticsViewPostersNavigationRequested:(id)arg1;
- (void)reportLiveContainerViewWithAction:(unsigned long long)arg1 isLive:(BOOL)arg2;
- (void)reportNextLiveNoticeWithAction:(long long)arg1;
- (void)reportEndPageNoticeBarExposeIfNeeded;
- (void)reportEndPageSingleNoticeBarClick;
- (void)reportEndPageNoticeMoreClick;
- (void)reportEndPageSingleNoticeDetailAction:(unsigned long long)arg1 isExpose:(BOOL)arg2;
- (void)reportEndPageNoticeDetailExpose;
- (void)reportAnchorDiagnose:(long long)arg1;
- (void)reportEndPageAnchorProfileExposeIfNeeded;
- (void)reportEndPageAnchorProfile:(unsigned long long)arg1;
- (void)reportLiveFollowUIExposeWithElementId:(id)arg1 isClick:(BOOL)arg2 focusStatus:(id)arg3 isFocus:(id)arg4;
- (void)reportReplaySubscriptionExposeWithSubscribeStatus:(long long)arg1;
- (void)reportReplaySubscriptionPopSubscribeExpose;
- (void)reportLiveStatDataViewsWithPageDataUnit:(id)arg1 isClick:(BOOL)arg2 elementId:(id)arg3 highlightTxt:(id)arg4;
- (void)reportLiveLiveSqaureLabel:(BOOL)arg1;
- (void)tryDispatchAuthCollectJumpInfo;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (unsigned int)liveDurationSeconds;
- (void)setLiveDurationSeconds:(unsigned int)arg1;
- (unsigned long long)detailLabelState;
- (void)setDetailLabelState:(unsigned long long)arg1;
- (id)finderLiveInfo;
- (void)setFinderLiveInfo:(id)arg1;
- (void)setAnchorContact:(id)arg1;
- (id)getLiveInfoModel;
- (void)setGetLiveInfoModel:(id)arg1;
- (id)loyaltyCardJumpInfo;
- (void)setLoyaltyCardJumpInfo:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)hasFollowOperation;
- (void)setHasFollowOperation:(BOOL)arg1;
- (id)liveStatDataContainerView;
- (void)setLiveStatDataContainerView:(id)arg1;
- (id)anchorReplaySettingContainerView;
- (void)setAnchorReplaySettingContainerView:(id)arg1;
- (id)headImageBorderBgView;
- (void)setHeadImageBorderBgView:(id)arg1;
- (id)finderAnchorHeadImageView;
- (void)setFinderAnchorHeadImageView:(id)arg1;
- (id)toAnchorProfileView;
- (void)setToAnchorProfileView:(id)arg1;
- (id)finderAnchorNameLabel;
- (void)setFinderAnchorNameLabel:(id)arg1;
- (id)finderToAnchorProfileLabel;
- (void)setFinderToAnchorProfileLabel:(id)arg1;
- (id)finderToAnchorProfileArrow;
- (void)setFinderToAnchorProfileArrow:(id)arg1;
- (id)finderAnchorAuthIconView;
- (void)setFinderAnchorAuthIconView:(id)arg1;
- (id)liveEndingLabel;
- (void)setLiveEndingLabel:(id)arg1;
- (id)liveVideoLengthLabel;
- (void)setLiveVideoLengthLabel:(id)arg1;
- (id)backBarButton;
- (void)setBackBarButton:(id)arg1;
- (id)anchorTaskButton;
- (void)setAnchorTaskButton:(id)arg1;
- (void)setFollowButton:(id)arg1;
- (BOOL)isFollowButtonExposed;
- (void)setIsFollowButtonExposed:(BOOL)arg1;
- (BOOL)isAnchorProfileExposeReported;
- (void)setIsAnchorProfileExposeReported:(BOOL)arg1;
- (BOOL)isPrevNavBarNeedToShown;
- (void)setIsPrevNavBarNeedToShown:(BOOL)arg1;
- (BOOL)isCloseByAnchor;
- (void)setIsCloseByAnchor:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setPageReporter:(id)arg1;
- (void)setNavigateHelper:(id)arg1;
- (id)audienceLogReporter;
- (void)setAudienceLogReporter:(id)arg1;
- (id)liveEndingDescLabel;
- (void)setLiveEndingDescLabel:(id)arg1;
- (unsigned long long)contentType;
- (id)liveContainerView;
- (double)liveContainerViewHeight;
- (void)setLiveContainerViewHeight:(double)arg1;
- (id)liveNoticeInfo;
- (void)setLiveNoticeInfo:(id)arg1;
- (id)liveNoticeListInfo;
- (void)setLiveNoticeListInfo:(id)arg1;
- (void)setReserveNoticeLogic:(id)arg1;
- (id)finderObject;
- (void)setFinderObject:(id)arg1;
- (id)nextLiveNotificationButton;
- (void)setNextLiveNotificationButton:(id)arg1;
- (BOOL)isNotFirstEnter;
- (void)setIsNotFirstEnter:(BOOL)arg1;
- (BOOL)enteredForCompletion;
- (void)setEnteredForCompletion:(BOOL)arg1;
- (id)anchorDiagnoseEducationView;
- (void)setAnchorDiagnoseEducationView:(id)arg1;
- (id)anchorDiagnoseTitleLabel;
- (void)setAnchorDiagnoseTitleLabel:(id)arg1;
- (id)anchorDiagnoseDetailLabel;
- (void)setAnchorDiagnoseDetailLabel:(id)arg1;
- (id)anchorDiagnoseArrowView;
- (void)setAnchorDiagnoseArrowView:(id)arg1;
- (id)jumpInfos;
- (void)setJumpInfos:(id)arg1;
- (id)npsSurveyJumpInfo;
- (void)setNpsSurveyJumpInfo:(id)arg1;
- (id)anchorNpsSurveyView;
- (void)setAnchorNpsSurveyView:(id)arg1;
- (BOOL)anchorNpsSurveySubmitted;
- (void)setAnchorNpsSurveySubmitted:(BOOL)arg1;
- (id)recommendContentView;
- (void)setRecommendContentView:(id)arg1;
- (BOOL)needHideNavBarForDisappear;
- (void)setNeedHideNavBarForDisappear:(BOOL)arg1;
- (id)videoContentView;
- (void)setVideoContentView:(id)arg1;
- (BOOL)isHiddenVideoListContainerView;
- (void)setIsHiddenVideoListContainerView:(BOOL)arg1;
- (id)dataItemList;
- (void)setDataItemList:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)replayPrivilege;
- (void)setReplayPrivilege:(BOOL)arg1;
- (id)liveEndingReplayStatusLabel;
- (void)setLiveEndingReplayStatusLabel:(id)arg1;
- (double)lastViewBottom;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)setPageViewModel:(id)arg1;
- (void)setPageCollectionView:(id)arg1;
- (id)recommendDataItemArrCache;
- (void)setRecommendDataItemArrCache:(id)arg1;
- (long long)recommendFlowStyle;
- (void)setRecommendFlowStyle:(long long)arg1;
- (unsigned int)recommendContainerId;
- (void)setRecommendContainerId:(unsigned int)arg1;
- (id)recommendLoadMoreLastBuffer;
- (void)setRecommendLoadMoreLastBuffer:(id)arg1;
- (BOOL)loadingMoreRecommend;
- (void)setLoadingMoreRecommend:(BOOL)arg1;
- (BOOL)noMoreRecommendData;
- (void)setNoMoreRecommendData:(BOOL)arg1;
- (id)recommendLoadMoreLoadingView;
- (void)setRecommendLoadMoreLoadingView:(id)arg1;
- (BOOL)hasInitializeStyleInfo;
- (void)setHasInitializeStyleInfo:(BOOL)arg1;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (id)tabInfoCache;
- (void)setTabInfoCache:(id)arg1;
- (BOOL)hasCheckFinderVideoContainer;
- (void)setHasCheckFinderVideoContainer:(BOOL)arg1;
- (BOOL)hasCheckHasLiveOrSubscribeContainer;
- (void)setHasCheckHasLiveOrSubscribeContainer:(BOOL)arg1;
- (BOOL)singleFlowPanEnterTriggered;
- (void)setSingleFlowPanEnterTriggered:(BOOL)arg1;
- (BOOL)singleFlowPanEnterShouldRemoveOnDisappear;
- (void)setSingleFlowPanEnterShouldRemoveOnDisappear:(BOOL)arg1;
- (BOOL)singleFlowFirstExposeReported;
- (void)setSingleFlowFirstExposeReported:(BOOL)arg1;
- (id)liveCardSingleFlowSwipeTipContainerView;
- (void)setLiveCardSingleFlowSwipeTipContainerView:(id)arg1;
- (void)setLiveCardSingleFlowSwipeArrowIconView:(id)arg1;
- (void)setLiveCardSingleFlowSwipeTipLabel:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)isReplaySettingFirstExposed;
- (void)setIsReplaySettingFirstExposed:(BOOL)arg1;
- (BOOL)isDataStatContainerFirstExposed;
- (void)setIsDataStatContainerFirstExposed:(BOOL)arg1;
- (id)audienceAbnormalClosedPageInfo;
- (void)setAudienceAbnormalClosedPageInfo:(id)arg1;
- (id)audienceReplayView;
- (void)setAudienceReplayView:(id)arg1;
- (id)replaySubscriptionView;
- (void)setReplaySubscriptionView:(id)arg1;
- (id)replayDataItem;
- (void)setReplayDataItem:(id)arg1;
- (id)shoppingView;
- (void)setShoppingView:(id)arg1;
- (id)shopInfo;
- (void)setShopInfo:(id)arg1;
- (unsigned long long)displayElementFlag;
- (void)setDisplayElementFlag:(unsigned long long)arg1;
- (int)anchorDisplayElementFlag;
- (void)setAnchorDisplayElementFlag:(int)arg1;
- (id)bannerContentView;
- (void)setBannerContentView:(id)arg1;
- (id)helpView;
- (void)setHelpView:(id)arg1;
- (id)prefetchParams;
- (void)setPrefetchParams:(id)arg1;
- (id)homePageVC;
- (void)setHomePageVC:(id)arg1;
- (id)snapShotImgView;
- (void)setSnapShotImgView:(id)arg1;
- (BOOL)showHomePageViewController;
- (void)setShowHomePageViewController:(BOOL)arg1;
- (id)refreshPrefetchTimer;
- (void)setRefreshPrefetchTimer:(id)arg1;
- (void)setReplayHelper:(id)arg1;
- (unsigned long long)audienceLoadDataControl;
- (void)setAudienceLoadDataControl:(unsigned long long)arg1;
- (BOOL)hasLoadedGetLiveInfo;
- (void)setHasLoadedGetLiveInfo:(BOOL)arg1;
- (BOOL)openAudienceNewReplayCardView;
- (void)setOpenAudienceNewReplayCardView:(BOOL)arg1;
- (BOOL)openAudienceNewLiveCardView;
- (void)setOpenAudienceNewLiveCardView:(BOOL)arg1;
- (BOOL)openAudienceNewLiveRecomend;
- (void)setOpenAudienceNewLiveRecomend:(BOOL)arg1;
- (BOOL)openPullPageVC;
- (void)setOpenPullPageVC:(BOOL)arg1;
- (id)audienceCardView;
- (void)setAudienceCardView:(id)arg1;
- (id)audienceSimpleCardView;
- (void)setAudienceSimpleCardView:(id)arg1;
- (id)moreFooterView;
- (void)setMoreFooterView:(id)arg1;
- (id)anchorQuestEntrance;
- (void)setAnchorQuestEntrance:(id)arg1;
- (id)anchorAudienceAnalysisView;
- (void)setAnchorAudienceAnalysisView:(id)arg1;
- (id)anchorNoticeView;
- (void)setAnchorNoticeView:(id)arg1;
- (id)anchorNotices;
- (void)setAnchorNotices:(id)arg1;
- (id)anchorStatistics;
- (void)setAnchorStatistics:(id)arg1;
- (id)anchorStatisticsView;
- (void)setAnchorStatisticsView:(id)arg1;
- (BOOL)completeVCHasReported;
- (void)setCompleteVCHasReported:(BOOL)arg1;
- (BOOL)authCollectJumpDispatched;
- (void)setAuthCollectJumpDispatched:(BOOL)arg1;
- (BOOL)replaySubscriptionExposeReported;
- (void)setReplaySubscriptionExposeReported:(BOOL)arg1;
- (BOOL)anchorLiveInfoLoaded;
- (void)setAnchorLiveInfoLoaded:(BOOL)arg1;
- (BOOL)recommendFeedLoaded;
- (void)setRecommendFeedLoaded:(BOOL)arg1;
- (id)anchorLoadingView;
- (void)setAnchorLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
