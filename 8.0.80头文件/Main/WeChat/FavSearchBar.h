@interface FavSearchBar : MMUIView <UITextFieldDelegate, MMDictationLogicIconDelegate>
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
    double m_verticalMargin; // +0x58
    NSMutableArray * m_arrButtons; // +0x60
    MMUIButton * m_highlightButton; // +0x68
    NSString * m_updateSearchingName; // +0x70
    NSString * m_prevTextFieldText; // +0x78
    BOOL _shouldEdit; // +0x80
    BOOL _starFilterSelected; // +0x81
    BOOL _pendingSearchOnDictationEnd; // +0x82
    id <FavSearchBarDelegate> _delegate; // +0x88
    NSString * _starFilterTitle; // +0x90
    MMDictationLogicIcon * _dictationIcon; // +0x98
    UIButton * _clearButton; // +0xa0
}
- (id)initWithWidth:(double)arg1 andRightMargin:(double)arg2;
- (id)initWithWidth:(double)arg1 rightMargin:(double)arg2 verticalMargin:(double)arg3;
- (double)verticalMargin;
- (double)buttonHeight;
- (BOOL)hasSearchTextContent;
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
- (void)setStarFilterSelected:(BOOL)arg1 starTitle:(id)arg2;
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
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (void)deleteButtonAtIndex:(int)arg1;
- (id)getTextFieldRealText;
- (BOOL)isAudioInputEnabled;
- (void)setupAudioInputViewsIfNeeded;
- (void)refreshAudioInputAccessory;
- (double)rightAccessoryReservedWidth;
- (void)updateRightAccessory;
- (void)onClearButtonClick;
- (void)MMDictationLogicIconWillStart;
- (void)MMDictationLogicIconWillStop;
- (void)MMDictationLogicIconDidEnd;
- (_NSRange)MMDictationLogicIcon_selectedRange;
- (long long)realTextLocationFromRawLocation:(long long)arg1;
- (void)MMDictationLogicIcon_replaceRange:(_NSRange)arg1 withText:(id)arg2;
- (id)MMDictationLogicIcon_getPrefixContent;
- (id)MMDictationLogicIcon_getSuffixContent;
- (id)MMDictationLogicIcon_getContent;
- (id)MMDictationLogicIcon_getChatName;
- (id)MMDictationLogicIcon_getFullText;
- (BOOL)becomeFirstResponder;
- (void)tryMatchTextSearchWithSearchParam:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldEdit;
- (void)setShouldEdit:(BOOL)arg1;
- (BOOL)starFilterSelected;
- (void)setStarFilterSelected:(BOOL)arg1;
- (id)starFilterTitle;
- (void)setStarFilterTitle:(id)arg1;
- (id)dictationIcon;
- (void)setDictationIcon:(id)arg1;
- (id)clearButton;
- (void)setClearButton:(id)arg1;
- (BOOL)pendingSearchOnDictationEnd;
- (void)setPendingSearchOnDictationEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
