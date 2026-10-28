@interface _TtC6WeChat25WCPayLedgerViewController : WCPayBaseViewController <UITableViewDataSource, UITableViewDelegate, MMRefreshTableFooterDelegate, ILinkEventExt>
{
     delegate; // +0x8
     dateFormatter; // +0x18
     logicContext; // +0x20
     dataSource; // +0x28
     categoryelectModal; // +0x30
     datePicker; // +0x38
     isLoadingRecords; // +0x40
     isClose; // +0x41
     kChangeGroupModeLink; // +0x48
     $__lazy_storage_$_categoryFilter; // +0x58
     kLastMonthRecordsEntryLink; // +0x60
     $__lazy_storage_$_lastMonthRecordsEntry; // +0x70
     $__lazy_storage_$_modeFilter; // +0x78
     $__lazy_storage_$_expenseIncomeView; // +0x80
     $__lazy_storage_$_expenseLabel; // +0x88
     $__lazy_storage_$_incomeLabel; // +0x90
     $__lazy_storage_$_tableView; // +0x98
     $__lazy_storage_$_loadMoreFooter; // +0xa0
     $__lazy_storage_$_separator; // +0xa8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)showNavigationBarSepLine;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)navigationBarBackgroundColor;
- (BOOL)useTransparentNavibar;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)handleClose;
- (void)viewDidBePoped:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end
