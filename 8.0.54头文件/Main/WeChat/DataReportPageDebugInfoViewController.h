@interface DataReportPageDebugInfoViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    MMUIViewController * _debugViewController; // +0x68
    NSMutableArray * _debugPageParams; // +0x70
    MMTableView * _tableView; // +0x78
}
- (id)initWithVC:(id)arg1;
- (void)initDebugInfo;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)debugViewController;
- (void)setDebugViewController:(id)arg1;
- (id)debugPageParams;
- (void)setDebugPageParams:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end

