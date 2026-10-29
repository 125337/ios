@interface UIColor (UIColor_Expanded)
+ (id)searchForColorByName:(id)arg1;
+ (id)LOT_colorWithString:(id)arg1;
+ (id)LOT_randomColor;
+ (id)LOT_colorWithRGBHex:(unsigned int)arg1;
+ (id)LOT_colorWithHexString:(id)arg1;
+ (id)LOT_colorWithName:(id)arg1;
+ (id)LOT_colorByLerpingFromColor:(id)arg1 toColor:(id)arg2 amount:(double)arg3;
- (int)colorSpaceModel;
- (id)LOT_colorSpaceString;
- (BOOL)canProvideRGBComponents;
- (id)LOT_arrayFromRGBAComponents;
- (BOOL)LOT_red:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (double)red;
- (double)green;
- (double)blue;
- (double)white;
- (double)alpha;
- (unsigned int)rgbHex;
- (id)LOT_colorByLuminanceMapping;
- (id)LOT_colorByMultiplyingByRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)LOT_colorByAddingRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)LOT_colorByLighteningToRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)LOT_colorByDarkeningToRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)LOT_colorByMultiplyingBy:(double)arg1;
- (id)LOT_colorByAdding:(double)arg1;
- (id)LOT_colorByLighteningTo:(double)arg1;
- (id)LOT_colorByDarkeningTo:(double)arg1;
- (id)LOT_colorByMultiplyingByColor:(id)arg1;
- (id)LOT_colorByAddingColor:(id)arg1;
- (id)LOT_colorByLighteningToColor:(id)arg1;
- (id)LOT_colorByDarkeningToColor:(id)arg1;
- (id)LOT_stringFromColor;
- (id)LOT_hexStringValue;
@end

