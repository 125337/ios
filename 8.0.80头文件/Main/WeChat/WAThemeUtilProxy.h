@interface WAThemeUtilProxy : NSObject <IWAThemeUtilService>
+ (id)parseColorFromValues:(id)arg1;
+ (id)parseStrechedImageFromValues:(id)arg1;
+ (CGPoint)parsePointFromValues:(id)arg1;
+ (CGSize)parseSizeFromValues:(id)arg1;
+ (CGRect)parseRectFromValues:(id)arg1;
+ (UIEdgeInsets)parseEdgeInsetsFromValues:(id)arg1;
+ (BOOL)parseBOOLFromValues:(id)arg1;
+ (long long)parseIntegerFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1;
+ (id)parseStringFromValues:(id)arg1;
+ (double)parseFontSizeFromValues:(id)arg1;
+ (id)parseFontFromValues:(id)arg1;
+ (void)parseColorDeclarations:(id)arg1 toValues:(id)arg2;
@end
