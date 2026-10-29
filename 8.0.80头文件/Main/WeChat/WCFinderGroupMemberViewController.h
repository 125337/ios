@interface WCFinderGroupMemberViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate>
{
    UITableView * _tableView; // +0x70
    WCFinderRefreshTableFooterView * _footerView; // +0x78
    WCFinderAnimationLoadingView * _loadingView; // +0x80
    WCFinderGroupMemberViewModel * _viewModel; // +0x88
    UILabel * _headerTitleLabel; // +0x90
    UILabel * _headerViewTitleLabel; // +0x98
}
- (id)initWithFinderContact:(id)arg1;
- (void)viewDidLoad;
- (void)updateTitleCount:(unsigned long long)arg1;
- (id)loadingView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:(id)arg1;
- (id)headerViewTitleLabel;
- (void)setHeaderViewTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
