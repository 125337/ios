@interface WCPayBankCardNumberItem : WCPayTenpaySecureCtrlItem
{
    UILabel * m_bankcardLabel; // +0x50
    NSString * m_value; // +0x58
    BOOL m_isUnselectable; // +0x60
    NSString * m_starBankNumber; // +0x68
}
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (id)getValue;
- (void)setBankCardNumber:(id)arg1 starBankNumber:(id)arg2;
- (void)clearItem;
- (id)m_starBankNumber;
- (void)setM_starBankNumber:(id)arg1;
- (void).cxx_destruct;
@end
