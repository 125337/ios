@interface BoldTextParser : TextParser
+ (id)newInstance;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)getStyle;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)styleStringForContent:(id)arg1 withParserPosition:(_NSParserPosition)arg2 outputLastPosition:(_NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)attributeStringForContent:(id)arg1;
- (id)parseContent:(id)arg1;
@end

