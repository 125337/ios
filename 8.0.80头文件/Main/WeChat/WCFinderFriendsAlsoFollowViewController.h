@interface WCFinderFriendsAlsoFollowViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFinderFriendsAlsoFollowsTableViewCellDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFriendsAlsoFollowViewModelDelegate, WCFinderZoomAnimatorBehavior>
{
    unsigned long long _enterTime; // +0x70
    WCFinderFriendsAlsoFollowViewModel * _viewModel; // +0x78
    WCFinderAnimationLoadingView * _customLoadingView; // +0x80
    UITableView * _tableView; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
}
- (id)initWithUsername:(id)arg1 fromUsername:(id)arg2 commentScene:(int)arg3;
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)fetchData;
- (void)refetchData;
- (void)setupUI;
- (void)pushToProfileVCWithContactIndex:(unsigned long long)arg1 feedIndex:(unsigned long long)arg2 followCell:(id)arg3 clickFlowCell:(id)arg4;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)makeReportUDFKV:(long long)arg1 clickItem:(long long)arg2 username:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderFriendsAlsoFollowCell:(id)arg1 didClickCoverAtIndex:(unsigned long long)arg2 clickCell:(id)arg3;
- (void)finderFriendsAlsoFollowCellDidClickFollowButton:(id)arg1;
- (void)onContactFollowStateUpdate:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (int)feedViewControllerScene;
- (void)registerYReportSdk;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)customLoadingView;
- (void)setCustomLoadingView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
