@interface MMFinderLiveVoteHistoryViewController : MMUILandscapeSheetViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    BOOL _isFetchingData; // +0x68
    MMTableView * _tableView; // +0x70
    NSData * _lastBuffer; // +0x78
    WCTimeLineFooterView * _loadMoreFooterView; // +0x80
    NSMutableArray * _historyVotes; // +0x88
    MMFinderLiveTaskId * _taskId; // +0x90
}
- (id)initWithTaskId:(id)arg1;
- (void)viewDidLoad;
- (void)initNavBar;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (id)createTableFooterView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)fetchMoreData;
- (void)onBackButtonClicked;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)loadMoreFooterView;
- (void)setLoadMoreFooterView:(id)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (id)historyVotes;
- (void)setHistoryVotes:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end

