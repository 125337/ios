@interface WXGRoamDeviceAddViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt>
{
    UITableView * _mainTable; // +0x68
}
- (id)init;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)setupTitleView;
- (void)setupTable;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)makeCellForRow:(long long)arg1;
- (id)mainTable;
- (void)setMainTable:(id)arg1;
- (void).cxx_destruct;
@end

