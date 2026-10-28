@interface EmoticonEditTextInputView : MMUIView <UITextViewDelegate, EditImageColorBarDeleagate>
{
    UIView * m_bgView; // +0x8
    UIButton * m_cancelBtn; // +0x10
    UIButton * m_confirmBtn; // +0x18
    MMTextView * m_textView; // +0x20
    MMUIButton * m_clearBtn; // +0x28
    EditImageColorBar * m_colorBar; // +0x30
    BOOL m_isFirstTyping; // +0x38
    EmoticonEditTextInputView * m_tempTextInputView; // +0x40
    id <EmoticonEditTextInputDelegate> _delegate; // +0x48
    UIColor * _color; // +0x50
    UIColor * _strokeColor; // +0x58
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)setColor:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)adjustTextViewFont:(id)arg1;
- (void)adjustTextViewMaxWidth:(double)arg1;
- (void)adjustClearButtonPosition;
- (void)configCancelButton;
- (void)configConfirmBtn;
- (void)configTextView;
- (void)configColorBar;
- (void)addBlurViewWithImage:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)onClearText;
- (void)didChangeText:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onEditImageColorBarChangeSelectedColor:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)color;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (void).cxx_destruct;
@end
