@interface QMUAnnotationAnimator : NSObject
+ (void)translateWithAnnotationView:(id)arg1 locations:(id)arg2 duration:(double)arg3 rotateEnabled:(BOOL)arg4;
+ (void)translateWithAnnotationView:(id)arg1 rotationView:(id)arg2 locations:(id)arg3 duration:(double)arg4 rotateEnabled:(BOOL)arg5 distanceFilter:(double)arg6 translationCallback:(id /* block */)arg7;
+ (void)setTranslation:(id)arg1 withPoint:(int)arg2 andRatio:(float)arg3;
+ (void)setAnimation:(id)arg1 withLeftTime:(double)arg2;
+ (void)setTranslation:(id)arg1 withPoint:(int)arg2 andRatio:(float)arg3 andLeftTime:(double)arg4;
@end

