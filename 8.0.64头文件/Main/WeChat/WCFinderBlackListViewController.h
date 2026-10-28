@interface WCFinderBlackListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderBlackListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    UITableView * _tableView; // +0x70
    WCFinderBlackListViewModel * _viewModel; // +0x78
    WCFinderRefreshTableFooterView * _footerView; // +0x80
    UILabel * _stateTipsLabel; // +0x88
    UITapGestureRecognizer * _stateRetryGesture; // +0x90
}
- (id)init;
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)finderBlackListViewModelNeedReloadDataWithContinueFlag:(BOOL)arg1;
- (void)finderBlackListFetchFailWithErrorCode:(int)arg1;
- (void)revertBlackContactDidSuccess;
- (void)revertBlackContactDidFail;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void).cxx_destruct;
@end
