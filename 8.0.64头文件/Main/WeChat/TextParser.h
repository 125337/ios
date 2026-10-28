@interface TextParser : BaseParser
{
    UIFont * _font; // +0x18
    UIColor * _color; // +0x20
    UIColor * _highlightColor; // +0x28
    UIColor * _shadowColor; // +0x30
    CGSize _shadowOffset; // +0x38
    double _shadowBlurRadius; // +0x48
    BOOL _customShadow; // +0x50
    TextStyleAttributeObj * _textAttributeObj; // +0x58
    NSMutableDictionary * m_dictWordLen; // +0x60
    int m_maxAlphaWordLen; // +0x68
    CGSize m_chineseWordSize; // +0x70
    BOOL _lineBreakByClipping; // +0x80
    long long _inlineVerticalAlign; // +0x88
    NSMutableArray * _currentStyles; // +0x90
}
+ (id)getAlphaSet;
+ (id)newInstance;
+ (void)initialize;
- (id)init;
- (CGSize)calcWordSize:(id)arg1;
- (id)substringOf:(id)arg1 WithRange:(_NSRange)arg2;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)getStyle;
- (void)addAlphaWord:(id)arg1 ToSplitArray:(id)arg2;
- (BOOL)useWordWrapping;
- (BOOL)isChangeLineChar:(unsigned short)arg1;
- (id)arrayWithWordSplit:(id)arg1;
- (id)arrayWithWordSplit:(id)arg1 wordWrapping:(BOOL)arg2;
- (long long)FindtheIndexToFillFullLine:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 width:(long long)arg4 withFont:(id)arg5;
- (id)parseTextForStyles:(id)arg1 withParserPosition:(_NSParserPosition *)arg2;
- (id)charWrappingTruncated:(id)arg1 limitWidth:(double)arg2 origin:(CGPoint)arg3 location:(double)arg4;
- (void)markLastStyleAsEnd;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)styleStringForContent:(id)arg1 withParserPosition:(_NSParserPosition)arg2 outputLastPosition:(_NSParserPosition *)arg3;
- (id)attributeStringForContent:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (CGSize)shadowOffset;
- (void)setShadowOffset:(CGSize)arg1;
- (double)shadowBlurRadius;
- (void)setShadowBlurRadius:(double)arg1;
- (BOOL)customShadow;
- (void)setCustomShadow:(BOOL)arg1;
- (id)textAttributeObj;
- (void)setTextAttributeObj:(id)arg1;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (BOOL)lineBreakByClipping;
- (void)setLineBreakByClipping:(BOOL)arg1;
- (long long)inlineVerticalAlign;
- (void)setInlineVerticalAlign:(long long)arg1;
- (id)currentStyles;
- (void)setCurrentStyles:(id)arg1;
- (void).cxx_destruct;
@end
