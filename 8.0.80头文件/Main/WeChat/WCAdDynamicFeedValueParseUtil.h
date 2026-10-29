@interface WCAdDynamicFeedValueParseUtil : NSObject
+ (void)parseLengthValueForOriString:(id)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
+ (BOOL)shouldLazyCalculateAdjustedValueForOriString:(id)arg1;
+ (double)calcLengthValueForRemValue:(id)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
+ (double)calcLengthValueForPxValue:(id)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
+ (void)parseColorValueForOriString:(id)arg1;
@end
