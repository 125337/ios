@interface WCBaseTextViewItem : WCBaseInfoItem <UITextViewDelegate>
{
    UITextView * m_textView; // +0x40
    UILabel * placeHolderLabel; // +0x48
    int m_iMaxInputLen; // +0x50
    BOOL m_bRealLen; // +0x54
}
- (void)initView:(CGRect)arg1;
- (void)setTextView:(id)arg1 andPlaceHolder:(id)arg2;
- (id)getValue;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)dealloc;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)getTextView;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setPlaceHolderColor:(id)arg1;
- (void)setMaxInputLen:(int)arg1;
- (void)setMaxRealStringLen:(int)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void).cxx_destruct;
@end
