@interface WCFinderFittingSizeTool : NSObject
+ (CGPoint)size:(CGSize)arg1 div:(CGSize)arg2 replaceNan:(CGPoint)arg3 replaceZero:(CGPoint)arg4;
+ (CGSize)cutSize:(CGSize)arg1 putInSize:(CGSize)arg2;
+ (CGSize)scaleSize:(CGSize)arg1 parcelSize:(CGSize)arg2;
+ (CGSize)stretchSize:(CGSize)arg1 parcelSize:(CGSize)arg2;
+ (CGSize)shrink:(CGSize)arg1 parcelSize:(CGSize)arg2;
+ (CGSize)fitMinimizeFloatingSize:(CGSize)arg1;
+ (CGSize)sizeThatFit:(id)arg1 size:(CGSize)arg2;
+ (BOOL)_isViewUsingAutoLayout:(id)arg1;
@end
