@interface FavTagEditView : MMUIView <MMMenuControllerExt, UITextFieldDelegate>
{
    NSMutableArray * m_arrTagButtons; // +0x8
    NSMutableSet * m_tagSet; // +0x10
    UIScrollView * m_scrollView; // +0x18
    FavTagTextField * m_textField; // +0x20
    UILabel * m_placeholderLabel; // +0x28
    CGRect m_dashRect; // +0x30
    CAShapeLayer * m_dashLayer; // +0x50
    NSMutableArray * m_arrMenu; // +0x58
    NSString * m_placeholderStr; // +0x60
    BOOL m_hasBeginEdit; // +0x68
    int m_maxHeight; // +0x6c
    NSSet * m_splitCharSet; // +0x70
    id <FavTagEditViewDelegate> m_delegate; // +0x78
    UIView * m_buttonToShow; // +0x80
    UIView * m_buttonShowing; // +0x88
    UIButton * m_highlightButton; // +0x90
    double m_buttonHeight; // +0x98
    double m_buttonCornerRadius; // +0xa0
    double _customWidth; // +0xa8
}
- (id)initWithTags:(id)arg1 placeHolder:(id)arg2 placeHolderEdu:(id)arg3;
- (double)caculateButtonHeight;
- (void)layoutSubviews;
- (void)scrollToTop;
- (void)scrollToBottom;
- (void)updateTagList:(id)arg1;
- (void)initMenu;
- (void)drawRect:(CGRect)arg1;
- (void)addTagButton:(id)arg1;
- (void)deleteTagButtonWithName:(id)arg1;
- (void)deleteAllButtons;
- (id)gatTagList;
- (id)getCurrentTagSet;
- (id)getTextFieldRealText;
- (void)cleanTextField;
- (BOOL)textFieldResignFirstResponder;
- (BOOL)textFieldBecomeFirstResponder;
- (void)setReturnType:(long long)arg1;
- (void)setButtonCornerRadius:(double)arg1;
- (void)updateOneButton:(id)arg1 cornerRadius:(double)arg2;
- (void)setNoBeginEdit;
- (double)getTextFieldMinWidth;
- (id)getDefaultTitleFont;
- (unsigned int)getMaxTagLength;
- (void)updateTagName:(id)arg1 To:(id)arg2;
- (void)setCustomWidth:(double)arg1;
- (void)deleteTagButton:(int)arg1;
- (void)updateFrameForTextFieldScroll:(BOOL)arg1;
- (void)updateFrameForTextField:(double)arg1;
- (void)updateFrameForTextField:(double)arg1 scroll:(BOOL)arg2;
- (CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)initView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)ontap;
- (void)buttonClicked:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)removeHighlighBtn;
- (void)showMenuForButton:(id)arg1;
- (void)MenuControllerDidHide:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onMenuControllerWillShow;
- (void)onMenuControllerDidHide;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_hasBeginEdit;
- (int)m_maxHeight;
- (void)setM_maxHeight:(int)arg1;
- (id)m_placeholderStr;
- (void)setM_placeholderStr:(id)arg1;
- (double)customWidth;
- (void).cxx_destruct;
@end

