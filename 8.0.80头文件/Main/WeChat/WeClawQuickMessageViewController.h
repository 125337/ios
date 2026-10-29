@interface WeClawQuickMessageViewController : MMUIViewController <MMTableViewMultipleReorderDelegate, MMTableViewMultipleReorderDataSource, WeClawQuickMessageEditDelegate>
{
    BOOL _isEditMode; // +0x70
    BOOL _isMultipleReordering; // +0x71
    BOOL _isNotFriend; // +0x72
    NSString * _userName; // +0x78
    NSMutableArray * _shortcutList; // +0x80
    NSArray * _previousList; // +0x88
    MMTableView * _tableView; // +0x90
    UIView * _bottomToolbar; // +0x98
    UIView * _emptyView; // +0xa0
    UILabel * _emptyHintLabel; // +0xa8
    UIButton * _emptyCreateBtn; // +0xb0
    UIButton * _createBtn; // +0xb8
    UIButton * _manageBtn; // +0xc0
    UIButton * _deleteBtn; // +0xc8
    UIButton * _moveToBtn; // +0xd0
    UILabel * _selectedCountLabel; // +0xd8
    NSMutableSet * _selectedIndices; // +0xe0
    NSMutableArray * _selectedIndexPaths; // +0xe8
    UIBarButtonItem * _backButtonItem; // +0xf0
    MMTableViewMultipleReorder * _tableViewMultipleReorder; // +0xf8
    NSArray * _recentMoveToIndexPaths; // +0x100
    UILabel * _offlineEmptyLabel; // +0x108
}
- (id)initWithUserName:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupTableView;
- (void)setupEmptyHintView;
- (void)setupOfflineEmptyLabel;
- (void)setupBottomToolbar;
- (void)loadData;
- (void)onShortcutListChanged:(id)arg1;
- (void)updateUIState;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)onMoveTo;
- (void)cancelMultipleReorder;
- (id)tableView:(id)arg1 cellSnapshotImageForIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowsAtIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)tableViewWillBeginMultipleReorder:(id)arg1;
- (void)tableViewDidBeginMultipleReorder:(id)arg1;
- (void)tableViewWillEndMultipleReorder:(id)arg1;
- (void)tableViewDidEndMultipleReorder:(id)arg1;
- (void)tableViewDidCancelMultipleReorder:(id)arg1;
- (double)tableViewEstimatedRowHeightForMultipleReorder:(id)arg1;
- (void)quitMultipleReorderMode;
- (void)startEdit;
- (void)endEdit;
- (BOOL)hasReordered;
- (void)saveReorder;
- (void)quitEditMode;
- (void)updateSelectedCount;
- (void)onDeleteSelected;
- (void)p_doDeleteSelected;
- (void)p_deleteShortcutAtIndex:(unsigned long long)arg1;
- (void)p_onEmptyCreateBtnDown;
- (void)p_onEmptyCreateBtnUp;
- (void)onCreateQuickMessage;
- (void)onManageQuickMessage;
- (void)quickMessageEditViewController:(id)arg1 didFinishWithContent:(id)arg2 name:(id)arg3;
- (void)quickMessageEditViewController:(id)arg1 didEditAtIndex:(unsigned long long)arg2 withContent:(id)arg3 name:(id)arg4;
- (BOOL)shouldInteractivePop;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)shortcutList;
- (void)setShortcutList:(id)arg1;
- (id)previousList;
- (void)setPreviousList:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomToolbar;
- (void)setBottomToolbar:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)emptyHintLabel;
- (void)setEmptyHintLabel:(id)arg1;
- (id)emptyCreateBtn;
- (void)setEmptyCreateBtn:(id)arg1;
- (id)createBtn;
- (void)setCreateBtn:(id)arg1;
- (id)manageBtn;
- (void)setManageBtn:(id)arg1;
- (id)deleteBtn;
- (void)setDeleteBtn:(id)arg1;
- (id)moveToBtn;
- (void)setMoveToBtn:(id)arg1;
- (id)selectedCountLabel;
- (void)setSelectedCountLabel:(id)arg1;
- (BOOL)isEditMode;
- (void)setIsEditMode:(BOOL)arg1;
- (id)selectedIndices;
- (void)setSelectedIndices:(id)arg1;
- (id)selectedIndexPaths;
- (void)setSelectedIndexPaths:(id)arg1;
- (id)backButtonItem;
- (void)setBackButtonItem:(id)arg1;
- (id)tableViewMultipleReorder;
- (void)setTableViewMultipleReorder:(id)arg1;
- (BOOL)isMultipleReordering;
- (void)setIsMultipleReordering:(BOOL)arg1;
- (id)recentMoveToIndexPaths;
- (void)setRecentMoveToIndexPaths:(id)arg1;
- (BOOL)isNotFriend;
- (void)setIsNotFriend:(BOOL)arg1;
- (id)offlineEmptyLabel;
- (void)setOfflineEmptyLabel:(id)arg1;
- (void).cxx_destruct;
@end
