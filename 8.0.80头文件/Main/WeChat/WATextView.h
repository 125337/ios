@interface WATextView : UITextView <WATextInputInterface, UITextViewDelegate>
{
    long long _lineCount; // +0x8
    UIView * _greyMask; // +0x10
    UIColor * _placeColor; // +0x18
    UIFont * _placeFont; // +0x20
    BOOL _autoSize; // +0x28
    CGRect _rcCaret; // +0x30
    unsigned short _keyCode; // +0x50
    BOOL _disableEditing; // +0x52
    UIColor * _originalBackgroundColor; // +0x58
    BOOL _fillPaddingSet; // +0x60
    BOOL showConfirmButton; // +0x61
    BOOL multiLine; // +0x62
    BOOL initKeyBoard; // +0x63
    BOOL fixed; // +0x64
    BOOL confirmHold; // +0x65
    BOOL native; // +0x66
    BOOL adjustPosition; // +0x67
    BOOL isKeyboardAnimating; // +0x68
    BOOL blockFocus; // +0x69
    BOOL isWaitingKeyboardShow; // +0x6a
    BOOL _hasFrozenContainer; // +0x6b
    BOOL _disableContainerInset; // +0x6c
    BOOL _isDisabledParentGes; // +0x6d
    BOOL _isEnableTextAreaLoupe; // +0x6e
    unsigned int inputId; // +0x70
    long long _variant; // +0x78
    UIColor * _strokeColor; // +0x80
    double _strokeWidth; // +0x88
    UIColor * _fillBackgroundColor; // +0x90
    double _fillBorderRadius; // +0x98
    id <WATextInputDelegate> keyboardDelegate; // +0xa0
    NSString * userData; // +0xa8
    long long maxLength; // +0xb0
    NSString * defaultValue; // +0xb8
    double bottomMargin; // +0xc0
    long long initCursor; // +0xc8
    long long endCursor; // +0xd0
    long long selectionBegin; // +0xd8
    long long selectionEnd; // +0xe0
    unsigned long long adjustKeyboardTo; // +0xe8
    unsigned long long actionOnKeyboardAnimationEnd; // +0xf0
    MMTimer * enableEditingTimer; // +0xf8
    id <WATextViewDelegate> _textViewDelegate; // +0x100
    double _minHeight; // +0x108
    double _maxHeight; // +0x110
    NSString * _placeHolder; // +0x118
    NSDictionary * _placeholderStyle; // +0x120
    NSDictionary * _placeholderStyleDark; // +0x128
    NSMutableParagraphStyle * _paragraphStyle; // +0x130
    NSMutableArray * _disabledParentGesArr; // +0x138
    CGPoint lastHitPoint; // +0x140
    UIEdgeInsets _fillPadding; // +0x150
}
- (id)initWithFrame:(CGRect)arg1;
- (void)forceEnableLoupe;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)getSelectedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (id)getInputValue;
- (void)setInputPlaceholder:(id)arg1 placeholderStyle:(id)arg2;
- (void)setInputPlaceholder:(id)arg1 placeholderStyleDark:(id)arg2 setDarkNow:(BOOL)arg3;
- (void)setDisableEdit:(BOOL)arg1;
- (_NSRange)getCurrentSelectedRange;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setSelectedRangeByPresetAttr:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setParentGestureDisable:(BOOL)arg1;
- (void)calculateCaretPos;
- (void)adjustSizeFit:(id)arg1;
- (CGRect)caretRectForPosition:(id)arg1;
- (void)setLineSpace:(double)arg1;
- (void)setAlignment:(long long)arg1;
- (void)deleteBackward;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)willKeyboardComplete;
- (void)appendAttributedString:(id)arg1;
- (id)getAttributedString;
- (BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(_NSRange)arg3 interaction:(long long)arg4;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)refreshInputValue:(BOOL)arg1;
- (void)setDisable:(BOOL)arg1;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (void)setInputView:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)becomeFirstResponder:(BOOL)arg1;
- (void)removeFromParent;
- (BOOL)textInterface_isFirstResponder;
- (CGRect)getVisibleRect;
- (id)getAccessoryButton;
- (void)setTextColor:(id)arg1;
- (void)setVariant:(long long)arg1;
- (void)applyVariantStyle;
- (void)applyStrokeAttributeIfNeeded;
- (void)removeStrokeAttributes;
- (void)setTextAlpha:(double)arg1;
- (void)setInputFrame:(CGRect)arg1;
- (double)getFontSize;
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
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)getInputView;
- (void)setDisableContainerInset:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)accessibilityValue;
- (long long)variant;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (id)fillBackgroundColor;
- (void)setFillBackgroundColor:(id)arg1;
- (UIEdgeInsets)fillPadding;
- (void)setFillPadding:(UIEdgeInsets)arg1;
- (BOOL)fillPaddingSet;
- (void)setFillPaddingSet:(BOOL)arg1;
- (double)fillBorderRadius;
- (void)setFillBorderRadius:(double)arg1;
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
- (BOOL)isWaitingKeyboardShow;
- (void)setIsWaitingKeyboardShow:(BOOL)arg1;
- (BOOL)hasFrozenContainer;
- (void)setHasFrozenContainer:(BOOL)arg1;
- (id)textViewDelegate;
- (void)setTextViewDelegate:(id)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (BOOL)disableContainerInset;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (id)placeholderStyle;
- (void)setPlaceholderStyle:(id)arg1;
- (id)placeholderStyleDark;
- (void)setPlaceholderStyleDark:(id)arg1;
- (id)paragraphStyle;
- (void)setParagraphStyle:(id)arg1;
- (id)disabledParentGesArr;
- (void)setDisabledParentGesArr:(id)arg1;
- (BOOL)isDisabledParentGes;
- (void)setIsDisabledParentGes:(BOOL)arg1;
- (BOOL)isEnableTextAreaLoupe;
- (void)setIsEnableTextAreaLoupe:(BOOL)arg1;
- (void).cxx_destruct;
@end
