@interface ImageParser : BaseParser
{
    UIFont * _font; // +0x18
    NSString * _nsImgSrc; // +0x20
    NSString * _nsDarkImgSrc; // +0x28
    UIColor * _imgColor; // +0x30
    BOOL _customImageProvider; // +0x38
}
+ (id)newInstance;
- (void)setImageSrc:(id)arg1;
- (id)getImage;
- (id)getImageWithSrc:(id)arg1;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getImageStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)styleStringForContent:(id)arg1 withParserPosition:(_NSParserPosition)arg2 outputLastPosition:(_NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)getImageForText:(id)arg1;
- (id)getColorWithString:(id)arg1;
- (id)imageStyleOfRect:(CGRect)arg1 range:(_NSRange)arg2;
- (id)font;
- (void)setFont:(id)arg1;
- (BOOL)customImageProvider;
- (void)setCustomImageProvider:(BOOL)arg1;
- (void).cxx_destruct;
@end
