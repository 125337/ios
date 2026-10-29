@interface NewBrandUserContactInfoAssist : CBaseContactInfoAssist <UIActionSheetDelegate, IBrandAttrMgrExt, BrandProfileSettingViewControllerDelegate, IHDHeadImageViewExt, IWCDeviceBrandMgrExt, BrandProfileHeaderViewDelegate, BrandProfileTopicViewDelegate, BrandProfileTabViewDelegate, UIScrollViewDelegate, BrandProfileFuwuActionSheetDelegate, BrandProfileBaseTabViewControllerDelegate, BrandProfileMsgTabViewControllerDelegate, BrandFinderLiveMgrExt, WCFinderBrandStreamProfileVCDelegate, WCBrandPageSheetTitleViewDelegate, MMPageSheetGestureRecognizerDelegate, UIGestureRecognizerDelegate, WCFinderLiveExt, BrandProfileNaviLiveBarDelegate, IBizIamServiceExt, BizTlPersonalCenterMgrExt, BrandProfileTraceHostProtocol>
{
    BOOL _isFocusBeforeFetchFirstPkg; // +0x50
    BOOL _isJustAddedContact; // +0x51
    BOOL _isSearchAcitive; // +0x52
    BOOL _hasSwitchedToPicByOutbox; // +0x53
    BOOL _isPhotoAccountGuideCardShowing; // +0x54
    BOOL _isWaitingPhotoAccountRegisterResult; // +0x55
    BOOL _publishResultReturned; // +0x56
    BrandProfileCgiContext * _cgiContext; // +0x58
    BizProfileV2Resp * _cacheItem; // +0x60
    NSString * _interactiveBiz; // +0x68
    BrandProfileReporter * _reporter; // +0x70
    BizServiceMenuButton * _selectedFuwu; // +0x78
    unsigned long long _selectedFuwuIdx; // +0x80
    MMHDHeadImageView * _hdAvatarView; // +0x88
    WCADPageWrap * _profilePageWrap; // +0x90
    BOOL _isCurrViewCtrlPushing; // +0x98
    BOOL _isClickSearchButtonWhenCurrViewCtrlPushing; // +0x99
    BOOL _hasReported13307Enter; // +0x9a
    BOOL _hasReported13307Exit; // +0x9b
    UIScreenEdgePanGestureRecognizer * _pageSheetEdgePanGesture; // +0xa0
    double _pageSheetEdgePanProgress; // +0xa8
    double _pageSheetContentOffset; // +0xb0
    UIPanGestureRecognizer * _brandProfileFullScreenPopPanGesture; // +0xb8
    UIViewController * _brandProfileFullScreenPopHostViewController; // +0xc0
    WCFinderFullScreenAnimatedTransitioning * _brandProfilePopAnimator; // +0xc8
    BOOL _onlyPicContent; // +0xd0
    BOOL _hideMsgListClient; // +0xd1
    BOOL _showBrandManagerMode; // +0xd2
    BOOL _isCeiling; // +0xd3
    BOOL _isMainScrollingTriggeredBySetContentOffset; // +0xd4
    BOOL _isSubScrollingTriggeredBySetContentOffset; // +0xd5
    BOOL _isHideNavBarSeqLine; // +0xd6
    BOOL _friendsLoveAccountUnavailable; // +0xd7
    BOOL _shouldSwitchTabViewWhenFirstPkgResp; // +0xd8
    BOOL _isFans; // +0xd9
    BOOL _hasReportFinderLiveExposed; // +0xda
    BOOL _hasLoadedUrgePublishInfo; // +0xdb
    BOOL _shouldShowFriendSubscribeEntrance; // +0xdc
    BOOL _friendSubscribePageUseFastLoad; // +0xdd
    BOOL _contactNeedUpdate; // +0xde
    BOOL _privateMsgScopeExptEnable; // +0xdf
    BOOL _isProfileTraceReportDeferred; // +0xe0
    BOOL _hasShownNoIntroMoreGuideInPage; // +0xe1
    BOOL _noIntroMoreGuideRedDotVisible; // +0xe2
    BOOL _hasClickedMoreButtonInPage; // +0xe3
    unsigned int _searchFromIndex; // +0xe4
    unsigned int _naviBtnItemsType; // +0xe8
    NSString * _searchKeyword; // +0xf0
    NSString * _searchExtraParamsString; // +0xf8
    BrandProfileEnterInfo * _bpeInfo; // +0x100
    id <ContactInfoAssistDelegate> _delegate; // +0x108
    UIScrollView * _mainScrollView; // +0x110
    UIScrollView * _subScrollView; // +0x118
    BrandProfileHeaderView * _headerView; // +0x120
    BrandProfileTabView * _tabView; // +0x128
    UIView * _muteBannerView; // +0x130
    UIImageView * _muteBannerIcon; // +0x138
    UILabel * _muteBannerLabel; // +0x140
    NSString * _muteBannerJumpUrl; // +0x148
    BrandProfileFuwuActionSheet * _actionSheet; // +0x150
    WCBrandPageSheetTitleView * _profileTitleView; // +0x158
    BrandProfileNaviLiveBar * _liveTipsBar; // +0x160
    MMUIButton * _profileUnfocusBtn; // +0x168
    UIView * _photoBrandNavTitleView; // +0x170
    MMBrandHeadImageView * _photoBrandNavAvatarView; // +0x178
    MMUILabel * _photoBrandNavTitleLabel; // +0x180
    long long _tabViewFuwuIndex; // +0x188
    NSMutableArray * _tabViewControllerList; // +0x190
    BrandProfileMsgTabViewController * _msgTabViewCtrl; // +0x198
    BrandProfileVideoTabViewController * _videoTabViewCtrl; // +0x1a0
    WCFinderBrandStreamProfileViewController * _finderTabViewCtrl; // +0x1a8
    _TtC6WeChat34BrandProfileAudioTabViewController * _audioTabViewCtrl; // +0x1b0
    _TtC6WeChat32BrandProfilePicTabViewController * _picTabViewCtrl; // +0x1b8
    BrandProfileArticleTabV2ViewController * _articleTabV2ViewCtrl; // +0x1c0
    _TtC6WeChat36BrandProfileArticleTabViewController * _articleTabViewCtrl; // +0x1c8
    _TtC6WeChat36BrandProfileAudioTabV2ViewController * _audioTabV2ViewCtrl; // +0x1d0
    BrandProfileFriendsLoveTabViewController * _friendsLoveTabViewCtrl; // +0x1d8
    WCMpBrandEditorViewController * _editorVc; // +0x1e0
    UIPanGestureRecognizer * _tabSwipeGestureRecognizer; // +0x1e8
    double _tabSwipeStartOffsetX; // +0x1f0
    long long _tabSwipeStartIndex; // +0x1f8
    NSMutableArray * _threeDotsNaviBtnItems; // +0x200
    NSMutableArray * _followBtnNaviBtnItems; // +0x208
    MMUIButton * _followNaviButton; // +0x210
    NSArray * _fuwuInfoList; // +0x218
    BrandProfileCreatorReporter * _creatorReporter; // +0x220
    BrandProfileUrgePublishViewModel * _urgePublishViewModel; // +0x228
    UIButton * _interactionNotificationButton; // +0x230
    NSString * _interactionRedDotEventKey; // +0x238
    BrandProfileOutboxAndMsgProvider * _outboxProvider; // +0x240
    NSString * _profileTracePageId; // +0x248
    MMMenuBubbleTipsView * _noIntroMoreGuideBubble; // +0x250
    UIButton * _noIntroMoreGuideRedDotButton; // +0x258
}
- (id)profileRefererStringValue:(id)arg1;
- (unsigned long long)profileRefererUInt64Value:(id)arg1;
- (unsigned int)profileRefererBizUinValue:(id)arg1;
- (id)createProfileReferer;
- (void)startProfileTraceIfNeeded;
- (void)startProfileTraceSpan;
- (void)syncProfileTracePageIdToReporters;
- (void)writeProfileTraceSourceAttributes;
- (void)addProfileTraceEvent:(id)arg1;
- (void)addProfileTraceEvent:(id)arg1 attributeKey:(id)arg2 int64Value:(long long)arg3;
- (id)profileTraceShowArticleList;
- (void)finishProfileTraceIfNeeded;
- (void)onBrandProfileTraceShown;
- (void)onBrandProfileTraceHidden;
- (void)dealloc;
- (id)initWithContact:(id)arg1 delegate:(id)arg2 profileEnterInfo:(id)arg3;
- (void)setupMainScrollView;
- (void)setupMuteBanner;
- (void)updateMuteBanner;
- (void)onMuteBannerTap;
- (void)setupHeaderView;
- (void)setupTabView;
- (void)setupSubScrollView;
- (void)setupTabSwipeGesture;
- (long long)nextSwipeableIndexFromIndex:(long long)arg1 direction:(long long)arg2;
- (long long)targetIndexForSwipeTranslation:(double)arg1 fromIndex:(long long)arg2;
- (void)handleTabSwipeGesture:(id)arg1;
- (void)animateSubScrollViewToIndex:(long long)arg1;
- (BOOL)shouldShowSearchButton;
- (void)setupNaviBtnItems;
- (void)scrollToTabIfNeeded:(BOOL)arg1;
- (void)scrollToTab:(BOOL)arg1;
- (void)loadConfig;
- (BOOL)shouldHideAllTabContentForCacheItem:(id)arg1;
- (void)loadLocalCache;
- (void)updateReminderStateWithProfileResponse:(id)arg1;
- (void)updateReminderStateWithProfileResponse:(id)arg1 forceHidden:(BOOL)arg2;
- (void)refreshUpdateReminderTabs;
- (void)cleanFuwuInfoCache;
- (BOOL)isVideoTabTypeInValid;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (BOOL)isBrandProfileSlideExitEnabled;
- (void)viewDidAppear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)removeFullScreenInteractivePopGestureWithReason:(id)arg1;
- (void)installPopTransitionHooksIfNeededForViewController:(id)arg1;
- (void)ensureFullScreenInteractivePopGestureEnabledWithReason:(id)arg1;
- (void)handleBrandProfileFullScreenPopPanGesture:(id)arg1;
- (id)GetMainScrollView;
- (BOOL)shouldAddShadowView;
- (void)reloadView;
- (void)reGenHeaderViewData;
- (void)reGenForceFlag;
- (void)tryReGenPageSheetTitleViewData;
- (void)onContactUpdated;
- (void)onLiveButtonClicked;
- (void)onFuwuButtonClicked:(unsigned long long)arg1;
- (id)extraInfoForFuwu;
- (void)openWebView:(id)arg1 extraInfo:(id)arg2;
- (void)openWebView:(id)arg1 extraInfo:(id)arg2 hasItemShowType:(BOOL)arg3 itemShowType:(unsigned int)arg4 fromFeature:(BOOL)arg5;
- (void)openHalfScreenWebView:(id)arg1 extraInfo:(id)arg2;
- (id)genWebViewExtraInfoFromSourceMessage;
- (void)showLiveRoomWithViewModel:(id)arg1;
- (void)openWebViewWithItemViewModel:(id)arg1 isFeatureMsg:(BOOL)arg2;
- (id)getOpenWebviewExtraInfoWithItemViewModel:(id)arg1;
- (id)cachedInteractiveBiz;
- (id)getInteractiveBiz;
- (void)fetchProfileFirstPkg;
- (void)reloadFirstPkg;
- (BOOL)shouldForceHideNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)updateNavigationBarSubviews;
- (void)setNaviBtnItemsType:(unsigned int)arg1 reasonStr:(id)arg2;
- (id)brandAccountTypeTitle;
- (void)updateNavBarTitleWhenAboveHeaderArea:(BOOL)arg1;
- (void)updatePageSheetTitleWhenAboveHeaderArea:(BOOL)arg1;
- (void)updateNavigationBarRightButton;
- (id)genInteractionNotificationButton;
- (void)fetchInteractionRedDotCount;
- (void)subscribeInteractionRedDotEvent;
- (void)updateInteractionNotificationBadgeCount:(long long)arg1 hasSilentRedDot:(BOOL)arg2;
- (void)onInteractionNotificationClicked;
- (id)naviFollowButtonTitle;
- (void)updateFollowNaviButtonTitle;
- (id)genFollowBtn;
- (id)genBrandProfileTitleView;
- (id)genPhotoBrandNavTitleView;
- (BOOL)needShowFinderFeedsBlockOptionInActionSheet;
- (BOOL)isFinderFeedsBlocked;
- (id)blockFinderWording;
- (unsigned int)loveBlockStatus;
- (BOOL)shouldShowLoveBlockOption;
- (BOOL)isLoveBlocked;
- (BOOL)profileHasSchoolOrProfessionCertification;
- (id)noIntroMoreGuideMMKVKeyWithFormat:(id)arg1;
- (BOOL)hasNoIntroMoreGuideTipShown;
- (void)markNoIntroMoreGuideTipShown;
- (BOOL)hasNoIntroMoreGuideRedDotConsumed;
- (void)markNoIntroMoreGuideRedDotConsumed;
- (id)buttonInView:(id)arg1;
- (id)navigationMoreButton;
- (id)currentMoreButtonForNoIntroGuide;
- (BOOL)shouldShowNoIntroMoreGuideRedDot;
- (BOOL)shouldShowNoIntroMoreGuideTip;
- (void)setNoIntroMoreGuideRedDotVisible:(BOOL)arg1;
- (void)tryShowNoIntroMoreGuideIfNeeded;
- (void)hideNoIntroMoreGuideBubble;
- (void)onMoreButtonClickedForNoIntroGuide;
- (void)showActionSheetForRightButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)opLogTopSession:(BOOL)arg1;
- (void)opShareMyFriend;
- (void)openComplaintWebView;
- (void)openSepcialWeappWithJsonString:(id)arg1;
- (void)openSepcialWeappWithJsonString:(id)arg1 sceneNote:(id)arg2;
- (void)openSettingView;
- (void)showSheetForMakeSureNoFocus;
- (void)realNoFocus;
- (void)onBrandAvatarClicked:(CGRect)arg1;
- (void)onFocusButtonClicked;
- (void)onFocusButtonClicked:(id)arg1;
- (void)internalAddContactLogic:(id)arg1;
- (void)finallyAddToContacts;
- (void)modifyVerifyContactWrap:(id)arg1;
- (void)onEnterButtonClicked:(id)arg1;
- (void)onUnfocusButtonClicked:(id)arg1;
- (void)onFoldButtonClicked:(id)arg1;
- (void)onShopWindowButtonExpose;
- (void)onShopWindowButtonClicked:(id)arg1 scene:(unsigned long long)arg2;
- (void)openProfileShopEntrance:(id)arg1;
- (void)onMoreRecommendFollowClicked:(id)arg1 sessionId:(id)arg2;
- (void)onRecommendFollowViewExposed:(id)arg1;
- (void)onRecommendFollowCellExposed:(id)arg1;
- (void)onRecommendFollowCellClicked:(id)arg1 sessionId:(id)arg2 reportJsonStr:(id)arg3;
- (void)onIntroAtBizClicked:(id)arg1;
- (void)onFinderButtonClicked:(id)arg1;
- (void)onPersonalVerifiedLabelClicked:(id)arg1;
- (void)onLiveStatusBtnClicked:(id)arg1;
- (void)onHeaderViewLayoutChanged;
- (void)onReserveFinderLiveButtonClicked:(BOOL)arg1;
- (void)onReserveFinderLiveShowMoreNoticeButtonClicked;
- (void)showCacnelReserveActionSheet;
- (id)dataReportDictWithNoticeInfo;
- (void)onReserveFinderLiveCardExpose;
- (id)genFinderLiveNoticeListInfo;
- (id)getReserveLiveFromViewController;
- (BOOL)hasDeviceUserData;
- (BOOL)isDeviceBound;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)contactAddContactOk:(id)arg1;
- (void)reportBizADTriggerAttention:(id)arg1;
- (void)reportBackButtonClicked;
- (id)shareCardMsgDictExtraInfo;
- (void)handleAddedContact;
- (void)newMessageWithContact:(id)arg1;
- (id)getAlertTitleForVerifyLogic:(id)arg1;
- (id)getAlertMessageForVerifyLogic:(id)arg1;
- (BOOL)isInCustomAlertMode;
- (void)deleteAllMessage;
- (BOOL)shouldShowFinderFeedsBlockSwitchCell;
- (id)finderFeedsBlockSwitchCellTitle;
- (BOOL)isFinderFeedsBlockedForSettingSwitch;
- (void)onSwitchFinderFeedsBlockCell:(id)arg1;
- (BOOL)shouldShowLoveBlockSwitchCell;
- (id)loveBlockSwitchCellTitle;
- (id)loveBlockSwitchCellIcon;
- (BOOL)isLoveBlockedForSettingSwitch;
- (void)onSwitchLoveBlockCell:(id)arg1;
- (void)recordProfilePageWrap;
- (void)profileDestory;
- (unsigned long long)currentTabType;
- (void)jumpToBrandSearchView:(id)arg1 scene:(unsigned long long)arg2;
- (void)onSearchClicked;
- (void)onSearchClickedWithScene:(unsigned long long)arg1;
- (unsigned int)transToReportScene;
- (void)setupFakeBlankView;
- (void)reGenTopicViewData;
- (void)appendFriendsLoveTabToParentViewController:(id)arg1;
- (void)reGenTabViewData;
- (unsigned long long)getTabIndexWithTabType:(unsigned long long)arg1;
- (BOOL)hasTabWithType:(unsigned long long)arg1;
- (BOOL)shouldForceShowMsgTabForBlockTips;
- (unsigned long long)getTabIndexWithTabTypeAndFallback:(unsigned long long)arg1;
- (BOOL)hasTabWithTypeConsideringVideoEquivalence:(unsigned long long)arg1;
- (unsigned long long)getTabIndexConsideringVideoEquivalence:(unsigned long long)arg1;
- (unsigned long long)getInitializeTabIndex;
- (void)viewDidLayoutSubviews;
- (void)layoutAllSubviews;
- (void)layoutSubScrollView;
- (double)aboveHeaderViewAreaHeight;
- (unsigned int)convertTabTypeToBrandProfileTabSubOpType:(unsigned long long)arg1 isClick:(BOOL)arg2;
- (unsigned int)creatorOperationforTabType:(unsigned long long)arg1;
- (unsigned int)fromTabforTabType:(unsigned long long)arg1;
- (unsigned int)convertToIndexToBrandProfileTabSubOpType:(long long)arg1;
- (void)onTabButtonCreated:(id)arg1 itemInfo:(id)arg2;
- (void)updateJustReadTipForSelectedTabIndex:(long long)arg1;
- (void)tabView:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 selectType:(unsigned long long)arg4;
- (void)onFetchBizProfile:(id)arg1 resp:(id)arg2 action:(int)arg3 userInfo:(id)arg4;
- (void)handleFirstPkgFail:(long long)arg1;
- (void)handleFirstPkgResp:(id)arg1;
- (void)loadUrgePublishInfoIfNeeded;
- (void)reportUrgePublishEntryExposureIfNeeded;
- (void)cacheItemUpdated:(id)arg1;
- (void)onUpdateReminderStateDidChange:(id)arg1;
- (void)persistUpdateReminderStateToCache;
- (id)currentProfileCacheItem;
- (void)onBizProfileSettingModified:(id)arg1 setting:(id)arg2 finderUserName:(id)arg3;
- (void)onBizLoveStatusModified:(id)arg1 loveBlockStatus:(unsigned int)arg2;
- (void)notifyFinderTabWhenExitIfNeed;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)subScrollViewDidEndDrag;
- (BOOL)isAboveHeaderArea;
- (void)finderTabViewDidSelectItem:(id)arg1;
- (id)getBrandContact;
- (unsigned int)getBrandMPPageEnterReportScene;
- (id)getSearchClickId;
- (unsigned int)getPageMode;
- (id)getProfileReferer;
- (void)friendsLoveTabDidRequestOpenSettings:(id)arg1;
- (void)subTableViewDidScroll:(id)arg1;
- (void)subScrollViewWillTriggerScroll:(id)arg1;
- (void)tabViewController:(id)arg1 requestSwitchToTab:(unsigned long long)arg2;
- (void)onTopicButtonClicked:(id)arg1 fromTab:(unsigned int)arg2;
- (void)onTopicUnfoldButtonClicked:(BOOL)arg1 fromTab:(unsigned int)arg2;
- (void)onMsgTabRequestSwitchToPicTab;
- (void)convertSoftbankEmoji2UnifiedEmojiInMenuInfo:(id)arg1;
- (id)getTopicInfoListFromCacher;
- (id)getTopicInfoListFromCacherForTab:(unsigned long long)arg1;
- (id)convertTopicItemItem2TopicInfo:(id)arg1;
- (id)getFuwuInfoListFromCacher;
- (BOOL)allowSendMsgWhenUnfocus;
- (void)refreshPhotoAccountGuideCard;
- (void)hidePhotoAccountGuideCard;
- (void)showPhotoAccountGuideCardWithWording:(id)arg1 hasPhoto:(BOOL)arg2;
- (void)onPhotoAccountGuideCardActionClicked;
- (void)switchToPhotoIdentity;
- (void)openPhotoAccountRegisterPage;
- (void)onPhotoAccountIdentityInfoUpdated;
- (void)showPhotoAccountCreatedSheet;
- (id)convertButtonItemItem2FuwuInfo:(id)arg1;
- (void)openFuwuInfoActionSheet:(id)arg1;
- (void)openContactAndReceiveMsg:(id)arg1;
- (void)handleFuwuInfoClick:(id)arg1;
- (void)onMenuItemClick:(id)arg1;
- (void)actionSheet:(id)arg1 didTappedHorizontalItemInfo:(id)arg2;
- (void)actionSheetTappedTransparent:(id)arg1;
- (void)actionSheetTappedCancel:(id)arg1;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(BOOL)arg2 finderFeedExportId:(id)arg3;
- (void)updateNaviFinderLiveButton:(BOOL)arg1;
- (BOOL)isContactLiving;
- (void)pullBizLivingInfo;
- (void)reportFinderLiveExposed;
- (BOOL)shouldShowHalfScreenSearchButton;
- (BOOL)isInPageSheet;
- (void)onPageSheetUpdated;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)setupPageSheetEdgeGesture;
- (void)handlePageSheetEdgeAction:(id)arg1;
- (void)onEnterBrandProfileFromTitle:(BOOL)arg1;
- (void)onPageSheetTitleClicked;
- (void)onNameLabelClicked;
- (void)onRedPacketBannerExposed;
- (void)onFriendSubscribeBtnClicked:(id)arg1;
- (void)onUrgePublishUserEntryClicked;
- (void)onBindPoiEntranceClicked:(id)arg1;
- (void)pushPoiDetailWithBindPoiInfo:(id)arg1;
- (void)onFriendSubscribeBtnExposed:(id)arg1;
- (BOOL)isHalfScreen;
- (void)onHalfScreenSearchClick;
- (void)onHalfScreenMoreClick;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (id)liveTipsBar;
- (void)switchBlockFinderStatus;
- (void)switchBlockFinderStatusWithToast:(BOOL)arg1;
- (void)switchLoveStatus;
- (BOOL)shouldFobidPopWhenDeleteContact;
- (id)tabHostViewController;
- (void)onPublishArticleButtonClicked;
- (void)onPublishImageButtonClicked;
- (void)onAIChatButtonExpose;
- (void)onAIChatButtonClicked;
- (void)onSetProfileDescIntroExposed;
- (void)onSetProfileDescIntroClicked;
- (void)showProfileSettings;
- (void)onProfileUpdatedByJSAPI:(id)arg1;
- (void)updateContactIfNeed;
- (BOOL)isPhotoAccounts;
- (int)profileServiceProxyType;
- (id)bizUsername;
- (BOOL)isCreatorEnable;
- (id)personalCenterBiz;
- (id)generateNativeExtraData;
- (void)showMultiPOIMapWithPOINum:(long long)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (unsigned int)searchFromIndex;
- (void)setSearchFromIndex:(unsigned int)arg1;
- (id)searchExtraParamsString;
- (void)setSearchExtraParamsString:(id)arg1;
- (id)bpeInfo;
- (void)setBpeInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showBrandManagerMode;
- (void)setShowBrandManagerMode:(BOOL)arg1;
- (id)mainScrollView;
- (void)setMainScrollView:(id)arg1;
- (id)subScrollView;
- (void)setSubScrollView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (id)muteBannerView;
- (void)setMuteBannerView:(id)arg1;
- (id)muteBannerIcon;
- (void)setMuteBannerIcon:(id)arg1;
- (id)muteBannerLabel;
- (void)setMuteBannerLabel:(id)arg1;
- (id)muteBannerJumpUrl;
- (void)setMuteBannerJumpUrl:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)profileTitleView;
- (void)setProfileTitleView:(id)arg1;
- (void)setLiveTipsBar:(id)arg1;
- (id)profileUnfocusBtn;
- (void)setProfileUnfocusBtn:(id)arg1;
- (id)photoBrandNavTitleView;
- (void)setPhotoBrandNavTitleView:(id)arg1;
- (id)photoBrandNavAvatarView;
- (void)setPhotoBrandNavAvatarView:(id)arg1;
- (id)photoBrandNavTitleLabel;
- (void)setPhotoBrandNavTitleLabel:(id)arg1;
- (long long)tabViewFuwuIndex;
- (void)setTabViewFuwuIndex:(long long)arg1;
- (BOOL)isCeiling;
- (void)setIsCeiling:(BOOL)arg1;
- (BOOL)isMainScrollingTriggeredBySetContentOffset;
- (void)setIsMainScrollingTriggeredBySetContentOffset:(BOOL)arg1;
- (BOOL)isSubScrollingTriggeredBySetContentOffset;
- (void)setIsSubScrollingTriggeredBySetContentOffset:(BOOL)arg1;
- (BOOL)isHideNavBarSeqLine;
- (void)setIsHideNavBarSeqLine:(BOOL)arg1;
- (id)tabViewControllerList;
- (void)setTabViewControllerList:(id)arg1;
- (id)msgTabViewCtrl;
- (void)setMsgTabViewCtrl:(id)arg1;
- (id)videoTabViewCtrl;
- (void)setVideoTabViewCtrl:(id)arg1;
- (id)finderTabViewCtrl;
- (void)setFinderTabViewCtrl:(id)arg1;
- (id)audioTabViewCtrl;
- (void)setAudioTabViewCtrl:(id)arg1;
- (id)picTabViewCtrl;
- (void)setPicTabViewCtrl:(id)arg1;
- (id)articleTabV2ViewCtrl;
- (void)setArticleTabV2ViewCtrl:(id)arg1;
- (id)articleTabViewCtrl;
- (void)setArticleTabViewCtrl:(id)arg1;
- (id)audioTabV2ViewCtrl;
- (void)setAudioTabV2ViewCtrl:(id)arg1;
- (id)friendsLoveTabViewCtrl;
- (void)setFriendsLoveTabViewCtrl:(id)arg1;
- (BOOL)friendsLoveAccountUnavailable;
- (void)setFriendsLoveAccountUnavailable:(BOOL)arg1;
- (id)editorVc;
- (void)setEditorVc:(id)arg1;
- (id)tabSwipeGestureRecognizer;
- (void)setTabSwipeGestureRecognizer:(id)arg1;
- (double)tabSwipeStartOffsetX;
- (void)setTabSwipeStartOffsetX:(double)arg1;
- (long long)tabSwipeStartIndex;
- (void)setTabSwipeStartIndex:(long long)arg1;
- (BOOL)shouldSwitchTabViewWhenFirstPkgResp;
- (void)setShouldSwitchTabViewWhenFirstPkgResp:(BOOL)arg1;
- (unsigned int)naviBtnItemsType;
- (void)setNaviBtnItemsType:(unsigned int)arg1;
- (id)threeDotsNaviBtnItems;
- (void)setThreeDotsNaviBtnItems:(id)arg1;
- (id)followBtnNaviBtnItems;
- (void)setFollowBtnNaviBtnItems:(id)arg1;
- (id)followNaviButton;
- (void)setFollowNaviButton:(id)arg1;
- (BOOL)isFans;
- (void)setIsFans:(BOOL)arg1;
- (BOOL)hasReportFinderLiveExposed;
- (void)setHasReportFinderLiveExposed:(BOOL)arg1;
- (id)fuwuInfoList;
- (void)setFuwuInfoList:(id)arg1;
- (id)creatorReporter;
- (void)setCreatorReporter:(id)arg1;
- (id)urgePublishViewModel;
- (void)setUrgePublishViewModel:(id)arg1;
- (BOOL)hasLoadedUrgePublishInfo;
- (void)setHasLoadedUrgePublishInfo:(BOOL)arg1;
- (BOOL)shouldShowFriendSubscribeEntrance;
- (void)setShouldShowFriendSubscribeEntrance:(BOOL)arg1;
- (BOOL)friendSubscribePageUseFastLoad;
- (void)setFriendSubscribePageUseFastLoad:(BOOL)arg1;
- (BOOL)contactNeedUpdate;
- (void)setContactNeedUpdate:(BOOL)arg1;
- (id)interactionNotificationButton;
- (void)setInteractionNotificationButton:(id)arg1;
- (id)interactionRedDotEventKey;
- (void)setInteractionRedDotEventKey:(id)arg1;
- (BOOL)privateMsgScopeExptEnable;
- (void)setPrivateMsgScopeExptEnable:(BOOL)arg1;
- (id)outboxProvider;
- (void)setOutboxProvider:(id)arg1;
- (id)profileTracePageId;
- (void)setProfileTracePageId:(id)arg1;
- (BOOL)isProfileTraceReportDeferred;
- (void)setIsProfileTraceReportDeferred:(BOOL)arg1;
- (id)noIntroMoreGuideBubble;
- (void)setNoIntroMoreGuideBubble:(id)arg1;
- (id)noIntroMoreGuideRedDotButton;
- (void)setNoIntroMoreGuideRedDotButton:(id)arg1;
- (BOOL)hasShownNoIntroMoreGuideInPage;
- (void)setHasShownNoIntroMoreGuideInPage:(BOOL)arg1;
- (BOOL)noIntroMoreGuideRedDotVisible;
- (BOOL)hasClickedMoreButtonInPage;
- (void)setHasClickedMoreButtonInPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
