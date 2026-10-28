@interface MMBarButtonItem : UIBarButtonItem <NSCopying>
{
    UIButton * m_btn; // +0x8
    long long _itemStyle; // +0x10
    NSString * _buttonTitle; // +0x18
    unsigned long long _buttonStyle; // +0x20
    id _buttonTarget; // +0x28
    SEL _buttonAction; // +0x30
    double _maxWidth; // +0x38
    UIColor * _color; // +0x40
    UIFont * _font; // +0x48
    NSString * _buttonImageName; // +0x50
    NSString * _accessibility; // +0x58
}
- (void)setEnabled:(BOOL)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)m_btn;
- (void)setM_btn:(id)arg1;
- (long long)itemStyle;
- (void)setItemStyle:(long long)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (unsigned long long)buttonStyle;
- (void)setButtonStyle:(unsigned long long)arg1;
- (id)buttonTarget;
- (void)setButtonTarget:(id)arg1;
- (SEL)buttonAction;
- (void)setButtonAction:(SEL)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)buttonImageName;
- (void)setButtonImageName:(id)arg1;
- (id)accessibility;
- (void)setAccessibility:(id)arg1;
- (void).cxx_destruct;
@end
