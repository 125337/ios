@interface WATextField : UITextField <UITextFieldDelegate, WADropListViewDelegate, WATextInputInterface, IWAPayKeyboardServiceDelegate>
{
    UIColor * _placeColor; // +0x8
    UIFont * _placeFont; // +0x10
    BOOL _disableEditing; // +0x18
    unsigned short _keyCode; // +0x1a
    BOOL _isDeletingSpace; // +0x1c
    BOOL _transTextToStar; // +0x1d
    BOOL _forbidChangeSelectedTextRange; // +0x1e
    BOOL showConfirmButton; // +0x1f
    BOOL multiLine; // +0x20
    BOOL initKeyBoard; // +0x21
    BOOL fixed; // +0x22
    BOOL confirmHold; // +0x23
    BOOL native; // +0x24
    BOOL adjustPosition; // +0x25
    BOOL isKeyboardAnimating; // +0x26
    BOOL blockFocus; // +0x27
    BOOL _screenWidth; // +0x28
    BOOL _bAboveDrop; // +0x29
    BOOL _blockSelectWhenEditing; // +0x2a
    BOOL _isBankCard; // +0x2b
    unsigned int inputId; // +0x2c
    id <WATextInputDelegate> keyboardDelegate; // +0x30
    NSString * userData; // +0x38
    long long maxLength; // +0x40
    NSString * defaultValue; // +0x48
    double bottomMargin; // +0x50
    long long initCursor; // +0x58
    long long endCursor; // +0x60
    long long selectionBegin; // +0x68
    long long selectionEnd; // +0x70
    unsigned long long adjustKeyboardTo; // +0x78
    unsigned long long actionOnKeyboardAnimationEnd; // +0x80
    MMTimer * enableEditingTimer; // +0x88
    double _marginLeft; // +0x90
    double _marginRight; // +0x98
    WADropListView * _dropView; // +0xa0
    WASafeKeyboard * _safePasswordKeyboard; // +0xa8
    WAInputEncrypter * _safeEncrypter; // +0xb0
    id <IWAPayKeyboardService> _payKeyboardService; // +0xb8
    NSDictionary * _placeholderStyle; // +0xc0
    NSDictionary * _placeholderStyleDark; // +0xc8
    CGPoint lastHitPoint; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1;
- (CGRect)editingRectForBounds:(CGRect)arg1;
- (void)setPasswordMode:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (id)getSelectedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (id)getInputValue;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (id)getEncryptStringEncryptError:(id *)arg1;
- (void)drawPlaceholderInRect:(CGRect)arg1;
- (void)setInputPlaceholder:(id)arg1 placeholderStyle:(id)arg2;
- (void)setInputPlaceholder:(id)arg1 placeholderStyleDark:(id)arg2 setDarkNow:(BOOL)arg3;
- (void)deleteBackward;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendAttributedString:(id)arg1;
- (id)getAttributedString;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)subStringWith:(id)arg1 ToIndex:(long long)arg2;
- (void)changeToBankCardText;
- (void)forbidChangeSelectedTextRange;
- (void)resumeChangeSelectedTextRange;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)becomeFirstResponder:(BOOL)arg1;
- (void)removeFromParent;
- (BOOL)textInterface_isFirstResponder;
- (CGRect)getVisibleRect;
- (id)getAccessoryButton;
- (void)setFont:(double)arg1 bold:(BOOL)arg2;
- (void)setTextColor:(id)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setSelectedRange:(_NSRange)arg1;
- (void)setInputFrame:(CGRect)arg1;
- (double)getFontSize;
- (void)setDisable:(BOOL)arg1;
- (BOOL)isBold;
- (void)setVisible:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (long long)getLineCount;
- (double)getContentHeight;
- (void)setAutoSize:(BOOL)arg1;
- (BOOL)isAutoSize;
- (id)getParentView;
- (void)onKeyboardWillHide;
- (void)startEnableEditingTimerWithInterval:(double)arg1;
- (void)enableEditing;
- (void)onKeyboardDidHide;
- (void)onKeyboardWillShow;
- (void)onKeyboardDidShow;
- (void)takeActionOnKeyboardAnimationEnd;
- (void)setDropList:(id)arg1 above:(BOOL)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onSelectDrop:(id)arg1 value:(id)arg2;
- (void)onDeleteDrop:(id)arg1;
- (void)setDisableEdit:(BOOL)arg1;
- (_NSRange)getCurrentSelectedRange;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)updateDropHeight:(BOOL)arg1;
- (id)getInputView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)payKeyboardDidClickConfirm:(id)arg1;
- (BOOL)showConfirmButton;
- (void)setShowConfirmButton:(BOOL)arg1;
- (id)keyboardDelegate;
- (void)setKeyboardDelegate:(id)arg1;
- (unsigned int)inputId;
- (void)setInputId:(unsigned int)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (long long)maxLength;
- (void)setMaxLength:(long long)arg1;
- (id)defaultValue;
- (void)setDefaultValue:(id)arg1;
- (BOOL)multiLine;
- (void)setMultiLine:(BOOL)arg1;
- (double)bottomMargin;
- (void)setBottomMargin:(double)arg1;
- (BOOL)initKeyBoard;
- (void)setInitKeyBoard:(BOOL)arg1;
- (BOOL)fixed;
- (void)setFixed:(BOOL)arg1;
- (BOOL)confirmHold;
- (void)setConfirmHold:(BOOL)arg1;
- (long long)initCursor;
- (void)setInitCursor:(long long)arg1;
- (long long)endCursor;
- (void)setEndCursor:(long long)arg1;
- (long long)selectionBegin;
- (void)setSelectionBegin:(long long)arg1;
- (long long)selectionEnd;
- (void)setSelectionEnd:(long long)arg1;
- (BOOL)native;
- (void)setNative:(BOOL)arg1;
- (BOOL)adjustPosition;
- (void)setAdjustPosition:(BOOL)arg1;
- (unsigned long long)adjustKeyboardTo;
- (void)setAdjustKeyboardTo:(unsigned long long)arg1;
- (BOOL)isKeyboardAnimating;
- (void)setIsKeyboardAnimating:(BOOL)arg1;
- (unsigned long long)actionOnKeyboardAnimationEnd;
- (void)setActionOnKeyboardAnimationEnd:(unsigned long long)arg1;
- (id)enableEditingTimer;
- (void)setEnableEditingTimer:(id)arg1;
- (BOOL)blockFocus;
- (void)setBlockFocus:(BOOL)arg1;
- (CGPoint)lastHitPoint;
- (void)setLastHitPoint:(CGPoint)arg1;
- (BOOL)screenWidth;
- (void)setScreenWidth:(BOOL)arg1;
- (double)marginLeft;
- (void)setMarginLeft:(double)arg1;
- (double)marginRight;
- (void)setMarginRight:(double)arg1;
- (id)dropView;
- (void)setDropView:(id)arg1;
- (BOOL)bAboveDrop;
- (void)setBAboveDrop:(BOOL)arg1;
- (BOOL)blockSelectWhenEditing;
- (void)setBlockSelectWhenEditing:(BOOL)arg1;
- (id)safePasswordKeyboard;
- (void)setSafePasswordKeyboard:(id)arg1;
- (id)safeEncrypter;
- (void)setSafeEncrypter:(id)arg1;
- (BOOL)isBankCard;
- (void)setIsBankCard:(BOOL)arg1;
- (id)payKeyboardService;
- (void)setPayKeyboardService:(id)arg1;
- (id)placeholderStyle;
- (void)setPlaceholderStyle:(id)arg1;
- (id)placeholderStyleDark;
- (void)setPlaceholderStyleDark:(id)arg1;
- (void).cxx_destruct;
@end

