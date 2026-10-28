@interface BrandTimelineViewController : MMUIViewController <TableViewCellExposureDelegate, WXCustomWebViewControllerProtocol, MMRefreshTableFooterDelegate, BrandTimelineMsgMgrExt, IContactMgrExt, BrandTimelineNotifyLogicDelegate, BrandTimelineReportLogicDelegate, BTNotifyMsgCellViewDelegate, BTBaseItemCellViewDelegate, contactInfoDelegate, BTOftenReadBarViewCellDelegate, BrandTimelineRelatedInfoLogicDelegate, BrandPaySubcribeMgrExt, MPPageRelatedInfoMgrExt, BTFeedbackPanelDelegate, MPChannelMgrExt, BTRecoFlowBaseTableViewCellDelegate, MonoServiceLogicExt, MMLiveTaskMgrExt, BrandTimelineSettingMgrExt, IBrandAttrMgrExt, BTRecoFlowLogicDelegate, BTFixedFinderCellViewDelegate, BrandFlowListViewControllerDelegate, BTScrollableFinderCellViewDelegate, UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, BTBaseSectionDataDelegate, BrandTLViewControllerProtocol>
{
    BOOL isShowRedDotInMainFrameSession; // +0x70
    BOOL _isLoadingData; // +0x71
    BOOL _isAnimatedInsertRowFromTop; // +0x72
    BOOL _hasLoadNumberOfTableRow; // +0x73
    BOOL _hasViewWillBePushedOnce; // +0x74
    BOOL _isPush; // +0x75
    BOOL _hasFirstDidAppear; // +0x76
    BOOL _hasSectionDataLoad; // +0x77
    BOOL _isHideSearchBar; // +0x78
    BOOL _canShowPersonalCenter; // +0x79
    BOOL _nativeCardTitleUpEnable; // +0x7a
    BOOL _isShowMenuAction; // +0x7b
    BOOL _didAppear; // +0x7c
    BOOL _isDragging; // +0x7d
    BOOL _isScrolling; // +0x7e
    BOOL _isScrollingToTop; // +0x7f
    BOOL _isAdCardOpen; // +0x80
    BOOL _isCanvasCardOpen; // +0x81
    BOOL _isMsgTopRightUseRecReason; // +0x82
    BOOL _hasLiveBarExpandStateEverReported; // +0x83
    BOOL _canVideoAutoPlay; // +0x84
    unsigned int redDotCount; // +0x88
    unsigned int enterSessionInfoNotifyType; // +0x8c
    unsigned int _navBarNewMsgCount; // +0x90
    unsigned int _newMsgCountInBgCacheTime; // +0x94
    unsigned int _displayMode; // +0x98
    unsigned int _currentGroupId; // +0x9c
    unsigned int _topNonMsgSectionCount; // +0xa0
    unsigned int _moveBoxMsgToTopRet; // +0xa4
    BrandTLExptConfig * exptConfig; // +0xa8
    unsigned long long source; // +0xb0
    unsigned long long enterRowIndexInMainFrameSession; // +0xb8
    CMessageWrap * enterMsgInMainFrameSession; // +0xc0
    UIView * _searchBarMaskView; // +0xc8
    WCTimeLineFooterView * _footerView; // +0xd0
    BTLNavigationBarButton * _navNewTipsBtn; // +0xd8
    UIView * _navDefaultTitleView; // +0xe0
    MMTimer * _msgRefreshTimer; // +0xe8
    NSIndexSet * _animatedInsertSectionSetFromTop; // +0xf0
    NSMutableSet * _setFastLoadTemplateType; // +0xf8
    NSMutableArray * _arrTimelineMsgToAdd; // +0x100
    BrandTimelineNotifyLogic * _notifyMsgLogic; // +0x108
    BrandTimelineRelatedInfoLogic * _relatedInfoLogic; // +0x110
    BTFeedbackPanel * _recCardFeedbackPanel; // +0x118
    BTScrollableFinderCellViewModel * _scrollableFinderCellViewModel; // +0x120
    NSMutableDictionary * _sectionBriefDict; // +0x128
    long long _cardHeaderJumpAction; // +0x130
    long long _oftenReadJumpAction; // +0x138
    MMBadgeView * _personalCenterRedDotView; // +0x140
    NSMutableDictionary * _showMenuExtraData; // +0x148
    BTBaseItemCellView * _showMenuCellView; // +0x150
    NSMutableDictionary * _dicMsgBatchUpdateExpose; // +0x158
    MMTimer * _batchMsgExposeUpdateTimer; // +0x160
    double _navBarAndStatusBarHeight; // +0x168
    BrandMsgValidExposeConfig * _validExposeConfig; // +0x170
    TableViewCellExposureHelper * _validExposureHelper; // +0x178
    NSMutableDictionary * _dicItemValidExposeTimer; // +0x180
    NSMutableDictionary * _dicRecCardValidExposeTimer; // +0x188
    NSMutableDictionary * _dicRecoFlowValidExposeTimer; // +0x190
    NSMutableDictionary * _dicMsgExposeCountToMsgId; // +0x198
    NSMutableDictionary * _dicMsgExposeTimeStampToMsgId; // +0x1a0
    NSMutableDictionary * _dicMsgExposeRatioToMsgId; // +0x1a8
    NSMutableDictionary * _dicMsgValidExposeTimer; // +0x1b0
    NSMutableDictionary * _dicValidExposeMsgsForBatchUpdate; // +0x1b8
    MMTimer * _validExposeMsgForBatchUpdateTimer; // +0x1c0
    TableViewCellExposureHelper * _videoHotZoneHelper; // +0x1c8
    BrandTLTableView * _tableView; // +0x1d0
    NSMutableArray * _arrSectionData; // +0x1d8
    BrandTimelineReportLogic * _reportLogic; // +0x1e0
    BrandTimelineResortLogic * _resortLogic; // +0x1e8
    BTRecoFlowLogic * _recoFlowLogic; // +0x1f0
    unsigned long long _lastCanvasScrollEventTime; // +0x1f8
    NSMutableDictionary * _dicLiveBarClickLiveInfo; // +0x200
    unsigned long long _topLastNewMsgSequenceId; // +0x208
    unsigned long long _newMsgDividingLineSequenceId; // +0x210
    NSMutableDictionary * _m_extraInfo; // +0x218
    BTVideoViewModelInfo * _modelInfo; // +0x220
    id <BTItemCellViewModelVideoPlayProtocol> _selectedItemCellViewModelVideoPlay; // +0x228
    CGPoint _topContentOffset; // +0x230
}
- (void)initBrandTimelineVideoItemAutoPlayLogic:(id)arg1;
- (void)getUpdatedVideoModelInfoAndCalc;
- (void)destoryCurFocusItemCellViewModelVideoPlay;
- (id)getCurFocusItemCellViewVideoPlayByExposureItemList;
- (BOOL)canCellViewModelPlayVideo:(id)arg1;
- (BOOL)checkIfVideoItemCellViewInAutoPlayArea:(id)arg1;
- (void)checkIfVideoCellOnListExposure:(id)arg1;
- (id)getBTItemCellViewModelVideoPlayFromIndexPath:(id)arg1;
- (void)reportBTItemCellViewModelVideoPlayOpenLandingPage:(id)arg1;
- (void)reportBTItemCellViewModelVideoPlayStart:(id)arg1;
- (void)reportBTItemCellViewModelVideoPlayEnd:(id)arg1;
- (void)longPressShowOperationMenu:(id)arg1 fromHeaderCellView:(id)arg2;
- (BOOL)shouldShowMenuWithCellView:(id)arg1 extraData:(id)arg2;
- (void)setHighlightWithCellView:(id)arg1 extraData:(id)arg2 bHighlight:(BOOL)arg3;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (id)menuItems:(id)arg1;
- (CGRect)targetRectWithCellView:(id)arg1 extraData:(id)arg2;
- (long long)getDeleteIndexWithExtraData:(id)arg1;
- (long long)getDeleteDisplayIndexWithExtraData:(id)arg1;
- (BOOL)checkMenuDataValid;
- (void)clearMenuData;
- (id)getContactFromSelfExtraData;
- (id)getTLRecFinderCardData;
- (id)getFinderInterestData;
- (void)onNotFocus:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onMinimize:(id)arg1;
- (void)internalMinimize;
- (void)addMinimizeForReaderItemCell:(id)arg1 msgWrap:(id)arg2;
- (void)addMinimizeForMissSubsItemCell:(id)arg1 msgWrap:(id)arg2;
- (id)getCellViewForAnimation:(id)arg1 extraData:(id)arg2;
- (void)onFinderMinimize:(id)arg1;
- (void)internalFinderMinimize;
- (void)showConfirmUnsubcribeActionSheet:(id)arg1 fromHeaderCellView:(id)arg2;
- (void)showComfirmDeleteActionSheet:(id)arg1 fromHeaderCellView:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)getRecommendFinderDataArrDisplayCount:(id)arg1;
- (id)tableView:(id)arg1 cellForLiveSection:(id)arg2;
- (void)updateLiveSectionWhenExitTL;
- (void)checkLiveBarOnContactDelete:(id)arg1;
- (void)updateLiveSection:(id)arg1 isLiving:(BOOL)arg2;
- (void)addLiveSectionIfNeed:(id)arg1 needReloadTable:(BOOL)arg2;
- (void)reloadLiveSectionBarCell;
- (unsigned long long)indexForLiveSection;
- (void)removeLiveSection:(BOOL)arg1;
- (id)liveSectionData;
- (void)updateVisibleBrandMsgLiveInfo;
- (void)onFinderCellViewLiveCardClicked:(id)arg1 viewModel:(id)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
- (void)onGetBrandSubscribeLiveInfo:(id)arg1;
- (void)onGetCacheBrandSubscribeLiveInfo:(id)arg1;
- (void)onLiveSectionBarBarCellView:(id)arg1 didClickItemView:(id)arg2;
- (void)onLiveSectionBarBarCellView:(id)arg1 exposeItemViewArr:(id)arg2;
- (void)onLiveSectionBarBarCellView:(id)arg1 toExpand:(BOOL)arg2;
- (void)markLiveExposedIfNeed;
- (void)writeAndClearMsgExposeInfo;
- (void)asyncUpdateVisibleMsgsOnExposed;
- (BOOL)shouldOnlyUpdateExposeStatusWhenValidExposed:(id)arg1;
- (void)asyncUpdateMsgOnExposed:(id)arg1;
- (void)batchAsyncUpdateMsgsOnExposed:(id)arg1;
- (void)onUpdateMsgExposedTimeout;
- (void)invalidBatchUpdateTimer;
- (void)initValidExposureLogic:(id)arg1;
- (void)stopValidExposeCheck;
- (void)batchAsyncUpdateMsgsOnValidExposed:(id)arg1;
- (void)onUpdateMsgValidExposedTimeout;
- (void)stopValidExposeMsgForBatchUpdateTimer;
- (void)initVideoHotZoneHelper:(id)arg1;
- (CGRect)getExposureVisibleRect:(id)arg1;
- (CGRect)getSectionRect:(unsigned long long)arg1 helper:(id)arg2;
- (CGRect)getItemCellViewRect:(id)arg1 helper:(id)arg2;
- (void)onItemCellViewListExposure:(id)arg1 helper:(id)arg2;
- (void)onSectionListExposure:(id)arg1 helper:(id)arg2;
- (void)onSectionStartExposure:(id)arg1 helper:(id)arg2;
- (void)updateExposeCountForMsgWrapIfNeed:(id)arg1;
- (void)updateExposeRatioForMsgWrapIfNeed:(id)arg1 ratio:(unsigned int)arg2;
- (void)startValidExposeTimerForMsgWrapIfNeed:(id)arg1;
- (void)triggerCheckMsgWrapOnValidExpose:(id)arg1;
- (BOOL)checkIfReaderItemValidExposed:(id)arg1 baseCellView:(id)arg2 exposureInfo:(id)arg3;
- (void)triggerCheckReaderMsgOnValidExposed:(id)arg1;
- (BOOL)checkIfRecCardValidExposed:(id)arg1 baseCellView:(id)arg2 exposureInfo:(id)arg3;
- (void)addRecItemValidExposeTimerIfNeedWithVideoModel:(id)arg1 andIdentifer:(id)arg2 exposureInfo:(id)arg3 itemIndex:(long long)arg4;
- (void)triggerCheckRecCardOnValidExposed:(id)arg1;
- (BOOL)checkIfRecoFlowCellValidExposed:(id)arg1 cellView:(id)arg2 exposureInfo:(id)arg3;
- (void)triggerCheckRecoFlowCellOnValidExposed:(id)arg1;
- (BOOL)checkIfAdCanvasMsgOnExposed:(id)arg1 baseCellView:(id)arg2 exposureInfo:(id)arg3;
- (void)triggerCheckAdCanvasMsgOnValidExposed:(id)arg1;
- (void)reportAdPosOnValidExpose:(id)arg1 action:(unsigned int)arg2;
- (BOOL)checkIfRecCanvasCardValidExposed:(id)arg1 baseCellView:(id)arg2 exposureInfo:(id)arg3;
- (void)triggerCheckRecCanvasCardOnValidExposed:(id)arg1;
- (id)keyForVaildExposeTimer:(id)arg1 indexPath:(id)arg2;
- (void)dispatchBoxClickEventToAdContext;
- (void)setupCanvasContextVC;
- (void)resetCanvasContextVC;
- (void)pauseCanvasView;
- (void)resumeCanvasView;
- (void)notifyCanvasViewEnterPage;
- (void)notifyCanvasViewExitPage;
- (void)stopCanvasView;
- (void)checkReportAdCardPosWhenInit:(id)arg1 resort:(BOOL)arg2;
- (id)getInitUrl;
- (id)getCurrentUrl;
- (id)getCurrentAppId;
- (id)extraInfo;
- (unsigned int)getCurrentScene;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (BOOL)allowFayByImage;
- (void)enableWebContentImageLongPressingTag;
- (BOOL)allowImagePreview;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (void)doJsApiInitEvent;
- (void)forceShowCloseButton;
- (id)m_initUrl;
- (id)m_a8KeyLogicImpl;
- (id)m_jsLogicImpl;
- (BOOL)m_bOfflinePage;
- (id)webView;
- (BOOL)m_bIsJsapiUploadVideoUploading;
- (id)m_delegate;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getShareUrl;
- (void)setWebViewContentSize:(CGSize)arg1;
- (void)goToURL:(id)arg1;
- (id)initWithExptConfig:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)updateOftenReadLive;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willDisappear;
- (void)triggerFinderReportAction;
- (void)willEnterForeground:(id)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (void)initData;
- (void)resetData:(BOOL)arg1;
- (void)syncCheckMoveBoxMsgToTop:(unsigned int)arg1 needNotify:(BOOL)arg2;
- (id)addAndSortSectionData:(id)arg1;
- (id)addAndSortSectionDataArr:(id)arg1;
- (void)updatePersonalCenterRedDot;
- (long long)getPersonalCenterRedDotCount;
- (void)addOftenReadSectionIfNeed:(id)arg1;
- (void)removeOftenReadSection;
- (void)addNotifySectionIfNeed;
- (BOOL)hasMoreSubscribedMsgFrom:(unsigned long long)arg1 groupId:(id)arg2;
- (id)_loadMsgSection:(unsigned long long)arg1;
- (void)addMsgSectionIfNeed:(BOOL)arg1;
- (id)checkEdgeBetweenSubscribedAndRecoFlow;
- (void)addEdgeAfterDelSubscribedMsgIfNeeded;
- (void)addRecoFlowLoadingFuncCell:(BOOL)arg1 reloadTable:(BOOL)arg2;
- (id)loadRecoFlowCachedCards;
- (void)markLoadMoreFinish;
- (BOOL)containExistRecoFlowItem:(id)arg1;
- (void)loadRecoFlowSectionIfNeededOnViewDidAppear;
- (void)loadRecoFlowSectionIfNeeded:(int)arg1;
- (void)loadRecoFlowSectionIfNeeded:(int)arg1 fetchStartBlock:(id /* block */)arg2;
- (void)refreshRecoFlowClicked;
- (void)expandMoreSubscribedMsgClicked;
- (BOOL)hasRecoFlowSectionData;
- (void)initView;
- (void)initTableView;
- (void)reloadTableView:(unsigned long long)arg1;
- (void)tableViewInsertSections:(id)arg1 withRowAnimation:(long long)arg2 scene:(unsigned long long)arg3;
- (void)tableViewDeleteSections:(id)arg1 withRowAnimation:(long long)arg2 scene:(unsigned long long)arg3;
- (void)hookTableViewFuncSetContentOffset;
- (void)mmTableViewDidFinishedLoading:(id)arg1;
- (void)initFooterView;
- (void)initSearchBar;
- (void)tryAdjustSearchBarBehaviour:(id /* block */)arg1;
- (double)tableViewCellWidth;
- (void)initNavigationBar;
- (id)getTitleColor;
- (void)updateNavigationBarWithNewMsgCount:(unsigned int)arg1;
- (void)adjustTableViewInset:(id)arg1;
- (void)updateVisibleCellTime;
- (void)checkFirstVisibleCell;
- (void)viewWillLayoutSubviews;
- (void)report27213OnRightBtn:(unsigned int)arg1;
- (void)checkOftenReadAndLiveBarCellDisplay;
- (void)reportOftenReadCellDisplay:(BOOL)arg1 cell:(id)arg2;
- (void)reportLiveBarCellDisplay:(id)arg1;
- (void)reportScrollableFinderItemDisplayInCell:(id)arg1 withViewModel:(id)arg2 inIndexArr:(id)arg3;
- (void)advanceDownloadNewMsgCoverIfNeed;
- (void)notifyViewWillDisappear;
- (void)notifyCellViewExposureStatusMayChanged;
- (void)onAdvancedUpdateVisibleMsgInfo;
- (void)advancePrefetchExposedVideo;
- (void)advancePrefecthExposedVidoeWithMsgWrap:(id)arg1;
- (void)advanceUpdateMPPageData;
- (void)advanceUpdateMPPageDataWithMessage:(id)arg1;
- (void)advanceUpdateMPPageDataWithUrlInfoArr:(id)arg1;
- (void)onClickNavNewTipsBtn;
- (void)onScrollToTop;
- (void)showPersonalCenter;
- (void)showMessageList;
- (void)onNavBackBarButtonClicked;
- (BOOL)isSectionLastNewMsgSection:(long long)arg1;
- (BOOL)isSectionFirstMsgSection:(long long)arg1;
- (void)updateDivdingLinePositionOnViewBePushed;
- (void)updateDivdingLinePositionOnViewDealloc;
- (void)updateNewMsgDividingLinePosition:(unsigned long long)arg1 reloadTableView:(BOOL)arg2;
- (void)updateNewMsgDividingLineByMsgUnreadCount:(unsigned int)arg1 reloadTableView:(BOOL)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)animatedDisplayCell:(id)arg1 delay:(double)arg2 duration:(double)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)calIndexPathSectionToMsgSectionIdx:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tryRefreshRecoFlowOnceOnCellExposed:(long long)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateReaderPosInTL;
- (void)asyncUpdateOrDeleteMsgWrapFromDBWithSectionDataArr:(id)arg1 shouldUpdateMainSession:(BOOL)arg2;
- (void)asyncUpdateOrDeleteMsgWrapFromDBWithSectionDataArr:(id)arg1 shouldUpdateMainSession:(BOOL)arg2 blockedFinderUserName:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)notifyCanvasCellItemScrollEvent;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateLoadingState;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (BOOL)shouldDownMoreLoading;
- (void)footerTryLoadDownMoreMsg;
- (BOOL)tryLoadDownMoreMessageWithInsertAnimation:(BOOL)arg1;
- (id)filterMsgListAndCheckDeleteIfNeed:(id)arg1;
- (id)filterMsgList:(id)arg1 pGetMsgArrShouldDel:(id *)arg2;
- (BOOL)shouldDeleteRecAfterFilter:(id)arg1;
- (void)onBaseSectionHeightChange:(id)arg1;
- (void)onMsgSectionHeightChange:(id)arg1;
- (void)reloadTableViewWithSceneNum:(id)arg1;
- (id)onMsgSectionGetPageIdentifierForReaderWrap:(id)arg1;
- (id)onMsgSectionGetRelatedInfoForReaderWrap:(id)arg1;
- (BOOL)isTitleUp;
- (unsigned long long)indexForMsgSectionData:(id)arg1;
- (id)getCurrentWebviewViewController;
- (BOOL)isMsgViewControllerInForground;
- (BOOL)onGetMsgTopRightUseRecReasonOpen;
- (BOOL)canCanvasItemCellPlayVideo:(id)arg1;
- (BOOL)isLiveInfoHasClick:(id)arg1;
- (void)onCanvasMsgSectionClick:(id)arg1;
- (void)onLongPressHeader:(id)arg1 fromView:(id)arg2;
- (void)onClickHeaderMoreBtn:(id)arg1 fromView:(id)arg2;
- (void)onLongPress:(id)arg1 fromView:(id)arg2;
- (void)onLongPress:(id)arg1 contact:(id)arg2 fromView:(id)arg3;
- (void)onNeedShowHeaderActionSheet:(id)arg1 fromView:(id)arg2 isFromLongPress:(BOOL)arg3;
- (void)onSelectHeaderOpenContact:(id)arg1 fromView:(id)arg2;
- (void)onClickFeedbackBtn:(id)arg1 fromView:(id)arg2;
- (void)onClickLiveStatusBtn:(id)arg1 fromView:(id)arg2;
- (void)feedbackPanel:(id)arg1 didClickConfirmBtn:(id)arg2 selectedReasonArr:(id)arg3 exposedReasonArr:(id)arg4;
- (void)feedbackPanel:(id)arg1 didClose:(id)arg2 selectedReasonArr:(id)arg3 exposedReasonArr:(id)arg4;
- (BOOL)isExposedWithRecoFlowSectionData:(id)arg1 isValidExpose:(BOOL)arg2;
- (void)onClickAggregationBtn:(id)arg1 fromView:(id)arg2;
- (void)onReloadItemView:(id)arg1;
- (void)onBrandItemAudioClick:(id)arg1;
- (id)getViewController;
- (void)onPreviewMsgImg:(id)arg1 originFrame:(CGRect)arg2 fromView:(id)arg3;
- (void)unfoldTimelineMsg:(id)arg1;
- (void)openReaderWrap:(id)arg1 fromMsgWrap:(id)arg2 fromItemView:(id)arg3;
- (void)unsubscribeContact:(id)arg1;
- (void)onNotifyMsgCellViewClicked;
- (BOOL)existNotifySection;
- (id)getNotifySectionData;
- (unsigned long long)indexForNotifySection;
- (void)onNotifyMsgCountChange:(unsigned int)arg1;
- (void)updateNotifySection:(unsigned int)arg1;
- (void)onCreationCenterNotifyCountChange:(long long)arg1;
- (void)advancePreloadChannelWeApp:(id)arg1;
- (void)openChannelWeAppWithTopBarInfo:(id)arg1;
- (void)openChannelWeAppWithAppId:(id)arg1 debugMode:(unsigned long long)arg2 dataBuffer:(id)arg3 path:(id)arg4;
- (void)updateChannelEntryDataAfterOpenWeApp;
- (id)getChannelWeAppPath:(unsigned int)arg1 path:(id)arg2;
- (void)onMPChannelUpdateEntryData:(id)arg1;
- (void)onMPChannelUpdateTopBarEntryData:(id)arg1;
- (void)p_jumpBrandFlowListWhenClickContact:(id)arg1 allBarContacts:(id)arg2;
- (void)onOftenReadBarView:(id)arg1 didClickItemView:(id)arg2;
- (void)onOftenReadBarView:(id)arg1 didClickLivingBtn:(id)arg2;
- (void)onOftenReadBarView:(id)arg1 exposeItemViewArr:(id)arg2;
- (BOOL)canInsertCellFromTopWithAnimation;
- (void)onAddBrandTimelineMsg:(id)arg1;
- (BOOL)isMsgWrapExist:(id)arg1;
- (BOOL)shouldNotifyNewMsgOnNavBar:(id)arg1;
- (void)onBatchAddBrandTimelineMsgArr;
- (void)onModBrandTimelineMsg:(id)arg1;
- (void)onModBrandTimelineMsgArr:(id)arg1;
- (void)onExposeBrandTimelineMsgArr:(id)arg1;
- (void)onValidExposeBrandTimelineMsgArr:(id)arg1;
- (void)onModBrandCanvasAdMsg:(id)arg1;
- (void)onClearAllTimelineMsgUnreadStatus;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onDelBrandTimelineMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)onResortSuccess:(unsigned long long)arg1 pageActiveAfterResort:(BOOL)arg2;
- (void)onFinderRecommendCardFinderContactUpdatedToUnFollowStateWithUsername:(id)arg1;
- (void)checkAndUpdateRecommendCardSectionWithBlockedFinderUserName:(id)arg1 traceLogPrefix:(id)arg2;
- (void)tryRefreshPageWhenRemovedSectionData:(unsigned long long)arg1;
- (void)reportBrandCard;
- (void)onBizProfileSettingModified:(id)arg1 setting:(id)arg2 finderUserName:(id)arg3;
- (void)onUpateOftenReadBiz:(id)arg1;
- (void)updateOftenReadBar;
- (void)resetOftenReadBarPosition;
- (void)updateOftenReadBarWithContactArr:(id)arg1;
- (id)oftenReadSection;
- (unsigned long long)indexForOftenRead;
- (void)reloadOftenReadBar;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onDeleteRecMissedSubsMsg:(id)arg1;
- (BOOL)isContactNeedProcess:(id)arg1;
- (void)deleteAllMsgByContact:(id)arg1;
- (id)timelineMsgArr;
- (id)timelineMsgSectionDataArr;
- (unsigned long long)indexForFirstMsgSection;
- (unsigned long long)indexForFirstVisibleMsgOrRecoFlowSection;
- (id)visibleMsgSectionDataList;
- (id)visibleMsgOrRecoFlowSectionDataList;
- (id)visibleReaderItemViewModelList;
- (id)visibleMsgList;
- (unsigned long long)msgIndexFormsgSectionData:(id)arg1;
- (unsigned long long)indexForBaseSectionData:(id)arg1;
- (unsigned long long)flowIndexForRecoFlowSectionData:(id)arg1;
- (unsigned long long)onReportGetIndexForFirstVisibleMsgOrRecoFlowSection;
- (id)onReportGetArrSectionData;
- (unsigned int)onReportGetMsgListCount;
- (unsigned long long)getNewMsgSequenceId;
- (BOOL)onReportGetIsSubsMsgLoadEnd;
- (id)getBTBaseItemCellViewFromIndexPath:(id)arg1;
- (id)getBTBaseItemCellViewModelFromIndexPath:(id)arg1;
- (id)getExposeInfoCache;
- (id)getTimelineMsgArr;
- (id)getTimelineVisibleMsgArr;
- (void)sortList;
- (id)genDicPageIdentifierToCellViewModel;
- (void)onBatchUpdateMPPageRelatedInfoArr:(id)arg1;
- (void)onBatchUpdateMPPagePaySubcribeHasPaid:(id)arg1;
- (void)fixedFinderCellView:(id)arg1 onClickInfoArea:(id)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(id)arg1 onClickCoverArea:(id)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(id)arg1 onLongClickInfoArea:(id)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(id)arg1 onLongClickCoverArea:(id)arg2 index:(long long)arg3;
- (void)fixedFinderCellView:(id)arg1 onClickFeedbackBtn:(id)arg2 index:(long long)arg3;
- (void)scrollableFinderCellView:(id)arg1 onClickInfoArea:(id)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
- (void)scrollableFinderCellView:(id)arg1 onClickCoverArea:(id)arg2 animator:(id)arg3 displayIndex:(long long)arg4 dataIndex:(long long)arg5;
- (void)handleClickRecFinderCardCellView:(id)arg1 viewModel:(id)arg2 animator:(id)arg3 displayIndex:(long long)arg4 dataIndex:(long long)arg5;
- (void)scrollableFinderCellView:(id)arg1 onLongClickCoverArea:(id)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
- (void)scrollableFinderCellView:(id)arg1 onClickInterestCard:(id)arg2 animator:(id)arg3 displayIndex:(long long)arg4 dataIndex:(long long)arg5;
- (void)scrollableFinderCellView:(id)arg1 onLongClickInterestCard:(id)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
- (void)scrollableFinderCellView:(id)arg1 onExposeItem:(id)arg2 displayIndex:(long long)arg3 dataIndex:(long long)arg4;
- (void)scrollableFinderCellViewOnValidShowItems:(BOOL)arg1;
- (void)recoFlowCellDidClickExpandMore:(id)arg1;
- (void)recoFlowCell:(id)arg1 didClickFeedbackBtn:(id)arg2;
- (void)recoFlowCell:(id)arg1 didClickAggregationLabel:(id)arg2;
- (id)findRecoFlowSectionDataByCardId:(id)arg1;
- (long long)findToRemoveIndexSectionByCardMsg:(id)arg1;
- (void)recoFlowDeleteCell:(id)arg1 cardMsg:(id)arg2;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceDidEnd;
- (void)onSwitchedToLiveWithExportId:(id)arg1;
- (void)onPersonalRecommendSwitchUpdate:(BOOL)arg1;
- (BOOL)hasRecoFlowHeaderCell;
- (BOOL)recoFlowLogicHasRecoFlowDataInList:(id)arg1;
- (void)registerYReportSdk;
- (void)traceLogMsg:(id)arg1 logPrefix:(id)arg2;
- (id)gen11404ReportItem;
- (void)stopScrollableFinderCellIfNeeded;
- (void)checkScrollFinderCellAutoPlay;
- (void)onBrandFlowListCellExposeWithModel:(id)arg1;
- (id)exptConfig;
- (void)setExptConfig:(id)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)enterRowIndexInMainFrameSession;
- (void)setEnterRowIndexInMainFrameSession:(unsigned long long)arg1;
- (BOOL)isShowRedDotInMainFrameSession;
- (void)setIsShowRedDotInMainFrameSession:(BOOL)arg1;
- (unsigned int)redDotCount;
- (void)setRedDotCount:(unsigned int)arg1;
- (id)enterMsgInMainFrameSession;
- (void)setEnterMsgInMainFrameSession:(id)arg1;
- (unsigned int)enterSessionInfoNotifyType;
- (void)setEnterSessionInfoNotifyType:(unsigned int)arg1;
- (id)searchBarMaskView;
- (void)setSearchBarMaskView:(id)arg1;
- (CGPoint)topContentOffset;
- (void)setTopContentOffset:(CGPoint)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)navNewTipsBtn;
- (void)setNavNewTipsBtn:(id)arg1;
- (id)navDefaultTitleView;
- (void)setNavDefaultTitleView:(id)arg1;
- (unsigned int)navBarNewMsgCount;
- (void)setNavBarNewMsgCount:(unsigned int)arg1;
- (unsigned int)newMsgCountInBgCacheTime;
- (void)setNewMsgCountInBgCacheTime:(unsigned int)arg1;
- (id)msgRefreshTimer;
- (void)setMsgRefreshTimer:(id)arg1;
- (BOOL)isLoadingData;
- (void)setIsLoadingData:(BOOL)arg1;
- (BOOL)isAnimatedInsertRowFromTop;
- (void)setIsAnimatedInsertRowFromTop:(BOOL)arg1;
- (id)animatedInsertSectionSetFromTop;
- (void)setAnimatedInsertSectionSetFromTop:(id)arg1;
- (BOOL)hasLoadNumberOfTableRow;
- (void)setHasLoadNumberOfTableRow:(BOOL)arg1;
- (BOOL)hasViewWillBePushedOnce;
- (void)setHasViewWillBePushedOnce:(BOOL)arg1;
- (id)setFastLoadTemplateType;
- (void)setSetFastLoadTemplateType:(id)arg1;
- (unsigned int)displayMode;
- (void)setDisplayMode:(unsigned int)arg1;
- (id)arrTimelineMsgToAdd;
- (void)setArrTimelineMsgToAdd:(id)arg1;
- (id)notifyMsgLogic;
- (void)setNotifyMsgLogic:(id)arg1;
- (id)relatedInfoLogic;
- (void)setRelatedInfoLogic:(id)arg1;
- (BOOL)isPush;
- (void)setIsPush:(BOOL)arg1;
- (BOOL)hasFirstDidAppear;
- (void)setHasFirstDidAppear:(BOOL)arg1;
- (BOOL)hasSectionDataLoad;
- (void)setHasSectionDataLoad:(BOOL)arg1;
- (id)recCardFeedbackPanel;
- (void)setRecCardFeedbackPanel:(id)arg1;
- (id)scrollableFinderCellViewModel;
- (void)setScrollableFinderCellViewModel:(id)arg1;
- (unsigned int)currentGroupId;
- (void)setCurrentGroupId:(unsigned int)arg1;
- (id)sectionBriefDict;
- (void)setSectionBriefDict:(id)arg1;
- (BOOL)isHideSearchBar;
- (void)setIsHideSearchBar:(BOOL)arg1;
- (long long)cardHeaderJumpAction;
- (void)setCardHeaderJumpAction:(long long)arg1;
- (long long)oftenReadJumpAction;
- (void)setOftenReadJumpAction:(long long)arg1;
- (BOOL)canShowPersonalCenter;
- (void)setCanShowPersonalCenter:(BOOL)arg1;
- (id)personalCenterRedDotView;
- (void)setPersonalCenterRedDotView:(id)arg1;
- (BOOL)nativeCardTitleUpEnable;
- (void)setNativeCardTitleUpEnable:(BOOL)arg1;
- (BOOL)isShowMenuAction;
- (void)setIsShowMenuAction:(BOOL)arg1;
- (id)showMenuExtraData;
- (void)setShowMenuExtraData:(id)arg1;
- (id)showMenuCellView;
- (void)setShowMenuCellView:(id)arg1;
- (id)dicMsgBatchUpdateExpose;
- (void)setDicMsgBatchUpdateExpose:(id)arg1;
- (id)batchMsgExposeUpdateTimer;
- (void)setBatchMsgExposeUpdateTimer:(id)arg1;
- (double)navBarAndStatusBarHeight;
- (void)setNavBarAndStatusBarHeight:(double)arg1;
- (id)validExposeConfig;
- (void)setValidExposeConfig:(id)arg1;
- (id)validExposureHelper;
- (void)setValidExposureHelper:(id)arg1;
- (id)dicItemValidExposeTimer;
- (void)setDicItemValidExposeTimer:(id)arg1;
- (id)dicRecCardValidExposeTimer;
- (void)setDicRecCardValidExposeTimer:(id)arg1;
- (id)dicRecoFlowValidExposeTimer;
- (void)setDicRecoFlowValidExposeTimer:(id)arg1;
- (id)dicMsgExposeCountToMsgId;
- (void)setDicMsgExposeCountToMsgId:(id)arg1;
- (id)dicMsgExposeTimeStampToMsgId;
- (void)setDicMsgExposeTimeStampToMsgId:(id)arg1;
- (id)dicMsgExposeRatioToMsgId;
- (void)setDicMsgExposeRatioToMsgId:(id)arg1;
- (id)dicMsgValidExposeTimer;
- (void)setDicMsgValidExposeTimer:(id)arg1;
- (id)dicValidExposeMsgsForBatchUpdate;
- (void)setDicValidExposeMsgsForBatchUpdate:(id)arg1;
- (id)validExposeMsgForBatchUpdateTimer;
- (void)setValidExposeMsgForBatchUpdateTimer:(id)arg1;
- (id)videoHotZoneHelper;
- (void)setVideoHotZoneHelper:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)arrSectionData;
- (void)setArrSectionData:(id)arg1;
- (unsigned int)topNonMsgSectionCount;
- (void)setTopNonMsgSectionCount:(unsigned int)arg1;
- (id)reportLogic;
- (void)setReportLogic:(id)arg1;
- (id)resortLogic;
- (void)setResortLogic:(id)arg1;
- (id)recoFlowLogic;
- (void)setRecoFlowLogic:(id)arg1;
- (BOOL)didAppear;
- (void)setDidAppear:(BOOL)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
- (unsigned int)moveBoxMsgToTopRet;
- (void)setMoveBoxMsgToTopRet:(unsigned int)arg1;
- (BOOL)isScrollingToTop;
- (void)setIsScrollingToTop:(BOOL)arg1;
- (BOOL)isAdCardOpen;
- (void)setIsAdCardOpen:(BOOL)arg1;
- (BOOL)isCanvasCardOpen;
- (void)setIsCanvasCardOpen:(BOOL)arg1;
- (BOOL)isMsgTopRightUseRecReason;
- (void)setIsMsgTopRightUseRecReason:(BOOL)arg1;
- (unsigned long long)lastCanvasScrollEventTime;
- (void)setLastCanvasScrollEventTime:(unsigned long long)arg1;
- (id)dicLiveBarClickLiveInfo;
- (void)setDicLiveBarClickLiveInfo:(id)arg1;
- (BOOL)hasLiveBarExpandStateEverReported;
- (void)setHasLiveBarExpandStateEverReported:(BOOL)arg1;
- (unsigned long long)topLastNewMsgSequenceId;
- (void)setTopLastNewMsgSequenceId:(unsigned long long)arg1;
- (unsigned long long)newMsgDividingLineSequenceId;
- (void)setNewMsgDividingLineSequenceId:(unsigned long long)arg1;
- (id)m_extraInfo;
- (void)setM_extraInfo:(id)arg1;
- (id)modelInfo;
- (void)setModelInfo:(id)arg1;
- (id)selectedItemCellViewModelVideoPlay;
- (void)setSelectedItemCellViewModelVideoPlay:(id)arg1;
- (BOOL)canVideoAutoPlay;
- (void)setCanVideoAutoPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
