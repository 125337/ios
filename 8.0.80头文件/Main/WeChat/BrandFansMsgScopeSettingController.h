@interface BrandFansMsgScopeSettingController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    BrandFansMsgSettingsViewModel * _viewModel; // +0x70
    MMTableView * _tableView; // +0x78
    unsigned long long _selectedScope; // +0x80
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)reloadData;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (unsigned long long)selectedScope;
- (void)setSelectedScope:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
