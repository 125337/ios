@interface _TtC6WeChat29WCPayLedgerCanlendarTableView : UIView <UITableViewDelegate, UITableViewDataSource>
{
     currentDate; // +0x8
     rangeIndicator; // +0x20
     tableView; // +0x28
     gradientLayer; // +0x30
     foregoingMonths; // +0x38
     dataSource; // +0x40
     dateHeaderTapAction; // +0x48
     selectedRangeUpdateAction; // +0x58
     selectedRange; // +0x68
}
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

