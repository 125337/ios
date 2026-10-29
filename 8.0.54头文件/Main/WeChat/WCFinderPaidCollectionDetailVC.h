@interface WCFinderPaidCollectionDetailVC : MMUIViewController <WCFinderHalfScreenProtocol, WCFinderStreamProfileDragBarViewDelegate, WCFinderPaidCollectionDetailHeaderDelegate, WCFinderDataLoadTipsDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderPaymentBottomViewDelegate, WCFinderPaidCollectionConsumeLogicDelegate, WCFinderCollectionFeedListViewControllerDelegate, WCFinderPaidCollectionExt, UITableViewDelegate>
{
    UIView * _globalBackgroundView; // +0x68
    UIView * _contentContainerView; // +0x70
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x78
    WCFinderPaidCollectionDetailHeaderView * _headerView; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    UITableView * _tableView; // +0x90
    WCFinderDataLoadTips * _dataLoadTips; // +0x98
    WCFinderPaymentBottomView * _bottomPaymentView; // +0xa0
    WCFinderPaidCollectionDetailVM * _viewModel; // +0xa8
    UITableViewDiffableDataSource * _dataSource; // +0xb0
    WCFinderPaidCollectionDetailVCParams * _params; // +0xb8
    double _heightRatio; // +0xc0
    WCFinderPaidCollectionConsumeLogic * _courseConsumeLogic; // +0xc8
    NSMutableSet * _exposedFeedSet; // +0xd0
    NSString * _targetTidWhenStartConsume; // +0xd8
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
- (void)handlePopGesture:(id)arg1;
- (void)onFeedArrayChanged:(id)arg1 context:(id)arg2;
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
- (void)onPaidCollectionTopicID:(id)arg1 purchaseStateChanged:(BOOL)arg2;
- (void)registerYReportSdk;
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

