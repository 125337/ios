@interface WCCustomImgParser : ImageParser
+ (id)newInstance;
- (void)setImageSrc:(id)arg1;
- (id)getImage;
- (id)getImageWithSize:(CGSize)arg1;
- (id)getSvgImage:(id)arg1 size:(CGSize)arg2;
- (_NSRange)rangeOfObjectInString:(id)arg1 withRange:(_NSRange)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getImageStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)styleStringForContent:(id)arg1 withParserPosition:(_NSParserPosition)arg2 outputLastPosition:(_NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(_NSRange)arg2 withParserPosition:(_NSParserPosition *)arg3;
- (id)getImageForText:(id)arg1;
- (BOOL)isNetworkImage;
@end
