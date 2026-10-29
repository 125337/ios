@interface AnimationHelper : NSObject
+ (id)animationRockRotateBy:(float)arg1 andDuration:(float)arg2;
+ (id)animationRockScaleBy:(float)arg1 andDuration:(float)arg2;
+ (id)animationRockAlphaBy:(float)arg1 andDuration:(float)arg2;
+ (id)animationRotateBy:(float)arg1 andDuration:(float)arg2;
+ (id)animationScaleXFrom:(float)arg1 To:(float)arg2 byDuration:(float)arg3;
+ (id)animationScaleYFrom:(float)arg1 To:(float)arg2 byDuration:(float)arg3;
+ (id)animationScaleFrom:(float)arg1 To:(float)arg2 byDuration:(float)arg3;
+ (id)animationAlphaFrom:(float)arg1 To:(float)arg2 byDuration:(float)arg3;
+ (id)animationPositionFrom:(CGPoint)arg1 To:(CGPoint)arg2 byDuration:(float)arg3;
+ (id)animationBoundsFrom:(CGRect)arg1 To:(CGRect)arg2 byDuration:(float)arg3;
+ (id)animationPathFrom:(CGPoint)arg1 To:(CGPoint)arg2 byDuration:(float)arg3;
+ (CGAffineTransform)animationRotateTransformForOrientaion:(long long)arg1;
@end

