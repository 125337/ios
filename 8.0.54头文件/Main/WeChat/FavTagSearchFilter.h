@interface FavTagSearchFilter : MMUIView <ContactTagNameEditViewControllerDelegate, FavTagEditViewDelegate, UIScrollViewDelegate>
{
    UILabel * m_label; // +0x8
    MMUIButton * m_tagEditButton; // +0x10
    FavTagListView * m_tagListView; // +0x18
    NSMutableArray * m_currentTags; // +0x20
    NSMutableArray * m_allTags; // +0x28
    NSArray * m_keyword; // +0x30
    id <FavTagSearchFilterDelegate> m_delegate; // +0x38
    BOOL m_isCenterAlign; // +0x40
    double _btnCornerRadius; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 alignCenter:(BOOL)arg2;
- (void)dealloc;
- (void)updateWithTagList:(id)arg1 highlightKeyWords:(id)arg2;
- (void)initLabel;
- (void)updateTag:(id)arg1 to:(id)arg2;
- (long long)indexOfTag:(id)arg1;
- (void)reloadTagView;
- (void)setTag:(id)arg1 isSelected:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (id)getTagList;
- (id)getAllTagList;
- (void)removeLastTag;
- (void)removeAllTags;
- (void)removeSelectedTag;
- (void)renameTag:(id)arg1;
- (void)deleteTag:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)willHideEditMenu:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onLongPressTagBtn:(id)arg1;
- (void)showMenu;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (double)btnCornerRadius;
- (void)setBtnCornerRadius:(double)arg1;
- (void).cxx_destruct;
@end

