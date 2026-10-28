@interface KindaUIButton : MMUIButton
{
    BOOL _enableHignLight; // +0x8
    UIColor * _m_highlighBorderColor; // +0x10
    UIColor * _m_disabledBorderColor; // +0x18
    UIColor * _m_normalBorderColor; // +0x20
    UIColor * _normalTextColor; // +0x28
    UIColor * _normalBackgroudColor; // +0x30
    UIColor * _disabledTextColor; // +0x38
    UIColor * _disabledBackgroudColor; // +0x40
    long long _m_verticalPadding; // +0x48
    long long _m_horizontalPadding; // +0x50
}
- (id)init;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)getSuperViewBackgroundColor;
- (unsigned long long)colorStyle:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnableHignLight:(BOOL)arg1;
- (void)setWeakStyle;
- (void)setGreenStyle;
- (id)m_highlighBorderColor;
- (void)setM_highlighBorderColor:(id)arg1;
- (id)m_disabledBorderColor;
- (void)setM_disabledBorderColor:(id)arg1;
- (id)m_normalBorderColor;
- (void)setM_normalBorderColor:(id)arg1;
- (id)normalTextColor;
- (void)setNormalTextColor:(id)arg1;
- (id)normalBackgroudColor;
- (void)setNormalBackgroudColor:(id)arg1;
- (id)disabledTextColor;
- (void)setDisabledTextColor:(id)arg1;
- (id)disabledBackgroudColor;
- (void)setDisabledBackgroudColor:(id)arg1;
- (BOOL)enableHignLight;
- (long long)m_verticalPadding;
- (void)setM_verticalPadding:(long long)arg1;
- (long long)m_horizontalPadding;
- (void)setM_horizontalPadding:(long long)arg1;
- (void).cxx_destruct;
@end
