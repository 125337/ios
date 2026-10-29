@interface WCFinderPaidCollectionListVC : MMUIViewController <WCFinderPaidCollectionListVMDelegate, UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderDataLoadTipsDelegate, WCFinderListLoadingStateModelObserver>
{
    WCFinderPaidCollectionListVM * _viewModel; // +0x70
    UITableView * _tableView; // +0x78
    UITableViewDiffableDataSource * _tableViewDataSource; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    WCFinderDataLoadTips * _dataLoadTips; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupLoadingState;
- (void)setupDataSource;
- (void)viewWillLayoutSubviews;
- (void)layoutLoadTips;
- (void)showDataLoadTips;
- (void)removeDataLoadTips;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)reloadTableData;
- (void)onPaidCollectionListDataChanged;
- (void)onListLoadingStateModified;
- (void)updateLoadingState;
- (void)onDataLoadTipsClickRetry;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewDataSource;
- (void)setTableViewDataSource:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (void).cxx_destruct;
@end
