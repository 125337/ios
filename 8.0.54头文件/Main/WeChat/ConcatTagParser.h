@interface ConcatTagParser : TextParser
+ (id)newInstance;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)attributeStringForContent:(id)arg1;
- (id)getStyle;
@end

