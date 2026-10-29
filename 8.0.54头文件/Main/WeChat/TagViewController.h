@interface TagViewController : MMUIViewController <FavTagEditViewDelegate, ContactTagNameEditViewControllerDelegate, MMMenuControllerExt>
{
    NSMutableArray * m_currentTags; // +0x68
    NSMutableArray * m_allTags; // +0x70
    NSString * m_allTagTitle; // +0x78
    NSString * m_editPlaceholer; // +0x80
    MMTableView * m_tableView; // +0x88
    FavTagEditView * m_tagEditView; // +0x90
    FavTagTableView * m_tagTableView; // +0x98
    FavTagHintView * m_tagHintView; // +0xa0
    UILabel * m_warnLabel; // +0xa8
    NSString * m_editingTag; // +0xb0
    BOOL _m_bShowAllTags; // +0xb8
    NSString * m_eduPlaceholer; // +0xc0
}
+ (id)genImage:(unsigned long long)arg1 forButton:(id)arg2 cornerRadius:(double)arg3 isHighLight:(BOOL)arg4;
+ (id)genImage:(unsigned long long)arg1 forButton:(id)arg2 cornerRadius:(double)arg3 isHighLight:(BOOL)arg4 isDarkMode:(BOOL)arg5;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (id)rightBarButtonTitle;
- (void)initLeftBtn;
- (void)initRightBtn;
- (id)genFavTagEditView;
- (id)genFavTagTableView;
- (void)initTagView;
- (void)updateAllTags:(id)arg1;
- (void)updateCurrentTags:(id)arg1;
- (void)editDone:(id)arg1;
- (void)editCancel;
- (void)manageTags;
- (void)OnCancel;
- (void)onEditDone;
- (void)tapKeyBoardNextButton;
- (void)resignKeyBoard;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)cancelEditingAndExit;
- (void)changeDisplayView:(BOOL)arg1;
- (void)onTextFieldMoved:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onTagHighLight:(id)arg1;
- (void)onTagUnHighLight:(id)arg1;
- (void)cleanTextField:(id)arg1;
- (void)hideKeyboardOnScroll:(id)arg1;
- (void)onLongPressTagBtn:(id)arg1;
- (void)showMenuOnBtn:(id)arg1;
- (void)clearLongPressBtnState;
- (void)renameTag:(id)arg1;
- (void)deleteTag:(id)arg1;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2;
- (void)updateEditingTagTo:(id)arg1;
- (void)onMenuControllerDidHide;
- (id)m_editPlaceholer;
- (void)setM_editPlaceholer:(id)arg1;
- (id)m_eduPlaceholer;
- (void)setM_eduPlaceholer:(id)arg1;
- (id)m_currentTags;
- (void)setM_currentTags:(id)arg1;
- (id)m_allTags;
- (void)setM_allTags:(id)arg1;
- (id)m_allTagTitle;
- (void)setM_allTagTitle:(id)arg1;
- (BOOL)m_bShowAllTags;
- (void)setM_bShowAllTags:(BOOL)arg1;
- (void).cxx_destruct;
@end

