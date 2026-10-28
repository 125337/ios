@interface WCFinderAccountSelectedShowInWXViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView; // +0x70
    NSArray * _selfContactArry; // +0x78
}
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)selfContactArry;
- (void)setSelfContactArry:(id)arg1;
- (void).cxx_destruct;
@end
