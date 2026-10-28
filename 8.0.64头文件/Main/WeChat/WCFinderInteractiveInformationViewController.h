@interface WCFinderInteractiveInformationViewController : MMUIViewController
{
    WCTableViewManager * _tableViewManager; // +0x70
}
- (void)viewDidLoad;
- (void)setup;
- (void)reloadTableView;
- (void)onClickFollowList;
- (void)onClickLikeList;
- (void)onClickFavList;
- (void)onClickNotificationList;
- (void)onClickPrivateMsgList;
- (void)registerYReportSdk;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (void).cxx_destruct;
@end
