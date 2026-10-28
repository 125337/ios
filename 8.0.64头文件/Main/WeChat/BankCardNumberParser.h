@interface BankCardNumberParser : TextParser
{
    NSString * _nsUrl; // +0x60
    NSString * _nsSourceUrl; // +0x68
}
+ (id)newInstance;
- (id)init;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)attributeStringForContent:(id)arg1;
- (id)getStyle;
- (void).cxx_destruct;
@end
