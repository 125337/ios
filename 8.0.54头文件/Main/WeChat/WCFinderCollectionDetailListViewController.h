@interface WCFinderCollectionDetailListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderCollectionDetailListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    int _commentScene; // +0x68
    UITableView * _tableView; // +0x70
    NSArray * _collectionList; // +0x78
    WCFinderCollectionDetailListViewModel * _viewModel; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    MMUIButton * _emptyTipsRetryButton; // +0x90
}
- (long long)preferredStatusBarStyle;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (BOOL)useCustomNavibar;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)configureTableView;
- (void)_setupPageReport;
- (id)emptyTipsRetryButton;
- (void)showEmptyTips:(id)arg1 canRetry:(BOOL)arg2;
- (void)hideEmptyTips;
- (void)onBack;
- (void)retryButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setupReportWithCell:(id)arg1 collection:(id)arg2 indexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderCollectionDetailListDataChangedWithContinueFlag:(BOOL)arg1;
- (void)finderCollectionDetailListRequestFailed;
- (void)finderCollectionDetailListStartLoading;
- (void)finderCollectionDetailListEndLoading;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)collectionList;
- (void)setCollectionList:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setEmptyTipsRetryButton:(id)arg1;
- (void).cxx_destruct;
@end

