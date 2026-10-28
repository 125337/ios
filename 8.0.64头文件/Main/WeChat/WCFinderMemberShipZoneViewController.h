@interface WCFinderMemberShipZoneViewController : MMUIViewController <WCFinderLiveNoticeViewDelegate, WCFinderLiveLivingViewDelegate, WCFinderArbitraryPageViewDataSource, WCFinderArbitraryPageViewDataDelegate, WCFinderMemberShipZoneHeaderDelegate, WCFinderMemberShipZoneViewModelDelegate, WCFinderPostMgrDelegate, LiveMinimizeWindowRunTimeHandleDelegate, WCFinderInvalidTipsViewDelegate, WCFinderPostViewControllerDelegate, WCFinderMemberShipDiscussionPostViewControllerDelegate, WCActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderMemberShipZonePushParams * _params; // +0x70
    WCFinderArbitraryPageView * _pageView; // +0x78
    WCFinderMemberShipBlockView * _blockView; // +0x80
    WCFinderMemberShipZoneHeader * _headerView; // +0x88
    WCFinderPostMgr * _postMgr; // +0x90
    WCFinderInvalidTipsView * _invalidTipsView; // +0x98
    WCFinderMemberShipZoneViewModel * _viewModel; // +0xa0
    WCFinderCreateLiveViewModel * _createLiveVM; // +0xa8
    NSString * _descriptionPromptWording; // +0xb0
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0xb8
    WCFinderLiveAudienceNoticeReporter * _liveReporter; // +0xc0
    WCFinderMemberShipZoneReporter * _memberShipReporter; // +0xc8
}
- (void)onCreateLivePrepareComplete:(int)arg1 errStr:(id)arg2;
- (void)onPostLiveOrNoticeSheet;
- (void)onPostLive;
- (void)realStartLive;
- (void)onCreateLiveNoticeWithReporter:(id)arg1;
- (void)onCreateLiveNoticeWithInfo:(id)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)onViewDidLoadForHeader;
- (void)onViewWillDisappearForHeader;
- (void)onMemberShipZoneViewModelFetchedForHeader:(BOOL)arg1;
- (void)onLiveNoticeReserveStateChanged:(unsigned long long)arg1 notice:(id)arg2;
- (void)openConcertTicketContainerVCWithNotice:(id)arg1;
- (void)checkAndOpenNoticesAutomatically;
- (void)openMoreNoticeListViewControllerWithNoticeList:(id)arg1 targetNoticeId:(id)arg2;
- (void)createAndShowLiveNoticeQRCodeWithInfo:(id)arg1;
- (void)showCouponPageSheet:(id)arg1;
- (void)onClickLiveNoticeViewActionButton:(id)arg1;
- (void)onClickLiveNoticeActionButton:(id)arg1;
- (void)onClickFreeLiveNoticeView:(id)arg1;
- (void)onClickNeedPayLiveNoticeView:(id)arg1;
- (void)onClickLiveNoticeView:(id)arg1;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMoreNoticesButtonClicked:(id)arg1;
- (void)onLiveLivingViewMainItemClick:(id)arg1;
- (void)onLiveLivingViewMoreNoticeItemClick:(id)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeStatusChanged:(id)arg1;
- (id)createAudienceNoticeReportParams:(id)arg1;
- (void)reportReserverStateChanged:(unsigned long long)arg1 forCustomNotice:(id)arg2;
- (void)reportReserverStateChanged:(unsigned long long)arg1 forConcertNotice:(id)arg2;
- (id)initWithParams:(id)arg1;
- (void)configDefaultSettings;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationTitleColor;
- (BOOL)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)registerPages:(id)arg1;
- (void)createHeaderView;
- (void)reloadData;
- (id)arbitraryTabView:(id)arg1 pageTabNameForIdentifier:(id)arg2 index:(long long)arg3;
- (unsigned long long)arbitraryTabView:(id)arg1 pageTabUnreadCount:(id)arg2 forIndex:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageViewController:(id)arg2 index:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageViewForIdentifier:(id)arg2 index:(long long)arg3;
- (void)arbitraryTabView:(id)arg1 expectPageContentInset:(UIEdgeInsets)arg2 minSize:(CGSize)arg3 forIndex:(long long)arg4 pageView:(id)arg5 pageVC:(id)arg6 identifier:(id)arg7;
- (void)clearTabUnreadCount:(id)arg1 forIndex:(long long)arg2;
- (void)setupBarButtonItems;
- (void)reloadHeaderView;
- (void)onClickBack;
- (void)genActionSheet:(id)arg1 isAuthorPerspective:(BOOL)arg2;
- (void)onClickSearch;
- (void)onClickMore;
- (void)showIntroduce;
- (void)unsubscribe;
- (void)reportProfile;
- (void)createLiveViewModel;
- (void)bindPageReport;
- (id)ticketHandle;
- (id)postMgr;
- (void)onMemberShipZoneViewModelDetailFetched:(id)arg1 remote:(BOOL)arg2;
- (void)showValidContent:(BOOL)arg1;
- (void)showMemberBlockView;
- (id)blockView;
- (void)showInvalidView;
- (void)onMemberShipZoneViewModelRequestDetailFailed:(id)arg1;
- (void)onMemberShipZoneViewLiveNoticeReserveStateChanged:(unsigned long long)arg1 notice:(id)arg2;
- (void)onMemberShipZoneViewShouldShowConcertTicketConfirmed:(id)arg1;
- (id)getCurrentViewController;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onMemberShipZoneHeaderClickLive:(id)arg1;
- (void)onMemberShipZoneHeaderClickPost:(id)arg1;
- (void)onMemberShipZoneHeaderClickActivity:(id)arg1;
- (void)onMemberShipZoneHeaderDataChanged:(id)arg1;
- (void)onMemberShipZoneHeaderHeightChanged;
- (BOOL)onMemberShipZoneContentTextViewShouldForbidClick;
- (void)onMemberShipZoneHeaderClickFans:(id)arg1;
- (void)switchToPage:(id)arg1;
- (void)switchToFirstDataPage;
- (void)selectedPageAtIdx:(long long)arg1;
- (void)removeDraftTab;
- (void)postMgrSaveDraft;
- (void)postMgrStartUpload;
- (void)onDiscussionPostViewControllerClickDone;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)needShowLiveMinizeWindowRunTime;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)arg1;
- (void)finderInvalidTipsView:(id)arg1 didClickLink:(id)arg2;
- (void)finderInvalidTipsViewDidClickComplainButton:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (void)setBlockView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void)setPostMgr:(id)arg1;
- (id)invalidTipsView;
- (void)setInvalidTipsView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (void)setTicketHandle:(id)arg1;
- (id)liveReporter;
- (void)setLiveReporter:(id)arg1;
- (id)memberShipReporter;
- (void)setMemberShipReporter:(id)arg1;
- (void).cxx_destruct;
@end
