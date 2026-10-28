@interface CGMathFunctions : NSObject
+ (CGSize)size:(CGSize)arg1 aspectFit:(CGSize)arg2;
+ (CGSize)size:(CGSize)arg1 aspectFill:(CGSize)arg2;
+ (CGRect)rect:(CGRect)arg1 aspectFit:(CGRect)arg2;
+ (CGRect)rect:(CGRect)arg1 aspectFill:(CGRect)arg2;
+ (CGAffineTransform)transformBySourceRect:(CGRect)arg1 aspectFitInRect:(CGRect)arg2;
+ (CGAffineTransform)transformBySourceRect:(CGRect)arg1 aspectFillInRect:(CGRect)arg2;
+ (CGAffineTransform)transformBySize:(CGSize)arg1 aspectFitInSize:(CGSize)arg2;
+ (CGAffineTransform)transformBySize:(CGSize)arg1 aspectFillInSize:(CGSize)arg2;
@end
