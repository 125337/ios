@interface LinkTextParser : TextParser
{
    NSString * _url; // +0x60
    NSString * _sourceUrl; // +0x68
    BOOL _shouldParseWeAppMPShortLink; // +0x70
    BOOL _shouldParseWeAppTagLink; // +0x71
}
+ (id)linkRegex;
+ (id)schemeSuffixRegex;
+ (id)schemeRegex;
+ (id)domainPrefixRegex;
+ (id)domainRegex;
+ (id)newInstance;
- (BOOL)useWordWrapping;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)attributeStringForContent:(id)arg1;
- (id)getStyle;
- (id)limitLinkTextContentIfNeeded:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (BOOL)shouldParseWeAppMPShortLink;
- (void)setShouldParseWeAppMPShortLink:(BOOL)arg1;
- (BOOL)shouldParseWeAppTagLink;
- (void)setShouldParseWeAppTagLink:(BOOL)arg1;
- (void).cxx_destruct;
@end
