@interface WAGameDirectPlayBoxMaskPlaceholderConfig : NSObject
{
    double _iconLeft; // +0x8
    double _iconBottom; // +0x10
    double _iconWidth; // +0x18
    double _iconHeight; // +0x20
    double _iconBorderRadius; // +0x28
    double _nameLeft; // +0x30
    double _nameBottom; // +0x38
    NSNumber * _nameWidth; // +0x40
    double _nameHeight; // +0x48
    double _nameFontSize; // +0x50
    double _nameLineHeight; // +0x58
    NSString * _nameColorHex; // +0x60
    long long _nameFontWeight; // +0x68
    NSString * _loadingText; // +0x70
    NSString * _loadingBackgroundColorHex; // +0x78
}
+ (id)defaultConfig;
+ (id)configFromObject:(id)arg1;
- (id)init;
- (id)nameColor;
- (double)nameFontUIWeight;
- (id)loadingBackgroundColor;
- (double)loadingBackgroundAlpha;
- (double)clampedIconCornerRadius;
- (double)nameWidthForContainerWidth:(double)arg1;
- (id)wa_logDescription;
- (double)iconLeft;
- (void)setIconLeft:(double)arg1;
- (double)iconBottom;
- (void)setIconBottom:(double)arg1;
- (double)iconWidth;
- (void)setIconWidth:(double)arg1;
- (double)iconHeight;
- (void)setIconHeight:(double)arg1;
- (double)iconBorderRadius;
- (void)setIconBorderRadius:(double)arg1;
- (double)nameLeft;
- (void)setNameLeft:(double)arg1;
- (double)nameBottom;
- (void)setNameBottom:(double)arg1;
- (id)nameWidth;
- (void)setNameWidth:(id)arg1;
- (double)nameHeight;
- (void)setNameHeight:(double)arg1;
- (double)nameFontSize;
- (void)setNameFontSize:(double)arg1;
- (double)nameLineHeight;
- (void)setNameLineHeight:(double)arg1;
- (id)nameColorHex;
- (void)setNameColorHex:(id)arg1;
- (long long)nameFontWeight;
- (void)setNameFontWeight:(long long)arg1;
- (id)loadingText;
- (void)setLoadingText:(id)arg1;
- (id)loadingBackgroundColorHex;
- (void)setLoadingBackgroundColorHex:(id)arg1;
- (void).cxx_destruct;
@end
