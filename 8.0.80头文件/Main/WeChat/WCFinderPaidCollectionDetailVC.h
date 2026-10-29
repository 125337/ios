@interface WCFinderPaidCollectionDetailVC : MMUIViewController <WCFinderHalfScreenProtocol, WCFinderStreamProfileDragBarViewDelegate, WCFinderPaidCollectionDetailHeaderDelegate, WCFinderDataLoadTipsDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderPaymentBottomViewDelegate, WCFinderPaidCollectionConsumeLogicDelegate, WCFinderCollectionFeedListViewControllerDelegate, WCFinderPaidCollectionExt, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, UITableViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    UIView * _globalBackgroundView; // +0x70
    UIView * _contentContainerView; // +0x78
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x80
    WCFinderPaidCollectionDetailHeaderView * _headerView; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
    UITableView * _tableView; // +0x98
    ForwardMessageLogicController * _forwardController; // +0xa0
    MMScrollActionSheet * _shareActionSheet; // +0xa8
    WCFinderDataLoadTips * _dataLoadTips; // +0xb0
    WCFinderPaymentBottomView * _bottomPaymentView; // +0xb8
    WCFinderPaidCollectionDetailVM * _viewModel; // +0xc0
    UITableViewDiffableDataSource * _dataSource; // +0xc8
    WCFinderPaidCollectionDetailVCParams * _params; // +0xd0
    double _heightRatio; // +0xd8
    WCFinderPaidCollectionConsumeLogic * _courseConsumeLogic; // +0xe0
    NSMutableSet * _exposedFeedSet; // +0xe8
    NSString * _targetTidWhenStartConsume; // +0xf0
}
- (BOOL)useTransparentNavibar;
- (long long)preferredStatusBarStyle;
- (id)initWithParams:(id)arg1;
- (void)baseInit;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupNewDataProvider;
- (void)resetDataProvider;
- (void)setupUI;
- (void)layoutUI;
- (void)layoutLoadTips;
- (void)updateBottomInset;
- (void)updateNavigationBar;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setupDataSource;
- (BOOL)isHalfScreen;
- (double)containerViewHeight;
- (void)showDataLoadTips;
- (void)removeDataLoadTips;
- (void)updatePollingState;
- (void)updateBottomHeaderView;
- (void)tryToStartPaidCollectionConsumeWithTargetTid:(id)arg1;
- (void)reportCellEventWithIndexPath:(id)arg1 event:(id)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)onMoreButtonClicked:(id)arg1;
- (void)_showMoreAction;
- (void)_showComplaintActionSheet;
- (void)_showForwardActionSheet;
- (void)shareToChat:(id)arg1;
- (void)_shareToMoment;
- (void)handlePopGesture:(id)arg1;
- (void)onFeedArrayChanged:(id)arg1;
- (BOOL)_showErrorMessageIfNeed;
- (id)getHalfContainerView;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (void)onPaidCollectionDetailHeaderHeightChanged:(id)arg1;
- (void)onPaidCollectionDetailHeaderDidClickMoreBtn:(id)arg1;
- (BOOL)paidCollectionDetailHeaderIsHalfScreen:(id)arg1;
- (BOOL)paidCollectionDetailHeaderIsAuthorScene:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)onPaymentBottomViewClickConfirmButton;
- (id)getCurrentViewController;
- (void)onPaidCollectionConsumeLogicPurchaseCourseSuccessWithMsg:(id)arg1;
- (BOOL)handleCollectionFeedListSelectNeedPayFeed:(id)arg1 withPaidCollection:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onPaidCollectionTopicID:(id)arg1 purchaseStateChanged:(BOOL)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (id)_cellReportParamsWithCell:(id)arg1 contentVM:(id)arg2 index:(long long)arg3;
- (id)globalBackgroundView;
- (void)setGlobalBackgroundView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)dragBarView;
- (void)setDragBarView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)forwardController;
- (void)setForwardController:(id)arg1;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (id)bottomPaymentView;
- (void)setBottomPaymentView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)courseConsumeLogic;
- (void)setCourseConsumeLogic:(id)arg1;
- (id)exposedFeedSet;
- (void)setExposedFeedSet:(id)arg1;
- (id)targetTidWhenStartConsume;
- (void)setTargetTidWhenStartConsume:(id)arg1;
- (void).cxx_destruct;
@end
