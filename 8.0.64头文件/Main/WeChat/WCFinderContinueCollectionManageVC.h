@interface WCFinderContinueCollectionManageVC : MMUIViewController <UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderDataLoadTipsDelegate, WCFinderListLoadingStateModelObserver>
{
    WCFinderContinueCollectionVM * _viewModel; // +0x70
    UIView * _customNavBg; // +0x78
    UIView * _descTitleView; // +0x80
    UILabel * _descTitleLabel; // +0x88
    UITableView * _tableView; // +0x90
    UITableViewDiffableDataSource * _tableViewDataSource; // +0x98
    WCFinderRefreshTableFooterView * _footerView; // +0xa0
    WCFinderDataLoadTips * _dataLoadTips; // +0xa8
}
- (id)init;
- (void)viewDidLoad;
- (void)reportPageInOut;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupBarButtonItems;
- (id)navigationBarBackgroundColor;
- (void)fetchFirstPageData;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)setupLoadingState;
- (void)onListLoadingStateModified;
- (CGRect)tableViewRect;
- (void)configureTableView;
- (void)layoutLoadTips;
- (void)setupDataSource;
- (id)cellWithIndexPath:(id)arg1;
- (void)updateLoadingState;
- (void)reloadTableData;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onClickMore;
- (void)showCollectionContiuneCloseConfirm;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)customNavBg;
- (void)setCustomNavBg:(id)arg1;
- (id)descTitleView;
- (void)setDescTitleView:(id)arg1;
- (id)descTitleLabel;
- (void)setDescTitleLabel:(id)arg1;
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
