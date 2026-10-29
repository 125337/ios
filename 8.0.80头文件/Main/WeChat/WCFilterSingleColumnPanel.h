@interface WCFilterSingleColumnPanel : WCFilterBasePanel <UITableViewDataSource, UITableViewDelegate>
{
    MMTableView * m_tableView; // +0x48
}
- (id)initWithWidth:(double)arg1 andSection:(id)arg2;
- (void)initTableView;
- (void)updateFilterSection:(id)arg1;
- (void)clearSelection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 isSelected:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configSelectedIndex:(id)arg1;
- (void)updateHeightWithFilterItems;
- (void).cxx_destruct;
@end
