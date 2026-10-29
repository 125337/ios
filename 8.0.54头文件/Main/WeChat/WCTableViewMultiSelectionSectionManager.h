@interface WCTableViewMultiSelectionSectionManager : WCTableViewSectionManager
{
    id <WCTableViewMultiSelectionSectionManagerDelegate> _delegate; // +0x8
    NSMutableArray * _selectedRows; // +0x10
}
- (void)addSelectionCell:(id)arg1;
- (id)init;
- (void)didBeClickedAt:(id)arg1;
- (void)reloadCells:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedRows;
- (void)setSelectedRows:(id)arg1;
- (void).cxx_destruct;
@end

