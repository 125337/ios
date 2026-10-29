@interface WCFinderStreamProfileViewController : MMUIViewController <WCFinderProfileCardMemberShipViewDelegate, WCFinderProfileRecommendFollowViewDelegate, WCFinderStreamProfileHeaderViewDelegate, WCFinderProfileRedPacketEventViewDelegate, WCFinderProfileAuthViewDelegate, WCFinderLiveNoticeViewDelegate, WCFinderProfileEventViewDelegate, WCFinderStreamProfileViewModelDelegate, WCFinderStreamProfileHeaderViewSizeToFitDelegate, WCFinderRedDotNotifyExt, MMNavBarInteractiveDelegate, WCActionSheetDelegate, WCFinderUserPrepareExt, WCFinderProfileShowInWXTipsSheetDelegate, WCFinderPOIRelatedListHalfViewControllerDelegate, WCFinderProfileLogoutViewDelegate, WCFinderTabSwitchViewDataSource, WCFinderTabSwitchViewDelegate, WCFinderPostMgrDelegate, WCAlbumPickViewControllerDelegate, MMFinderLiveCreateNoticeViewControllerDelegate, WCFinderStreamProfileHeadDataVCDelegate, WCFinderPostViewControllerDelegate, WCFinderStreamProfileDragBarViewDelegate, WCFinderHalfScreenProtocol, MMFinderLiveNoticeDetailsViewControllerDelegate, WAUINavigationControllerDelegate, WCFinderClubContactExt, WCSessionFlowMonitorExt, UIScrollViewDelegate, WCFinderJustWatchEvent, WCFinderProfileTopRefreshViewDelegate, NewLifePostEndDelegate, MMLiveMorphDismissTarget, WCFinderFeedBaseViewControllerProtocol, WCFinderPushDestinationTransitioningAnimatorConfigable>
{
    BOOL _skipLoadData; // +0x68
    BOOL _cameraLongPressRightButton; // +0x69
    BOOL _needUpdateSotreInfo; // +0x6a
    BOOL _isClosing; // +0x6b
    BOOL _isAppear; // +0x6c
    int _delaySelectedTabName; // +0x70
    id <UIViewControllerAnimatedTransitioning> _pushDestinationTransitioningAnimator; // +0x78
    FinderNewUserPrepareResponse * _prepareResponse; // +0x80
    unsigned long long _refFansProfile; // +0x88
    id /* block */ _didBePushBlock; // +0x90
    WCFinderStreamProfileViewModel * _viewModel; // +0x98
    WCFinderStreamProfileContainer * _contentContainer; // +0xa0
    WCFinderStreamProfileHeaderView * _headerView; // +0xa8
    WCFinderStreamProfileHeaderViewController * _headerVC; // +0xb0
    WCFinderProfileCoverView * _coverView; // +0xb8
    WCFinderTabSwitchView * _tabSwitchView; // +0xc0
    UIView * _tabSwitchFloatingBlarView; // +0xc8
    WCFinderStreamProfileTitleView * _streamTitleView; // +0xd0
    WCFinderAnimationLoadingView * _loadingView; // +0xd8
    WCFinderCreateCoordinator * _createCoordinator; // +0xe0
    UILabel * _loadContactFailedLabel; // +0xe8
    unsigned long long _showPostEntranceTime; // +0xf0
    WCFinderProfileReporter * _profileReporter; // +0xf8
    WCFinderLiveAudienceNoticeReporter * _liveReporter; // +0x100
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x108
    NSString * _descriptionPromptWording; // +0x110
    WCFinderStreamBackGroundView * _backGroundCloseBtn; // +0x118
    UIView * _backgroundMaskView; // +0x120
    WCFinderProfileLogoutView * _logoutView; // +0x128
    NSMapTable * _pagesMap; // +0x130
    WCFinderPostMgr * _finderPostMgr; // +0x138
    unsigned long long _enterTime; // +0x140
    NSString * _traceId; // +0x148
    WCFinderMultiMenuItemHelper * _menuHelper; // +0x150
    UIButton * _naviFollowBtn; // +0x158
    MMUIButton * _creatorCenterTipsBtn; // +0x160
    MMUIButton * _moreButton; // +0x168
    MMUIButton * _postButton; // +0x170
    double _followBtnAlpha; // +0x178
    long long _switchTabState; // +0x180
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x188
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x190
    UIPanGestureRecognizer * _popBackPanGesture; // +0x198
    WCFinderFullScreenAnimatedTransitioning * _popAnimator; // +0x1a0
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0x1a8
    double _heightRatio; // +0x1b0
    NSMutableArray * _viewDidAppearActions; // +0x1b8
    WCFinderProfileJustWatchTipsView * _justwatchBannerView; // +0x1c0
}
+ (id)genNoticeListViewControllerWithNoticeList:(id)arg1 onReserved:(id /* block */)arg2 targetNoticeId:(id)arg3 username:(id)arg4 nickName:(id)arg5;
- (void)onClickProfileMemberShipView:(id)arg1;
- (void)pushMembershipZoneViewController;
- (void)pushMembershipIntroduceViewController;
- (void)onProfileRecommendFollowView:(id)arg1 clickContact:(id)arg2 recommandReason:(id)arg3 index:(long long)arg4;
- (void)onProfileRecommendFollowViewClickMore:(id)arg1;
- (void)onProfileRecommendFollowViewExposeMore:(id)arg1;
- (void)reportFollowRecommendMore:(id)arg1;
- (void)onProfileRecommendFollowView:(id)arg1 exposeContact:(id)arg2 recommandReason:(id)arg3 index:(long long)arg4;
- (void)onBottomPostButtonClick;
- (void)onBottomPostNewLifeButtonClick;
- (void)onPostNewLifeGuide:(id)arg1;
- (void)onBottomLiveButtonClick;
- (void)onBottomMemberZoneButtonClick;
- (void)onClickPostTipsViewWithInfo:(id)arg1;
- (void)onClickPostTipsButtonWithInfo:(id)arg1 enterScene:(unsigned long long)arg2;
- (void)onHeaderView:(id)arg1 clickHeadImageView:(id)arg2;
- (void)onClickHeaderNickName:(id)arg1;
- (void)jumpToFullScreenProfile;
- (void)onClickMoreActionView:(id)arg1;
- (void)onClickSignatureGuide:(id)arg1;
- (void)onClickBrand:(id)arg1 brandInfo:(id)arg2;
- (void)onClickFansView:(id)arg1;
- (void)onClickOriginalFeedView:(id)arg1;
- (void)onClickClubMemberView:(id)arg1;
- (void)onClickPostButton:(id)arg1;
- (void)onClickPOIView:(id)arg1;
- (void)onClickFollowButton:(id)arg1;
- (void)onChangeFollowStatus:(unsigned long long)arg1;
- (void)onClickMessageButton:(id)arg1;
- (void)onClickWeconKFMessage:(id)arg1;
- (void)onClickKFMsgBtn:(id)arg1;
- (void)onOpenPrivateMsgWithRoleType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)onClickShowWXProfileSwitch:(BOOL)arg1;
- (void)onClickGoToWxProfileView;
- (void)doGoToWXProfileThenReport:(id /* block */)arg1 fromNav:(id)arg2;
- (void)_openCreateRedPacketEvent:(id /* block */)arg1;
- (void)onClickSignatureAtText:(id)arg1;
- (void)onClickFriendAlsoFollowBtn;
- (void)onClickHistoryLiveListBtn;
- (void)reportAtMention:(id)arg1 actionType:(unsigned long long)arg2 isSuccess:(BOOL)arg3;
- (void)onClickMiniApp:(id)arg1;
- (void)onClickServiceViewWithFinderJumpInfo:(id)arg1;
- (void)onClickMemberZoneButton:(id)arg1;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMoreNoticesButtonClicked:(id)arg1;
- (void)openMoreNoticeListViewControllerWithNoticeList:(id)arg1 targetNoticeId:(id)arg2;
- (void)checkAndOpenNoticesAutomatically;
- (void)onClickWarnningView:(id)arg1;
- (void)onClickMusicRadio:(id)arg1;
- (void)onClickMusician:(id)arg1;
- (void)onTapEventView:(id)arg1;
- (void)onRedPacketEventViewClickClose:(id)arg1;
- (void)onRedPacketEventDidClick:(id)arg1;
- (void)onFinderAuthViewClickAuthLabel:(id)arg1;
- (void)onFinderAuthViewDidClicked;
- (void)onFinderAuthViewClickFriendsVerified:(id)arg1;
- (void)pushVCAnimated:(id)arg1;
- (void)onClickJumpInfo:(id)arg1;
- (void)onFullProfileAction:(id)arg1;
- (void)onHeaderClickMusicPlayInfoView;
- (void)onClickRedPacket:(id)arg1;
- (void)onClickLocationForHeaderView:(id)arg1;
- (void)onClickIdentifierInfo:(id)arg1;
- (void)showMoreContactInfo;
- (void)_doShowMoreInfo:(id)arg1 title:(id)arg2;
- (id)initWithViewModel:(id)arg1 selectedTab:(int)arg2;
- (id)initWithUserName:(id)arg1 viewer:(id)arg2 params:(id)arg3;
- (id)initWithContact:(id)arg1 viewer:(id)arg2 params:(id)arg3;
- (id)initWithExistViewModel:(id)arg1;
- (void)dealloc;
- (void)checkParams:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)loadView;
- (id)userName;
- (id)pushParams;
- (void)setReportScene:(int)arg1;
- (int)reportScene;
- (BOOL)isHalfScreenVC;
- (BOOL)isTingHalfScreenVC;
- (id)displayBackgroundColor;
- (CGSize)getContainerViewSize;
- (double)containerMinHeight;
- (double)containerMaxHeight;
- (double)getTabFloatTop;
- (id)params;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setM_bInteractivePopEnabled:(BOOL)arg1;
- (void)setUpHalfScreenView;
- (void)setUpEdgePanGesture;
- (void)viewWillLayoutSubviews;
- (void)reportProfileWithName:(id)arg1 action:(unsigned long long)arg2 extInfo:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)invokeViewDidAppearActions;
- (void)addViewDidAppearAction:(id /* block */)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)halfScreenCloseAction;
- (void)_halfScreenCloseAction;
- (void)willDisappear;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupEducateTipsView;
- (id)enterPageReportExtInfo;
- (UIEdgeInsets)cotentEdgeInsets;
- (void)setupNavigationUI:(id)arg1;
- (void)makeNavigationInteractiveAlwaysDisplay:(BOOL)arg1;
- (double)profileVCHeaderHeight;
- (void)setupNavigationTitleView:(BOOL)arg1;
- (void)adjustTitleViewLayout;
- (void)onBackButtonClicked:(id)arg1;
- (void)didClickNaviFollowBtn:(id)arg1;
- (void)clickExitBackgroundAction;
- (void)tryAddLogoutView;
- (void)onCreateCreatorWording:(id)arg1;
- (id)creatorCenterURL;
- (id)appendReportArgumentToUrl:(id)arg1;
- (void)onShowMoreAction:(id)arg1;
- (id)moreActionStandardReportParams;
- (BOOL)shouldShowPublicInfo;
- (void)showBlockPosterSecondConfirmAction;
- (void)openAccountInfo;
- (id)urlAppendUserName:(id)arg1;
- (void)reportProfile;
- (void)onShowPostAction:(id)arg1;
- (void)showPostOrLiveSheet;
- (void)onPostFeed;
- (void)onPostFeedWithEnterScene:(unsigned long long)arg1 info:(id)arg2;
- (void)onPostLiveOrNoticeSheet;
- (void)realStartLive;
- (void)onPostLive;
- (void)onCreateLiveNoticeWithReporter:(id)arg1;
- (void)onPostNewLife;
- (void)showPostEntranceWithEnterScene:(unsigned long long)arg1 info:(id)arg2;
- (id)ensurePostMgrWithEnterScene:(unsigned long long)arg1;
- (long long)overrideUserInterfaceStyle;
- (long long)currentMMUserInterfaceStyle;
- (void)notifyThemeModeChange;
- (void)addObserverNotification;
- (void)onUserDidTakeScreenshot;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (BOOL)useTransparentNavibar;
- (id)normalRightButton;
- (id)fadeRightButton;
- (void)createActionButtons;
- (void)updateActionButtonHidden;
- (BOOL)showPostButton;
- (BOOL)showMoreButton;
- (void)setFollowBtnAlpha:(double)arg1;
- (void)updateActionsButtonsAlpha:(double)arg1 scrollView:(id)arg2;
- (void)_updateFollowBtnAlpha:(double)arg1;
- (void)_updateDataCenterTipsAlpna:(double)arg1 scrollView:(id)arg2;
- (void)createMoreMenuButton;
- (id)normalTintColor;
- (id)fadeTintColor;
- (id)wrapTintColor:(id)arg1;
- (BOOL)isSetNormalToBlackStyle;
- (void)updateRightItemUI;
- (void)updateLeftNaviItemUI;
- (id)displayingItem;
- (id)displayingPage;
- (id)topRefreshView;
- (BOOL)showNavigationBarSepLine;
- (void)setupStatusViews;
- (void)reloadHeaderView;
- (void)setupTabView;
- (void)updateTabViewFrame;
- (double)tabViewContentInsetTop;
- (void)removeUnExistItemPage;
- (void)resetDisplayPage;
- (void)setupDisplayDraftTabAfterDisplay;
- (BOOL)isSameContact:(id)arg1 withParams:(id)arg2;
- (void)onHeaderViewHeightChanged:(id)arg1 oldHeaderHeight:(double)arg2;
- (void)adjsutPageContentInset:(double)arg1 resetTop:(BOOL)arg2;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)tryShowThanksRedpackagePage;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (void)dragBarView:(id)arg1 draggingCloseChangeProgress:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateRefreshTabFloat:(id)arg1 topRefreshView:(id)arg2;
- (void)updateGradientTabFloat:(id)arg1;
- (void)setupSwitchFloatingBlarViewHidden:(BOOL)arg1;
- (BOOL)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(BOOL)arg3 scene:(unsigned long long)arg4;
- (id)getCurrentViewController;
- (void)onProfileExtInfoChanged;
- (void)onHeaderDataFetched;
- (void)onContactDidUpdate;
- (BOOL)shouldInteractiveDismiss;
- (void)onHeaderViewCoverChanged:(long long)arg1;
- (void)updateBGViewsColor;
- (void)onHeaderViewModelMoreActionRedDotChanged:(id)arg1;
- (double)headerViewTopInset;
- (double)headerViewBottomInset;
- (void)updateRightMenuItem;
- (void)updateViewLightMode;
- (void)setupViewLightMode;
- (void)setupRetryView;
- (void)streamProfileViewModifyShieldFinderFeedsIsSuccess:(BOOL)arg1 errorMsg:(id)arg2 setToShield:(BOOL)arg3;
- (void)streamProfileViewModelTabShouldChanged;
- (void)ensurePageForItem:(id)arg1;
- (double)displayOriginXForVM:(id)arg1;
- (long long)comparePositionForPageItem:(id)arg1 rightPage:(id)arg2;
- (void)streamProfileViewDisplayLogoutView;
- (void)streamProfileViewLiveNoticeRevoked:(BOOL)arg1;
- (void)streamProfileViewLiveNoticeDidPushToMembershipIntroduceOnGotoNotice;
- (void)streamProfileViewLiveNoticeReserveStateChanged:(unsigned long long)arg1;
- (void)streamProfileViewShouldShowConcertTicketConfirmed;
- (void)onPOIRelatedListHalfClickAction:(id)arg1;
- (void)onLiveNoticeViewExpandIntroduction:(id)arg1;
- (void)onLiveNoticeViewShrinkIntroduction:(id)arg1;
- (void)onClickLiveNoticeView:(id)arg1;
- (void)onClickLiveNoticeViewActionButton:(id)arg1;
- (void)onClickLiveNoticeActionButton:(id)arg1;
- (void)onClickFreeLiveNoticeView:(id)arg1;
- (void)onClickNeedPayLiveNoticeView:(id)arg1;
- (id)ticketHandle;
- (void)createAndShowLiveNoticeQRCodeWithInfo:(id)arg1;
- (long long)numberOfTabSwitchView:(id)arg1;
- (id)tabSwitchView:(id)arg1 uniqueObjectForIndex:(unsigned long long)arg2;
- (id)tabSwitchView:(id)arg1 titleForTabAtIndex:(long long)arg2;
- (id)tabSwitchView:(id)arg1 sdkLogReportForIndex:(long long)arg2;
- (void)displayPageItem:(id)arg1;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(BOOL)arg3 context:(void *)arg4 completion:(id /* block */)arg5;
- (void)configScrollViewAfterPageInstall;
- (BOOL)isTranslatingTabAnimated;
- (void)handlePopEdgePanGesture:(id)arg1;
- (void)handlePopPanGesture:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)translationViewToRootViewArg:(long long)arg1 view:(id)arg2;
- (void)tralsationHeaderViewToRootView;
- (void)moveViewsToScrollView:(id)arg1 args:(long long)arg2 view:(id)arg3;
- (void)bringTipsViewToFront;
- (void)tralsationHeadersViewToScrollView:(id)arg1;
- (void)bringTipsViewToFrontWithCount:(long long)arg1 view:(id)arg2;
- (void)removeVeiwFromSuperview:(long long)arg1 view:(id)arg2;
- (BOOL)adjustConentOffsetBeforeSwipeFromPage:(id)arg1 toPage:(id)arg2;
- (void)resetHeaderViewsFrame:(id)arg1;
- (void)onTabSwtichView:(id)arg1 exposeItems:(id)arg2;
- (void)exposeTabs:(id)arg1;
- (void)setupEmptyView;
- (void)updateNavigationShowBarBackground:(BOOL)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewController:(id)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)onNoticeDataChanged;
- (void)onCreateLiveNoticeWithInfo:(id)arg1;
- (void)onFinderNotifyFansCountNeedReload;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)postMgrSourceInfo:(id)arg1;
- (void)postMgrSaveDraft;
- (void)postViewControllerStartUpload;
- (void)postMgrStartUpload;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)onLogoutViewClickIKnow:(id)arg1;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)onProfilerSettingTipsViewClickCancel;
- (void)onProfilerSettingTipsViewClickConfirm;
- (void)onProfilerSettingTipsViewJumpWXProfile:(id)arg1;
- (void)switchToTab:(int)arg1 completion:(id /* block */)arg2;
- (double)contentScrollViewMinSizeSubtract;
- (void)onTopRefreshViewRequestUpdateContentInset:(id /* block */)arg1;
- (void)onPageSetupTopRefreshView:(id)arg1;
- (double)contentScrollViewTopSafePadding;
- (void)onSendMediaWith:(id)arg1;
- (void)updateStoreInfo;
- (id)getHalfContainerView;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeStatusChanged:(id)arg1;
- (void)didFinishModLiveNoticeWithInfo:(id)arg1;
- (void)registerYReportSdk;
- (void)configureSessionPageInOutReport;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onJoinClubContact:(id)arg1;
- (void)onJustWatchControllerRequiredDisplayBanner;
- (void)onJustWatchControllerRequiredRemoveBanner;
- (void)onJustWatchControllerBannderDisplayStateChanged;
- (void)updateJustWatchBannerDisplayStatus;
- (BOOL)shouldDisplayJustWatchBanner;
- (BOOL)shouldDisplayJustWatchBannerForTab:(int)arg1;
- (BOOL)allowDisplayJustWatchBannerForTab:(int)arg1;
- (void)onJustWatchControllerCleanJustWatch;
- (void)reportPoiLocatorWithEvent:(id)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (void)onTabSwitchShow:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)onNewLifePostPageEnd:(id)arg1;
- (id)pushDestinationTransitioningAnimator;
- (void)setPushDestinationTransitioningAnimator:(id)arg1;
- (id)prepareResponse;
- (void)setPrepareResponse:(id)arg1;
- (unsigned long long)refFansProfile;
- (void)setRefFansProfile:(unsigned long long)arg1;
- (id /* block */)didBePushBlock;
- (void)setDidBePushBlock:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)skipLoadData;
- (void)setSkipLoadData:(BOOL)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerVC;
- (void)setHeaderVC:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)tabSwitchView;
- (void)setTabSwitchView:(id)arg1;
- (id)tabSwitchFloatingBlarView;
- (void)setTabSwitchFloatingBlarView:(id)arg1;
- (id)streamTitleView;
- (void)setStreamTitleView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)cameraLongPressRightButton;
- (void)setCameraLongPressRightButton:(BOOL)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)loadContactFailedLabel;
- (void)setLoadContactFailedLabel:(id)arg1;
- (unsigned long long)showPostEntranceTime;
- (void)setShowPostEntranceTime:(unsigned long long)arg1;
- (id)profileReporter;
- (void)setProfileReporter:(id)arg1;
- (id)liveReporter;
- (void)setLiveReporter:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (id)backGroundCloseBtn;
- (void)setBackGroundCloseBtn:(id)arg1;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg1;
- (id)logoutView;
- (void)setLogoutView:(id)arg1;
- (id)pagesMap;
- (void)setPagesMap:(id)arg1;
- (int)delaySelectedTabName;
- (void)setDelaySelectedTabName:(int)arg1;
- (id)finderPostMgr;
- (void)setFinderPostMgr:(id)arg1;
- (BOOL)needUpdateSotreInfo;
- (void)setNeedUpdateSotreInfo:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)menuHelper;
- (void)setMenuHelper:(id)arg1;
- (id)naviFollowBtn;
- (void)setNaviFollowBtn:(id)arg1;
- (id)creatorCenterTipsBtn;
- (void)setCreatorCenterTipsBtn:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)postButton;
- (void)setPostButton:(id)arg1;
- (double)followBtnAlpha;
- (BOOL)isClosing;
- (void)setIsClosing:(BOOL)arg1;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg1;
- (long long)switchTabState;
- (void)setSwitchTabState:(long long)arg1;
- (id)dragBarView;
- (void)setDragBarView:(id)arg1;
- (id)popBackInteractivePopGesture;
- (void)setPopBackInteractivePopGesture:(id)arg1;
- (id)popBackPanGesture;
- (void)setPopBackPanGesture:(id)arg1;
- (id)popAnimator;
- (void)setPopAnimator:(id)arg1;
- (void)setTicketHandle:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)viewDidAppearActions;
- (void)setViewDidAppearActions:(id)arg1;
- (id)justwatchBannerView;
- (void)setJustwatchBannerView:(id)arg1;
- (void).cxx_destruct;
@end

