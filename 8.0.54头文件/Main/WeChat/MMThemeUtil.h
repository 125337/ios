@interface MMThemeUtil : NSObject
+ (BOOL)parseBOOLFromValues:(id)arg1;
+ (id)parseFontFromValues:(id)arg1;
+ (long long)parseIntegerFromValues:(id)arg1;
+ (double)parseFontSizeFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1 maxWidth:(double)arg2;
+ (double)parseFloatFromValues:(id)arg1 needCeil:(BOOL)arg2 inSubScene:(BOOL)arg3;
+ (double)parseFloatFromValues:(id)arg1 needCeil:(BOOL)arg2 maxWidth:(double)arg3 inSubScene:(BOOL)arg4;
+ (CGPoint)parsePointFromValues:(id)arg1;
+ (CGSize)parseSizeFromValues:(id)arg1;
+ (id)parseStrechedImageFromValues:(id)arg1;
+ (id)parseStringFromValues:(id)arg1;
+ (CGRect)parseRectFromValues:(id)arg1;
+ (UIEdgeInsets)parseEdgeInsetsFromValues:(id)arg1;
+ (id)parseColorFromValues:(id)arg1;
+ (id)parseOneColor:(id)arg1 fromDeclarations:(id)arg2 intoValues:(id)arg3;
+ (void)parseColorDeclarations:(id)arg1 toValues:(id)arg2;
@end

