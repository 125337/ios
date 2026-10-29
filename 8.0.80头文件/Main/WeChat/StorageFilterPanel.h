@interface StorageFilterPanel : MMUIView <UITableViewDataSource, UITableViewDelegate>
{
    NSArray * m_filters; // +0x8
    MMTableView * m_tableView; // +0x10
    MMUIView * m_bottomBar; // +0x18
    double m_maxHeight; // +0x20
    double m_headerHeight; // +0x28
    double m_buttonWidth; // +0x30
    id <StorageFilterPanelDelegate> _delegate; // +0x38
}
- (id)initWithWidth:(double)arg1 maxHeight:(double)arg2 filters:(id)arg3 withBottomBar:(BOOL)arg4;
- (void)initViewWithMaxHeight:(double)arg1 andBottomBar:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createFilterButton:(BOOL)arg1;
- (void)onFilterButtonClicked:(id)arg1;
- (void)onCollapseButtonClicked:(id)arg1;
- (void)onClearButtonClicked:(id)arg1;
- (void)selectItem:(long long)arg1 inGroup:(long long)arg2;
- (void)updateItemTitle:(id)arg1 inItem:(long long)arg2 andGroup:(long long)arg3;
- (BOOL)accessibilityPerformEscape;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
