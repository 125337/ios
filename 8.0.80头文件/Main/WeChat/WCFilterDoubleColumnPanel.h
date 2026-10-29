@interface WCFilterDoubleColumnPanel : WCFilterBasePanel <UITableViewDataSource, UITableViewDelegate>
{
    MMTableView * m_tableView; // +0x48
    double m_rowHeight; // +0x50
}
- (id)initWithWidth:(double)arg1 andSection:(id)arg2;
- (void)initTableView;
- (void)updateFilterSection:(id)arg1;
- (void)clearSelection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genBtnWithTitle:(id)arg1;
- (void)updateBtn:(id)arg1 selected:(BOOL)arg2;
- (void)onClickBtn:(id)arg1;
- (void)configSelectedIndex:(id)arg1;
- (void).cxx_destruct;
@end
