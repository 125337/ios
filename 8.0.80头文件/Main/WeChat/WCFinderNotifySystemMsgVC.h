@interface WCFinderNotifySystemMsgVC : MMUIViewController <UITableViewDelegate, WCGeneralMonitorDelegate, WCFinderDataLoadTipsDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderNotifySystemMsgVMDelegate, WCFinderListLoadingStateModelObserver, WCFinderFeedBaseViewControllerProtocol>
{
    UITableView * _tableView; // +0x70
    WCFinderRefreshTableFooterView * _footerView; // +0x78
    WCFinderDataLoadTips * _dataLoadTips; // +0x80
    UITableViewDiffableDataSource * _tableViewDataSource; // +0x88
    WCFinderNotifySystemMsgVM * _vm; // +0x90
    UIImageView * _muteView; // +0x98
    double _layoutWidth; // +0xa0
}
- (id)initWithFinderUsername:(id)arg1 identityScene:(unsigned long long)arg2 notificationSubscene:(int)arg3 clientUdfKvJSON:(id)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupNavigationBar;
- (void)onMoreButtonClicked;
- (void)setupTableView;
- (void)setupDataSource;
- (id)cellWithIndexPath:(id)arg1 itemID:(id)arg2;
- (void)setupLoadingState;
- (void)layoutLoadTips;
- (void)updateLoadingState;
- (void)reloadTableData;
- (void)reportPrivateMsgJumperWithViewModel:(id)arg1 eventType:(long long)arg2;
- (void)showNotifyLinkActionWithViewModel:(id)arg1;
- (void)showDataItemDetailVCActionWithViewModel:(id)arg1 shouldShowLikeList:(BOOL)arg2;
- (void)showDataItemWasDeletedTips;
- (void)showDataItemWasPrivateSetTips;
- (void)showMentionDetailViewController:(id)arg1 navigationTitle:(id)arg2 viewModel:(id)arg3 shouldShowLikeList:(BOOL)arg4;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onDataLoadTipsClickRetry;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onNotifySystemMsgDataChanged;
- (void)onListLoadingStateModified;
- (void)registerYReportSdk;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (id)tableViewDataSource;
- (void)setTableViewDataSource:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)muteView;
- (void)setMuteView:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
