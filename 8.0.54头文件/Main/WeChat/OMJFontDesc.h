@interface OMJFontDesc : NSObject
{
    NSString * _fontName; // +0x8
    double _fontSize; // +0x10
}
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2;
- (id)initWithFamilyName:(id)arg1 fontWeight:(unsigned long long)arg2 fontSize:(double)arg3;
- (id)calcFontNameWithFamilyName:(id)arg1 fontWeight:(unsigned long long)arg2;
- (id)fontName;
- (double)fontSize;
- (void).cxx_destruct;
@end

