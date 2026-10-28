@interface NSString (MMUIKit)
- (CGSize)mm_fastSizeWithFont:(id)arg1;
- (CGSize)mm_fastSizeWithAttributes:(id)arg1;
- (BOOL)mm_fastIsValidAttrbutes:(id)arg1;
- (BOOL)mm_checkBoundingSize:(CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (CGRect)mm_fastBoundingRectWithSize:(CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
@end
