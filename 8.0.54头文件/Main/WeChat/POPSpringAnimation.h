@interface POPSpringAnimation : POPPropertyAnimation
+ (void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double *)arg3 friction:(double *)arg4 mass:(double *)arg5;
+ (void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double *)arg3 speed:(double *)arg4;
+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)_initState;
- (id)init;
- (void)dealloc;
- (id)velocity;
- (void)setVelocity:(id)arg1;
- (double)dynamicsTension;
- (void)setDynamicsTension:(double)arg1;
- (double)dynamicsFriction;
- (void)setDynamicsFriction:(double)arg1;
- (double)dynamicsMass;
- (void)setDynamicsMass:(double)arg1;
- (double)springSpeed;
- (void)setSpringSpeed:(double)arg1;
- (double)springBounciness;
- (void)setSpringBounciness:(double)arg1;
- (void *)solver;
- (void)setSolver:(void *)arg1;
- (void)_updatedDynamicsTension;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsMass;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
@end

