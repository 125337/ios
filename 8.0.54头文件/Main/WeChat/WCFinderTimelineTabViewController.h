@interface WCFinderTimelineTabViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderContactExt, WCFinderMentionExt, WCSearchDelegate, WCDataSearchDelegate, WCCommitViewResultDelegate, WCFinderRedDotNotifyExt, MMScrollActionSheetDelegate, UISearchBarDelegate, WCFinderPostingCommentExt, WCFinderRedDotExt, WCFinderTipsViewControllerDelegate, WCFinderUserPrepareCgiDelegate, WCFinderRecommendTabsViewDelegate, WCFinderNearbyViewControllerDelegate, CAAnimationDelegate, WCFinderFullFeedMachineViewControllerDelegate, WCFinderFollowViewControllerDelegate, WCFinderPostDataItemExt, WCFinderFullFeedRecommendViewControllerDelegate, WCFinderAppPushExt, CNetworkStatusExt, WCFinderNetworkFreeFlowExt, WCFinderMinimizeDelegate, WCFinderFullMultiMediaTableViewCellBifrostExt, WCFinderTimelineTabBubbleDelegate, WCFinderShareCustomTransitionProtocol, WCFinderFeedListTransitionHelperBehavior, WCFinderNavTeenagerViewDelegate, WCFinderPostMgrDelegate, WCFinderLongVideoExt, WCFinderVideoPIPExt, WCFinderFastSwipeExt, SnapshotPrinterViewProtocol, WCFinderPersonalizedSettingExt, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _isNeedCheckFastLeave; // +0x68
    BOOL _hasReportCreateEvent; // +0x69
    BOOL _useNearbyLive; // +0x6a
    BOOL _isLimitedModeOn; // +0x6b
    BOOL _cameraLongPressRightButton; // +0x6c
    BOOL _isViewWillAppeaer; // +0x6d
    BOOL _timelineNoMoreCanShowHotSwitch; // +0x6e
    BOOL _isLandScape; // +0x6f
    BOOL _timelineScrollPageFeature; // +0x70
    BOOL _alreadyCheckLimitModeGuide; // +0x71
    BOOL _halfScreenIsShowState; // +0x72
    BOOL _isFromMiniFloat; // +0x73
    BOOL _postFeedInsertMachineTab; // +0x74
    BOOL _showPostMenu; // +0x75
    BOOL _cancelSpeedViewAnimateBlock; // +0x76
    long long _lastTabType; // +0x78
    id <WCFinderTimelineTabViewControllerDelegate> _m_delegate; // +0x80
    unsigned long long _guideBarObjectId; // +0x88
    WCFinderOpenTimelineParams * _openTimelineParams; // +0x90
    WCFinderTimelineTabBubbleController * _tabBubbleCtrl; // +0x98
    unsigned long long _enterScene; // +0xa0
    WCFinderAppendTabDatasModel * _appendTabDatasModel; // +0xa8
    UIView * _midView; // +0xb0
    WCFinderRecommendTabsView * _tabContainer; // +0xb8
    WCFinderPlaybackSpeedView * _playbackSpeedView; // +0xc0
    UIButton * _rightBarButton; // +0xc8
    UIView * _notifyRedPoint; // +0xd0
    UIView * _postCameraRedPoint; // +0xd8
    WCFinderCreateCoordinator * _createCoordinator; // +0xe0
    MMScrollView * _timelineScrollView; // +0xe8
    UIImageView * _collectThumbImageView; // +0xf0
    FinderNewUserPrepareResponse * _prepareResponse; // +0xf8
    UIView * _shadeView; // +0x100
    long long _enterTLTabByFindPage; // +0x108
    NSMutableArray<WCFinderTabViewControllerProtocol><WCFinderFeedBaseViewControllerProtocol> * _viewControllersArray; // +0x110
    MMUIButton * _minimizeButton; // +0x118
    WCFinderTLUnreadModel * _unreadModel; // +0x120
    NSNumber * _halfScreenMoveProgress; // +0x128
    WCFinderSearchStatReportShim * _searchStatCollecter; // +0x130
    FinderRecommendCloseConfig * _recommentCloseConfig; // +0x138
    WCFinderNavTeenagerView * _teenagerNavView; // +0x140
    NSMutableArray * _rightBtnItemList; // +0x148
    FinderTeenagerInfo * _teenagerInfo; // +0x150
    WCFinderPostMgr * _timelinePostMgr; // +0x158
    WCFinderFeedAudioHelper * _feedAudioHelper; // +0x160
    NSMutableDictionary * _feedPostInfoDic; // +0x168
    WCFinderLeadToMachineCellState * _leadToMachineCellState; // +0x170
    long long _lastMachineRefreshTimeStamp; // +0x178
    long long _machineTabConfigStyle; // +0x180
}
+ (unsigned long long)getPostJumpTargetTabType;
+ (id)genPatMusicInfoByInfo:(id)arg1 contentVM:(id)arg2;
+ (id)genPatMusicInfoByInfo:(id)arg1 dataItem:(id)arg2;
+ (long long)getTargtTabTypeWith:(id)arg1;
+ (long long)filterWeChatSwitchByTargetTabType:(long long)arg1;
+ (BOOL)isInitNeedRedDotSwitchTabWithCtrlType:(unsigned long long)arg1;
+ (long long)getLastTabType;
+ (id)viewControllerDict;
+ (BOOL)enableShowMachineTab;
+ (BOOL)enableShowMachineTabFromSvrConfig:(id)arg1;
+ (BOOL)enableShowRecommendTabFromSvrConfig:(id)arg1;
+ (BOOL)enableShowFollowTabFromSvrConfig:(id)arg1;
+ (int)commentSceneFromTabType:(long long)arg1;
+ (int)convertToMMFinderTabType:(long long)arg1;
- (void)onMemberShipFeedPostSessionStartUpload:(id)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (BOOL)isPostFromMusicScene:(unsigned long long)arg1;
- (BOOL)isShouldPopToTimelineVC:(Class)arg1;
- (void)delayPostWithPostSession:(id)arg1;
- (void)_updateTabByPostAction;
- (void)updateTargetRefreshLogic:(long long)arg1 enableRefresh:(BOOL)arg2;
- (void)openPersonalCenterWithPostAction:(BOOL)arg1 fromScene:(unsigned long long)arg2;
- (void)onFeedShowPostEntranceByContentVM:(id)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)updatePostMgrConfig;
- (void)updateFeedPostInfoBy:(id)arg1 onLoadingState:(BOOL)arg2;
- (BOOL)feedPostIsOnLoadingStateBy:(id)arg1;
- (void)updateFeedPostInfoBy:(id)arg1 musicInfo:(id)arg2;
- (id)feedPostMusicInfoBy:(id)arg1;
- (id)onPostFollowMuiscFeedId:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)arg1 postMgr:(id)arg2;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)onPostMusicIds:(id)arg1;
- (id)onPostFollowTopicFeedId:(id)arg1;
- (id)postMgrGetMusicInfo;
- (id)postMgrSourceInfo:(id)arg1;
- (id)postMgrAttachTextContent:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (void)triggerPostActionByCheckAudioTrack:(id)arg1;
- (void)_tiggerPostActionByPostMgr:(id)arg1 fromAudioExtract:(BOOL)arg2;
- (void)extractAudioTrackFromFeedByPostMgr:(id)arg1;
- (BOOL)postMgrEnableOpenAlbum:(id)arg1;
- (void)onTLFeedClickMiaoJianMusic:(id)arg1 musicId:(id)arg2 tingListenId:(id)arg3;
- (void)navTipsTriggerCheckShow;
- (void)navTipsRemoveTipsView;
- (void)navTipsUpdateTipsModeStyle:(unsigned long long)arg1;
- (void)navTipsPackUpTipsView;
- (void)navTipsResetState;
- (void)resetTeenagerNavState;
- (void)removeTeenageNavView;
- (BOOL)triggerTeenagerProtectCheck;
- (void)showTeenagerNavView;
- (void)packupTeenagerNavView;
- (void)hiddenProtectButtons;
- (void)hiddenRightButtonsFlag:(long long)arg1;
- (BOOL)teenagerNavIsOn;
- (void)navTipsUpdateButtonsState;
- (void)navTeenagerClickAction;
- (id)getNavItemIconColor;
- (id)feedPostInfoDic;
- (id)feedAudioHelper;
- (id)teenagerNavView;
- (id)timelinePostMgr;
- (id)initWithRedDotCtrlInfo:(id)arg1;
- (id)initWithTargetTabType:(long long)arg1;
- (void)_prepare;
- (void)reportFluencyInfo;
- (void)adjustTitleViewX;
- (void)viewWillLayoutSubviews;
- (void)updateTimelineScrollViewContentSize;
- (void)viewDidLoad;
- (void)updateLimitedModeState;
- (void)applicationWillEnterForeground;
- (void)preloadSearchPageOnEnterForegroundIfNeeded;
- (void)preloadMainSearchPage:(unsigned int)arg1;
- (void)triggerCheckNetTips;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (id)shadeView;
- (void)updateCurLayoutAccordingToLastTabTypeState;
- (id)getCurrentSelectedVC;
- (id)currentContentTid;
- (id)currentContentVM;
- (id)getViewControllerBy:(long long)arg1;
- (void)updateFinderAppendDatasWith:(id)arg1;
- (void)fetchUserPrepareForUpdateContact;
- (void)initScrollView;
- (double)_getTabContainerWid;
- (id)tabConfigs;
- (void)checkTabContainerView;
- (void)updateNavTitleView;
- (void)updateNavTitleViewIgnoreAppearState:(BOOL)arg1;
- (void)_updateTabContainerView;
- (void)recardBubbleCtrlFrames;
- (BOOL)setUpNaviTabItemRedDotAs:(long long)arg1;
- (id)covertStreamRedDotTypeToKeyPath:(int)arg1 andTabType:(int *)arg2;
- (void)updateRightBarButtonItem;
- (void)updateRightBarButtonItemHiddenNotify:(BOOL)arg1;
- (void)updateRightBarButtonItemIgnoreAppearState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)debounceTriggerRightNotifyUpdateByState:(BOOL)arg1;
- (void)onLimitedClicked;
- (unsigned long long)getCurMsgNavUIModeStyle;
- (id)getNavRightTargetType:(unsigned long long)arg1;
- (long long)getCurrentTabFeedNum;
- (void)updateLeftMenuItemBtnAnimated:(BOOL)arg1;
- (id)buttonItemWithNavCustomView:(id)arg1;
- (id)fetchMinimizeButton;
- (BOOL)showSearchBtn;
- (id)fetchSearchBtnItem:(BOOL)arg1;
- (void)reportNavButtonExpose;
- (id)navButtonSDKReportParams;
- (BOOL)showNavPostBtn;
- (id)fetchPostBtnItem;
- (BOOL)enableMinimize;
- (BOOL)shouldHiddenMinimizeButton:(long long)arg1;
- (void)checkRemoveNotifyRedPoint;
- (void)_updateRightNotifyRedPointIgnoreAppearState:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)onClickMinimizeButton;
- (void)onPostClick;
- (void)onSearchClicked;
- (void)reportRightBarItemRedDot;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_openJumpInfoPageWithCtrlInfo:(id)arg1;
- (void)reportCurSearchExposeState;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)checkTeenagerInfo;
- (id)conflictGestureScrollViews;
- (void)willDisappear;
- (void)dealloc;
- (void)checkCacheTabLogic;
- (BOOL)useTransparentNavibar;
- (void)updateLastTabTypeWithAnimTabType:(long long)arg1;
- (id)getMachineTabPullStreamFindFriendRedDot;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadSubViewControlerLocalDataWithScrollPercent:(double)arg1 fromTabType:(long long)arg2;
- (void)updateShadeViewWithScrollPercent:(double)arg1 fromTabType:(long long)arg2;
- (void)updateMinimizeButtonWithScrollPercent:(double)arg1 fromTabType:(long long)arg2;
- (long long)getTargetTabTypeByScrollPercent:(double)arg1 fromTabType:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScroll;
- (void)enterTimelineVCDataReportWithRedDotId:(id)arg1;
- (void)enterTimelineVCRecordEnterInfo;
- (void)enterTimelineForCheckAction;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateVCLandStatus:(CGSize)arg1;
- (void)updateTimelineScrollViewPageEnabledState;
- (BOOL)enableTimelineScrollPageFeature;
- (void)onPersonalCenterButtonClicked;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReload;
- (void)onFinderNotifyTimelineShouldShowRedDot;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)fastSwipeCountChanged:(long long)arg1 tabType:(long long)arg2;
- (BOOL)enableTLTabResponseToRefreshAction;
- (void)handleMachineTabRefreshAction:(long long)arg1 tabType:(long long)arg2;
- (void)changeMachineTabConfigStyle:(long long)arg1 byFastSwipe:(BOOL)arg2;
- (void)reportMachineTabTextChangeReport:(id)arg1 afterText:(id)arg2 byFastSwipe:(BOOL)arg3;
- (void)resetMachineRefreshBubbleState;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)recheckTabBubbleWithRevokePath:(id)arg1;
- (void)reportTimelineTabRedDot:(long long)arg1 actionType:(unsigned long long)arg2;
- (void)reportTimelineTabRedDot:(long long)arg1 actionType:(unsigned long long)arg2 isTriggerByUser:(BOOL)arg3;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)syncPostActionSheetConfigToLocalWith:(id)arg1;
- (void)onTabsViewSingleClickTabIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)onFeedReccommendClickMoreHotContent;
- (void)handleTabSingleClickRefreshActionFromIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)handleTabDoubleClickRefreshActionFromIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)obBubbleClickRefreshBubble;
- (void)onTabsViewDoubleClickTabIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)selectTabIndex:(long long)arg1 manualyTappedType:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)changeSelectTabWithAnimated:(BOOL)arg1 index:(long long)arg2 completion:(id /* block */)arg3;
- (BOOL)timelineScrollViewIsScrolling;
- (void)afterTabChanged:(long long)arg1 manualyTappedType:(unsigned long long)arg2 doubleClicked:(BOOL)arg3;
- (void)hiddenCtrlBubbleAfterSwitchTab:(unsigned long long)arg1 toCategory:(long long)arg2;
- (BOOL)needAnimationSwitchTab:(unsigned long long)arg1;
- (void)selectedTabWillChanged:(long long)arg1 toTab:(long long)arg2 manualyTappedType:(unsigned long long)arg3;
- (BOOL)onFollowEnableShowMachineTab;
- (void)onTLCheckPopupDisplayAtTabType:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(id)arg3 isFocusFeed:(BOOL)arg4 enablePopUpShow:(BOOL)arg5;
- (void)onTLFeedMediaDidEndPlay:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(id)arg3;
- (BOOL)enableJumpToTargetTabType:(unsigned long long)arg1;
- (void)initSubViewControllers;
- (id)createFollowVC;
- (unsigned long long)getCurFollowVCStyle;
- (void)setViewController:(id)arg1;
- (BOOL)shouldShowRedDotForTab:(long long)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)supportRotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)removeNaviNotifyRedDotPoint;
- (void)setIsViewWillAppeaer:(BOOL)arg1;
- (void)updateTabSelectState:(long long)arg1 toTab:(long long)arg2 manualyTappedType:(unsigned long long)arg3;
- (void)deselectAllChildViewControllers;
- (void)stopUnSelectTabVideoPlay:(long long)arg1;
- (id)getAppendTabDatasModelWithTab:(long long)arg1;
- (BOOL)onFeedRecommendIsByFindPage;
- (id)onRecommendGetAppendTabDatasModel;
- (id)onFollowGetTimelineTabConfig;
- (id)onRecommendGetTimelineTabConfig;
- (id)onRecommendGetHotTabLastBuff;
- (BOOL)onFeedRecommendGetHotTabNeedTopRefresh;
- (BOOL)getHotTabNeedTopRefresh;
- (void)onRecommendTopRefreshFinished:(BOOL)arg1 byTopRefresh:(BOOL)arg2;
- (BOOL)onRecommendTimelineNoMoreCanShowHotSwitch;
- (void)onFeedRecommendClickHotCardItemWithContentArray:(id)arg1 scrollToContentVM:(id)arg2;
- (void)onFeedRecommendShowJumpViewWithContentArray:(id)arg1;
- (void)onFeedRecommendClickJumpView;
- (void)onClickLeadToMachineTabWithDataItem:(id)arg1;
- (void)onClickLeadToOtherTabWithPlaceHolderInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)resetAllTimelineTabBubbleViews;
- (BOOL)onFollowIsByFindPage;
- (id)onFollowGetAppendTabDatasModel;
- (void)onFeedFollowClickMoreHotContent;
- (void)onFollowTopRefreshFinished:(BOOL)arg1 byTopRefresh:(BOOL)arg2;
- (BOOL)onFollowTimelineNoMoreCanShowHotSwitch;
- (id)getTabViewControllerWithType:(long long)arg1;
- (BOOL)onMachineFIsByFindPage;
- (id)onMachineGetAppendTabDatasModel;
- (void)onMachineResetAppendTabDatasModel;
- (void)onRecommendResetAppendTabDatasModel;
- (void)onFollowResetAppendTabDatasModel;
- (void)onMachineTopRefreshFinished:(BOOL)arg1 byTopRefresh:(BOOL)arg2;
- (void)onMachineMsgBubbleAlphaChanged:(double)arg1;
- (void)onMachineFetchSucBySpecialRequestScene:(int)arg1;
- (BOOL)getTimelineHalfScreenIsShow;
- (void)timelineTabHalfScreenIsShow:(BOOL)arg1;
- (void)timelineTabHalfScreenProgressChanged:(id)arg1;
- (id)getTimelineTabHalfScreenProgress;
- (id)getLeadToMachineCellState;
- (void)onTimelineTabVCCurrentFeedPlayRateChange:(double)arg1;
- (void)onTimelineTabVCWillStartPlayRateViewAnimation:(double)arg1;
- (void)onTimelineTabVCShowSettingPlayRateAnimatedWithRate:(double)arg1;
- (id)timelineTabVCGetCurrentPlayableContentVMWithTabType:(int)arg1;
- (void)setHalfScreenIsShowState:(BOOL)arg1;
- (void)onTimelineTabVC:(id)arg1 byUser:(BOOL)arg2 byTopRefresh:(BOOL)arg3;
- (void)onTimelineTabVCTopRefeshTriggleLoading:(id)arg1 enterRefresh:(BOOL)arg2 byTopRefresh:(BOOL)arg3;
- (void)showMachineTabTopRefreshTipsView:(BOOL)arg1;
- (void)showMachineTabTopRefreshTipsView:(BOOL)arg1 byFastSwipe:(BOOL)arg2;
- (void)onMediaCellPreparedContent;
- (void)onCurrentForceIndexPathDidChangedAboveNewFeed:(BOOL)arg1 curFeedIndex:(unsigned long long)arg2;
- (id)tabBubbleCtrl;
- (void)onTimelineTabVC:(id)arg1 updatestreamTipsShowInfo:(id)arg2 delayBubble:(id)arg3 originCtrlInfo:(id)arg4;
- (void)tryShowLimitModeGuideView;
- (void)onMachineUpdateTabSesstionID;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onMachineFeedVMDataPullRefreshError:(int)arg1;
- (void)onMachineFeedChanged;
- (void)onRecommendFeedChanged;
- (void)onFollowFeedChanged;
- (id)onTabUnreadCacheFeedsWithoutTab:(long long)arg1;
- (void)currentTabViewControllerPushOthers:(int)arg1;
- (void)onMachineResetTLRefreshState;
- (void)currentTabViewControllerPopOthers:(int)arg1;
- (void)onCurrentFocusContentVMChanged:(id)arg1 contentVM:(id)arg2;
- (void)onCategoryNearbyBePushed;
- (void)reportNearByAndChangeTabContextID;
- (void)onStreamNearbyDisappear;
- (void)onNearByViewBePushed;
- (id)getTimelineTabPrefetchLastBuff:(long long)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)onFollowGetHotTabLastBuff;
- (BOOL)onFollowGetHotTabNeedTopRefresh;
- (void)checkAbnormalLiveIfNeeded;
- (void)onFinderAPNsPushBeClicked;
- (void)onSwitchScene:(id)arg1;
- (BOOL)timelineBubbleIsShowing;
- (double)timelineBubbleViewBottom;
- (BOOL)isShowingScrollUpGuide:(long long)arg1;
- (void)resetTabRefreshState:(long long)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)checkAndShowNetworkTips;
- (void)networkFreeFlowStatusChange;
- (void)triggerTabRefreshByTeenagerModeChange;
- (void)showTeenagerBlockAlertView;
- (void)onOpenMinimizedFromFloatingView:(id)arg1;
- (void)onMinimizeResotreContentView:(id)arg1 cleanPauseStatus:(BOOL)arg2;
- (id)minimizePageBizKey;
- (void)updateNewMinimizeInfo:(id)arg1;
- (id)requestMinimizeInfo:(BOOL)arg1;
- (BOOL)checkIsDisableMinimize;
- (BOOL)checkNeedInterruptMinimize;
- (BOOL)dismissMinimizeWhenLimitMode;
- (BOOL)shouldMinimizePageWhenSlideRight;
- (id)minimizeConflictScrollViews;
- (BOOL)shouldAutoMinimizeWhenPopOrDismiss;
- (void)onBubblePopupPanelViewClickForFeedId:(id)arg1;
- (void)onBubblePopupPanelViewWillShowForFeedId:(id)arg1;
- (double)getCurBubbleEnterStreamTipsY;
- (void)onBubbleEnterStreamTipsShow:(id)arg1 bubbleCtrl:(id)arg2;
- (void)onBubbleEnterStreamTipsClick:(id)arg1 bubbleCtrl:(id)arg2;
- (id)getEnterStreamTipsReportParams:(id)arg1;
- (void)onBubbleNetTipsShow;
- (void)onBubbleNetTipsDisappear;
- (BOOL)currentTabContainTargetFeedId:(id)arg1;
- (void)onBubbleCtrlOnHeightChanged:(id)arg1;
- (void)onBubbleCtrl:(id)arg1 dismisssBubbleWithShowInfo:(id)arg2;
- (void)onBubbleCtrl:(id)arg1 showBubbleWithShowInfo:(id)arg2;
- (void)onBubbleCtrlDidClick:(id)arg1 category:(long long)arg2 redDotInfo:(id)arg3;
- (void)onBubbleBottomChange:(double)arg1;
- (void)tryReportClickTLBubbleWithoutHeadRedDot:(long long)arg1 fromTab:(long long)arg2;
- (void)reportTLBubbleWithoutHeadTabRedDot:(id)arg1 eventType:(long long)arg2 scene:(int)arg3;
- (void)reportTLBubbleRedDotWithInfo:(id)arg1 eventType:(long long)arg2;
- (void)reportTLBubbleRedDotWithEid:(id)arg1 event:(long long)arg2 showInfo:(id)arg3 scene:(int)arg4;
- (void)portraitPressSeedPlayStateChanged:(BOOL)arg1;
- (void)registerYReportSdk;
- (BOOL)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;
- (id)transitionHelperFetchCurrentPlayTid;
- (BOOL)shouldStartEdgeSwipeGestureWithPoint:(CGPoint)arg1;
- (void)onPopToTimeLineAndDismissPresentedVC:(id /* block */)arg1;
- (BOOL)enablePushSwipeGestureForViewController:(id)arg1;
- (id)pushSwipeGestureDestinationForViewController:(id)arg1;
- (BOOL)pushSwipeGestureShouldBeginWithLocation:(CGPoint)arg1;
- (void)onOpenFinderLongVideoViewController:(id /* block */)arg1;
- (void)finderVideoPipWindowStart:(id)arg1;
- (void)finderVideoPipWindowRecover:(id)arg1;
- (void)wechatPersonalizedChangeType:(long long)arg1 value:(BOOL)arg2;
- (id)extInfoForSnapshotPrinter;
- (BOOL)isNeedCheckFastLeave;
- (void)setIsNeedCheckFastLeave:(BOOL)arg1;
- (BOOL)hasReportCreateEvent;
- (void)setHasReportCreateEvent:(BOOL)arg1;
- (long long)lastTabType;
- (void)setLastTabType:(long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)useNearbyLive;
- (void)setUseNearbyLive:(BOOL)arg1;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (BOOL)isLimitedModeOn;
- (void)setIsLimitedModeOn:(BOOL)arg1;
- (id)openTimelineParams;
- (void)setOpenTimelineParams:(id)arg1;
- (void)setTabBubbleCtrl:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)appendTabDatasModel;
- (void)setAppendTabDatasModel:(id)arg1;
- (id)midView;
- (void)setMidView:(id)arg1;
- (id)tabContainer;
- (void)setTabContainer:(id)arg1;
- (id)playbackSpeedView;
- (void)setPlaybackSpeedView:(id)arg1;
- (id)rightBarButton;
- (void)setRightBarButton:(id)arg1;
- (id)notifyRedPoint;
- (void)setNotifyRedPoint:(id)arg1;
- (id)postCameraRedPoint;
- (void)setPostCameraRedPoint:(id)arg1;
- (BOOL)cameraLongPressRightButton;
- (void)setCameraLongPressRightButton:(BOOL)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (BOOL)isViewWillAppeaer;
- (id)timelineScrollView;
- (void)setTimelineScrollView:(id)arg1;
- (BOOL)timelineNoMoreCanShowHotSwitch;
- (void)setTimelineNoMoreCanShowHotSwitch:(BOOL)arg1;
- (id)collectThumbImageView;
- (void)setCollectThumbImageView:(id)arg1;
- (id)prepareResponse;
- (void)setPrepareResponse:(id)arg1;
- (BOOL)isLandScape;
- (void)setIsLandScape:(BOOL)arg1;
- (void)setShadeView:(id)arg1;
- (BOOL)timelineScrollPageFeature;
- (void)setTimelineScrollPageFeature:(BOOL)arg1;
- (long long)enterTLTabByFindPage;
- (void)setEnterTLTabByFindPage:(long long)arg1;
- (id)viewControllersArray;
- (void)setViewControllersArray:(id)arg1;
- (BOOL)alreadyCheckLimitModeGuide;
- (void)setAlreadyCheckLimitModeGuide:(BOOL)arg1;
- (id)minimizeButton;
- (void)setMinimizeButton:(id)arg1;
- (id)unreadModel;
- (void)setUnreadModel:(id)arg1;
- (BOOL)halfScreenIsShowState;
- (id)halfScreenMoveProgress;
- (void)setHalfScreenMoveProgress:(id)arg1;
- (id)searchStatCollecter;
- (void)setSearchStatCollecter:(id)arg1;
- (BOOL)isFromMiniFloat;
- (void)setIsFromMiniFloat:(BOOL)arg1;
- (id)recommentCloseConfig;
- (void)setRecommentCloseConfig:(id)arg1;
- (BOOL)postFeedInsertMachineTab;
- (void)setPostFeedInsertMachineTab:(BOOL)arg1;
- (void)setTeenagerNavView:(id)arg1;
- (id)rightBtnItemList;
- (void)setRightBtnItemList:(id)arg1;
- (id)teenagerInfo;
- (void)setTeenagerInfo:(id)arg1;
- (void)setTimelinePostMgr:(id)arg1;
- (void)setFeedAudioHelper:(id)arg1;
- (void)setFeedPostInfoDic:(id)arg1;
- (id)leadToMachineCellState;
- (void)setLeadToMachineCellState:(id)arg1;
- (long long)lastMachineRefreshTimeStamp;
- (void)setLastMachineRefreshTimeStamp:(long long)arg1;
- (long long)machineTabConfigStyle;
- (void)setMachineTabConfigStyle:(long long)arg1;
- (BOOL)showPostMenu;
- (void)setShowPostMenu:(BOOL)arg1;
- (BOOL)cancelSpeedViewAnimateBlock;
- (void)setCancelSpeedViewAnimateBlock:(BOOL)arg1;
- (void).cxx_destruct;
@end

