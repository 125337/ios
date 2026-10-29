@interface EditImageTextInputView : MMUIView <textViewDelegate, UITextViewDelegate, IUiUtilExt, EditImageColorSquareBarDelegate>
{
    EditImageTextView * _inputView; // +0x8
    MMUIButton * _cancelBtn; // +0x10
    UIView * _colorBarContainerView; // +0x18
    EditImageColorSquareBar * _colorBar; // +0x20
    UIColor * _textColor; // +0x28
    MMUIView * _translucentView; // +0x30
    CGRect _editViewFrame; // +0x38
    EditVideoSecondCutPromotionButton * _secondCutPromotionButton; // +0x58
    EditImageTextInputView * _tempTextInputView; // +0x60
    BOOL _enableMultiline; // +0x68
    id <EditImageTextInputDelegate> _delegate; // +0x70
    NSString * _textStr; // +0x78
    UIView * _textView; // +0x80
    MMUIButton * _confirmBtn; // +0x88
    UIButton * _textStyleBtn; // +0x90
    unsigned long long _maxNumberOfLines; // +0x98
    unsigned long long _maxNumberOfCharacters; // +0xa0
    EditImageTextInputViewParams * _params; // +0xa8
    double _keyboardHeight; // +0xb0
    UILabel * _validationErrorLabel; // +0xb8
    unsigned long long _textStyle; // +0xc0
}
- (id)initWithEditViewFrame:(CGRect)arg1;
- (id)initWithDelegate:(id)arg1 withParams:(id)arg2;
- (void)updateFrame:(CGRect)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (double)textHighlightAlpha;
- (void)setTextHighlightAlpha:(double)arg1;
- (void)setEnableMultiline:(BOOL)arg1;
- (void)addBlur;
- (void)addTranslucent;
- (void)didMoveToSuperview;
- (void)dropDownAndRemove;
- (void)onCancel;
- (void)onConfirm;
- (id)getTextStyleIconName;
- (id)getTextStyleAccessibilityStr;
- (void)onTextStyleChange;
- (unsigned long long)getNextStyle;
- (unsigned long long)_getDefauleNextStyle;
- (unsigned long long)_getOrderNextStyle;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)onMainWindowFrameChanged;
- (void)setSelectedColorFromSquareBar:(id)arg1;
- (void)adjustColorBarYPosition;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateViewsOnKeyboardHeightChange;
- (void)keyboardDidHide:(id)arg1;
- (void)dealloc;
- (id)_delegate;
- (void)set_delegate:(id)arg1;
- (id)_textStr;
- (void)set_textStr:(id)arg1;
- (id)_textView;
- (void)set_textView:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)textStyleBtn;
- (void)setTextStyleBtn:(id)arg1;
- (BOOL)enableMultiline;
- (unsigned long long)maxNumberOfLines;
- (void)setMaxNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)maxNumberOfCharacters;
- (void)setMaxNumberOfCharacters:(unsigned long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)validationErrorLabel;
- (void)setValidationErrorLabel:(id)arg1;
- (unsigned long long)textStyle;
- (void)setTextStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

