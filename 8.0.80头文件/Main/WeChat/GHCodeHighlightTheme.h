@interface GHCodeHighlightTheme : NSObject
{
    UIColor * _backgroundColor; // +0x8
    UIColor * _borderColor; // +0x10
    UIColor * _languageLabelColor; // +0x18
    UIFont * _font; // +0x20
    double _lineSpacing; // +0x28
    NSDictionary * _palette; // +0x30
}
+ (id)githubLightTheme;
+ (id)githubDarkTheme;
+ (id)githubSystemTheme;
+ (id)themeForUserInterfaceStyle:(long long)arg1;
- (id)initWithPalette:(id)arg1 background:(id)arg2 border:(id)arg3 labelColor:(id)arg4;
- (id)colorForTokenType:(long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (id)languageLabelColor;
- (void)setLanguageLabelColor:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (id)palette;
- (void)setPalette:(id)arg1;
- (void).cxx_destruct;
@end
