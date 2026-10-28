@interface AmoebaDebugSwitchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * m_tableView; // +0x8
}
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeSwitchCell:(id)arg1 colName:(id)arg2 action:(SEL)arg3 on:(BOOL)arg4;
- (void)onExposeToolSwitchChanged:(id)arg1;
- (void)onDebugInfoSwitchChanged:(id)arg1;
- (void)onOperateToolSwitchChanged:(id)arg1;
- (void)onOperateToolSwitchChanged2:(id)arg1;
- (void).cxx_destruct;
@end
