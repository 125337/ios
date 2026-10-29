@interface NSString (Size)
+ (double)baselineWithFont:(id)arg1 height:(double)arg2;
- (CGSize)stringSizeWithFont:(id)arg1;
- (CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2;
- (CGSize)stringSizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 lineBreakMode:(long long)arg3;
- (CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(double)arg4;
- (CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(double)arg4 alignment:(long long)arg5;
- (CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 paragraphStyle:(id)arg3 attributes:(id)arg4;
- (id)prefixWithFont:(id)arg1 inWidth:(double)arg2;
- (id)actualFont:(id)arg1 forWidth:(double)arg2;
- (double)fontSizeFittingWidth:(double)arg1 maxLineNumber:(long long)arg2 lineBreakMode:(long long)arg3 defaultFontSize:(double)arg4 minFontSize:(double)arg5;
- (double)fontSizeFittingWidth:(double)arg1 maxHeight:(double)arg2 lineBreakMode:(long long)arg3 defaultFontSize:(double)arg4 minFontSize:(double)arg5;
- (double)fontSizeFittingWidth:(double)arg1 maxLineNumber:(long long)arg2 maxHeight:(double)arg3 lineBreakMode:(long long)arg4 defaultFontSize:(double)arg5 minFontSize:(double)arg6;
- (double)fontSizeFittingWidth:(double)arg1 maxLineNumber:(long long)arg2 maxHeight:(double)arg3 paragraphStyle:(id)arg4 attributes:(id)arg5 defaultFontSize:(double)arg6 minFontSize:(double)arg7;
@end
