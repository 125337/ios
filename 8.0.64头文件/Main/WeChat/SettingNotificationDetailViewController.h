@interface SettingNotificationDetailViewController : NewSettingBaseViewController
{
    BOOL _isSelectionChanged; // +0x80
    id /* block */ _selectionHandler; // +0x88
    long long _selectedIndex; // +0x90
    long long _previousSelectedIndex; // +0x98
}
- (id)initWithSelectionHandler:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)reloadTableData;
- (void)onSelectAtCell:(id)arg1;
- (id)genCellWithTitle:(id)arg1 index:(long long)arg2;
- (unsigned int)indexToSetting:(long long)arg1;
- (void)registerYReportSdk;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (long long)previousSelectedIndex;
- (void)setPreviousSelectedIndex:(long long)arg1;
- (BOOL)isSelectionChanged;
- (void)setIsSelectionChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
