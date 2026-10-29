@interface WCCustomLinkParser : TextParser
{
    NSString * _url; // +0x60
    NSString * _sourceUrl; // +0x68
    UIColor * _highlightedColor; // +0x70
    BOOL _bBackgroundEnabled; // +0x78
}
+ (id)newInstance;
- (id)init;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(_NSParserPosition)arg2 outputLastPosition:(_NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)parseTargetContent:(id)arg1 tailWidth:(double *)arg2;
- (id)getStyle;
- (id)attributeStringForContent:(id)arg1;
- (id)parseFontFromAttrNode:(XmlReaderNode_t *)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (void).cxx_destruct;
@end

