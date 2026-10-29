@interface FavSearchExtendFilterPanel : MMUIView <UITableViewDelegate, UITableViewDataSource, ContactTagNameEditViewControllerDelegate, MMMenuControllerExt>
{
    MMTableView * m_tableView; // +0x8
    NSMutableArray * m_tags; // +0x10
    NSMutableArray * m_selectedTags; // +0x18
    NSString * m_tagTitle; // +0x20
    NSArray * m_types; // +0x28
    NSString * m_selectedType; // +0x30
    NSString * m_typeTitle; // +0x38
    double m_rowHeight; // +0x40
    double m_titleHeight; // +0x48
    NSString * m_editingTag; // +0x50
    double panelHeight; // +0x58
    double m_fixedPanelHeight; // +0x60
    id <FavSearchExtendFilterPanelDelegate> _delegate; // +0x68
    NSArray * _quickFilters; // +0x70
    NSSet * _quickFilterSelectedNames; // +0x78
    NSString * _pendingMatchClickBtn; // +0x80
    NSString * _pendingMatchTag; // +0x88
    NSString * _pendingMatchQuickBtn; // +0x90
}
- (id)initWithWidth:(double)arg1;
- (id)initWithSize:(double)arg1 height:(double)arg2;
- (void)updateWithWidth:(double)arg1;
- (void)initTableView;
- (BOOL)hasQuickSection;
- (long long)typeSectionIndex;
- (long long)tagSectionIndex;
- (void)updateQuickFilters:(id)arg1;
- (void)updateQuickFilterSelectedNames:(id)arg1;
- (double)quickChipTop;
- (double)sectionTitleTop;
- (double)sectionTitleHeight;
- (double)sectionHeaderHeight;
- (double)panelBottomPadding;
- (double)quickSectionHeight;
- (void)setFixedPanelHeight:(double)arg1;
- (void)updateContentHeight;
- (void)setTags:(id)arg1 withTitle:(id)arg2;
- (void)setTag:(id)arg1 selected:(BOOL)arg2;
- (void)selectType:(id)arg1;
- (void)setTypes:(id)arg1 withTitle:(id)arg2;
- (void)cancelType;
- (void)clearSelection;
- (void)resetScrollPosition;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)genCollapseButtonAtTop:(double)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tryAddLongPressGesture:(id)arg1;
- (id)genBtnWithTitle:(id)arg1;
- (void)updateBtn:(id)arg1 selected:(BOOL)arg2;
- (id)getButtonTitle:(id)arg1;
- (BOOL)tryMatchQuickBtn:(id)arg1;
- (BOOL)tryMatchClickBtn:(id)arg1;
- (BOOL)tryMatchTag:(id)arg1;
- (void)onClickQuickBtn:(id)arg1;
- (void)onClickBtn:(id)arg1;
- (void)onLongPressBtn:(id)arg1;
- (void)showMenuOnBtn:(id)arg1;
- (void)clearLongPressBtnState;
- (BOOL)canBecomeFirstResponder;
- (void)renameTag:(id)arg1;
- (void)deleteTag:(id)arg1;
- (void)onHidePanel:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2;
- (void)updateEditingTagTo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)quickFilters;
- (void)setQuickFilters:(id)arg1;
- (id)quickFilterSelectedNames;
- (void)setQuickFilterSelectedNames:(id)arg1;
- (id)pendingMatchClickBtn;
- (void)setPendingMatchClickBtn:(id)arg1;
- (id)pendingMatchTag;
- (void)setPendingMatchTag:(id)arg1;
- (id)pendingMatchQuickBtn;
- (void)setPendingMatchQuickBtn:(id)arg1;
- (void).cxx_destruct;
@end
