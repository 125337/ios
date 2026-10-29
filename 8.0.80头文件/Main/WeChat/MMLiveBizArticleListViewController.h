@interface MMLiveBizArticleListViewController : MMCPUIViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, MMLiveBizArticleListViewModelDelegate, MMLiveBizArticleSearchViewControllerDelegate>
{
    id <MMLiveBizArticleListViewControllerDelegate> _delegate; // +0x70
    MMLiveBizArticleListViewModel * _viewModel; // +0x78
    MMTableView * _tableView; // +0x80
    MMLiveBizArticleMoreView * _moreView; // +0x88
    WCSearchBar * _searchBar; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)loadNavigationItems;
- (void)leftBarButtonItemDidClick:(id)arg1;
- (void)loadTableView;
- (void)loadSearchBar;
- (void)requestFirstPage;
- (void)requestNextPageIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)liveBrandArticleListViewModelDidUpdateArticleList:(id)arg1;
- (void)liveBrandArticleListViewModelDidUpdateLoadStatus:(id)arg1;
- (void)brandArticleSearchViewController:(id)arg1 didSelectWithArticle:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)moreView;
- (void)setMoreView:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (void).cxx_destruct;
@end
