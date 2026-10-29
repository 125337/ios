@interface WCOutRecentCallViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    WCOutPhoneContact * m_contact; // +0x68
    NSArray * m_recentCallLists; // +0x70
    UITableView * m_tableView; // +0x78
}
- (id)initWithPhoneContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)configTableView;
- (void)configData;
- (void)asyncLoadData;
- (void)onDataDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)recentCallCellAtRow:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

