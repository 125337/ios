@interface MinimizeTaskUtil : MMObject
+ (BOOL)isOpenStarSwitch;
+ (BOOL)isOpenStateViewMarquee;
+ (BOOL)isOpenStateFloatingViewCreateAnimation;
+ (unsigned long long)resolvedStateFloatingFontLevel;
+ (double)stateFloatingLayoutScale;
+ (double)stateFloatingPixelAlignedValue:(double)arg1;
+ (unsigned long long)multiContentTaskMaxCount;
+ (BOOL)shouldHideStarEntry;
+ (id)starFilledIconSvgName;
+ (id)starOutlinedIconSvgName;
+ (id)starOutlinedIconImageWithColor:(id)arg1 size:(CGSize)arg2;
+ (id)starOutlinedIconImageWithColor:(id)arg1 size:(CGSize)arg2 traitCollection:(id)arg3;
+ (id)starOutlinedIconImageWithColor:(id)arg1 size:(CGSize)arg2 traitCollection:(id)arg3 chatBotEntryStyle:(long long)arg4;
+ (id)chatBotEntryImageWithStyle:(long long)arg1 color:(id)arg2 traitCollection:(id)arg3;
+ (id)genActionSheetItemImage;
@end
