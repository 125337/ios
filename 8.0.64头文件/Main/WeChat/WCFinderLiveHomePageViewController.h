@interface WCFinderLiveHomePageViewController : MMUIViewController <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderLiveHomePageViewModelDelegate, WCFinderLiveHomePageBannerSectionViewDelegate, WCFinderLiveHomePageFollowSectionViewDelegate, WCFinderLiveHomePageSpecialColumnSectionViewDelegate, WCFinderLiveHomePageAdSectionViewDelegate, WCFinderLiveHomePageHistorySectionViewDelegate, WCFinderLiveHomePageNormalCellDelegate, WCFinderLiveHomePageNoticeCellDelegate, WCFinderLiveHomePageRelatedLiveCellDelegate, WCFinderRedDotExt, MMLimitedModeEntryViewControllerExt, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCFinderLiveHomePageSectionHeaderViewDelegate, WCFinderLiveHomePageAggregationCardCellDelegate, WCFinderLiveHomePageTabLiveStreamSectionDelegate, WCFinderLiveHomePageLiveReplayCardCellDelegate, WCFinderFeedContentVMExt, WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderLiveHomePageNpsSurveyCellDelegate, MMLiveQcPollResponseDelegate, WCFinderFeedBaseViewControllerProtocol, MMLiveContainerLogicTargetViewControllerDelegate>
{
    BOOL _directlyOpenJumpInfoPage; // +0x70
    BOOL _selfCached; // +0x71
    BOOL _canUseDataCache; // +0x72
    BOOL _isInInteractivePushTransition; // +0x73
    BOOL _originalNeedShowWindow; // +0x74
    unsigned int _enterSquareScene; // +0x78
    WCFinderFeedFlowView * _feedFlowView; // +0x80
    id <WCFinderLiveHomePageViewControllerDelegate> _delegate; // +0x88
    WCFinderRedDotCtrlInfo * _finderLiveEntryRedDotCtrlInfo; // +0x90
    unsigned long long _redDotObjectID; // +0x98
    unsigned long long _clkInitialTimeStamp; // +0xa0
    id /* block */ _viewDidAppearBlock; // +0xa8
    MMFinderLiveIconTransitionCarouselView * _navIconCarouselView; // +0xb0
    MMUIButton * _navRightButton; // +0xb8
    UILabel * _navRightTitleLabel; // +0xc0
    WCFinderLiveHomePageViewModel * _vm; // +0xc8
    WCFinderLiveHomePageInitialParams * _params; // +0xd0
    UIView * _redDotAnimCellView; // +0xd8
    UIView * _redDotAnimCellParentView; // +0xe0
    UIView * _redDotAnimMaskView; // +0xe8
    WCFinderLiveHomePageScrollActionSheet * _currentActionSheet; // +0xf0
    MMFinderLiveHomePageBottomPlayerView * _bottomPlayerView; // +0xf8
    MMFinderLiveHomePageBottomPlayerViewModel * _bottomPlayerViewModel; // +0x100
    UIImage * _cellSnapshot; // +0x108
    WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell * _tabLiveStreamCell; // +0x110
    _TtC6WeChat22MMFinderLiveFPSMonitor * _fpsMonitor; // +0x118
    MMFinderLiveFeedFriendsLikeListViewController * _tmpLikeListVC; // +0x120
    MMLiveQcPollPageSheet * _tmpQcPollSheet; // +0x128
    UIView * _notifyRedPoint; // +0x130
    MMBarButtonItem * _personCenterNavBtn; // +0x138
}
+ (double)calculateRecommendAreaTwoColumnCellWidthInVC:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)initFpsMonitor;
- (void)dealloc;
- (void)refreshTop;
- (void)refreshTopForRedDotPreload;
- (void)viewDidLoad;
- (void)updateEnterSkeletonStatus:(BOOL)arg1;
- (void)updateBottomSkeletonStatus:(BOOL)arg1;
- (void)updateNav;
- (void)setUpPersonCenterRedDot;
- (void)setupBackground;
- (void)setupViews;
- (void)reloadData;
- (void)checkOpenJumpPage;
- (void)onBackButtonClicked:(id)arg1;
- (void)onSearchClicked;
- (void)onTabsSqaureClicked;
- (void)onPersonalCenterButtonClicked;
- (void)onMoreLiveClicked:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)reportFpsResult;
- (void)willAppear;
- (void)didAppear;
- (void)willDisappear;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (id)bottomPlayerView;
- (BOOL)isViewAppearing;
- (id)navIconCarouselView;
- (id)navRightButton;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (BOOL)checkRedDotTargetingAction:(unsigned long long *)arg1;
- (void)redDotAnimateFirstCell:(id)arg1;
- (void)tryStopRedDotCellAnimation;
- (void)onForwardAction:(id)arg1 containerId:(unsigned long long)arg2;
- (void)refreshRecentWatchIfNeeded;
- (void)scrollToTop;
- (void)performNavRightCarousel:(BOOL)arg1;
- (BOOL)isShowBottomPlayerState;
- (void)setFromLiveID:(unsigned long long)arg1;
- (void)setFromReportScene:(id)arg1;
- (void)reportRightNavButtonExpose;
- (void)setFinderLiveEntryRedDotCtrlInfo:(id)arg1;
- (void)setEnterSquareScene:(unsigned int)arg1;
- (BOOL)isTabStreamStyle;
- (void)handleFeedFlowViewTabStreamStyleChange;
- (void)requestCheckScrollAutoPlay;
- (void)pushFinderShareDetailViewControllerWithFeedVM:(id)arg1 sectionVM:(id)arg2 cardIndex:(unsigned long long)arg3 replayContainerType:(long long)arg4;
- (id)createReplayEnterInfoDicWithDataItem:(id)arg1 replayContainerType:(long long)arg2;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)onHomePageRefreshAllData;
- (void)onHomePageRefreshSectionAllData:(unsigned long long)arg1;
- (void)onHomePageFetchFailWithErrorCode:(int)arg1 section:(unsigned long long)arg2;
- (void)onHomePageHasNoMoreData:(unsigned long long)arg1;
- (void)onHomePageFetchAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 section:(unsigned long long)arg3;
- (void)onHomePageBatchReplaceDataFromRange:(_NSRange)arg1 insertRange:(_NSRange)arg2 removeRange:(_NSRange)arg3 section:(unsigned long long)arg4;
- (void)onHomePageNavTabsUpdate;
- (void)updateHomePageWithNavTabs:(id)arg1;
- (void)onHomePageDeleteContainerTid:(id)arg1 containerId:(unsigned long long)arg2;
- (void)onHomePageResponseFlagUpdate;
- (void)onHomePageFakeLoadingFinish;
- (void)onHomePageUpdateFlowLoadState;
- (void)onHomePageLiveStreamBatchLoadBottom;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 feedVM:(id)arg3 withContainerId:(unsigned long long)arg4 andUsrname:(id)arg5 indexPath:(id)arg6;
- (void)bindNewExposeReport:(id)arg1 feedVM:(id)arg2 indexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (double)tabLiveStreamHeight;
- (double)parentMaxOffset;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidEndDragging:(id)arg1;
- (void)finderFeedFlowViewReloadData:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)openModel:(id)arg1 inSectionView:(id)arg2 goToReplay:(BOOL)arg3;
- (void)onBannerSectionView:(id)arg1 clickRecommendUrl:(id)arg2;
- (void)onBannerSectionView:(id)arg1 selectElementVM:(id)arg2 cell:(id)arg3;
- (void)onBannerSectionView:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (BOOL)shouldBannerSectionViewHandleSelectAction:(id)arg1;
- (void)onBannerSectionViewStartInnerPlay:(id)arg1 containerModel:(id)arg2;
- (void)onBannerSectionView:(id)arg1 forwardAction:(id)arg2;
- (void)onBannerSectionView:(id)arg1 clickFriendLikeReason:(id)arg2;
- (void)onFollowSectionView:(id)arg1 selectElementVM:(id)arg2 thumbImage:(id)arg3;
- (void)onFollowSectionViewFetchMoreLiveList:(id)arg1;
- (void)onHistorySectionView:(id)arg1 selectElementVM:(id)arg2 cell:(id)arg3;
- (void)onHistorySectionViewFetchMoreLiveList:(id)arg1;
- (void)onHistorySectionView:(id)arg1 deleteTid:(id)arg2;
- (void)onAdSectionView:(id)arg1 selectElementVM:(id)arg2;
- (void)onSpecialColumnSectionView:(id)arg1 selectElementVM:(id)arg2 playableCell:(id)arg3;
- (void)onSpecialColumnSectionView:(id)arg1 clickRecommendUrl:(id)arg2;
- (void)onSpecialColumnSectionView:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onSpecialColumnSectionView:(id)arg1 actionWithJumpModel:(id)arg2;
- (BOOL)shouldSpecialColumnSectionViewHandleSelectAction:(id)arg1;
- (void)onSpecialColumnSectionViewStartInnerPlay:(id)arg1 containerModel:(id)arg2;
- (void)onSpecialColumnSectionViewFetchMoreLiveList:(id)arg1;
- (void)onSpecialColumnSectionView:(id)arg1 forwardAction:(id)arg2;
- (void)onSpecialColumnSectionView:(id)arg1 clickFriendLikeReason:(id)arg2;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onRelatedLiveCellForwardAction:(id)arg1;
- (void)onBaseLiveCellForwardAction:(id)arg1;
- (void)onLiveCellClickFriendLikeReason:(id)arg1;
- (void)onHomePageAggregationCell:(id)arg1 clickJumpLive:(id)arg2;
- (void)onHomePageAggregationCellClickJumpThemeTemplate:(id)arg1;
- (void)onHomePageNoticeAction:(BOOL)arg1 feedVM:(id)arg2;
- (void)onShowConcertTicketAction:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)reportLiveShareActionWithEid:(id)arg1 isExpose:(BOOL)arg2 source:(int)arg3;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1 isCertificateType:(BOOL)arg2;
- (void)onFinishPublishingTextState:(id)arg1;
- (void)onHomePageSectionHeaderView:(id)arg1 clickMoreTabInfo:(id)arg2;
- (void)onHomePageSectionHeaderViewExpand:(id)arg1;
- (void)onFromVcTransitionEnd:(id)arg1 liveTaskId:(id)arg2 isPop:(BOOL)arg3 isComplete:(BOOL)arg4;
- (void)onFromVcTransitionBegin:(id)arg1 liveTaskId:(id)arg2 isPop:(BOOL)arg3;
- (id)getTargetTransitionContext:(BOOL)arg1 fromVC:(id)arg2;
- (unsigned long long)homePageScene;
- (void)registerYReportSdk;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 clickRecommendUrl:(id)arg2;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 selectElementVM:(id)arg2 playableCell:(id)arg3 indexPath:(id)arg4;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 aggregationCellClickJumpLive:(id)arg2;
- (BOOL)shouldTabLiveStreamSectionFeedViewHandleSelectAction:(id)arg1;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 aggregationCellClickJumpThemeTemplate:(id)arg2 entryBuffer:(id)arg3 jumpBypass:(id)arg4;
- (void)onTabLiveStreamSectionFeedViewStartInnerPlay:(id)arg1 containerModel:(id)arg2;
- (void)onTabLiveStreamSectionFeedViewNeedCheckAutoPlay:(id)arg1;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 forwardAction:(id)arg2;
- (void)onTabLiveStreamSectionFeedViewDidEndScrolling:(id)arg1;
- (void)updateLiveHomePageInitialParamsScene:(unsigned long long)arg1;
- (BOOL)canShowMore;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)onFriendsLikeListViewControllerDisappear;
- (void)doBusinessWithCompletion:(id /* block */)arg1;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)onHomePageNpsSurveyCell:(id)arg1 selectOption:(id)arg2;
- (void)onFirstResponseOptionSelectedForQuestion:(id)arg1;
- (void)onResponseOptionsEntered:(id)arg1 forQuestion:(id)arg2;
- (void)onQuestionDismissedWithoutResponseEntered:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderLiveEntryRedDotCtrlInfo;
- (BOOL)directlyOpenJumpInfoPage;
- (void)setDirectlyOpenJumpInfoPage:(BOOL)arg1;
- (unsigned long long)redDotObjectID;
- (void)setRedDotObjectID:(unsigned long long)arg1;
- (BOOL)selfCached;
- (void)setSelfCached:(BOOL)arg1;
- (BOOL)canUseDataCache;
- (void)setCanUseDataCache:(BOOL)arg1;
- (unsigned long long)clkInitialTimeStamp;
- (void)setClkInitialTimeStamp:(unsigned long long)arg1;
- (unsigned int)enterSquareScene;
- (id /* block */)viewDidAppearBlock;
- (void)setViewDidAppearBlock:(id /* block */)arg1;
- (void)setNavIconCarouselView:(id)arg1;
- (void)setNavRightButton:(id)arg1;
- (id)navRightTitleLabel;
- (void)setNavRightTitleLabel:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)redDotAnimCellView;
- (void)setRedDotAnimCellView:(id)arg1;
- (id)redDotAnimCellParentView;
- (void)setRedDotAnimCellParentView:(id)arg1;
- (id)redDotAnimMaskView;
- (void)setRedDotAnimMaskView:(id)arg1;
- (id)currentActionSheet;
- (void)setCurrentActionSheet:(id)arg1;
- (void)setBottomPlayerView:(id)arg1;
- (BOOL)isInInteractivePushTransition;
- (void)setIsInInteractivePushTransition:(BOOL)arg1;
- (BOOL)originalNeedShowWindow;
- (void)setOriginalNeedShowWindow:(BOOL)arg1;
- (id)bottomPlayerViewModel;
- (void)setBottomPlayerViewModel:(id)arg1;
- (id)cellSnapshot;
- (void)setCellSnapshot:(id)arg1;
- (id)tabLiveStreamCell;
- (void)setTabLiveStreamCell:(id)arg1;
- (id)fpsMonitor;
- (void)setFpsMonitor:(id)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (id)tmpQcPollSheet;
- (void)setTmpQcPollSheet:(id)arg1;
- (id)notifyRedPoint;
- (void)setNotifyRedPoint:(id)arg1;
- (id)personCenterNavBtn;
- (void)setPersonCenterNavBtn:(id)arg1;
- (void).cxx_destruct;
@end
