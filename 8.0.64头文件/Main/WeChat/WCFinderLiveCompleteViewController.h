@interface WCFinderLiveCompleteViewController : MMLiveCompleteViewController <UINavigationControllerDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, ILinkEventExt, WCActionSheetDelegate, WCFinderLiveCompleteLiveContentViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderLiveCompleteLiveVideoContentViewDelegate, WCFinderLiveCompleteRecommendContentViewDelegate, MMLiveAutoGenerateReplayGuidePanelDelegate, MMLiveMorphDismissTarget, MMFinderLiveCreateNoticeViewControllerDelegate, MMFinderAnchorAudienceAnalysisViewDelegate, MMFinderLiveCompleteNoticeViewDelegate, MMFinderLiveNoticeDetailsViewControllerDelegate, MMLiveCompleteStatisticsViewDelegate>
{
    WCFinderLiveCompleteLiveContentView * _liveContainerView; // +0x70
    BOOL _isAudience; // +0x78
    BOOL _isPrevNavBarNeedToShown; // +0x79
    BOOL _isCloseByAnchor; // +0x7a
    BOOL _isNotFirstEnter; // +0x7b
    BOOL _enteredForCompletion; // +0x7c
    BOOL _isEnterDiagnose; // +0x7d
    BOOL _needHideNavBarForDisappear; // +0x7e
    BOOL _isHiddenVideoListContainerView; // +0x7f
    BOOL _replayPrivilege; // +0x80
    BOOL _hasInitializeStyleInfo; // +0x81
    BOOL _hasCheckFinderVideoContainer; // +0x82
    BOOL _hasCheckHasLiveOrSubscribeContainer; // +0x83
    BOOL _isInBackground; // +0x84
    BOOL _isReplaySettingFirstExposed; // +0x85
    BOOL _isDataStatContainerFirstExposed; // +0x86
    BOOL _showHomePageViewController; // +0x87
    BOOL _openAudienceNewReplayCardView; // +0x88
    BOOL _openAudienceNewLiveCardView; // +0x89
    BOOL _openAudienceNewLiveRecomend; // +0x8a
    BOOL _openAutoShowAnchorLiveReplayPanel; // +0x8b
    BOOL _openPullPageVC; // +0x8c
    BOOL _completeVCHasReported; // +0x8d
    BOOL _anchorLiveInfoLoaded; // +0x8e
    unsigned int _liveDurationSeconds; // +0x90
    int _anchorDisplayElementFlag; // +0x94
    int _prepareRetNotice; // +0x98
    MMFinderLiveTask * _liveTask; // +0xa0
    unsigned long long _liveId; // +0xa8
    NSString * _roomId; // +0xb0
    unsigned long long _detailLabelState; // +0xb8
    FinderLiveInfo * _finderLiveInfo; // +0xc0
    FinderJumpInfo * _loyaltyCardJumpInfo; // +0xc8
    UIView * _backgroundView; // +0xd0
    WCFinderLiveCompleteDataView * _liveStatDataContainerView; // +0xd8
    MMFinderAnchorReplaySettingContainerView * _anchorReplaySettingContainerView; // +0xe0
    MMUIView * _headImageBorderBgView; // +0xe8
    MMHeadImageView * _finderAnchorHeadImageView; // +0xf0
    UIView * _toAnchorProfileView; // +0xf8
    MMUILabel * _finderAnchorNameLabel; // +0x100
    MMUIButton * _finderToAnchorProfileLabel; // +0x108
    UIImageView * _finderToAnchorProfileArrow; // +0x110
    WCFinderAuthInfoIconView * _finderAnchorAuthIconView; // +0x118
    MMUILabel * _finderAnchorFollowCountLabel; // +0x120
    MMUILabel * _finderAnchorAuthLabel; // +0x128
    MMUILabel * _liveEndingLabel; // +0x130
    MMUILabel * _liveVideoLengthLabel; // +0x138
    MMUIButton * _backBarButton; // +0x140
    MMUIButton * _anchorTaskButton; // +0x148
    WCFinderLiveOverReporter * _reporter; // +0x150
    WCFinderLiveAudienceLogReporter * _audienceLogReporter; // +0x158
    MMUILabel * _liveEndingDescLabel; // +0x160
    unsigned long long _contentType; // +0x168
    double _liveContainerViewHeight; // +0x170
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x178
    FinderObject * _finderObject; // +0x180
    NextLiveNotificationButton * _nextLiveNotificationButton; // +0x188
    UIView * _anchorDiagnoseEducationView; // +0x190
    MMUILabel * _anchorDiagnoseTitleLabel; // +0x198
    MMUILabel * _anchorDiagnoseDetailLabel; // +0x1a0
    UIImageView * _anchorDiagnoseArrowView; // +0x1a8
    NSArray * _jumpInfos; // +0x1b0
    double _enterDiagnoseTime; // +0x1b8
    WCFinderLiveCompleteRecommendContentView * _recommendContentView; // +0x1c0
    WCFinderLiveCompleteLiveVideoContentView * _videoContentView; // +0x1c8
    NSArray * _dataItemList; // +0x1d0
    NSData * _lastBuffer; // +0x1d8
    MMUILabel * _liveEndingReplayStatusLabel; // +0x1e0
    double _lastViewBottom; // +0x1e8
    WCFinderLiveCompleteScrollView * _scrollView; // +0x1f0
    WCFinderLiveCompletePageViewModel * _pageViewModel; // +0x1f8
    UICollectionView * _pageCollectionView; // +0x200
    NSMutableArray * _recommendDataItemArrCache; // +0x208
    FinderLiveSquareStyleInfo * _styleInfo; // +0x210
    FinderLiveTabInfo * _tabInfoCache; // +0x218
    WCFinderLivePageStayReporter * _exposeReporter; // +0x220
    FinderLiveAbnormalClosedPageInfo * _audienceAbnormalClosedPageInfo; // +0x228
    WCFinderLiveCompleteLiveReplayView * _audienceReplayView; // +0x230
    WCFinderDataItem * _replayDataItem; // +0x238
    WCFinderDataItem * _anchorReplayDataItem; // +0x240
    WCFinderLiveCompleteShoppingView * _shoppingView; // +0x248
    FinderGetWindowProductProfileCardInfoResponse * _shopInfo; // +0x250
    unsigned long long _displayElementFlag; // +0x258
    WCFinderLiveCompleteLiveBannerContentView * _bannerContentView; // +0x260
    WCFinderLiveCompleteHelpView * _helpView; // +0x268
    WCFinderNavLiveStreamPreFetchParams * _prefetchParams; // +0x270
    WCFinderLiveHomePageViewController * _homePageVC; // +0x278
    UIView * _snapShotImgView; // +0x280
    MMTimer * _refreshPrefetchTimer; // +0x288
    MMFinderLiveCompleteViewReplaySettingsPageSheet * _pageSheet; // +0x290
    NSString * _replayCommentVisibilityOptionWording; // +0x298
    unsigned long long _audienceLoadDataControl; // +0x2a0
    WCFinderLiveCompleteLiveAudienceCardView * _audienceCardView; // +0x2a8
    WCFinderLiveCompleteMoreFooterView * _moreFooterView; // +0x2b0
    FinderLiveAnchorQuestEntrance * _anchorQuestEntrance; // +0x2b8
    MMFinderAnchorAudienceAnalysisView * _anchorAudienceAnalysisView; // +0x2c0
    MMFinderLiveCompleteNoticeView * _anchorNoticeView; // +0x2c8
    MMLiveQueue * _anchorNotices; // +0x2d0
    MMLiveStatistics * _anchorStatistics; // +0x2d8
    MMLiveCompleteStatisticsView * _anchorStatisticsView; // +0x2e0
    MMUIActivityIndicatorView * _anchorLoadingView; // +0x2e8
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x2f0
    NSString * _prepareErrorStringNotice; // +0x2f8
}
- (id)initWithLiveTask:(id)arg1 reporter:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
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
- (void)preloadLiveStream;
- (void)stopPrefetchLiveStream;
- (void)refreshPrefetchData:(unsigned int)arg1;
- (BOOL)defaultReplayEnableOnOff;
- (void)checkAndUpdateRecommendContentView:(id)arg1 tabInfo:(id)arg2;
- (long long)updateWithVideoList:(id)arg1;
- (void)updateGoToProfileButtonState;
- (void)updateLiveDuration;
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
- (void)layoutAllAudienceItemsView;
- (void)layoutBackBarButton;
- (void)layoutTopLabels;
- (void)layoutLiveEndingDescLabel;
- (void)layoutAudienceView;
- (void)layoutAudienceView:(double)arg1;
- (void)updateExtraInfoForAudience;
- (double)layoutAnchorView;
- (void)clickLiveStatDataContainerWithUnit:(id)arg1;
- (void)layoutLiveStatDataViewsWithTop:(double *)arg1;
- (void)reportLiveStatDataViewsWithPageDataUnit:(id)arg1 isClick:(BOOL)arg2 elementId:(id)arg3 highlightTxt:(id)arg4;
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
- (void)layoutAnchorTaskButton;
- (void)layoutLiveContainerView:(unsigned long long)arg1;
- (void)layoutAudienceCardView;
- (BOOL)hasAudienceReplayCardView;
- (BOOL)hasAudienceLiveCardView;
- (void)layoutAudienceReplayView;
- (void)layoutShoppingView;
- (BOOL)canShowAudienceReplayView;
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
- (void)onClickWatchLive;
- (void)deleteVCWhenFromStreamProfile;
- (void)actionButtonClick:(unsigned long long)arg1;
- (void)liveCompleteLiveVideoContentViewActionButtonClick:(id)arg1;
- (void)liveCompleteLiveVideoContentViewMediaClick:(id)arg1 dataItem:(id)arg2;
- (void)liveCompleteLiveVideoContentViewMediaReport:(id)arg1 dataItem:(id)arg2;
- (void)onClickRLivePreview:(unsigned long long)arg1;
- (void)handleLiveNoticeForUser:(unsigned long long)arg1;
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
- (id)finderLiveTaskId;
- (BOOL)isFromQRCode;
- (void)delayRequestCGIIfNeeded:(id /* block */)arg1;
- (void)onClickProfileLabel;
- (void)onGoToProfilePage;
- (void)gotoFinderBrandLiveSubscribeProfile;
- (void)onDoneButtonClicked:(id)arg1;
- (void)onAnchorTaskButtonClicked:(id)arg1;
- (void)onClickEnterAnchorLiveEducationFinderFeed:(id)arg1;
- (void)onAudienceAnalysisViewTapped:(id)arg1;
- (id)getCurrentJumpInfo;
- (void)createReplaySetting:(unsigned int)arg1 isMemberLive:(BOOL)arg2 isChargableLive:(BOOL)arg3;
- (void)handleUserActionForReplayStatusAuditing;
- (void)fetchAndJumpToReplayFeedForAnchor;
- (void)showCancelReplayTipPanel;
- (void)showCancelReplayConfirmPanel;
- (void)tryCancelReplay;
- (void)checkAndShowAutoGenerateReplayGuidePanelWithSettings:(id)arg1;
- (void)enableReplayWithSttings:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)handelAnchorJumpReplayFeed;
- (void)anchorJumpReplayFeed;
- (void)updateReplayStatus:(unsigned int)arg1;
- (void)logReplayStatus;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isLimitMode;
- (id)createReportLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (id)createVerticalSeperator;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)reportLiveContainerViewWithAction:(unsigned long long)arg1 isLive:(BOOL)arg2;
- (void)reportNextLiveNoticeWithAction:(long long)arg1;
- (id)getDisplayVoiceOverLiveLength:(unsigned int)arg1;
- (void)reportAnchorDiagnose:(long long)arg1;
- (void)onFinderLiveCloseWithAbnormalClosedPageInfoWithLiveId:(unsigned long long)arg1 closePageInfo:(id)arg2;
- (id)compleScrollView;
- (void)liveCompleteRecommendLiveMoreButtonClick:(id)arg1 tabId:(unsigned long long)arg2;
- (void)liveCompleteRecommendLiveItemViewClick:(id)arg1 dataItem:(id)arg2;
- (void)liveCompleteRecommendLiveItemViewReport:(id)arg1;
- (void)liveCompleteRecommendLiveGoSquareClick:(id)arg1;
- (void)updateHomePageViewController;
- (void)reportLiveLiveSqaureLabel:(BOOL)arg1;
- (void)openMoreLiveFromMMLiveOperationWithTabId:(unsigned long long)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onCreateNoticeRequestedByLiveCompleteNoticeView:(id)arg1;
- (void)onShowNoticeDetailsRequestedByLiveCompleteNoticeView:(id)arg1;
- (void)viewController:(id)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeTopChanged:(id)arg1 noticeInfo:(id)arg2;
- (void)didFinishModLiveNoticeWithInfo:(id)arg1;
- (void)fetchAnchorNoticeViewContent;
- (id)exposeReporter;
- (long long)overrideUserInterfaceStyle;
- (void)registerYReportSdk;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)setLastViewBottom:(double)arg1;
- (unsigned long long)getCurrentRefReplayObjectId;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)recommendAutoPlay;
- (void)checkAutoPlay;
- (void)exposeReport;
- (void)checkExposeReport;
- (BOOL)isViewExpose:(id)arg1 percentage:(double)arg2;
- (void)layoutAudienceMoreFooterView;
- (void)updateExperimentSwitch:(id)arg1;
- (BOOL)canOpenPullPageVC;
- (BOOL)loadAllDataSuccess;
- (void)onCompleteStatisticsViewExpansionRequested:(id)arg1;
- (void)onCompleteStatisticsViewDetailsNavigationRequested:(id)arg1;
- (void)onCompleteStatisticsViewPostersNavigationRequested:(id)arg1;
- (void)onLiveAutoGenerateReplayGuidePanelConfirmedWithSettings:(id)arg1;
- (void)onLiveAutoGenerateReplayGuidePanelCancelled;
- (void)reportReplaySettingWithType:(unsigned long long)arg1;
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
- (id)loyaltyCardJumpInfo;
- (void)setLoyaltyCardJumpInfo:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
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
- (id)finderAnchorFollowCountLabel;
- (void)setFinderAnchorFollowCountLabel:(id)arg1;
- (id)finderAnchorAuthLabel;
- (void)setFinderAnchorAuthLabel:(id)arg1;
- (id)liveEndingLabel;
- (void)setLiveEndingLabel:(id)arg1;
- (id)liveVideoLengthLabel;
- (void)setLiveVideoLengthLabel:(id)arg1;
- (id)backBarButton;
- (void)setBackBarButton:(id)arg1;
- (id)anchorTaskButton;
- (void)setAnchorTaskButton:(id)arg1;
- (BOOL)isPrevNavBarNeedToShown;
- (void)setIsPrevNavBarNeedToShown:(BOOL)arg1;
- (BOOL)isCloseByAnchor;
- (void)setIsCloseByAnchor:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
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
- (double)enterDiagnoseTime;
- (void)setEnterDiagnoseTime:(double)arg1;
- (BOOL)isEnterDiagnose;
- (void)setIsEnterDiagnose:(BOOL)arg1;
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
- (void)setExposeReporter:(id)arg1;
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
- (id)replayDataItem;
- (void)setReplayDataItem:(id)arg1;
- (id)anchorReplayDataItem;
- (void)setAnchorReplayDataItem:(id)arg1;
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
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (id)replayCommentVisibilityOptionWording;
- (void)setReplayCommentVisibilityOptionWording:(id)arg1;
- (unsigned long long)audienceLoadDataControl;
- (void)setAudienceLoadDataControl:(unsigned long long)arg1;
- (BOOL)openAudienceNewReplayCardView;
- (void)setOpenAudienceNewReplayCardView:(BOOL)arg1;
- (BOOL)openAudienceNewLiveCardView;
- (void)setOpenAudienceNewLiveCardView:(BOOL)arg1;
- (BOOL)openAudienceNewLiveRecomend;
- (void)setOpenAudienceNewLiveRecomend:(BOOL)arg1;
- (BOOL)openAutoShowAnchorLiveReplayPanel;
- (void)setOpenAutoShowAnchorLiveReplayPanel:(BOOL)arg1;
- (BOOL)openPullPageVC;
- (void)setOpenPullPageVC:(BOOL)arg1;
- (id)audienceCardView;
- (void)setAudienceCardView:(id)arg1;
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
- (BOOL)anchorLiveInfoLoaded;
- (void)setAnchorLiveInfoLoaded:(BOOL)arg1;
- (id)anchorLoadingView;
- (void)setAnchorLoadingView:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (int)prepareRetNotice;
- (void)setPrepareRetNotice:(int)arg1;
- (id)prepareErrorStringNotice;
- (void)setPrepareErrorStringNotice:(id)arg1;
- (void).cxx_destruct;
@end
