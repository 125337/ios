@interface WCMyDeviceListViewController : MMUIViewController <WCDeviceNetworkLogicMgrDelegate, IWCDeviceBrandMgrExt, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x70
    NSMutableArray * m_myDeviceList; // +0x78
    WCDevice * m_deviceToDeleted; // +0x80
    MMLoadingView * m_loadingView; // +0x88
    unsigned long long m_scene; // +0x90
}
- (id)init;
- (id)initWithScene:(unsigned long long)arg1;
- (void)requestDataFromDB;
- (void)reloadData;
- (void)initView;
- (void)initHeaderView;
- (void)initLoadingView;
- (void)updateView;
- (void)updateRightBarButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)makeAddDeviceCell:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onEditTableView:(id)arg1;
- (void)onFinishedEditTableView:(id)arg1;
- (void)onWCDeviceGetBoundDevices:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void).cxx_destruct;
@end
