@interface FavSearchBar : MMUIView <UITextFieldDelegate>
{
    NSString * m_searchText; // +0x8
    NSString * m_searchType; // +0x10
    NSMutableArray * m_searchTags; // +0x18
    UIScrollView * m_scrollView; // +0x20
    UITextField * m_textField; // +0x28
    UILabel * m_placeholderLabel; // +0x30
    UIImageView * m_searchIcon; // +0x38
    double m_maxHeight; // +0x40
    double m_maxContentWidth; // +0x48
    double m_rightMargin; // +0x50
    NSMutableArray * m_arrButtons; // +0x58
    MMUIButton * m_highlightButton; // +0x60
    NSString * m_updateSearchingName; // +0x68
    BOOL _shouldEdit; // +0x70
    id <FavSearchBarDelegate> _delegate; // +0x78
}
- (id)initWithWidth:(double)arg1 andRightMargin:(double)arg2;
- (void)initView;
- (void)updateWithWidth:(double)arg1;
- (void)updateFrameForTextField:(double)arg1;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (void)updateFrameForTextField:(double)arg1 scroll:(BOOL)arg2;
- (CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)layoutSubviews;
- (void)updateFrameForTextFieldScroll:(BOOL)arg1;
- (void)updatePlaceHolder;
- (void)setType:(id)arg1;
- (void)setHilightAnimationToButtonWith:(id)arg1;
- (void)setTag:(id)arg1 isSelected:(BOOL)arg2;
- (void)updateTag:(id)arg1 toNewTag:(id)arg2;
- (void)cancelSearch;
- (void)clearSearchText;
- (void)updateButtons;
- (void)showHighlightAnimationTo:(id)arg1;
- (void)addButton:(id)arg1 buttonType:(unsigned long long)arg2;
- (id)searchText;
- (id)searchTags;
- (id)searchType;
- (void)ontap;
- (void)buttonClicked:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (void)deleteButtonAtIndex:(int)arg1;
- (id)getTextFieldRealText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldEdit;
- (void)setShouldEdit:(BOOL)arg1;
- (void).cxx_destruct;
@end

