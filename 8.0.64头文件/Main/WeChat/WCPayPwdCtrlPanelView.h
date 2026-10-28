@interface WCPayPwdCtrlPanelView : UIView <ILinkEventExt>
{
    UIImageView * m_footerTipImageView; // +0x8
    UILabel * m_footerTip; // +0x10
    UIView * m_footerView; // +0x18
    WCPayTenpayPasswordCtrlItem * m_textField; // +0x20
    RichTextView * tip; // +0x28
    UILabel * m_titleLabel; // +0x30
    UILabel * m_tipsLabel; // +0x38
    double _contentViewY; // +0x40
    NSString * _m_nsTitle; // +0x48
    NSString * _m_nsTips; // +0x50
}
- (id)initWithTitle:(id)arg1 tips:(id)arg2;
- (void)layoutSubviews;
- (void)setContentViewY:(double)arg1;
- (void)setError:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)dealloc;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (id)m_textField;
- (void)setM_textField:(id)arg1;
- (double)contentViewY;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (id)m_nsTips;
- (void)setM_nsTips:(id)arg1;
- (void).cxx_destruct;
@end
