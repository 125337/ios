@interface LinkAnchorParser : TextParser
{
    NSString * _url; // +0x60
    NSString * _sourceUrl; // +0x68
    UIColor * _highlightedColor; // +0x70
    BOOL _bBackgroundEnabled; // +0x78
    unsigned long long _jumpType; // +0x80
    LinkWeAppJumpWrap * _weappJumpWrap; // +0x88
    BOOL _isNativeWeApp; // +0x90
}
+ (id)newInstance;
+ (id)stringByStrippingHref:(id)arg1;
- (id)init;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)styleStringForContent:(id)arg1 withParserPosition:(_NSParserPosition)arg2 outputLastPosition:(_NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getStyle;
- (id)attributeStringForContent:(id)arg1;
- (id)getPrefixStylesWithParserPosition:(_NSParserPosition *)arg1;
- (id)prefixStyleStringWithParserPosition:(_NSParserPosition)arg1 outputLastPosition:(_NSParserPosition *)arg2;
- (id)getPrefixStylesWithStyleString:(id)arg1;
- (BOOL)isJumpWeApp;
- (id)getCustomImgParser;
- (id)openWeAppLogoCustomImageContent;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (void).cxx_destruct;
@end

