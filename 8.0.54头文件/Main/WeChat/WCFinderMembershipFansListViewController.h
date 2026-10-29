@interface WCFinderMembershipFansListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderMembershipFansListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFansProfileViewControllerDelegate>
{
    WCTableView * _tableView; // +0x68
    WCFinderMembershipFansListViewModel * _viewModel; // +0x70
    WCFinderRefreshTableFooterView * _footerView; // +0x78
    WCFinderContact * _selectedContact; // +0x80
    UILabel * _stateTipsLabel; // +0x88
    UITapGestureRecognizer * _stateRetryGesture; // +0x90
    unsigned long long _fansCount; // +0x98
}
- (id)initWithFinderUsername:(id)arg1 fansCount:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (void)updateTitle;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(BOOL)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onMembershipFansListViewModelNeedReloadDataWithContinueFlag:(BOOL)arg1;
- (void)onMembershipFansListViewModelFetchFailWithErrorCode:(int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)selectedContact;
- (void)setSelectedContact:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (unsigned long long)fansCount;
- (void)setFansCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

