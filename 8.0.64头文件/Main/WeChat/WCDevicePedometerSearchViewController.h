@interface WCDevicePedometerSearchViewController : MMUIViewController <IWCDeviceBrandMgrExt, UITableViewDelegate, UITableViewDataSource>
{
    UIView * m_footerView; // +0x70
    UILabel * m_linkHelpBlackLabel; // +0x78
    UILabel * m_linkHelpBluelabel; // +0x80
    NSMutableSet * m_deivceDidSet; // +0x88
    NSMutableArray * m_devicesFound; // +0x90
    MMTableView * _m_tableView; // +0x98
    id <NSObject><IWCDevicePedometerSearchViewControllerExt> _m_delegate; // +0xa0
}
- (id)initWithDelegate:(id)arg1;
- (void)getDevicesInDB;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)updateFooterViewSize;
- (void)updateFooterViewLocate:(id)arg1;
- (void)reloadTableData;
- (void)showLinkHelp:(id)arg1;
- (void)showLinkHelp;
- (void)onCancel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)makeSearchingCell:(id)arg1;
- (void)makeHeaderView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(BOOL *)arg2;
- (void)onBLEHardDeviceSearch:(id)arg1 modContact:(id)arg2 respData:(id)arg3 errorCode:(int)arg4;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
