@interface WCFinderImgParser : WCCustomImgParser
{
    BOOL _hasParseImageAttr; // +0x38
    UIColor * _color; // +0x40
}
+ (id)newInstance;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (BOOL)hasParseImageAttr;
- (void)setHasParseImageAttr:(BOOL)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void).cxx_destruct;
@end
