@interface WCFinderColorHelper : NSObject
+ (id)changeUIColorToRGBA:(id)arg1;
+ (void)setGradientLayer:(id)arg1 endColor:(id)arg2 view:(id)arg3;
+ (id)clipImage:(id)arg1 withRect:(CGRect)arg2;
+ (id)mainColorOfImage:(id)arg1 targetSize:(CGSize)arg2;
+ (double)contrastRatio:(id)arg1 color2:(id)arg2;
+ (double)luminance:(id)arg1;
+ (double)adjustColor:(double)arg1;
+ (id)getImageGradientColorBy:(id)arg1;
+ (BOOL)isWhiteApartColor:(id)arg1;
+ (BOOL)isBlackApartColor:(id)arg1;
+ (id)checkColorContrast:(id)arg1;
+ (id)colorAtPixel:(CGPoint)arg1 image:(id)arg2;
+ (id)RGBValueFromUIColor:(id)arg1;
+ (id)transitionColorWithStartColor:(id)arg1 endColor:(id)arg2 progress:(double)arg3;
+ (id)dynamicColorWithHexString:(id)arg1;
+ (id)colorWithFinderColor:(id)arg1;
+ (id)getFinderLinkColor;
@end

