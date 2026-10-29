@interface SharpTagTopicParser : TextParser
{
    NSString * _query; // +0x60
}
+ (id)newInstance;
- (BOOL)useWordWrapping;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)getStyle;
- (id)attributeStringForContent:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (void).cxx_destruct;
@end

