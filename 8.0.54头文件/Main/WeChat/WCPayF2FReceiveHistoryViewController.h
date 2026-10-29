@interface WCPayF2FReceiveHistoryViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    double kReceiveHistoryItemHeight; // +0x90
    double kReceiveHistoryItemMargin; // +0x98
    BOOL _bIsLoadingMorePrevious; // +0xa0
    BOOL _bIsLoadingMoreNew; // +0xa1
    BOOL _bIsLoadMoreDataEnd; // +0xa2
    BOOL _bIsLoadNewDataEnd; // +0xa3
    id <WCPayF2FReceiveHistoryViewControllerDelegate> _delegate; // +0xa8
    MMTableView * _tableView; // +0xb0
    NSMutableArray * _historyList; // +0xb8
}
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupData;
- (void)refreshControllerWithLoadMorePreviousRecordHistoryList:(id)arg1 isDataLoadEnd:(BOOL)arg2 isRefresh:(BOOL)arg3;
- (void)refreshControllerWithLoadMoreNewRecordHistoryList:(id)arg1 isDataLoadEnd:(BOOL)arg2;
- (void)replaceControllerRecordHistoryListAfterSelectTime:(id)arg1;
- (void)refreshControllerWithLoadDataFail;
- (void)viewControllerBack;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupEmptyTipsView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeRecordHistoryItemContentView:(id)arg1 indexPath:(id)arg2;
- (void)onHistoryItemHasBeenPress:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)genTableFooterView;
- (id)genTableHeaderView;
- (id)delegate;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)historyList;
- (void)setHistoryList:(id)arg1;
- (BOOL)bIsLoadingMorePrevious;
- (void)setBIsLoadingMorePrevious:(BOOL)arg1;
- (BOOL)bIsLoadingMoreNew;
- (void)setBIsLoadingMoreNew:(BOOL)arg1;
- (BOOL)bIsLoadMoreDataEnd;
- (void)setBIsLoadMoreDataEnd:(BOOL)arg1;
- (BOOL)bIsLoadNewDataEnd;
- (void)setBIsLoadNewDataEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end

