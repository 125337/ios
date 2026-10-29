@interface NewBrandUserContactInfoAssist : CBaseContactInfoAssist <UIActionSheetDelegate, IBrandAttrMgrExt, BrandProfileSettingViewControllerDelegate, IHDHeadImageViewExt, IWCDeviceBrandMgrExt, BrandProfileHeaderViewDelegate, BrandProfileTopicViewDelegate, BrandProfileTabViewDelegate, UIScrollViewDelegate, BrandProfileFuwuActionSheetDelegate, BrandProfileBaseTabViewControllerDelegate, BrandProfileMsgTabViewControllerDelegate, BrandFinderLiveMgrExt, WCFinderBrandStreamProfileVCDelegate, WCBrandPageSheetTitleViewDelegate, MMPageSheetGestureRecognizerDelegate, UIGestureRecognizerDelegate, WCFinderLiveExt, BrandProfileNaviLiveBarDelegate>
{
    BOOL _isFocusBeforeFetchFirstPkg; // +0x50
    BOOL _isJustAddedContact; // +0x51
    BOOL _isSearchAcitive; // +0x52
    BrandProfileCgiContext * _cgiContext; // +0x58
    BizProfileV2Resp * _cacheItem; // +0x60
    BrandProfileReporter * _reporter; // +0x68
    BizServiceMenuButton * _selectedFuwu; // +0x70
    unsigned long long _selectedFuwuIdx; // +0x78
    MMHDHeadImageView * _hdAvatarView; // +0x80
    WCADPageWrap * _profilePageWrap; // +0x88
    BOOL _isCurrViewCtrlPushing; // +0x90
    BOOL _isClickSearchButtonWhenCurrViewCtrlPushing; // +0x91
    UIScreenEdgePanGestureRecognizer * _pageSheetEdgePanGesture; // +0x98
    double _pageSheetEdgePanProgress; // +0xa0
    double _pageSheetContentOffset; // +0xa8
    BOOL _isCeiling; // +0xb0
    BOOL _isMainScrollingTriggeredBySetContentOffset; // +0xb1
    BOOL _isSubScrollingTriggeredBySetContentOffset; // +0xb2
    BOOL _isHideNavBarSeqLine; // +0xb3
    BOOL _shouldSwitchTabViewWhenFirstPkgResp; // +0xb4
    BOOL _hasReportFinderLiveExposed; // +0xb5
    BOOL _shouldShowFriendSubscribeEntrance; // +0xb6
    BOOL _friendSubscribePageUseFastLoad; // +0xb7
    unsigned int _searchFromIndex; // +0xb8
    unsigned int _naviBtnItemsType; // +0xbc
    NSString * _searchKeyword; // +0xc0
    NSString * _searchExtraParamsString; // +0xc8
    BrandProfileEnterInfo * _bpeInfo; // +0xd0
    id <ContactInfoAssistDelegate> _delegate; // +0xd8
    UIScrollView * _mainScrollView; // +0xe0
    UIScrollView * _subScrollView; // +0xe8
    BrandProfileHeaderView * _headerView; // +0xf0
    BrandProfileTabView * _tabView; // +0xf8
    BrandProfileFuwuActionSheet * _actionSheet; // +0x100
    WCBrandPageSheetTitleView * _profileTitleView; // +0x108
    BrandProfileNaviLiveBar * _liveTipsBar; // +0x110
    MMUIButton * _profileUnfocusBtn; // +0x118
    long long _tabViewFuwuIndex; // +0x120
    NSMutableArray * _tabViewControllerList; // +0x128
    BrandProfileMsgTabViewController * _msgTabViewCtrl; // +0x130
    BrandProfileVideoTabViewController * _videoTabViewCtrl; // +0x138
    WCFinderBrandStreamProfileViewController * _finderTabViewCtrl; // +0x140
    _TtC6WeChat34BrandProfileAudioTabViewController * _audioTabViewCtrl; // +0x148
    NSMutableArray * _threeDotsNaviBtnItems; // +0x150
    NSMutableArray * _followBtnNaviBtnItems; // +0x158
    NSArray * _fuwuInfoList; // +0x160
}
- (void)dealloc;
- (id)initWithContact:(id)arg1 delegate:(id)arg2 profileEnterInfo:(id)arg3;
- (void)setupMainScrollView;
- (void)setupHeaderView;
- (void)setupTabView;
- (void)setupSubScrollView;
- (void)setupNaviBtnItems;
- (void)scrollToTabIfNeeded:(BOOL)arg1;
- (void)loadConfig;
- (void)loadLocalCache;
- (void)cleanFuwuInfoCache;
- (BOOL)isVideoTabTypeInValid;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidAppear;
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
- (id)genWebViewExtraInfoFromSourceMessage;
- (void)showLiveRoomWithViewModel:(id)arg1;
- (void)fetchProfileFirstPkg;
- (BOOL)shouldForceHideNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)updateNavigationBarSubviews;
- (void)setNaviBtnItemsType:(unsigned int)arg1 reasonStr:(id)arg2;
- (void)updateNavBarTitleWhenAboveHeaderArea:(BOOL)arg1;
- (void)updatePageSheetTitleWhenAboveHeaderArea:(BOOL)arg1;
- (void)updateNavigationBarRightButton;
- (id)genFollowBtn;
- (id)genBrandProfileTitleView;
- (BOOL)needShowFinderFeedsBlockOptionInActionSheet;
- (BOOL)isFinderFeedsBlocked;
- (id)blockFinderWording;
- (void)showActionSheetForRightButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)opLogTopSession:(BOOL)arg1;
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
- (void)onShopWindowButtonClicked:(id)arg1;
- (void)onMoreRecommendFollowClicked:(id)arg1 sessionId:(id)arg2;
- (void)onRecommendFollowViewExposed:(id)arg1;
- (void)onRecommendFollowCellExposed:(id)arg1;
- (void)onRecommendFollowCellClicked:(id)arg1 sessionId:(id)arg2 reportJsonStr:(id)arg3;
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
- (void)recordProfilePageWrap;
- (void)profileDestory;
- (void)jumpToBrandSearchView:(id)arg1 scene:(unsigned long long)arg2;
- (void)onSearchClicked;
- (unsigned int)transToReportScene;
- (void)setupFakeBlankView;
- (void)reGenTopicViewData;
- (void)reGenTabViewData;
- (unsigned long long)getTabIndexWithTabType:(unsigned long long)arg1;
- (unsigned long long)getInitializeTabIndex;
- (void)viewDidLayoutSubviews;
- (void)layoutAllSubviews;
- (void)layoutSubScrollView;
- (double)aboveHeaderViewAreaHeight;
- (void)onTabButtonCreated:(id)arg1 itemInfo:(id)arg2;
- (void)tabView:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 selectType:(unsigned long long)arg4;
- (void)onFetchBizProfile:(id)arg1 resp:(id)arg2 action:(int)arg3 userInfo:(id)arg4;
- (void)handleFirstPkgFail:(long long)arg1;
- (void)handleFirstPkgResp:(id)arg1;
- (void)onBizProfileSettingModified:(id)arg1 setting:(id)arg2 finderUserName:(id)arg3;
- (void)notifyFinderTabWhenExitIfNeed;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)subScrollViewDidEndDrag;
- (BOOL)isAboveHeaderArea;
- (id)getBrandContact;
- (unsigned int)getBrandMPPageEnterReportScene;
- (id)getSearchClickId;
- (unsigned int)getPageMode;
- (void)subTableViewDidScroll:(id)arg1;
- (void)subScrollViewWillTriggerScroll:(id)arg1;
- (void)onTopicButtonClicked:(id)arg1;
- (void)onTopicUnfoldButtonClicked:(BOOL)arg1;
- (void)convertSoftbankEmoji2UnifiedEmojiInMenuInfo:(id)arg1;
- (id)getTopicInfoListFromCacher;
- (id)convertTopicItemItem2TopicInfo:(id)arg1;
- (id)getFuwuInfoListFromCacher;
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
- (BOOL)isInPageSheet;
- (void)onPageSheetUpdated;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)setupPageSheetEdgeGesture;
- (void)handlePageSheetEdgeAction:(id)arg1;
- (void)onEnterBrandProfileFromTitle:(BOOL)arg1;
- (void)onPageSheetTitleClicked;
- (void)onNameLabelClicked;
- (void)onRedPacketBannerExposed;
- (void)onFriendSubscribeBtnClicked:(id)arg1;
- (void)onFriendSubscribeBtnExposed:(id)arg1;
- (BOOL)isHalfScreen;
- (void)onHalfScreenSearchClick;
- (void)onHalfScreenMoreClick;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (id)liveTipsBar;
- (void)switchBlockFinderStatus;
- (BOOL)shouldFobidPopWhenDeleteContact;
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
- (id)mainScrollView;
- (void)setMainScrollView:(id)arg1;
- (id)subScrollView;
- (void)setSubScrollView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)profileTitleView;
- (void)setProfileTitleView:(id)arg1;
- (void)setLiveTipsBar:(id)arg1;
- (id)profileUnfocusBtn;
- (void)setProfileUnfocusBtn:(id)arg1;
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
- (BOOL)shouldSwitchTabViewWhenFirstPkgResp;
- (void)setShouldSwitchTabViewWhenFirstPkgResp:(BOOL)arg1;
- (unsigned int)naviBtnItemsType;
- (void)setNaviBtnItemsType:(unsigned int)arg1;
- (id)threeDotsNaviBtnItems;
- (void)setThreeDotsNaviBtnItems:(id)arg1;
- (id)followBtnNaviBtnItems;
- (void)setFollowBtnNaviBtnItems:(id)arg1;
- (BOOL)hasReportFinderLiveExposed;
- (void)setHasReportFinderLiveExposed:(BOOL)arg1;
- (id)fuwuInfoList;
- (void)setFuwuInfoList:(id)arg1;
- (BOOL)shouldShowFriendSubscribeEntrance;
- (void)setShouldShowFriendSubscribeEntrance:(BOOL)arg1;
- (BOOL)friendSubscribePageUseFastLoad;
- (void)setFriendSubscribePageUseFastLoad:(BOOL)arg1;
- (void).cxx_destruct;
@end

