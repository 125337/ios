@interface MMOrderCenterTableViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMOrderCenterTableViewModularCellDelegate, MMOrderCenterTableViewControllerExt>
{
    BOOL _loading; // +0x70
    MMOrderCenterTableView * _tableView; // +0x78
    id <MMOrderCenterReporter> _reporter; // +0x80
    id <MMOrderCenterOrderDataProvider> _dataProvider; // +0x88
    NSMutableArray * _orders; // +0x90
    UILabel * _listEmptyView; // +0x98
    UIImage * _listLoadingImage; // +0xa0
    UIImageView * _listLoadingView; // +0xa8
    UIView * _loadErrorView; // +0xb0
    long long _lastSelectedIndex; // +0xb8
    WCFinderRefreshTableFooterView * _noMoreView; // +0xc0
}
- (id)initWithOrderDataProvider:(id)arg1;
- (void)fetchOrderListForcingRefresh:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onFinderRefererTappedForOrder:(id)arg1;
- (void)onHeaderStoreTappedForOrder:(id)arg1;
- (void)onSkuListExpandTappedForOrder:(id)arg1;
- (void)onTrackingViewTappedForOrder:(id)arg1;
- (void)onReviewButtonTappedForOrder:(id)arg1;
- (void)onGlobalOrderRefreshRequestedByOrderTableViewController:(id)arg1;
- (void)refreshOrdersStartingFromIndex:(unsigned long long)arg1;
- (void)fetchOrderListSucceededWithOrders:(id)arg1 startover:(BOOL)arg2;
- (void)fetchOrderListFailedWithErrorType:(int)arg1 message:(id)arg2;
- (void)checkAndConfigureListEmptyView;
- (void)configureViewHidingForStatus:(long long)arg1;
- (void)configureLoadingViewForShowing:(BOOL)arg1;
- (void)configureNoMoreViewForShowing:(BOOL)arg1;
- (void)configureOrderListForShowing:(BOOL)arg1;
- (void)configureListEmptyViewForShowing:(BOOL)arg1;
- (void)configureLoadErrorViewForShowing:(BOOL)arg1;
- (id)newErrorView;
- (void)fetchMoreOrderListItems;
- (void)registerCellTypes;
- (id)cellTypeForOrder:(id)arg1;
- (double)cellHeightForOrder:(id)arg1 estimate:(BOOL)arg2;
- (void)navigateToWeAppWithId:(id)arg1 path:(id)arg2;
- (void)navigateToWeAppWithAppUsername:(id)arg1 path:(id)arg2;
- (void)addRotationAnimationToView:(id)arg1;
- (void)removeRotationAnimationFromView:(id)arg1;
- (void)reportEnteringDetailsOfOrder:(id)arg1;
- (void)reportEnteringStoreOfOrder:(id)arg1;
- (void)reportEnteringShippingDetailsOfOrder:(id)arg1;
- (void)reportEnteringReferrerFinderProfileOfOrder:(id)arg1;
- (void)reportEnteringReviewOfOrder:(id)arg1;
- (void)reportEvent:(id)arg1 params:(id)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (id)orders;
- (void)setOrders:(id)arg1;
- (id)listEmptyView;
- (void)setListEmptyView:(id)arg1;
- (id)listLoadingImage;
- (void)setListLoadingImage:(id)arg1;
- (id)listLoadingView;
- (void)setListLoadingView:(id)arg1;
- (id)loadErrorView;
- (void)setLoadErrorView:(id)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (long long)lastSelectedIndex;
- (void)setLastSelectedIndex:(long long)arg1;
- (id)noMoreView;
- (void)setNoMoreView:(id)arg1;
- (void).cxx_destruct;
@end
