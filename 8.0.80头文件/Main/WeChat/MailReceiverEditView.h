@interface MailReceiverEditView : MMUIView <MailContactButtonDelegate, UITextFieldDelegate>
{
    NSMutableArray * m_arrReceiverButtons; // +0x8
    long long m_uiReceiverEditViewTag; // +0x10
    id <MailReceiverEditViewDelegate> m_delegate; // +0x18
    HackUITextField * m_textField; // +0x20
    UIButton * m_addContactButton; // +0x28
    UILabel * m_textLabel; // +0x30
}
- (BOOL)isMailAddrFormatOK:(id)arg1;
- (void)properInit;
- (id)initWithReceiverTag:(long long)arg1;
- (id)initWithReceiverTag:(long long)arg1 MaxWidth:(double)arg2;
- (void)fixSize;
- (id)getDisplayName;
- (void)initTextField;
- (void)initView:(double)arg1;
- (void)layoutSubviews;
- (CGPoint)getNewBtnPointForNewBtn:(id)arg1;
- (void)updateTextFieldPosition;
- (void)updateBtnArray;
- (BOOL)addMailContact:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)resizeButtons;
- (void)setAddButtonHide:(BOOL)arg1;
- (BOOL)isFirstResponder;
- (id)getMailContacts;
- (void)removeAllContacts;
- (void)setText:(id)arg1;
- (id)text;
- (void)onAddReceiver:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)beginEdit:(id)arg1;
- (void)finishEdit:(id)arg1;
- (void)deleteMailContactButton;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)finishEditing:(id)arg1;
- (BOOL)finishEditing;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onMailContactClicked:(id)arg1 sender:(id)arg2;
- (long long)count;
- (long long)m_uiReceiverEditViewTag;
- (void)setM_uiReceiverEditViewTag:(long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
