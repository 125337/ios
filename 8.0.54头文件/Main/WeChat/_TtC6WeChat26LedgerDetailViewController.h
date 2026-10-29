@interface _TtC6WeChat26LedgerDetailViewController : WCPayBaseViewController <UITableViewDataSource, UITableViewDelegate, ILinkEventExt>
{
     delegate; // +0x8
     context; // +0x18
     records; // +0x20
     username; // +0x28
     isIncome; // +0x38
     groupMode; // +0x39
     titlePrefix; // +0x40
     isClose; // +0x50
     $__lazy_storage_$_tableView; // +0x58
     $__lazy_storage_$_transactionsEntry; // +0x60
     footerRichTextView; // +0x68
     $__lazy_storage_$_footerTransactionsEntry; // +0x70
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void)handleClose;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end

