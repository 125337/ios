@interface BrandFansMsgSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BrandFansMsgSessionViewModelDelegate>
{
    BrandFansMsgSessionViewModel * _viewModel; // +0x70
    MMTableView * _tableView; // +0x78
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupTableView;
- (void)setupNavigationBarItems;
- (void)setupViewModel;
- (void)onClickSettingBarItem;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)brandSystemCellInTableView:(id)arg1;
- (id)tableView:(id)arg1 msgCellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)openSystemMessage;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onSystemNotificationUpdated;
- (void)onFansSessionUpdated;
- (void)openFansMsgLogicController:(id)arg1;
- (void)pushController:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
