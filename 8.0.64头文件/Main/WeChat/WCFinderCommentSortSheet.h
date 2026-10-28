@interface WCFinderCommentSortSheet : WCFinderCustomPanelSheet <UITableViewDelegate, UITableViewDataSource>
{
    id /* block */ _sortChangeBlock; // +0x70
    UITableView * _tableView; // +0x78
    NSDictionary * _titleNameArray; // +0x80
    NSArray * _sortItemList; // +0x88
    NSNumber * _selectedIndex; // +0x90
}
- (id)initWithSortCtrl:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (id)loadContentView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id /* block */)sortChangeBlock;
- (void)setSortChangeBlock:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)titleNameArray;
- (void)setTitleNameArray:(id)arg1;
- (id)sortItemList;
- (void)setSortItemList:(id)arg1;
- (id)selectedIndex;
- (void)setSelectedIndex:(id)arg1;
- (void).cxx_destruct;
@end
