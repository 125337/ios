@interface WCPayCurrencyInputLogic : NSObject <UITextFieldDelegate>
{
    unsigned int _m_maxLength; // +0x8
    id <WCPayCurrencyInputLogicDelegate> _m_delegate; // +0x10
    NSRegularExpression * _m_pattern; // +0x18
}
- (id)initWithDelegate:(id)arg1 MaxLength:(unsigned int)arg2;
- (void)textFieldDidChange:(id)arg1;
- (void)callDelegateString:(id)arg1;
- (BOOL)isNumeric:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_maxLength;
- (void)setM_maxLength:(unsigned int)arg1;
- (id)m_pattern;
- (void)setM_pattern:(id)arg1;
- (void).cxx_destruct;
@end
