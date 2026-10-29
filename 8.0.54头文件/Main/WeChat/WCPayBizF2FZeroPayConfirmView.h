@interface WCPayBizF2FZeroPayConfirmView : WCPayNavigationView <WCBaseInfoItemDelegate>
{
    BOOL _m_usingBiotric; // +0x8
    id <WCPayBizF2FZeroPayConfirmViewDelegate> _m_delegate; // +0x10
    UIView * _m_panelView; // +0x18
    UIButton * _m_cancelButton; // +0x20
    UILabel * _m_navigationTitleLabel; // +0x28
    UIView * _m_lineView; // +0x30
    UILabel * _m_payTitleLabel; // +0x38
    UILabel * _m_moneyLabel; // +0x40
    UIButton * _m_payButton; // +0x48
    WCPayTenpayPasswordCtrlItem * _m_passwordItem; // +0x50
    double _m_panelViewMarginUp; // +0x58
    NSString * _m_payTitle; // +0x60
    NSString * _m_moneyString; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)showWithBiotricAuth:(BOOL)arg1 payTitle:(id)arg2 moneyString:(id)arg3 baseView:(id)arg4;
- (void)layoutSubviews;
- (void)updateView;
- (void)updatePanelView;
- (void)adjustPanelView;
- (void)updateCancelButton;
- (void)updateNavigationTitleLabel;
- (void)updateLineView;
- (void)updatePayTitleLabel;
- (void)updateMoneyLabel;
- (void)updatePayButton;
- (void)updatePasswordItem;
- (void)onCancelButtonClick;
- (void)closeView;
- (void)onPayButtonClick;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_panelView;
- (void)setM_panelView:(id)arg1;
- (id)m_cancelButton;
- (void)setM_cancelButton:(id)arg1;
- (id)m_navigationTitleLabel;
- (void)setM_navigationTitleLabel:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_payTitleLabel;
- (void)setM_payTitleLabel:(id)arg1;
- (id)m_moneyLabel;
- (void)setM_moneyLabel:(id)arg1;
- (id)m_payButton;
- (void)setM_payButton:(id)arg1;
- (id)m_passwordItem;
- (void)setM_passwordItem:(id)arg1;
- (double)m_panelViewMarginUp;
- (void)setM_panelViewMarginUp:(double)arg1;
- (BOOL)m_usingBiotric;
- (void)setM_usingBiotric:(BOOL)arg1;
- (id)m_payTitle;
- (void)setM_payTitle:(id)arg1;
- (id)m_moneyString;
- (void)setM_moneyString:(id)arg1;
- (void).cxx_destruct;
@end

