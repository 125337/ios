@interface WCFinderMembershipIntroduceViewController : MMUIViewController <WCFinderLiveNoticeViewDelegate, WCFinderLiveLivingViewDelegate, WCFinderMembershipPaymentBottomViewDelegate, WCFinderMemberShipZoneIntroduceHeaderDelegate, WCFinderMembershipIntroduceViewModelDelegate, WCFinderMemberShipIntroducePreviewListViewControllerDelegate, WCFinderInvalidTipsViewDelegate, WCFinderMembershipIntroduceExt, UIScrollViewDelegate, WCFinderMemberShipConsumeViewModelDelegate, WCPlayerConfigViewControllerDelegate, WCFinderMemberShipIntroduceCollectionListViewControllerDelegate, WCFinderMembershipFollowInfoExt, WCFinderCollectionHalfScreenViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    UIScrollView * _containerView; // +0x68
    WCFinderMembershipPaymentBottomView * _payBottomView; // +0x70
    WCFinderMemberShipZoneIntroduceHeader * _headerView; // +0x78
    WCFinderMembershipIntroduceViewModel * _viewModel; // +0x80
    UIButton * _retryButton; // +0x88
    WCFinderMemberShipBlockView * _blockView; // +0x90
    WCFinderMaskButton * _confirmButton; // +0x98
    WCFinderAnimationLoadingView * _loadingView; // +0xa0
    WCFinderInvalidTipsView * _invalidTipsView; // +0xa8
    UIView * _originView; // +0xb0
    WCFinderCollectionHalfScreenViewController * _curCollectionHalfScreenVC; // +0xb8
    WCFinderLiveAudienceNoticeReporter * _liveReporter; // +0xc0
    WCFinderMemberShipIntroduceReporter * _memberShipIntroduceReporter; // +0xc8
    WCFinderMemberShipConsumeViewModel * _consumeViewModel; // +0xd0
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0xd8
    FinderLiveNoticeInfo * _noticeToReserve; // +0xe0
}
- (void)onViewDidLoadForHeader;
- (void)onViewWillDisappearForHeader;
- (void)onMembershipIntroduceViewModelFetchedForHeader:(BOOL)arg1;
- (void)checkAndOpenNoticesAutomatically;
- (void)openMoreNoticeListViewControllerWithNoticeList:(id)arg1 targetNoticeId:(id)arg2;
- (void)onLiveLivingViewMainItemClick:(id)arg1;
- (void)onLiveLivingViewMoreNoticeItemClick:(id)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMoreNoticesButtonClicked:(id)arg1;
- (void)subscribeMemberAndAutoReserveNotice:(id)arg1;
- (id)genAudienceNoticeReportParams;
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (void)configDefaultSettings;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupBarButtonItems;
- (void)setupViews;
- (void)addContainerView;
- (void)addHeaderView;
- (void)addConfirmView;
- (void)addLoadingView;
- (id)navigationBarBackgroundColor;
- (void)onClickMore;
- (void)reportProfile;
- (id)consumeViewModel;
- (id)ticketHandle;
- (void)bindPageReport;
- (void)onMembershipIntroduceViewModelRequestDetailFailed:(id)arg1;
- (void)onMembershipIntroduceViewModelDetailFetched:(id)arg1 remote:(BOOL)arg2;
- (void)showValidContent;
- (void)showMemberBlockView;
- (id)blockView;
- (void)showInvalidView;
- (void)onClickRetry;
- (void)unsubscribe;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)arg1;
- (id)getCurrentViewController;
- (void)onMemberShipConsumeViewModelPurchaseMemberShipCancel;
- (void)onMemberShipConsumeViewModelPurchaseMemberShipFail;
- (void)onFinderMemberShipZoneIntroduceCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onFinderMemberShipZoneIntroducePayNoticeOnLinkClicked:(id)arg1;
- (void)showFinderMemberShipIntroducePlayViewControllerWithContentVMs:(id)arg1 indexPath:(id)arg2 feedType:(int)arg3;
- (void)showFinderMemberShipPreviewListViewControllerWithCollectionViewTag:(unsigned long long)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)fetchCollectionHalfListSheetWithContentVM:(id)arg1 collectionInfo:(id)arg2;
- (BOOL)collectionHalfList:(id)arg1 handleClickContentVM:(id)arg2;
- (BOOL)collectionHalfListForbidAutoClose;
- (void)collectionHalfListWillAppear:(id)arg1;
- (BOOL)collectionHalfListNeedShowBackgroupMask;
- (id)collectionHalfListCustomRightView:(int)arg1;
- (void)onClickConfirm;
- (void)onPayButtonClicked;
- (void)onPreviewListClickBecomeMemberButton;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)arg1;
- (void)finderInvalidTipsView:(id)arg1 didClickLink:(id)arg2;
- (void)finderInvalidTipsViewDidClickComplainButton:(id)arg1;
- (void)onFinderMembershipIntroduceBecomeMember:(unsigned long long)arg1;
- (BOOL)needShowLiveMinizeWindowRunTime;
- (void)onActivityFeed:(id)arg1 clickPhoto:(id)arg2 photoIndex:(long long)arg3 originViewArr:(id)arg4;
- (void)onActivityFeed:(id)arg1 clickVideo:(id)arg2 originRect:(CGRect)arg3 originView:(id)arg4;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)onFinderMemberShipZoneIntroduceHeaderHeightChanged;
- (void)onFinderMemberShipZoneIntroduceHeaderSectionHeaderClickAll:(id)arg1;
- (void)showHalfScreenViewController:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)payBottomView;
- (void)setPayBottomView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (void)setBlockView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)invalidTipsView;
- (void)setInvalidTipsView:(id)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (id)curCollectionHalfScreenVC;
- (void)setCurCollectionHalfScreenVC:(id)arg1;
- (id)liveReporter;
- (void)setLiveReporter:(id)arg1;
- (id)memberShipIntroduceReporter;
- (void)setMemberShipIntroduceReporter:(id)arg1;
- (void)setConsumeViewModel:(id)arg1;
- (void)setTicketHandle:(id)arg1;
- (id)noticeToReserve;
- (void)setNoticeToReserve:(id)arg1;
- (void).cxx_destruct;
@end

