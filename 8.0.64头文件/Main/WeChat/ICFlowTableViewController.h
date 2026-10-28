@interface ICFlowTableViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ICFlowBatchFetchingDelegate, ICFlowModelObserver>
{
    ICFlowModel * _model; // +0x70
    ICFlowTableView * _tableView; // +0x78
}
- (id)initWithModel:(id)arg1;
- (void)reloadWithModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)tableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (BOOL)shouldBeginBatchFetching;
- (void)startBatchFetching:(id)arg1;
- (void)flowModelWillLoadNew:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadNew:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadMore:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadMore:(id)arg2 error:(id)arg3;
- (void)flowModel:(id)arg1 didCancelLoadMore:(id)arg2;
- (void)flowModelReloadDataItems:(id)arg1;
- (void)flowModel:(id)arg1 insertDataItemsAt:(id)arg2;
- (void)flowModel:(id)arg1 deleteDataItemsAt:(id)arg2;
- (void)flowModel:(id)arg1 insertDataSectionsAt:(id)arg2;
- (void)flowModel:(id)arg1 deleteDataSectionsAt:(id)arg2;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
