@interface CBTAsstModelSelectViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * _tableView; // +0x70
    NSMutableArray * _modelList; // +0x78
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)fetchModelInfo;
- (void)updateModel;
- (id)navigationBarBackgroundColor;
- (void)layoutTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genCellContentView:(id)arg1 withTitle:(id)arg2;
- (void)makeModelCell:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)modelList;
- (void)setModelList:(id)arg1;
- (void).cxx_destruct;
@end
