@interface WCPayCurrencyInputView : UIView <WCPayCurrencyInputLogicDelegate>
{
    id <WCPayCurrencyInputViewDelegate> _m_delegate; // +0x8
    WCPayCurrencyInputLogic * _m_inputlogic; // +0x10
    UILabel * _m_currencyLabel; // +0x18
    UITextField * _m_numberTextFiled; // +0x20
    double _fontSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)closeKeyboard;
- (void)showKeyboard;
- (void)layoutSubviews;
- (void)internalLayout;
- (void)updateDelegate:(id)arg1;
- (void)updateCurrencyTitle:(id)arg1;
- (void)updateFontSize:(double)arg1;
- (unsigned long long)getAmount;
- (void)onWCPayCurrencyInputLogicStringChangeTo:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_inputlogic;
- (void)setM_inputlogic:(id)arg1;
- (id)m_currencyLabel;
- (void)setM_currencyLabel:(id)arg1;
- (id)m_numberTextFiled;
- (void)setM_numberTextFiled:(id)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (void).cxx_destruct;
@end

