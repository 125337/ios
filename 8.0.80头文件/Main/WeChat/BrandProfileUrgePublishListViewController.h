@interface BrandProfileUrgePublishListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMLoadMoreTableViewDelegate>
{
    BOOL _updatingUrgePublishNotice; // +0x70
    BrandProfileUrgePublishViewModel * _viewModel; // +0x78
    MMLoadMoreTableView * _tableView; // +0x80
    UILabel * _emptyView; // +0x88
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupNavigationBar;
- (void)onMoreButtonClicked;
- (void)setupUI;
- (void)reloadData;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)openWXContactForUserInfo:(id)arg1;
- (void)openInteractiveProfileForUserInfo:(id)arg1 contact:(id)arg2;
- (void)onLoadMore;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (BOOL)updatingUrgePublishNotice;
- (void)setUpdatingUrgePublishNotice:(BOOL)arg1;
- (void).cxx_destruct;
@end
