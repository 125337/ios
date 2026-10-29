@interface KindaRichLabelViewV2 : KindaView <KindaUILabelDelegate, MMKRichLabelView, ILinkEventExt>
{
    int _m_lines; // +0xa8
    float _m_textSize; // +0xac
    float _m_lineSpacingFactor; // +0xb0
    unsigned int _m_maxLength; // +0xb4
    MMVoidCallback * _lastLinkCallback; // +0xb8
    NSString * _m_text; // +0xc0
    id <MMKText> _m_richText; // +0xc8
    NSString * _m_textFontName; // +0xd0
    RichTextView * _m_richTextView; // +0xd8
    KindaUILabel * _m_textView; // +0xe0
    MMDynamicColor * _m_textColor; // +0xe8
    long long _m_ellipsize; // +0xf0
    long long _m_textAlign; // +0xf8
    long long _m_textViewAlign; // +0x100
    long long _fontStyle; // +0x108
    NSMutableArray * _m_textFragmentArray; // +0x110
    NSString * _m_finalText; // +0x118
    NSMutableAttributedString * _m_attrStr; // +0x120
}
- (id)init;
- (id)getView;
- (void)setAccessibilityString:(id)arg1;
- (id)getFinalAttrString;
- (void)setLines:(int)arg1;
- (int)getLines;
- (void)setLineSpacingFactor:(float)arg1;
- (float)getLineSpacingFactor;
- (void)setText:(id)arg1;
- (id)getText;
- (void)setRichText:(id)arg1;
- (id)insertWordJoinerInContent:(id)arg1;
- (void)insideReloadTextView;
- (id)getRichText;
- (void)setTextSize:(float)arg1;
- (float)getTextSize;
- (void)setTextColor:(id)arg1;
- (id)getTextColor;
- (void)setTextFont:(id)arg1;
- (id)getTextFont;
- (void)setEllipsize:(long long)arg1;
- (long long)getEllipsize;
- (long long)lineBreakMode;
- (void)setTextAlign:(long long)arg1;
- (long long)getTextAlign;
- (void)setMaxLength:(int)arg1;
- (int)getMaxLength;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (BOOL)getAdjustsFontSizeToFitWidth;
- (void)setBaselineAdjustment:(long long)arg1;
- (long long)getBaselineAdjustment;
- (void)setFontStyle:(long long)arg1;
- (long long)getFontStyle;
- (void)reloadFontStyle;
- (void)didclickCharacterInLocation:(long long)arg1;
- (id)linkRanges;
- (id)linkBkgItems;
- (id)fontWithStyle:(long long)arg1 size:(double)arg2;
- (id)lastLinkCallback;
- (void)setLastLinkCallback:(id)arg1;
- (id)m_text;
- (void)setM_text:(id)arg1;
- (id)m_richText;
- (void)setM_richText:(id)arg1;
- (id)m_textFontName;
- (void)setM_textFontName:(id)arg1;
- (id)m_richTextView;
- (void)setM_richTextView:(id)arg1;
- (id)m_textView;
- (void)setM_textView:(id)arg1;
- (int)m_lines;
- (void)setM_lines:(int)arg1;
- (float)m_textSize;
- (void)setM_textSize:(float)arg1;
- (float)m_lineSpacingFactor;
- (void)setM_lineSpacingFactor:(float)arg1;
- (id)m_textColor;
- (void)setM_textColor:(id)arg1;
- (long long)m_ellipsize;
- (void)setM_ellipsize:(long long)arg1;
- (long long)m_textAlign;
- (void)setM_textAlign:(long long)arg1;
- (long long)m_textViewAlign;
- (void)setM_textViewAlign:(long long)arg1;
- (unsigned int)m_maxLength;
- (void)setM_maxLength:(unsigned int)arg1;
- (long long)fontStyle;
- (id)m_textFragmentArray;
- (void)setM_textFragmentArray:(id)arg1;
- (id)m_finalText;
- (void)setM_finalText:(id)arg1;
- (id)m_attrStr;
- (void)setM_attrStr:(id)arg1;
- (void).cxx_destruct;
@end

