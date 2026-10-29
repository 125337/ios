@interface MMFinderLiveSimpleSelectionSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveSimpleSelectionSheetViewDelegate> _sheetDelegate; // +0x8
    NSArray * _items; // +0x10
    double _showHeight; // +0x18
    unsigned long long _selectedIndex; // +0x20
    UITableView * _tableView; // +0x28
}
- (id)initWithTitle:(id)arg1 items:(id)arg2 selectedIndex:(unsigned long long)arg3;
- (void)dealloc;
- (void)setupPageSheetConfigWithTitle:(id)arg1;
- (void)showWithHeight:(double)arg1 animated:(BOOL)arg2;
- (void)initUI;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pageSheetWillDisappear;
- (id)sheetDelegate;
- (void)setSheetDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (double)showHeight;
- (void)setShowHeight:(double)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end

