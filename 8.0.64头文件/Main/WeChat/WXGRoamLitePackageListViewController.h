@interface WXGRoamLitePackageListViewController : MMUIViewController <UITableViewDataSource, WXGRoamLitePackageCellDelegate, IRoamBackupPackageServiceExt>
{
    UITableView * _tableView; // +0x70
}
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)cell:(id)arg1 didTapBackupWithViewModel:(id)arg2;
- (void)cell:(id)arg1 didTapDeleteWithViewModel:(id)arg2;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
