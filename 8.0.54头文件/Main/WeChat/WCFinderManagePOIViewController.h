@interface WCFinderManagePOIViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderManagePOIViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, MMPickLocationViewControllerDelegate, WCFinderAddPOIViewControllerDelegate>
{
    BOOL _reloadFlag; // +0x68
    BOOL _emptyFlag; // +0x69
    BOOL _showingOtherVC; // +0x6a
    NSString * _finderUsername; // +0x70
    WCFinderManagePOIViewModel * _viewModel; // +0x78
    UITableView * _tableView; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    WCFinderAnimationLoadingView * _loadingView; // +0x90
    UILabel * _stateLabel; // +0x98
    UIImageView * _retryImageView; // +0xa0
    WCFinderAddPOIViewController * _addVC; // +0xa8
    MMPickLocationViewController * _pickLocationViewController; // +0xb0
}
- (id)initWithFinderUsername:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)initViews;
- (void)tapBackButton;
- (void)tapAddButton;
- (void)showPickLocationVC;
- (id)onGetRightBarButton;
- (void)onTapAddButton;
- (void)onCancelSeletctedLocation;
- (void)updateEmptyState;
- (void)bindPOIWithIds:(id)arg1;
- (void)reloadAllData;
- (void)onAuditingPOIListUpdate;
- (void)onAuditingPOIListNoMore;
- (void)onAuditingPOIListError;
- (void)onBindingPOIListUpdate;
- (void)onBindingPOIListNoMore;
- (void)onBindingPOIListError;
- (void)onBindPOISuccess;
- (void)onBindPOIFailure:(int)arg1;
- (void)onUnbindPOISuccess;
- (void)onUnbindPOIFailure;
- (void)onAddVCSelectPOI:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView;
- (id)footerView;
- (id)stateLabel;
- (id)loadingView;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (id)retryImageView;
- (void)setRetryImageView:(id)arg1;
- (BOOL)reloadFlag;
- (void)setReloadFlag:(BOOL)arg1;
- (BOOL)emptyFlag;
- (void)setEmptyFlag:(BOOL)arg1;
- (id)addVC;
- (void)setAddVC:(id)arg1;
- (id)pickLocationViewController;
- (void)setPickLocationViewController:(id)arg1;
- (BOOL)showingOtherVC;
- (void)setShowingOtherVC:(BOOL)arg1;
- (void).cxx_destruct;
@end

