@interface WCTableViewSingleSelectionSectionManager : WCTableViewSectionManager
{
    id <WCTableViewSingleSelectionSectionManagerDelegate> _delegate; // +0x8
    long long _selectedIndex; // +0x10
}
- (void)addSelectionCell:(id)arg1;
- (id)init;
- (void)didBeClickedAt:(id)arg1;
- (void)reloadCells:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (void).cxx_destruct;
@end

