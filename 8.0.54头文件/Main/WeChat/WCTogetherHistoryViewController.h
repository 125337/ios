@interface WCTogetherHistoryViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFacadeExt, WCTogetherHistoryViewModelDelegate, WCCommentDetailViewControllerFBDelegate, WCMomentsUserListHalfScreenViewControllerDelegate, MMNavBarInteractiveDelegate>
{
    CContact * _contact; // +0x68
    WCTogetherHistoryViewModel * _viewModel; // +0x70
    UITableView * _tableView; // +0x78
    WCTogetherHistoryReportSession * _historyReportSession; // +0x80
}
- (id)historyReportSession;
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)loadTableView;
- (void)reloadDataForTableView;
- (void)resizeTableFooterView;
- (void)loadNavigationBar;
- (void)openUserProfileViewControllerWithContact:(id)arg1;
- (void)openDetailViewControllerWithDataItem:(id)arg1;
- (BOOL)isDataItemPrivate:(id)arg1;
- (void)openMultipleImageViewControllerWithViewItem:(id)arg1 dataItem:(id)arg2 mediaItem:(id)arg3;
- (void)alertThatDataItemBlocked:(id)arg1;
- (void)confirmToModifyTogetherListWithDataItem:(id)arg1;
- (void)modifyTogetherListWithDataItem:(id)arg1;
- (void)handleModifyTogetherFinished:(long long)arg1 itemID:(id)arg2 dataItem:(id)arg3;
- (BOOL)isSetNormalToBlackStyle;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)togetherViewModelDidReloadData:(id)arg1;
- (void)togetherViewModel:(id)arg1 viewItem:(id)arg2 didClickContactInfoWithDataItem:(id)arg3 contact:(id)arg4;
- (void)togetherViewModel:(id)arg1 viewItem:(id)arg2 didClickLocationInfoWithDataItem:(id)arg3;
- (void)togetherViewModel:(id)arg1 viewItem:(id)arg2 didClickContentDetailWithDataItem:(id)arg3;
- (void)togetherViewModel:(id)arg1 viewItem:(id)arg2 didClickMediaWithDataItem:(id)arg3 mediaItem:(id)arg4;
- (void)togetherViewModel:(id)arg1 viewItemDidClickFriendsInfo:(id)arg2;
- (void)onRestartUpload;
- (void)onDeleteData;
- (void)userListViewController:(id)arg1 didSelectUserContact:(id)arg2;
- (void)onModifyTogetherFinished:(long long)arg1 itemID:(id)arg2 dataItem:(id)arg3;
- (id)contact;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)historyReportSession;
- (void)setHistoryReportSession:(id)arg1;
- (void).cxx_destruct;
@end

