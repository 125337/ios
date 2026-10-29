@interface _TtC6WeChat36LedgerUserTransactionsViewController : WCPayBaseViewController <UITableViewDataSource, UITableViewDelegate, ILinkEventExt>
{
     delegate; // +0x8
     context; // +0x18
     dataSource; // +0x20
     username; // +0x28
     talkerName; // +0x38
     isClose; // +0x48
     kLastMonthRecordsEntryLink; // +0x50
     $__lazy_storage_$_lastMonthRecordsEntry; // +0x60
     categoryelectModal; // +0x68
     datePicker; // +0x70
     $__lazy_storage_$_tableView; // +0x78
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)handleClose;
- (void)viewDidBePoped:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end
