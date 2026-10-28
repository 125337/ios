@interface WCFinderCustomRichTextParser : BaseParser
{
    UIFont * _font; // +0x18
    UIColor * _color; // +0x20
    TextParser * _textParser; // +0x28
    WCFinderImgParser * _imgParser; // +0x30
}
+ (id)_testRegular;
- (id)textParser;
- (id)imgParser;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)parseTextForStyles:(id)arg1 withParserPosition:(_NSParserPosition *)arg2;
- (id)_styleForText:(XmlReaderNode_t *)arg1 content:(id)arg2 position:(_NSParserPosition *)arg3;
- (id)_styleForDynamicIcon:(XmlReaderNode_t *)arg1 content:(id)arg2 position:(_NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)font;
- (void)setFont:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setTextParser:(id)arg1;
- (void)setImgParser:(id)arg1;
- (void).cxx_destruct;
@end
