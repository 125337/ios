@interface MailContactButton : UIView
{
    CMailContact * m_oMailContact; // +0x8
    id <MailContactButtonDelegate> m_delegate; // +0x10
    UIButton * m_btnMailContactButton; // +0x18
}
- (id)initWithMailContact:(id)arg1;
- (void)createButton;
- (void)onReceiverBtnClick:(id)arg1;
- (void)onReceiverBtnRepeatClick:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_oMailContact;
- (void)setM_oMailContact:(id)arg1;
- (void).cxx_destruct;
@end

