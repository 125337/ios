@interface RoamPackageCreateViewController : MMUIViewController <IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt, ILinkDeviceExt, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _emptyMode; // +0x70
    BOOL _needToBindCurrentOnlineDevice; // +0x71
    BOOL _hasBoundILinkDevice; // +0x72
    BOOL _bTapCreateToSendNotify; // +0x73
    BOOL _hasStartedCreate; // +0x74
    int _notifyResult; // +0x78
    UITableView * _uiTableView; // +0x80
    RoamPackageCreateHeaderCell * _uiHeaderCell; // +0x88
    NSMutableArray * _backupDevices; // +0x90
    NSMutableDictionary * _connectionByDeviceId; // +0x98
    NSRecursiveLock * _connectionMapLock; // +0xa0
    WCDevice * _onlineDevice; // +0xa8
    NSString * _report_session_id; // +0xb0
}
- (id)init;
- (id)initWithScene:(int)arg1;
- (void)viewDidLoad;
- (void)setupViews;
- (void)dealloc;
- (void)setupNavigator;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)loadDevices:(id)arg1;
- (void)fetchDevicesFromServer;
- (void)loadDeviceConnection;
- (void)onILinkDeviceUpdate:(id)arg1;
- (void)onILinkDeviceRequestFailed;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)getTableCellCount;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateDefaultData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)addDeviceAction;
- (void)createPackage;
- (void)createPackageInner;
- (void)cancel;
- (void)onRoamBackupPackageServiceBindTicketComplete:(BOOL)arg1;
- (void)onRoamBackupPackageServiceFinishCreatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (BOOL)emptyMode;
- (void)setEmptyMode:(BOOL)arg1;
- (id)uiTableView;
- (void)setUiTableView:(id)arg1;
- (id)uiHeaderCell;
- (void)setUiHeaderCell:(id)arg1;
- (id)backupDevices;
- (void)setBackupDevices:(id)arg1;
- (id)connectionByDeviceId;
- (void)setConnectionByDeviceId:(id)arg1;
- (id)connectionMapLock;
- (void)setConnectionMapLock:(id)arg1;
- (id)onlineDevice;
- (void)setOnlineDevice:(id)arg1;
- (BOOL)needToBindCurrentOnlineDevice;
- (void)setNeedToBindCurrentOnlineDevice:(BOOL)arg1;
- (BOOL)hasBoundILinkDevice;
- (void)setHasBoundILinkDevice:(BOOL)arg1;
- (BOOL)bTapCreateToSendNotify;
- (void)setBTapCreateToSendNotify:(BOOL)arg1;
- (BOOL)hasStartedCreate;
- (void)setHasStartedCreate:(BOOL)arg1;
- (int)notifyResult;
- (void)setNotifyResult:(int)arg1;
- (id)report_session_id;
- (void)setReport_session_id:(id)arg1;
- (void).cxx_destruct;
@end
