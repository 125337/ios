@interface WCFinderProfilePaidCollectionPage : WCFinderStreamProfileViewPage <UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderProfilePaidCollectionVMDelegate, WCFinderDataLoadTipsDelegate, WCFinderListLoadingStateModelObserver>
{
    UITableView * _tableView; // +0x8
    WCFinderRefreshTableFooterView * _footerView; // +0x10
    UITableViewDiffableDataSource * _tableViewDataSource; // +0x18
    WCFinderDataLoadTips * _emptyTips; // +0x20
    UIView * _topSeperator; // +0x28
}
- (id)loadView;
- (void)viewDidLoad;
- (void)viewWillApear;
- (void)setupDataSource;
- (void)updateLoadingState;
- (void)layoutEmptyTips;
- (void)onProfilePaidCollectionVMDataChanged;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)onListLoadingStateModified;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reportPaidCollectionWithIndexPath:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)tableViewDataSource;
- (void)setTableViewDataSource:(id)arg1;
- (id)emptyTips;
- (void)setEmptyTips:(id)arg1;
- (id)topSeperator;
- (void)setTopSeperator:(id)arg1;
- (void).cxx_destruct;
@end

