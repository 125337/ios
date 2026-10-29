@interface NewMainFrameViewController : MMTabBarBaseViewController <WAMainFrameTaskBarLogicDelegate, SelectContactsViewControllerDelegate, MFTitleViewDelegate, MMUIViewControllerExt, MMConfigMgrExt, BrandTimelineMsgMgrExt, BSTimelineMsgMgrExt, TextStateMgrExt, BoxBrandTimelineMsgMgrExt, MMTableViewDelegate, MMLimitedModeExt, MiniTaskUIMgrExt, MainFrameSectionFoldViewDelegate, MainSessionEditingLogicDelegate, IChatBoxMgrExt, MuteBrandMgrExt, MainFrameAggregationDelegate, IWCDeviceBrandMgrExt, UITableViewDragDelegate, SilentModeExt, FTSHomeViewControllerDelegate, MMUINavigationBarHitTestPassThroughProvider, NewMainFrameRightTopMenuBtnDelegate, MainFrameLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WCActionSheetDelegate, contactInfoDelegate, CreateChatLogicDelegate, MMKernelExt, IWXTalkPresentExt, IAutoSetRemarkExt, UIGestureRecognizerDelegate, MainTableDelegate, MainFrameHeaderDelegate, WCLazyInitObjectProtocol>
{
    MainFrameLogicController * m_mainFrameLogicController; // +0x70
    MainFrameTableView * m_tableView; // +0x78
    UIImageView * m_logoImageView; // +0x80
    MFTitleView * m_titleView; // +0x88
    MMLoadingView * m_loadingView; // +0x90
    CGPoint m_tableContentOffset; // +0x98
    unsigned int m_uiTipStatus; // +0xa8
    CreateChatLogic * m_createChatLogic; // +0xb0
    BOOL m_tableViewReady; // +0xb8
    MainFrameHeaderLogic * m_headerLogic; // +0xc0
    NSString * m_nsTitle; // +0xc8
    int m_voiceSearchLevelNumber; // +0xd0
    double m_tableViewOffset; // +0xd8
    BOOL m_bIsLastViewStatusBarHidden; // +0xe0
    BOOL m_needResetTableViewOffset; // +0xe1
    MMSessionInfo * _peekedSession; // +0xe8
    BOOL m_firstLoadFinished; // +0xf0
    double m_messageCellHeight; // +0xf8
    WAMainFrameTaskBarLogic * m_taskBarLogic; // +0x100
    WAMainFrameTopHeaderView * m_tableHeaderTopView; // +0x108
    WAMainFrameTaskBarView * m_taskBarView; // +0x110
    CGPoint m_tableViewStartDraggingContentOffset; // +0x118
    CGPoint m_tableViewLastContentOffset; // +0x128
    BOOL m_isDraggingDown; // +0x138
    BOOL m_isScrollingDown; // +0x139
    BOOL m_isShowTableHeaderTopView; // +0x13a
    BOOL m_isSettingShowTableHeaderTopView; // +0x13b
    BOOL m_isSettingHideTableHeaderTopView; // +0x13c
    BOOL m_placeholderRefreshWindowOpen; // +0x13d
    MMTimer * m_placeholderRefreshWindowTimer; // +0x140
    BOOL m_dragCancelPreviousShowTableHeaderTopView; // +0x148
    BOOL m_dragCancelPreviousHideTableHeaderTopView; // +0x149
    BOOL m_isChangingTableHeaderTopViewHeight; // +0x14a
    BOOL m_shouldReloadOnAppear; // +0x14b
    UIColor * m_navBGOriginColor; // +0x150
    double m_originWindowLevel; // +0x158
    long long m_lastRowNum; // +0x160
    NSString * m_confirmingSessionName; // +0x168
    MMSessionInfo * m_swipedSession; // +0x170
    MMSessionInfo * m_selectedSession; // +0x178
    BOOL m_firstDoMainLazyThing; // +0x180
    double lastScreenHeight; // +0x188
    UIView * m_inviteFriendFooterView; // +0x190
    MMBarButtonItem * m_menuBarButton; // +0x198
    BOOL m_searchBarButtonShown; // +0x1a0
    unsigned long long m_pendingSearchEntryType; // +0x1a8
    MMUIViewController<BrandTLViewControllerProtocol> * m_brandTimelineViewController; // +0x1b0
    MMTimer * m_brandTimelineCacheTimer; // +0x1b8
    id <UIViewControllerPreviewing> _previewingContext; // +0x1c0
    NSIndexPath * _peekedIndexPath; // +0x1c8
    BOOL haveLazyInit; // +0x1d0
    BOOL _mainFrameGreenMicLaunching; // +0x1d1
    BOOL _voiceIsCancelState; // +0x1d2
    BOOL _voiceFCRequestFinished; // +0x1d3
    BOOL _voiceFCMicReady; // +0x1d4
    BOOL _voiceFCEntryAnimationFinished; // +0x1d5
    BOOL _disableTableAnimation; // +0x1d6
    BOOL _isAppear; // +0x1d7
    BOOL _hasPendingSessionReload; // +0x1d8
    BOOL _hasReportNavBarBroken; // +0x1d9
    BOOL _willAppearFromFailedMiniTaskPushAnimation; // +0x1da
    WCSearchBar * _searchBar; // +0x1e0
    UIButton * _greenMicButton; // +0x1e8
    VoiceHintFloatingVC * _voiceHintVC; // +0x1f0
    VoiceSearchEducationPageSheet * _voiceSearchEducationSheet; // +0x1f8
    double _voiceLongPressBeginY; // +0x200
    NSString * _voiceFCSessionID; // +0x208
    MMTimer * _voiceFCProcessingTimer; // +0x210
    MMTimer * _voiceFCMicStartTimer; // +0x218
    unsigned long long _voiceFCRequestGeneration; // +0x220
    NSString * _voiceSearchReportRoundID; // +0x228
    UIImpactFeedbackGenerator * _voiceSearchTouchHapticGenerator; // +0x230
    unsigned long long _voiceFCHeadlessRoundId; // +0x238
    NMFCVoiceFCGen2Observer * _voiceFCGen2Observer; // +0x240
    CBTHeadlessVoiceObserver * _voiceFCGen2ObserverWrapper; // +0x248
    MainFrameUnreadReporter * _unreadReporter; // +0x250
    UIDynamicAnimator * _animator; // +0x258
    MainFrameSectionFoldView * _topSessionFoldView; // +0x260
    FTSHomeViewController * _lastHomeViewController; // +0x268
    double _foldViewFloatingOffset; // +0x270
    MainSessionEditingLogic * _sessionEditingLogic; // +0x278
    long long _maxSessionCountInOneScreen; // +0x280
    unsigned long long _lastReloadTableTime; // +0x288
    WCFinderBoxOpener * _finderBoxOpener; // +0x290
    long long _curTabPageSource; // +0x298
    MainFrameCustomBarView * _fakeNavBarView; // +0x2a0
}
- (BOOL)needFixMaxIssueForiOS14_2Plus;
- (void)notifyTaskBarOnMainTableViewInitReady;
- (void)notifyTaskBarOnMainTableViewWillBeginDragging:(id)arg1;
- (void)notifyTaskBarOnMainTableViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)showTableHeaderTopViewByPullDown:(unsigned long long)arg1;
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
- (void)onTaskBarPlaceholderReady;
- (void)closePlaceholderRefreshWindow;
- (void)onPlaceholderRefreshWindowTimerFire;
- (void)restoreTaskBarSearchPlaceholderToDefault;
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
- (void)doRefreshTaskBarCommonUseDataImmediately:(unsigned long long)arg1;
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
- (void)delaySetJSC2QOSToAvoidWKMixedContentUpdate;
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
- (void)onCreateNote;
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
- (void)animateStarEntryIfNeeded;
- (void)notifyMiniTaskEntryWhenTaskViewDidHide;
- (void)notifyMiniTaskEntryWhenViewDidAppear;
- (void)notifyMiniTaskEntryWhenViewWillDisappear;
- (void)notifyMiniTaskEntryWhenViewDidDisappear;
- (void)notifyMiniTaskEntryStateChanegd;
- (void)refreshFakeNavigationBarMiniTaskEntry;
- (void)onMiniTaskPushGestureEnded:(BOOL)arg1;
- (id)leftItemView;
- (void)reportMinimizeEntryExpose;
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
- (id)goToNextUnreadSessionWithOpen:(BOOL)arg1;
- (void)onClickAtMainFrameTab;
- (void)onDoubleClickAtMainFrameTab;
- (void)onLongPressAtMainFrameTab;
- (void)showAggregationWithShock:(BOOL)arg1;
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
- (BOOL)isMainFrameSearchGreenMicEnabled;
- (void)setupMainFrameSearchGreenMicIfNeeded;
- (void)updateMainFrameSearchGreenMicVisibility;
- (void)updateVoiceSearchPlaceholderEnabled:(BOOL)arg1;
- (void)onVoiceSearchEntryTapped:(id)arg1;
- (BOOL)navigationBar:(id)arg1 shouldPassThroughPoint:(CGPoint)arg2 withEvent:(id)arg3;
- (void)cancelVoiceFCProcessingTimeout;
- (void)cancelVoiceFCMicStartTimeout;
- (BOOL)finishVoiceFCRequestForHint:(id)arg1 requestGeneration:(unsigned long long)arg2;
- (void)startGen2HeadlessVoiceInputForHint:(id)arg1 requestGeneration:(unsigned long long)arg2 reportRoundID:(id)arg3;
- (void)onGen2VoiceFCStateChanged:(unsigned long long)arg1 state:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)startVoiceFCProcessingTimeoutForHint:(id)arg1 requestGeneration:(unsigned long long)arg2;
- (void)onVoiceFCProcessingTimeout:(id)arg1;
- (void)startVoiceFCMicStartTimeoutForHint:(id)arg1 requestGeneration:(unsigned long long)arg2;
- (void)onVoiceFCMicStartTimeout:(id)arg1;
- (void)updateVoiceFCRecordingAppearanceForHint:(id)arg1 requestGeneration:(unsigned long long)arg2;
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
- (void)openFinderBoxBrandFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 completion:(id /* block */)arg4;
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
- (void)openWeAppSessionView:(id /* block */)arg1;
- (void)openWWKFSessionView:(id)arg1 completion:(id /* block */)arg2;
- (void)openEnterpriseBrandSessionView:(id)arg1 completion:(id /* block */)arg2;
- (void)openEnterpriseChatSessionListView:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)openMessageContentView:(id)arg1 startSendMessage:(BOOL)arg2 msgWrapToAdd:(id)arg3 animated:(BOOL)arg4 jumpToFirstUnreadNode:(BOOL)arg5 indexPath:(id)arg6;
- (void)tryMoveToMainFrameTab;
- (void)openMessageContentView:(id)arg1 startSendMessage:(BOOL)arg2 msgWrapToAdd:(id)arg3 animated:(BOOL)arg4 jumpToFirstUnreadNode:(BOOL)arg5 indexPath:(id)arg6 reuse:(BOOL)arg7 extraInfo:(id)arg8;
- (void)openMessageContentView:(id)arg1 startSendMessage:(BOOL)arg2 msgWrapToAdd:(id)arg3 animated:(BOOL)arg4 jumpToFirstUnreadNode:(BOOL)arg5 indexPath:(id)arg6 reuse:(BOOL)arg7 extraInfo:(id)arg8 navigationController:(id)arg9 completion:(id /* block */)arg10;
- (void)openCustAsstBoxChatPage:(id)arg1 completion:(id /* block */)arg2;
- (void)tryOpenMessageContentView:(id)arg1 startSendMessage:(BOOL)arg2 msgWrapToAdd:(id)arg3 animated:(BOOL)arg4 jumpToFirstUnreadNode:(BOOL)arg5 indexPath:(id)arg6 reuse:(BOOL)arg7 extraInfo:(id)arg8 navigationController:(id)arg9 firstUnreadMessageWrap:(id)arg10 completion:(id /* block */)arg11;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateMainFrameCellSeparatorAppearance:(id)arg1 atIndexPath:(id)arg2;
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
- (void)onGreenMicButtonTapped:(id)arg1;
- (void)showSearchBar:(id)arg1;
- (void)showSearchBar:(id)arg1 searchBar:(id)arg2;
- (void)showSearchBar:(id)arg1 searchBar:(id)arg2 autoStartGreenMic:(BOOL)arg3;
- (void)setSearchBarActive:(BOOL)arg1;
- (void)cancelSearch;
- (void)doGlobalSearchPrepareWork;
- (void)deleteSessionCellAtIndexes:(id)arg1;
- (void)insertSessionCellAtIndexes:(id)arg1 scrollToCell:(BOOL)arg2;
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
- (void)onSearchButtonTapped;
- (void)onSearch;
- (void)onNextUnreadChat;
- (void)newChat;
- (void)closeCurChat;
- (void)onNextChat;
- (void)onLastChat;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)onBrandTimelineReturn;
- (void)onBrandTimelineCacheTimeOut;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)onBoxChangeBizTimelineDisplayMode;
- (void)onBrandTLExptStatusChange;
- (void)checkReleaseBrandTLWithNewExptConfig:(id)arg1;
- (void)onDeleteBrandSessionHolder;
- (void)onRequestCleanBrandTimelineVC;
- (void)onDeleteBrandEcsSessionHolder;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onBoxMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)onBoxBrandTLExptStatusChange;
- (void)onBoxDeleteBrandSessionHolder;
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
- (void)checkAndUpdateMenuBarItemSearchState:(id)arg1;
- (void)registerYReportSdk;
- (void)onAggregation:(id)arg1 openSession:(id)arg2;
- (unsigned long long)getTabBarItemIndex;
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
- (id)greenMicButton;
- (void)setGreenMicButton:(id)arg1;
- (BOOL)mainFrameGreenMicLaunching;
- (void)setMainFrameGreenMicLaunching:(BOOL)arg1;
- (id)voiceHintVC;
- (void)setVoiceHintVC:(id)arg1;
- (id)voiceSearchEducationSheet;
- (void)setVoiceSearchEducationSheet:(id)arg1;
- (double)voiceLongPressBeginY;
- (void)setVoiceLongPressBeginY:(double)arg1;
- (BOOL)voiceIsCancelState;
- (void)setVoiceIsCancelState:(BOOL)arg1;
- (id)voiceFCSessionID;
- (void)setVoiceFCSessionID:(id)arg1;
- (id)voiceFCProcessingTimer;
- (void)setVoiceFCProcessingTimer:(id)arg1;
- (id)voiceFCMicStartTimer;
- (void)setVoiceFCMicStartTimer:(id)arg1;
- (unsigned long long)voiceFCRequestGeneration;
- (void)setVoiceFCRequestGeneration:(unsigned long long)arg1;
- (BOOL)voiceFCRequestFinished;
- (void)setVoiceFCRequestFinished:(BOOL)arg1;
- (BOOL)voiceFCMicReady;
- (void)setVoiceFCMicReady:(BOOL)arg1;
- (BOOL)voiceFCEntryAnimationFinished;
- (void)setVoiceFCEntryAnimationFinished:(BOOL)arg1;
- (id)voiceSearchReportRoundID;
- (void)setVoiceSearchReportRoundID:(id)arg1;
- (id)voiceSearchTouchHapticGenerator;
- (void)setVoiceSearchTouchHapticGenerator:(id)arg1;
- (unsigned long long)voiceFCHeadlessRoundId;
- (void)setVoiceFCHeadlessRoundId:(unsigned long long)arg1;
- (id)voiceFCGen2Observer;
- (void)setVoiceFCGen2Observer:(id)arg1;
- (id)voiceFCGen2ObserverWrapper;
- (void)setVoiceFCGen2ObserverWrapper:(id)arg1;
- (id)unreadReporter;
- (void)setUnreadReporter:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)topSessionFoldView;
- (void)setTopSessionFoldView:(id)arg1;
- (id)lastHomeViewController;
- (void)setLastHomeViewController:(id)arg1;
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
- (BOOL)hasPendingSessionReload;
- (void)setHasPendingSessionReload:(BOOL)arg1;
- (id)finderBoxOpener;
- (void)setFinderBoxOpener:(id)arg1;
- (long long)curTabPageSource;
- (void)setCurTabPageSource:(long long)arg1;
- (BOOL)hasReportNavBarBroken;
- (void)setHasReportNavBarBroken:(BOOL)arg1;
- (id)fakeNavBarView;
- (void)setFakeNavBarView:(id)arg1;
- (BOOL)willAppearFromFailedMiniTaskPushAnimation;
- (void)setWillAppearFromFailedMiniTaskPushAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
