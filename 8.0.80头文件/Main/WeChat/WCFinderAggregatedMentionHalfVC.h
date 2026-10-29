@interface WCFinderAggregatedMentionHalfVC : WCFinderCustomPanelSheet <UITableViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderAggregatedMentionHalfVMDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderDataLoadTipsDelegate, WCFinderListLoadingStateModelObserver>
{
    WCFinderAggregatedMentionHalfVM * _vm; // +0x70
    UITableViewDiffableDataSource * _dataSource; // +0x78
    UITableView * _tableView; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    WCFinderDataLoadTips * _dataLoadTips; // +0x90
    unsigned long long _displayStyle; // +0x98
}
- (id)initWithMention:(id)arg1 finderContact:(id)arg2;
- (id)initWithMention:(id)arg1 finderContact:(id)arg2 displayStyle:(unsigned long long)arg3;
- (void)baseInit;
- (id)loadContentView;
- (id)mainScrollView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupDataSource;
- (void)reloadTableData;
- (void)clickToShowUserProfileWithMention:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setupLoadingState;
- (void)updateLoadingState;
- (void)showDataLoadTips;
- (void)removeDataLoadTips;
- (void)layoutLoadTips;
- (int)feedViewControllerScene;
- (void)onListLoadingStateModified;
- (void)onAggregatedMentionListDataChanged;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (unsigned long long)displayStyle;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
