@interface WCLiveDebugViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView; // +0x70
}
- (void)viewDidLoad;
- (void)setupUI;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
