@interface POPBasicAnimation : POPPropertyAnimation
+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)linearAnimation;
+ (id)easeInAnimation;
+ (id)easeOutAnimation;
+ (id)easeInEaseOutAnimation;
+ (id)defaultAnimation;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)_initState;
- (id)init;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)timingFunction;
- (void)setTimingFunction:(id)arg1;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
@end
