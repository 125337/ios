@interface WCPaySingleSelectTableViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <WCPaySingleSelectedTableViewControllerDelegate> _delegate; // +0x98
    NSString * _viewControllerTitle; // +0xa0
    NSArray * _displayData; // +0xa8
    NSIndexPath * _selectedIndexPath; // +0xb0
    MMTableView * _tableView; // +0xb8
}
- (id)initWithDelegate:(id)arg1 title:(id)arg2 displayData:(id)arg3;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)OnCancel;
- (void)onDone;
- (void)setupContentView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewControllerTitle;
- (void)setViewControllerTitle:(id)arg1;
- (id)displayData;
- (void)setDisplayData:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
