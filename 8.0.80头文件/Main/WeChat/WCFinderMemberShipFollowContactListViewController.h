@interface WCFinderMemberShipFollowContactListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderMemberShipFollowContactListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderMemberShipFollowContactListCellDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCTableView * _tableView; // +0x70
    WCFinderMemberShipFollowContactListViewModel * _viewModel; // +0x78
    WCFinderRefreshTableFooterView * _footerView; // +0x80
    WCFinderMembershipContact * _selectedContact; // +0x88
    UILabel * _stateTipsLabel; // +0x90
    UITapGestureRecognizer * _stateRetryGesture; // +0x98
}
- (id)initWithFinderUsername:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)bindPageReport;
- (void)configureTableView;
- (void)updateTitle;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onMembershipFollowContactListViewModelNeedReloadDataWithContinueFlag:(BOOL)arg1;
- (void)onMembershipFollowContactListViewModelFetchFailWithErrorCode:(int)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onFinderMemberShipBecomeMember;
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
- (void).cxx_destruct;
@end
