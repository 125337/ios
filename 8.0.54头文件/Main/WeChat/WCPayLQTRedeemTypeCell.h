@interface WCPayLQTRedeemTypeCell : UIView
{
    BOOL _m_selected; // +0x8
    BOOL _m_disable; // +0x9
    BOOL _m_highlight; // +0xa
    BOOL _m_defaultSelected; // +0xb
    UILabel * _m_titleLabel; // +0x10
    UILabel * _m_desLabel; // +0x18
    UIView * _m_lineView; // +0x20
    UIImageView * _m_selectedIcon; // +0x28
    RedeemTypeList * _m_data; // +0x30
    id <WCPayLQTRedeemTypeCellDelegate> _m_delegate; // +0x38
}
- (double)layoutForKey:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)onTap;
- (void)updateView;
- (void)adjustHeight;
- (void)updateTitleLabel;
- (void)updateDesLabel;
- (void)updateSelectIcon;
- (void)updateLineView;
- (void)updateMaskView;
- (void)layoutSubviews;
- (void)updateRedeemTypeList:(id)arg1 selected:(BOOL)arg2 disable:(BOOL)arg3 highlight:(BOOL)arg4 defaultSelect:(BOOL)arg5;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_desLabel;
- (void)setM_desLabel:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_selectedIcon;
- (void)setM_selectedIcon:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (BOOL)m_selected;
- (void)setM_selected:(BOOL)arg1;
- (BOOL)m_disable;
- (void)setM_disable:(BOOL)arg1;
- (BOOL)m_highlight;
- (void)setM_highlight:(BOOL)arg1;
- (BOOL)m_defaultSelected;
- (void)setM_defaultSelected:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

