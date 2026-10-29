@interface MMLiveBizArticleSearchViewController : WCSearchViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, UITextFieldDelegate, MMLiveBizArticleListViewModelDelegate>
{
    id <MMLiveBizArticleSearchViewControllerDelegate> _delegate; // +0x68
    MMLiveBizArticleListViewModel * _viewModel; // +0x70
    MMTableView * _tableView; // +0x78
    MMLiveBizArticleMoreView * _moreView; // +0x80
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)loadTableView;
- (void)searchAndRequestFirstPage:(id)arg1;
- (void)resignSearchBar;
- (void)requestNextPageIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)liveBrandArticleListViewModelDidUpdateArticleList:(id)arg1;
- (void)liveBrandArticleListViewModelDidUpdateLoadStatus:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)moreView;
- (void)setMoreView:(id)arg1;
- (void).cxx_destruct;
@end

