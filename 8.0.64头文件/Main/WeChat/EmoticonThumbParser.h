@interface EmoticonThumbParser : BaseParser
{
    UIFont * _font; // +0x18
    NSString * _md5; // +0x20
    double _minLineHeight; // +0x28
}
+ (id)newInstance;
- (void)setFont:(id)arg1;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getEmojiStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)styleStringForContent:(id)arg1 withParserPosition:(_NSParserPosition)arg2 outputLastPosition:(_NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)font;
- (id)md5;
- (void)setMd5:(id)arg1;
- (double)minLineHeight;
- (void)setMinLineHeight:(double)arg1;
- (void).cxx_destruct;
@end
