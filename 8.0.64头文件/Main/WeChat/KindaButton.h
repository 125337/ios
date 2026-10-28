@interface KindaButton : KindaView <MMKButton>
{
    float _m_textSize; // +0xa8
    MMKViewOnClickCallback * _m_onButtonClickCallback; // +0xb0
    KindaUIButton * _m_button; // +0xb8
    NSString * _m_text; // +0xc0
    MMDynamicColor * _m_normalTextColor; // +0xc8
    MMDynamicColor * _m_normalColor; // +0xd0
    MMDynamicColor * _m_disabledTextColor; // +0xd8
    MMDynamicColor * _m_disabledColor; // +0xe0
    long long _fontStyle; // +0xe8
    id <MMKImage> _m_normalBackgroundImage; // +0xf0
    id <MMKImage> _m_pressBackgroundImage; // +0xf8
    id <MMKImage> _m_disabledBackgroundImage; // +0x100
    id <MMKImage> _m_selectedBackgroundImage; // +0x108
    long long _m_expandHitWidth; // +0x110
    long long _m_expandHitHeight; // +0x118
}
- (id)init;
- (void)dealloc;
- (id)getView;
- (void)setWidth:(float)arg1;
- (void)setMinHeight:(float)arg1;
- (void)setMinWidth:(float)arg1;
- (void)setOnClickCallback:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setEnableHighLight:(BOOL)arg1;
- (BOOL)getEnableHighLight;
- (void)setTextSize:(float)arg1;
- (float)getTextSize;
- (void)setTextNormalColor:(id)arg1;
- (id)getTextNormalColor;
- (void)setText:(id)arg1;
- (id)getText;
- (void)setNormalImage:(id)arg1;
- (id)getNormalImage;
- (void)setPressedImage:(id)arg1;
- (id)getPressedImage;
- (void)setSelectedImage:(id)arg1;
- (id)getSelectedImage;
- (void)setDisabledImage:(id)arg1;
- (id)getDisabledImage;
- (void)setEnable:(BOOL)arg1;
- (BOOL)getEnable;
- (void)setNormalColor:(id)arg1;
- (id)getNormalColor;
- (id)getDisableColor;
- (void)setDisableColor:(id)arg1;
- (id)getDisableTextColor;
- (void)setDisableTextColor:(id)arg1;
- (void)onButtonTouchUpInside:(id)arg1;
- (void)setExpandHitWidth:(long long)arg1;
- (void)setExpandHitHeight:(long long)arg1;
- (long long)getExpandHitWidth;
- (long long)getExpandHitHeight;
- (long long)getFontStyle;
- (void)setFontStyle:(long long)arg1;
- (void)setVerticalPadding:(long long)arg1;
- (long long)getVerticalPadding;
- (void)setHorizontalPadding:(long long)arg1;
- (long long)getHorizontalPadding;
- (void)adjustSize;
- (id)m_onButtonClickCallback;
- (void)setM_onButtonClickCallback:(id)arg1;
- (id)m_button;
- (void)setM_button:(id)arg1;
- (id)m_text;
- (void)setM_text:(id)arg1;
- (float)m_textSize;
- (void)setM_textSize:(float)arg1;
- (id)m_normalTextColor;
- (void)setM_normalTextColor:(id)arg1;
- (id)m_normalColor;
- (void)setM_normalColor:(id)arg1;
- (id)m_disabledTextColor;
- (void)setM_disabledTextColor:(id)arg1;
- (id)m_disabledColor;
- (void)setM_disabledColor:(id)arg1;
- (long long)fontStyle;
- (id)m_normalBackgroundImage;
- (void)setM_normalBackgroundImage:(id)arg1;
- (id)m_pressBackgroundImage;
- (void)setM_pressBackgroundImage:(id)arg1;
- (id)m_disabledBackgroundImage;
- (void)setM_disabledBackgroundImage:(id)arg1;
- (id)m_selectedBackgroundImage;
- (void)setM_selectedBackgroundImage:(id)arg1;
- (long long)m_expandHitWidth;
- (void)setM_expandHitWidth:(long long)arg1;
- (long long)m_expandHitHeight;
- (void)setM_expandHitHeight:(long long)arg1;
- (void).cxx_destruct;
@end
