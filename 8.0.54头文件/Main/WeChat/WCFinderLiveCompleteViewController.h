@interface WCFinderLiveCompleteViewController : MMLiveCompleteViewController <UINavigationControllerDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, ILinkEventExt, WCActionSheetDelegate, MMLivePivotCollecitonViewZoomAnimatorExt, WCFinderLiveCompleteLiveContentViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderLiveCompleteLiveVideoContentViewDelegate, WCFinderLiveCompleteRecommendContentViewDelegate, MMLiveMorphDismissTarget, MMFinderLiveCreateNoticeViewControllerDelegate, MMFinderLiveCompleteNoticeViewDelegate, MMFinderLiveNoticeDetailsViewControllerDelegate>
{
    WCFinderLiveCompleteLiveContentView * _liveContainerView; // +0x68
    BOOL _isAudience; // +0x70
    BOOL _isPrevNavBarNeedToShown; // +0x71
    BOOL _isCloseByAnchor; // +0x72
    BOOL _isNotFirstEnter; // +0x73
    BOOL _enteredForCompletion; // +0x74
    BOOL _isEnterDiagnose; // +0x75
    BOOL _needHideNavBarForDisappear; // +0x76
    BOOL _isHiddenVideoListContainerView; // +0x77
    BOOL _replayPrivilege; // +0x78
    BOOL _hasInitializeStyleInfo; // +0x79
    BOOL _hasCheckFinderVideoContainer; // +0x7a
    BOOL _hasCheckHasLiveOrSubscribeContainer; // +0x7b
    BOOL _isInBackground; // +0x7c
    BOOL _isReplaySettingFirstExposed; // +0x7d
    BOOL _isDataStatContainerFirstExposed; // +0x7e
    BOOL _showHomePageViewController; // +0x7f
    BOOL _openAudienceNewReplayCardView; // +0x80
    BOOL _openAudienceNewLiveCardView; // +0x81
    BOOL _openAudienceNewLiveRecomend; // +0x82
    BOOL _openAutoShowAnchorLiveReplayPanel; // +0x83
    BOOL _openPullPageVC; // +0x84
    unsigned int _liveDurationSeconds; // +0x88
    int _anchorDisplayElementFlag; // +0x8c
    MMFinderLiveTask * _liveTask; // +0x90
    unsigned long long _liveId; // +0x98
    NSString * _roomId; // +0xa0
    unsigned long long _detailLabelState; // +0xa8
    FinderLiveInfo * _finderLiveInfo; // +0xb0
    FinderJumpInfo * _loyaltyCardJumpInfo; // +0xb8
    UIView * _backgroundView; // +0xc0
    WCFinderLiveCompleteDataView * _liveStatDataContainerView; // +0xc8
    MMFinderAnchorReplaySettingContainerView * _anchorReplaySettingContainerView; // +0xd0
    MMUIView * _headImageBorderBgView; // +0xd8
    MMHeadImageView * _finderAnchorHeadImageView; // +0xe0
    UIView * _toAnchorProfileView; // +0xe8
    MMUILabel * _finderAnchorNameLabel; // +0xf0
    MMUIButton * _finderToAnchorProfileLabel; // +0xf8
    UIImageView * _finderToAnchorProfileArrow; // +0x100
    MMWebImageView * _finderAnchorAuthIconView; // +0x108
    MMUILabel * _finderAnchorFollowCountLabel; // +0x110
    MMUILabel * _finderAnchorAuthLabel; // +0x118
    MMUILabel * _liveEndingLabel; // +0x120
    MMUILabel * _liveVideoLengthLabel; // +0x128
    MMUIButton * _backBarButton; // +0x130
    MMUIButton * _anchorTaskButton; // +0x138
    WCFinderLiveOverReporter * _reporter; // +0x140
    WCFinderLiveAudienceLogReporter * _audienceLogReporter; // +0x148
    MMUILabel * _liveEndingDescLabel; // +0x150
    unsigned long long _contentType; // +0x158
    double _liveContainerViewHeight; // +0x160
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x168
    FinderObject * _finderObject; // +0x170
    UIView * _anchorDiagnoseEducationView; // +0x178
    MMUILabel * _anchorDiagnoseTitleLabel; // +0x180
    MMUILabel * _anchorDiagnoseDetailLabel; // +0x188
    UIImageView * _anchorDiagnoseArrowView; // +0x190
    NSArray * _jumpInfos; // +0x198
    double _enterDiagnoseTime; // +0x1a0
    WCFinderLiveCompleteRecommendContentView * _recommendContentView; // +0x1a8
    WCFinderLiveCompleteLiveVideoContentView * _videoContentView; // +0x1b0
    NSArray * _dataItemList; // +0x1b8
    NSData * _lastBuffer; // +0x1c0
    MMUILabel * _liveEndingReplayStatusLabel; // +0x1c8
    double _lastViewBottom; // +0x1d0
    WCFinderLiveCompleteScrollView * _scrollView; // +0x1d8
    WCFinderLiveCompletePageViewModel * _pageViewModel; // +0x1e0
    UICollectionView * _pageCollectionView; // +0x1e8
    NSMutableArray * _recommendDataItemArrCache; // +0x1f0
    FinderLiveSquareStyleInfo * _styleInfo; // +0x1f8
    FinderLiveTabInfo * _tabInfoCache; // +0x200
    WCFinderLivePageStayReporter * _exposeReporter; // +0x208
    FinderLiveAbnormalClosedPageInfo * _audienceAbnormalClosedPageInfo; // +0x210
    WCFinderLiveCompleteLiveReplayView * _audienceReplayView; // +0x218
    WCFinderDataItem * _replayDataItem; // +0x220
    WCFinderDataItem * _anchorReplayDataItem; // +0x228
    WCFinderLiveCompleteShoppingView * _shoppingView; // +0x230
    FinderGetWindowProductProfileCardInfoResponse * _shopInfo; // +0x238
    unsigned long long _displayElementFlag; // +0x240
    WCFinderLiveCompleteLiveBannerContentView * _bannerContentView; // +0x248
    WCFinderLiveCompleteHelpView * _helpView; // +0x250
    WCFinderNavLiveStreamPreFetchParams * _prefetchParams; // +0x258
    WCFinderLiveHomePageViewController * _homePageVC; // +0x260
    UIView * _snapShotImgView; // +0x268
    MMTimer * _refreshPrefetchTimer; // +0x270
    MMFinderLiveCompleteViewReplaySettingsPageSheet * _pageSheet; // +0x278
    NSString * _replayCommentVisibilityOptionWording; // +0x280
    unsigned long long _audienceLoadDataControl; // +0x288
    WCFinderLiveCompleteLiveAudienceCardView * _audienceCardView; // +0x290
    WCFinderLiveCompleteMoreFooterView * _moreFooterView; // +0x298
    FinderLiveAnchorQuestEntrance * _anchorQuestEntrance; // +0x2a0
    MMFinderLiveCompleteNoticeView * _anchorNoticeView; // +0x2a8
    MMLiveQueue * _anchorNotices; // +0x2b0
}
- (id)initWithLiveTask:(id)arg1 reporter:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)checkNeedUpdateCollectionLayout;
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
- (void)fetchProfileReplayInfo:(BOOL)arg1;
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
- (void)layoutAnchorView;
- (void)clickLiveStatDataContainerWithUnit:(id)arg1;
- (void)layoutLiveStatDataViews;
- (void)reportLiveStatDataViewsWithPageDataUnit:(id)arg1 isClick:(BOOL)arg2;
- (void)onLiveReplaySettingDetailLinkClicked;
- (void)layoutHelpView;
- (void)layoutBannerContentView;
- (void)layoutAnchorReplaySettingViews;
- (id)replayCoverUrl;
- (void)layoutReplayStatusLabel;
- (void)layoutAnchorNoticeView;
- (void)layoutAnchorDiagnoseEducationView;
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
- (BOOL)shouldShowReplaySwitch;
- (BOOL)shouldShowRelayStatusLabel;
- (BOOL)shouldShowReplayOpenTipView;
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
- (id)getCurrentJumpInfo;
- (void)createReplaySetting:(unsigned int)arg1 isMemberLive:(BOOL)arg2 isChargableLive:(BOOL)arg3;
- (void)enableReplayWithSttings:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)handelAnchorJumpReplayFeed;
- (void)anchorJumpReplayFeed;
- (void)updateReplayStatus:(unsigned int)arg1;
- (void)reportReplayData:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isLimitMode;
- (id)createReportLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (id)createVerticalSeperator;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)reportLiveContainerViewWithAction:(unsigned long long)arg1 isLive:(BOOL)arg2;
- (void)updateBeforeZoomOut;
- (void)doZoomOutAnimator;
- (void)updateAfterZoomOut;
- (void)updateBeforeZoomIn;
- (void)doZoomInAnimator;
- (void)updateAfterZoomIn;
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
- (void)report21053ExposeActionWithDataItem:(id)arg1 index:(unsigned long long)arg2;
- (void)report21053ClickActionWithDataItem:(id)arg1 index:(unsigned long long)arg2;
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
- (id)anchorNoticeView;
- (void)setAnchorNoticeView:(id)arg1;
- (id)anchorNotices;
- (void)setAnchorNotices:(id)arg1;
- (void).cxx_destruct;
@end

