@interface WCTableViewManager : NSObject <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate>
{
    BOOL _disableAutoDeselectRows; // +0x8
    BOOL _disableEditingStyle; // +0x9
    MMTableView * _tableView; // +0x10
    id <MMTableViewInfoDelegate> _delegate; // +0x18
    Class _customizedCellType; // +0x20
    NSMutableArray * _sections; // +0x28
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2 usedTableViewClass:(Class)arg3;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)getTableView;
- (void)addTableViewToSuperView:(id)arg1;
- (void)addTableViewToSuperViewWithoutResetTableViewFrame:(id)arg1;
- (void)addSection:(id)arg1;
- (void)insertSection:(id)arg1 At:(unsigned int)arg2;
- (unsigned long long)getSectionCount;
- (id)getSectionAt:(unsigned long long)arg1;
- (void)removeSectionAt:(unsigned long long)arg1;
- (void)removeCellAt:(id)arg1;
- (id)getAllSections;
- (void)clearAllSection;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)cellInfoAtIndexPath:(id)arg1;
- (id)indexPathForCellInfo:(id)arg1;
- (id)visibleCellForInfo:(id)arg1;
- (id)getSeparator;
- (void)drawSeparatorFor:(id)arg1 AtIndexPath:(id)arg2 mode:(unsigned long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)delegate;
- (BOOL)disableAutoDeselectRows;
- (void)setDisableAutoDeselectRows:(BOOL)arg1;
- (BOOL)disableEditingStyle;
- (void)setDisableEditingStyle:(BOOL)arg1;
- (Class)customizedCellType;
- (void)setCustomizedCellType:(Class)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (void).cxx_destruct;
@end

