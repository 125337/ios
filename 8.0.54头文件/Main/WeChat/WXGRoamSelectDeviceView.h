@interface WXGRoamSelectDeviceView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, ILinkDeviceExt, IRoamOutBoxServiceExt, IRoamBackupPackageServiceExt>
{
    double m_cellHeight; // +0x8
    double m_cellHeightPortable; // +0x10
    UITableView * _mainTableView; // +0x18
    UIView * _emptyView; // +0x20
    UIButton * _addDeviceBtn; // +0x28
    NSMutableArray * _deviceArr; // +0x30
    MMLoadingView * _loadingView; // +0x38
    NSString * _onlineDeviceId; // +0x40
}
- (id)init;
- (void)initData;
- (void)pageSheetWillAppear;
- (void)setupDetailView;
- (void)initEmptyView;
- (void)addDeviceAction;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)onILinkDeviceUpdate:(id)arg1;
- (void)onILinkDeviceRequestFailed;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)addDeviceBtn;
- (void)setAddDeviceBtn:(id)arg1;
- (id)deviceArr;
- (void)setDeviceArr:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)onlineDeviceId;
- (void)setOnlineDeviceId:(id)arg1;
- (void).cxx_destruct;
@end

