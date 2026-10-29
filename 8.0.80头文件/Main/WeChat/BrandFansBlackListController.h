@interface BrandFansBlackListController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMLoadMoreTableViewDelegate>
{
    BrandFansBlackListViewModel * _viewModel; // +0x70
    MMLoadMoreTableView * _tableView; // +0x78
    NSMutableArray * _userInfos; // +0x80
    UILabel * _emptyView; // +0x88
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)loadData;
- (void)showErrorView;
- (void)reloadData;
- (void)showEmptyView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)onLoadMore;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)userInfos;
- (void)setUserInfos:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (void).cxx_destruct;
@end
