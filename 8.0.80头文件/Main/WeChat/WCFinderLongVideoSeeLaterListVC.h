@interface WCFinderLongVideoSeeLaterListVC : MMUIViewController <UITableViewDelegate, LVDiffableDataSourceDelegate, WCFinderDataLoadTipsDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderLongVideoSeeLaterCellDelegate, WCFinderFullShareListViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderListLoadingStateModelObserver>
{
    UITableView * _tableView; // +0x70
    LVDiffableDataSource * _tableViewSource; // +0x78
    WCFinderDataLoadTips * _dataLoadTips; // +0x80
    WCFinderStreamFooterView * _footer; // +0x88
    WCFinderLongVideoSeeLaterListVM * _viewModel; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setupUI;
- (void)setupDataSource;
- (void)setupLoadingState;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)diffableDataSource:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)onSeeLaterCellClickDeleteWithContentVM:(id)arg1;
- (int)seeLaterCellGetCommentScene;
- (void)onListLoadingStateModified;
- (void)layoutLoadTips;
- (int)commentScene;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)onFullScreenDidEndPlayContentVM:(id)arg1 finderPlayerReport:(id)arg2;
- (void)registerYReportSdk;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewSource;
- (void)setTableViewSource:(id)arg1;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (id)footer;
- (void)setFooter:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
