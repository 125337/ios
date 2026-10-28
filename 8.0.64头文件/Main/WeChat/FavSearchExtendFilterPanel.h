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
    id <FavSearchExtendFilterPanelDelegate> _delegate; // +0x58
}
- (id)initWithWidth:(double)arg1;
- (void)updateWithWidth:(double)arg1;
- (void)initTableView;
- (void)updateContentHeight;
- (void)setTags:(id)arg1 withTitle:(id)arg2;
- (void)setTag:(id)arg1 selected:(BOOL)arg2;
- (void)selectType:(id)arg1;
- (void)setTypes:(id)arg1 withTitle:(id)arg2;
- (void)cancelType;
- (void)clearSelection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tryAddLongPressGesture:(id)arg1;
- (id)genBtnWithTitle:(id)arg1;
- (void)updateBtn:(id)arg1 selected:(BOOL)arg2;
- (id)getButtonTitle:(id)arg1;
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
- (void).cxx_destruct;
@end
