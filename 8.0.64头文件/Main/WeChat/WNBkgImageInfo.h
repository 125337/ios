@interface WNBkgImageInfo : NSObject <PBCoding>
{
    float _backgroundAlpha; // +0x8
    float _fontAlpha; // +0xc
    float _logoAlpha; // +0x10
    int _colorType; // +0x14
    NSString * _displayName; // +0x18
    NSString * _backgroundColor; // +0x20
    NSString * _fontColor; // +0x28
    NSString * _logoColor; // +0x30
}
+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_backgroundColor;
+ (void)PBArrayAdd_backgroundAlpha;
+ (void)PBArrayAdd_fontColor;
+ (void)PBArrayAdd_fontAlpha;
+ (void)PBArrayAdd_logoColor;
+ (void)PBArrayAdd_logoAlpha;
+ (void)PBArrayAdd_colorType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithFavBkgImageResourceInfo:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (float)backgroundAlpha;
- (void)setBackgroundAlpha:(float)arg1;
- (id)fontColor;
- (void)setFontColor:(id)arg1;
- (float)fontAlpha;
- (void)setFontAlpha:(float)arg1;
- (id)logoColor;
- (void)setLogoColor:(id)arg1;
- (float)logoAlpha;
- (void)setLogoAlpha:(float)arg1;
- (int)colorType;
- (void)setColorType:(int)arg1;
- (void).cxx_destruct;
@end
