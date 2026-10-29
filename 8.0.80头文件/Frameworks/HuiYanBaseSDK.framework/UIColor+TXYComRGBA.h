@interface UIColor (TXYComRGBA)
+ (id)colorWithIntegerRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3;
+ (id)colorWithIntegerRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3 alpha:(double)arg4;
+ (id)txy_colorWithHexRGB:(unsigned long long)arg1;
+ (id)txy_colorWithHexRGBA:(unsigned long long)arg1;
+ (id)txy_colorWithHexARGB:(unsigned long long)arg1;
+ (id)txy_colorWithHexStringRGB:(id)arg1;
+ (id)txy_colorWithHex:(unsigned int)arg1;
- (id)txy_toHexRGB;
- (id)txy_toHexRGBA;
- (TXYRGBA)txy_toRGBA;
@end
