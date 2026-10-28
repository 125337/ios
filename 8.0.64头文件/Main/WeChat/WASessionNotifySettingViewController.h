@interface WASessionNotifySettingViewController : MMUIViewController <WASessionNotifyMgrExtension, UITableViewDelegate, UITableViewDataSource, WASessionNotifyTableViewCellDelegate, MMTipsViewControllerDelegate>
{
    NSNumber * _originGlobalOpenStatus; // +0x70
    NSArray * _arrOriginCloseItem; // +0x78
    NSNumber * _operatedGlobalOpenStatus; // +0x80
    NSMutableArray * _arrOperatedOpenUserName; // +0x88
    NSString * _askingOpenUserName; // +0x90
    UITableView * _tableView; // +0x98
    WAContactGetter * m_contactGetter; // +0xa0
    NSString * _sceneID; // +0xa8
}
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initTableView;
- (void)layoutAllSubview;
- (void)layoutTableView;
- (void)reloadTableView;
- (id)makeGolbalNotifyCell;
- (id)makeSessionListCellWithRow:(long long)arg1 tableView:(id)arg2;
- (void)onClickGlobalNotifySwitch:(id)arg1;
- (id)genHeaderFooterView:(id)arg1 topMargin:(unsigned long long)arg2 bottomMargin:(unsigned long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)onClickNotifyOpenButton:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)initData;
- (void)updateNotifyData;
- (void)removeUserNameInClostItemList:(id)arg1;
- (BOOL)currentGlobalNotifyOpenStatus;
- (void)checkAndSendNotifyOperationToServer;
- (void)onSessionNotifyUpdate;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (void).cxx_destruct;
@end
