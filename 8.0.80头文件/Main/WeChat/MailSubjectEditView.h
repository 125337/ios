@interface MailSubjectEditView : MMUIView <UITextFieldDelegate>
{
    id <MailReceiverEditViewDelegate> m_delegate; // +0x8
    UITextField * m_textField; // +0x10
    UILabel * m_textLabel; // +0x18
}
- (void)initView;
- (void)layoutSubviews;
- (id)init;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (void)setText:(id)arg1;
- (id)text;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
