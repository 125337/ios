@interface NewMainFrameViewController : MMTabBarBaseViewController <WAMainFrameTaskBarLogicDelegate, SelectContactsViewControllerDelegate, MFTitleViewDelegate, MMUIViewControllerExt, MMConfigMgrExt, BrandTimelineMsgMgrExt, BSTimelineMsgMgrExt, TextStateMgrExt, MMTableViewDelegate, MMLimitedModeExt, MiniTaskUIMgrExt, MainFrameSectionFoldViewDelegate, MainSessionEditingLogicDelegate, IChatBoxMgrExt, MuteBrandMgrExt, IWCDeviceBrandMgrExt, UITableViewDragDelegate, SilentModeExt, FTSHomeViewControllerDelegate, NewMainFrameRightTopMenuBtnDelegate, MainFrameLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WCActionSheetDelegate, contactInfoDelegate, CreateChatLogicDelegate, MMKernelExt, IWXTalkPresentExt, IAutoSetRemarkExt, UIGestureRecognizerDelegate, MainTableDelegate, MainFrameHeaderDelegate, WCLazyInitObjectProtocol>
{
    MainFrameLogicController * m_mainFrameLogicController; // +0x68
    MainFrameTableView * m_tableView; // +0x70
    UIImageView * m_logoImageView; // +0x78
    MFTitleView * m_titleView; // +0x80
    MMLoadingView * m_loadingView; // +0x88
    CGPoint m_tableContentOffset; // +0x90
    unsigned int m_uiTipStatus; // +0xa0
    CreateChatLogic * m_createChatLogic; // +0xa8
    BOOL m_tableViewReady; // +0xb0
    MainFrameHeaderLogic * m_headerLogic; // +0xb8
    NSString * m_nsTitle; // +0xc0
    int m_voiceSearchLevelNumber; // +0xc8
    double m_tableViewOffset; // +0xd0
    BOOL m_bIsLastViewStatusBarHidden; // +0xd8
    BOOL m_needResetTableViewOffset; // +0xd9
    MMSessionInfo * _peekedSession; // +0xe0
    BOOL m_firstLoadFinished; // +0xe8
    double m_messageCellHeight; // +0xf0
    WAMainFrameTaskBarLogic * m_taskBarLogic; // +0xf8
    WAMainFrameTopHeaderView * m_tableHeaderTopView; // +0x100
    WAMainFrameTaskBarView * m_taskBarView; // +0x108
    CGPoint m_tableViewStartDraggingContentOffset; // +0x110
    CGPoint m_tableViewLastContentOffset; // +0x120
    BOOL m_isDraggingDown; // +0x130
    BOOL m_isScrollingDown; // +0x131
    BOOL m_isShowTableHeaderTopView; // +0x132
    BOOL m_isSettingShowTableHeaderTopView; // +0x133
    BOOL m_isSettingHideTableHeaderTopView; // +0x134
    BOOL m_dragCancelPreviousShowTableHeaderTopView; // +0x135
    BOOL m_dragCancelPreviousHideTableHeaderTopView; // +0x136
    BOOL m_isChangingTableHeaderTopViewHeight; // +0x137
    BOOL m_shouldReloadOnAppear; // +0x138
    UIColor * m_navBGOriginColor; // +0x140
    double m_originWindowLevel; // +0x148
    long long m_lastRowNum; // +0x150
    NSString * m_confirmingSessionName; // +0x158
    MMSessionInfo * m_swipedSession; // +0x160
    MMSessionInfo * m_selectedSession; // +0x168
    BOOL m_firstDoMainLazyThing; // +0x170
    double lastScreenHeight; // +0x178
    UIView * m_inviteFriendFooterView; // +0x180
    MMUIViewController<BrandTLViewControllerProtocol> * m_brandTimelineViewController; // +0x188
    BSTimelineFlutterViewController * m_bsTimelineVC; // +0x190
    MMTimer * m_brandTimelineCacheTimer; // +0x198
    MMTimer * m_bsTimelineCacheTimer; // +0x1a0
    id <UIViewControllerPreviewing> _previewingContext; // +0x1a8
    NSIndexPath * _peekedIndexPath; // +0x1b0
    BOOL haveLazyInit; // +0x1b8
    BOOL _disableTableAnimation; // +0x1b9
    BOOL _isAppear; // +0x1ba
    BOOL _hasReportNavBarBroken; // +0x1bb
    BOOL _willAppearFromFailedMiniTaskPushAnimation; // +0x1bc
    WCSearchBar * _searchBar; // +0x1c0
    MainFrameUnreadReporter * _unreadReporter; // +0x1c8
    UIDynamicAnimator * _animator; // +0x1d0
    MainFrameSectionFoldView * _topSessionFoldView; // +0x1d8
    double _foldViewFloatingOffset; // +0x1e0
    MainSessionEditingLogic * _sessionEditingLogic; // +0x1e8
    long long _maxSessionCountInOneScreen; // +0x1f0
    unsigned long long _lastReloadTableTime; // +0x1f8
    MainFrameCustomBarView * _fakeNavBarView; // +0x200
}
- (BOOL)needFixMaxIssueForiOS14_2Plus;
- (void)notifyTaskBarOnMainTableViewInitReady;
- (void)notifyTaskBarOnMainTableViewWillBeginDragging:(id)arg1;
- (void)notifyTaskBarOnMainTableViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)notifyTaskBarOnMainTableViewDidEndDragging:(id)arg1;
- (void)notifyTaskBarOnMainTableViewDidScroll:(id)arg1;
- (void)mainTableViewOffsetDidChangeTo:(CGPoint)arg1;
- (void)updateTabbarOffset:(double)arg1;
- (void)notifyTaskBarOnWillBeginSearch;
- (void)notifyTaskBarOnDidEndSearch;
- (void)notifyTaskBarOnWillFocusOnFirstUnreadSession;
- (void)notifyTaskBarOnViewDidAppear;
- (void)notifyTaskBarOnViewWillAppear;
- (void)notifyTaskBarOnViewWillDisappear;
- (void)notifyTaskBarOnViewDidDisappear;
- (unsigned long long)checkDisappearScene;
- (void)resetNavBarButtonAlpha;
- (void)initTableHeaderTopView;
- (void)setTableHeaderTopViewHiddenIfNotLimitedMode:(BOOL)arg1;
- (void)notifyToLazyInit;
- (void)notifyTaskBarOnViewDidTransitionToNewSize;
- (id)getAddBarButton;
- (void)startDragToShow;
- (void)endDragToShow;
- (void)changeNavigationFakeBackgroundColor;
- (void)initFakeNavigatioBackgroundIfNeeded;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)beginSetShowTableHeaderTopView;
- (void)endSetShowTableHeaderTopView;
- (void)beginSetHideTableHeaderTopView;
- (void)endSetHideTableHeaderTopView;
- (void)showTableHeaderTopView:(BOOL)arg1 fromScene:(unsigned long long)arg2;
- (void)setTableViewContentInsetAndOffsetWithIsTopViewShow:(BOOL)arg1 fromScene:(unsigned long long)arg2 completion:(id /* block */)arg3 canceled:(id /* block */)arg4;
- (void)mainPullDown:(BOOL)arg1;
- (BOOL)tableViewIsDragging;
- (void)setTableViewContentInsetOffsetWithoutScrollWithContentInset:(UIEdgeInsets)arg1 contentOffset:(CGPoint)arg2;
- (void)hideNavigationBarForTaskBarCloseScene:(unsigned long long)arg1;
- (void)checkTaskBarHiddenState;
- (BOOL)isNeedAnimateNavigationBarBeforeSettingContentOffSet;
- (void)changeTaskBarViewHeightTo:(double)arg1;
- (UIEdgeInsets)changeContentInsetTopTo:(double)arg1;
- (BOOL)useBlackStatusbar;
- (double)getFullScreenHeight;
- (void)hideStatusBar;
- (void)showStatusBar;
- (BOOL)isXDevice;
- (BOOL)useWhiteStatusBarColorWhenShown;
- (void)taskBarDidDragUpToClose;
- (void)onTaskBarDataStartUpdateFromSvr:(unsigned int)arg1;
- (void)onTaskBarDataUpdatedFromSource:(unsigned long long)arg1;
- (void)onTaskBarSectionShouldRemove:(id)arg1;
- (void)updateTaskBarDataIfNeeded;
- (void)doUpdateTaskBarData;
- (void)doRefreshTaskBarCommonUseDataImmediately;
- (void)onReceiveVisibleTick;
- (void)onDeleteToEmptyTaskBar;
- (void)onTaskBarHeightDidChangeTo:(double)arg1;
- (void)didRotateToInterfaceOrientation:(long long)arg1;
- (void)onStarNodeShowStatusDidChangedTo:(BOOL)arg1;
- (void)onTapOnSearchButton;
- (void)onSearchPageClickCancel;
- (void)didEnterWeappSearchPage;
- (void)willEndSearch;
- (void)onTapOnFoldButton;
- (void)onTapOnFakeRightMenuButton;
- (BOOL)isTaskBarNeedHideTabBar;
- (void)willOpenWeapp:(id)arg1;
- (void)didOpenWeapp:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onEnterForeground;
- (id)getTaskBarView;
- (id)getRightBarButton;
- (id)getLeftBarButton;
- (void)willOpenMainListVC;
- (void)setTableViewContentOffset:(CGPoint)arg1;
- (void)checkTaskBarViewWidth;
- (BOOL)checkShouldBlockMainFrameScrollView;
- (unsigned long long)handleTouchesShouldCancelInContentView:(id)arg1;
- (unsigned long long)handleTouchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (void)notifyTaskBarOnUpdateTitleView:(unsigned int)arg1 title:(id)arg2;
- (void)notifyTaskBarOnUpdateTitleViewNearMode;
- (void)notifyTaskBarOnRightBtnRedDotShow:(BOOL)arg1;
- (void)notifyLimitedModeUpdated;
- (void)notifySilentModeUpdated;
- (BOOL)shouldMiniTaskGestureBegin;
- (void)notifyTaskBarUpdateLiveInfo;
- (void)onCreateNewMessage;
- (void)onAddContact;
- (void)onCreateScanCamera;
- (void)createVoiceVOIPChat;
- (void)createVideoVOIPChat;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)showMyWCView;
- (void)showWCPayView;
- (void)showEmoticonStoreView;
- (void)showQRInfoView;
- (void)onMassSend;
- (void)onRadar;
- (void)openFace2FaceReceiveMoney;
- (void)openOverseaFacingReceiveMoney;
- (void)openOverseaSelectReceiveOrPayMoney;
- (void)openSelectReceiveOrPayMoney;
- (void)openSelectReceiveOrPayMoneyFromShortcut;
- (void)openSelectHKReceiveOrPayMoneyFromShortcut;
- (void)notifyProtectLogicAtViewDidAppear;
- (void)notifyProtectLogicAtViewWillDisappear;
- (void)tryFixNavigationBar;
- (void)onTitleView:(id)arg1 alphaChange:(double)arg2;
- (void)notifyToLazyInitMiniTaskVC;
- (void)notifyMiniTaskEntryWhenViewWillAppear;
- (void)notifyMiniTaskEntryWhenViewDidAppear;
- (void)notifyMiniTaskEntryWhenViewWillDisappear;
- (void)notifyMiniTaskEntryWhenViewDidDisappear;
- (void)notifyMiniTaskEntryStateChanegd;
- (void)onMiniTaskPushGestureEnded:(BOOL)arg1;
- (id)leftItemView;
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (void)delayToLoadMainTableViewData;
- (void)doMainLazyThing;
- (void)appBecomeActive;
- (void)updateFoldSessionEntry;
- (id)firstSessionIndexPath;
- (BOOL)isViewControllerVisible;
- (long long)maxSessionCountInOneScreen;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setNewMainFrameTableViewContentOffset:(CGPoint)arg1;
- (void)setNewMainFrameTableViewContentOffsetToTheFirstUnreadSessionAndOpen:(BOOL)arg1;
- (void)onClickAtMainFrameTab;
- (void)willAppear;
- (void)updateUnReadCount;
- (void)updateTitleView;
- (void)reLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)tryDoLazyInitThing;
- (void)initTitle;
- (void)initNavigationTitileView;
- (void)initTableView;
- (void)initHeaderLogicAndHeaderView;
- (void)initTableHeaderView;
- (void)initFooterView;
- (void)forceReInitTableView;
- (void)updateTopSessionFoldView;
- (void)updateFoldViewFloatingOffset;
- (void)refreshAfterMuteFlagChange;
- (void)reloadAll;
- (BOOL)checkHeaderRowValid:(unsigned int)arg1;
- (void)insertRow:(unsigned int)arg1;
- (void)removeRow:(unsigned int)arg1;
- (void)PushViewController:(id)arg1;
- (void)PopViewContoller;
- (void)OpenContactInfo:(id)arg1;
- (id)getViewController;
- (void)showInviteFriendList;
- (void)initView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)removeMainFrameTip;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)unLoadView;
- (void)resetViewStatus;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)onMainTabBarHiddenChange:(BOOL)arg1;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (BOOL)isTopRightMenuShowID:(id)arg1;
- (double)getContentViewY;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)updateNearMode;
- (void)openWeSportView:(id)arg1 completion:(id /* block */)arg2;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1;
- (void)openBrandSessionViewFromSource:(id)arg1 source:(unsigned long long)arg2;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 completion:(id /* block */)arg4;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 curViewController:(id)arg4 completion:(id /* block */)arg5;
- (void)internalOpenBrandSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 curViewController:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)isBrandTLCacheExist;
- (void)openBrandServiceSessionViewFromSource:(unsigned long long)arg1;
- (void)openBrandServiceSessionViewFromSource:(id)arg1 source:(unsigned long long)arg2;
- (void)openBrandServiceSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 completion:(id /* block */)arg4;
- (void)openBrandServiceSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 curViewController:(id)arg4 completion:(id /* block */)arg5;
- (void)internalOpenBrandServiceSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 curViewController:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)isBrandServiceTLCacheExist;
- (void)openWeAppSessionView:(id /* block */)arg1;
- (void)openWWKFSessionView:(id /* block */)arg1;
- (void)openEnterpriseBrandSessionView:(id)arg1 completion:(id /* block */)arg2;
- (void)openEnterpriseChatSessionListView:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)openMessageContentView:(id)arg1 startSendMessage:(BOOL)arg2 msgWrapToAdd:(id)arg3 animated:(BOOL)arg4 jumpToFirstUnreadNode:(BOOL)arg5 indexPath:(id)arg6;
- (void)tryMoveToMainFrameTab;
- (void)openMessageContentView:(id)arg1 startSendMessage:(BOOL)arg2 msgWrapToAdd:(id)arg3 animated:(BOOL)arg4 jumpToFirstUnreadNode:(BOOL)arg5 indexPath:(id)arg6 reuse:(BOOL)arg7 extraInfo:(id)arg8;
- (void)openMessageContentView:(id)arg1 startSendMessage:(BOOL)arg2 msgWrapToAdd:(id)arg3 animated:(BOOL)arg4 jumpToFirstUnreadNode:(BOOL)arg5 indexPath:(id)arg6 reuse:(BOOL)arg7 extraInfo:(id)arg8 navigationController:(id)arg9 completion:(id /* block */)arg10;
- (void)tryOpenMessageContentView:(id)arg1 startSendMessage:(BOOL)arg2 msgWrapToAdd:(id)arg3 animated:(BOOL)arg4 jumpToFirstUnreadNode:(BOOL)arg5 indexPath:(id)arg6 reuse:(BOOL)arg7 extraInfo:(id)arg8 navigationController:(id)arg9 firstUnreadMessageWrap:(id)arg10 completion:(id /* block */)arg11;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)openPluginContactInfoView:(id)arg1;
- (BOOL)isOpenPluginContactInfoView:(id)arg1;
- (BOOL)isNeedShowProfileInVoiceSearch:(long long)arg1;
- (void)openContactInfoView:(id)arg1;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSelectCellByUsername:(id)arg1 indexPath:(id)arg2 cell:(id)arg3;
- (BOOL)shouldDeselectCellByUsername:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)visibleIndexPaths;
- (long long)indexInAllVisibleSessions:(id)arg1;
- (id)indexPathOfSessionUserName:(id)arg1;
- (id)logicGetSessionAtIndexPath:(id)arg1;
- (id)logicGetCellDataAtIndexPath:(id)arg1;
- (void)logicUpdateSession:(id)arg1;
- (long long)logicGetCountForSection:(long long)arg1;
- (void)onLogicHideSession:(id)arg1;
- (void)onLogicDeleteSessionByUsername:(id)arg1;
- (void)onLogicOpenSession:(id)arg1;
- (BOOL)isSearching;
- (void)showSearchBar:(id)arg1;
- (void)showSearchBar:(id)arg1 searchBar:(id)arg2;
- (void)setSearchBarActive:(BOOL)arg1;
- (void)cancelSearch;
- (void)doGlobalSearchPrepareWork;
- (void)deleteSessionCellAtIndexes:(id)arg1;
- (void)insertSessionCellAtIndexes:(id)arg1;
- (void)reloadSessions;
- (void)clearSessionCache;
- (void)updateSession:(id)arg1;
- (void)updateAllItemTimeLabel;
- (void)cancelSelectedCell;
- (void)selectCellForName:(id)arg1;
- (void)deleteSessionCell:(unsigned int)arg1 atSection:(long long)arg2 withUser:(id)arg3;
- (void)initLoadingView;
- (void)startLoadingForSessionRebuild;
- (void)stopLoadingForSessionRebuild;
- (void)startLoading;
- (void)stopLoading;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)resetTableViewOffset:(id)arg1;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(BOOL)arg3 FromOtherTab:(BOOL)arg4 reuse:(BOOL)arg5 extraInfo:(id)arg6;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(BOOL)arg3 FromOtherTab:(BOOL)arg4 reuse:(BOOL)arg5 extraInfo:(id)arg6 completion:(id /* block */)arg7;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(BOOL)arg3 FromOtherTab:(BOOL)arg4 reuse:(BOOL)arg5 extraInfo:(id)arg6 navigationController:(id)arg7 completion:(id /* block */)arg8;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(BOOL)arg3 FromOtherTab:(BOOL)arg4;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(BOOL)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)clearResource;
- (unsigned int)getTotalUnreadCount;
- (unsigned int)getAppIconTotalUnreadCount;
- (void)changeNetworkStatus:(unsigned int)arg1;
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (BOOL)shouldShowTabbar;
- (void)SearchBarBecomeUnActive;
- (void)onAuthOK;
- (void)updateItem:(id)arg1;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)onSetStrangerRemark:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)checkIsMainFrameScrollView:(id)arg1;
- (void)onMMDynamicConfigUpdated;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onSilentModeChangeAllowPlaySoundTemporary;
- (void)onSilentModeChangeOnForRouteChange;
- (void)onMiniTaskEntryShowStateChanged;
- (void)openMassSend;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setupDeepLinkConfig;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)tagForCurrentPage;
- (void)setSearchBarToTableHeaderView;
- (void)onSearch;
- (void)onNextUnreadChat;
- (void)newChat;
- (void)closeCurChat;
- (void)onNextChat;
- (void)onLastChat;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)onBrandTimelineReturn;
- (void)onBrandTimelineCacheTimeOut;
- (void)onBrandServiceTimelineReturn;
- (void)onBrandServiceTimelineCacheTimeOut;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)onChangeBizTimelineDisplayMode;
- (void)onBrandTLExptStatusChange;
- (void)checkReleaseBrandTLWithNewExptConfig:(id)arg1;
- (void)checkReleaseBrandServiceTLWithNewExptConfig:(id)arg1;
- (void)onDeleteBrandSessionHolder;
- (void)onDeleteBrandEcsSessionHolder;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onRedDotShowed:(BOOL)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)mmTableViewDidFinishedLoading:(id)arg1;
- (id)curViewController;
- (void)onSelectAtSectionFoldView;
- (BOOL)shouldShowFoldSectionTopSep;
- (void)onFTSSearchEnd;
- (void)onMainFrameShowChatBoxGuideAnimation;
- (void)setTableViewAccessibilityElementExceptTaskBar:(BOOL)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (BOOL)isUnexpectedClickAtIndexPath:(id)arg1;
- (void)registerYReportSdk;
- (id)m_createChatLogic;
- (void)setM_createChatLogic:(id)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (BOOL)haveLazyInit;
- (void)setHaveLazyInit:(BOOL)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)unreadReporter;
- (void)setUnreadReporter:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)topSessionFoldView;
- (void)setTopSessionFoldView:(id)arg1;
- (BOOL)disableTableAnimation;
- (void)setDisableTableAnimation:(BOOL)arg1;
- (double)foldViewFloatingOffset;
- (void)setFoldViewFloatingOffset:(double)arg1;
- (id)sessionEditingLogic;
- (void)setSessionEditingLogic:(id)arg1;
- (void)setMaxSessionCountInOneScreen:(long long)arg1;
- (unsigned long long)lastReloadTableTime;
- (void)setLastReloadTableTime:(unsigned long long)arg1;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg1;
- (BOOL)hasReportNavBarBroken;
- (void)setHasReportNavBarBroken:(BOOL)arg1;
- (id)fakeNavBarView;
- (void)setFakeNavBarView:(id)arg1;
- (BOOL)willAppearFromFailedMiniTaskPushAnimation;
- (void)setWillAppearFromFailedMiniTaskPushAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end

