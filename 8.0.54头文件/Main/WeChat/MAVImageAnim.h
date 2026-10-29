@interface MAVImageAnim : NSObject
+ (long long)getAnimationType:(CGSize)arg1;
+ (long long)getAnimationTypeWithWidth:(double)arg1 height:(double)arg2;
+ (void)applyAnimation:(id)arg1 targetWidth:(int)arg2 targetHeight:(int)arg3 animateType:(long long)arg4;
@end

