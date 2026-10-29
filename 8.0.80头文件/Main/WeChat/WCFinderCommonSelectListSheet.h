@interface WCFinderCommonSelectListSheet : WCFinderCustomPanelSheet <UITableViewDelegate, UITableViewDataSource>
{
    id /* block */ _selectBlock; // +0x70
    UITableView * _tableView; // +0x78
    WCFinderCommonSelectListSheetItem * _selectItem; // +0x80
    NSArray * _itemArray; // +0x88
    NSString * _headTitle; // +0x90
}
- (id)initWithItemArray:(id)arg1 selectedItem:(id)arg2 title:(id)arg3;
- (id)loadContentView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)selectItem;
- (void)setSelectItem:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)headTitle;
- (void)setHeadTitle:(id)arg1;
- (void).cxx_destruct;
@end
