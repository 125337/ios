@interface KindaOpenIMInfoView : KindaView <MMKOpenIMInfoView>
{
    int _m_textSize; // +0xa8
    long long _fontStyle; // +0xb0
    long long _m_textAlign; // +0xb8
    long long _m_textViewAlign; // +0xc0
    MMDynamicColor * _m_textColor; // +0xc8
    NSString * _m_formatText; // +0xd0
    NSString * _m_nickName; // +0xd8
    NSString * _m_trueName; // +0xe0
    NSString * _m_businessName; // +0xe8
    UIView * _m_view; // +0xf0
    UIView * _m_firstLayout; // +0xf8
    UILabel * _m_firstLabel; // +0x100
    UILabel * _m_firstSuffixLabel; // +0x108
    UIView * _m_secondLayout; // +0x110
    UILabel * _m_secondLabel; // +0x118
    UILabel * _m_secondSuffixLabel; // +0x120
    UILabel * _m_measureLabel; // +0x128
}
- (id)init;
- (id)getView;
- (void)updateContent;
- (void)updateContent:(BOOL)arg1;
- (void)innerUpdateContent;
- (void)setTextSize:(float)arg1;
- (float)getTextSize;
- (void)setTextAlign:(long long)arg1;
- (long long)getTextAlign;
- (int)getLayoutAlign;
- (double)getContentHeight;
- (void)setTextColor:(id)arg1;
- (id)getTextColor;
- (void)setFormatText:(id)arg1;
- (id)getFormatText;
- (void)setNickNameText:(id)arg1;
- (id)getNickNameText;
- (void)setTrueNameText:(id)arg1;
- (id)getTrueNameText;
- (void)setBusinessNameText:(id)arg1;
- (id)getBusinessNameText;
- (double)measureWidth:(id)arg1;
- (id)insertWordJoinerInContent:(id)arg1;
- (id)fontWithStyle;
- (long long)fontStyle;
- (void)setFontStyle:(long long)arg1;
- (int)m_textSize;
- (void)setM_textSize:(int)arg1;
- (long long)m_textAlign;
- (void)setM_textAlign:(long long)arg1;
- (long long)m_textViewAlign;
- (void)setM_textViewAlign:(long long)arg1;
- (id)m_textColor;
- (void)setM_textColor:(id)arg1;
- (id)m_formatText;
- (void)setM_formatText:(id)arg1;
- (id)m_nickName;
- (void)setM_nickName:(id)arg1;
- (id)m_trueName;
- (void)setM_trueName:(id)arg1;
- (id)m_businessName;
- (void)setM_businessName:(id)arg1;
- (id)m_view;
- (void)setM_view:(id)arg1;
- (id)m_firstLayout;
- (void)setM_firstLayout:(id)arg1;
- (id)m_firstLabel;
- (void)setM_firstLabel:(id)arg1;
- (id)m_firstSuffixLabel;
- (void)setM_firstSuffixLabel:(id)arg1;
- (id)m_secondLayout;
- (void)setM_secondLayout:(id)arg1;
- (id)m_secondLabel;
- (void)setM_secondLabel:(id)arg1;
- (id)m_secondSuffixLabel;
- (void)setM_secondSuffixLabel:(id)arg1;
- (id)m_measureLabel;
- (void)setM_measureLabel:(id)arg1;
- (void).cxx_destruct;
@end

