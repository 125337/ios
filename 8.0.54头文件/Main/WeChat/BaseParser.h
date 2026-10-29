@interface BaseParser : NSObject
{
    id <TextLayoutDelegate> _layoutDelegate; // +0x8
    unsigned long long _parserType; // +0x10
    id <BaseParserStyleDelegate> _styleDelegate; // +0x18
    double _lineSpacing; // +0x20
}
+ (id)newInstance;
+ (id)sharedInstance;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(_NSParserPosition)arg2 outputLastPosition:(_NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (void)insertString:(id)arg1 stringRange:(_NSRange)arg2 styleRect:(CGRect)arg3;
- (id)parseTextForStyles:(id)arg1 withParserPosition:(_NSParserPosition *)arg2;
- (double)getNextLineOriginWithCurrentY:(double)arg1 lineHeight:(double)arg2 withMaxWidth:(double)arg3;
- (double)getCurrentLineWidthWithCurrentY:(double)arg1 lineIndex:(long long)arg2 lineHeight:(double)arg3;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2;
- (unsigned int)perferedLinkTextVisiableLength;
- (id)attributeStringForContent:(id)arg1;
- (id)previousParsedStyles;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (unsigned long long)parserType;
- (void)setParserType:(unsigned long long)arg1;
- (id)styleDelegate;
- (void)setStyleDelegate:(id)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (void).cxx_destruct;
@end

