@interface ShareStateViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    MSEShareMainViewLogicController * _mainLogicController; // +0x8
    UITableView * _tableView; // +0x10
    NSIndexPath * _selectedIndexPath; // +0x18
    TextStateViewModel * _viewModel; // +0x20
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutTableView;
- (void)layoutNavigationBar;
- (void)onLeftBtnPress;
- (void)onRightBtnPress;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)mainLogicController;
- (void)setMainLogicController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

