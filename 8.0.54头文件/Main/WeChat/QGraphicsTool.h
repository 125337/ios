@interface QGraphicsTool : NSObject
{
    NSString * _fontName; // +0x8
    NSString * _boldFontName; // +0x10
    NSMutableDictionary * _dictionaryFontSizes; // +0x18
    CATextLayer * _textLayer; // +0x20
    NSMutableDictionary * _dictionaryImages; // +0x28
}
- (id)init;
- (id)defaultFontName;
- (id)defaultBoldFontName;
- (id)getFontName:(BOOL)arg1;
- (void)drawString:(TMBitmapContext *)arg1 text:(unsigned short *)arg2 count:(int)arg3 fontSize:(int)arg4 bold:(BOOL)arg5 density:(float)arg6;
- (id)drawStringImage:(id)arg1 fontSize:(double)arg2 color:(id)arg3 strokeColor:(id)arg4 strokeWidth:(double)arg5;
- (TMSize)calcTextSize:(unsigned short *)arg1 count:(int)arg2 fontSize:(int)arg3 bold:(BOOL)arg4;
- (TMBitmapContext *)drawImage:(id)arg1 anchorPointX1:(float *)arg2 anchorPointY1:(float *)arg3;
- (TMBitmapContext *)generateRect:(id)arg1;
- (TMBitmapContext *)generateRouteArrowTexture:(int)arg1;
- (void)drawRoundRect:(CGContext *)arg1 width:(int)arg2 height:(int)arg3 radius:(double)arg4 borderWidth:(double)arg5;
- (id)getTextAttributeString:(unsigned short *)arg1 count:(int)arg2 fontSize:(int)arg3 bold:(BOOL)arg4;
- (id)getImageFromView:(id)arg1;
- (id)fontName;
- (void)setFontName:(id)arg1;
- (id)boldFontName;
- (void)setBoldFontName:(id)arg1;
- (id)dictionaryFontSizes;
- (void)setDictionaryFontSizes:(id)arg1;
- (id)textLayer;
- (void)setTextLayer:(id)arg1;
- (id)dictionaryImages;
- (void)setDictionaryImages:(id)arg1;
- (void).cxx_destruct;
@end

