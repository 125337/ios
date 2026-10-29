@interface SettingQuickReplyViewController : NewSettingBaseViewController
{
    BOOL _isSelectionChanged; // +0x78
    id /* block */ _selectionHandler; // +0x80
    long long _selectedIndex; // +0x88
}
- (id)initWithSelectionHandler:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)reloadTableData;
- (void)onSelectAtCell:(id)arg1;
- (id)genCellWithTitle:(id)arg1 index:(long long)arg2 viewId:(id)arg3;
- (long long)indexToSetting:(long long)arg1;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (BOOL)isSelectionChanged;
- (void)setIsSelectionChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end

