@interface WAWeAppBindBrandListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView * _contentHeaderView; // +0x68
    UILabel * _contentLabel; // +0x70
    UITableView * _listTableView; // +0x78
    WAProfileRelatedViewModel * _viewModel; // +0x80
}
- (void)viewDidLoad;
- (void)initView;
- (void)initNavigationItems;
- (id)navigationBarBackgroundColor;
- (void)initContentLabel;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)layoutMySubViews;
- (void)onBackButtonClicked:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleSelectWith:(id)arg1;
- (void)openBrandContact:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

