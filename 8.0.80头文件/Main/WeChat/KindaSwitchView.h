@interface KindaSwitchView : KindaView <MMKSwitchView>
{
    MMKSwitchViewOnChangeSwitchCallback * _m_changeSwitchCallback; // +0xa8
    UISwitch * _m_switch; // +0xb0
    MMDynamicColor * _m_onTintColor; // +0xb8
    MMDynamicColor * _m_tintColor; // +0xc0
    MMDynamicColor * _m_thumbTintColor; // +0xc8
    id <MMKImage> _m_onImage; // +0xd0
    id <MMKImage> _m_offImage; // +0xd8
}
- (id)init;
- (id)getView;
- (void)setOnTintColor:(id)arg1;
- (id)getOnTintColor;
- (void)setTintColor:(id)arg1;
- (id)getTintColor;
- (void)setThumbTintColor:(id)arg1;
- (id)getThumbTintColor;
- (void)setOnImage:(id)arg1;
- (id)getOnImage;
- (void)setOffImage:(id)arg1;
- (id)getOffImage;
- (void)setOn:(BOOL)arg1;
- (BOOL)getOn;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)getEnabled;
- (void)setOnChangeSwitchCallback:(id)arg1;
- (void)changeSwitch;
- (id)m_changeSwitchCallback;
- (void)setM_changeSwitchCallback:(id)arg1;
- (id)m_switch;
- (void)setM_switch:(id)arg1;
- (id)m_onTintColor;
- (void)setM_onTintColor:(id)arg1;
- (id)m_tintColor;
- (void)setM_tintColor:(id)arg1;
- (id)m_thumbTintColor;
- (void)setM_thumbTintColor:(id)arg1;
- (id)m_onImage;
- (void)setM_onImage:(id)arg1;
- (id)m_offImage;
- (void)setM_offImage:(id)arg1;
- (void).cxx_destruct;
@end
