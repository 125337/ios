@interface WCFinderLivePersonalCenterWechatMentionVC : MMUIViewController <WCFinderLivePersonalCenterWechatMentionVMDelegate, UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderLivePersonalCenterWechatMentionCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderListLoadingStateModelObserver, WCFinderDataLoadTipsDelegate, WCGeneralMonitorDelegate>
{
    WCFinderLivePersonalCenterWechatMentionVM * _viewModel; // +0x70
    UITableView * _tableView; // +0x78
    UITableViewDiffableDataSource * _tableViewDataSource; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    WCFinderDataLoadTips * _dataLoadTips; // +0x90
    WCFinderLivePersonalCenterWechatMentionCellVM * _currentReplyViewModel; // +0x98
    WCFinderLivePersonalCenterWechatMentionCellVM * _showProfileViewModel; // +0xa0
}
+ (id)getCommentSceneStr;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setUpRightNav;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setupUI;
- (void)setupLoadingState;
- (void)configureTableView;
- (void)layoutLoadTips;
- (void)setupDataSource;
- (id)cellWithIndexPath:(id)arg1 itemID:(id)arg2;
- (void)updateLoadingState;
- (void)reloadTableData;
- (void)onListLoadingStateModified;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickAvatarWithViewModel:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickFollowButton:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickUserTag:(id)arg2;
- (void)wechatMentionCellHeightChanged:(id)arg1;
- (void)onClickMentionSwitchAction;
- (void)jumpToDataItemWithViewModel:(id)arg1;
- (void)showProfileWithViewModel:(id)arg1;
- (void)showDataItemWasDeletedTips;
- (void)showDataItemWasPrivateSetTips;
- (void)showCommonWarningTipsWithContent:(id)arg1;
- (void)onWechatMentionListDataChangedFrom:(unsigned long long)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)enterType;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)reportCellElementClickWithViewModel:(id)arg1 isFollow:(BOOL)arg2;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewDataSource;
- (void)setTableViewDataSource:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (id)currentReplyViewModel;
- (void)setCurrentReplyViewModel:(id)arg1;
- (id)showProfileViewModel;
- (void)setShowProfileViewModel:(id)arg1;
- (void).cxx_destruct;
@end
