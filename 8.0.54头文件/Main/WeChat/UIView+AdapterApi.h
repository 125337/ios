@interface UIView (AdapterApi)
+ (void)universalBeginAnimations:(id)arg1 context:(void *)arg2;
+ (void)universalCommitAnimations;
+ (void)universalSetAnimationDelegate:(id)arg1;
+ (void)universalSetAnimationWillStartSelector:(SEL)arg1;
+ (void)universalSetAnimationDidStopSelector:(SEL)arg1;
+ (void)universalSetAnimationDuration:(double)arg1;
+ (void)universalSetAnimationDelay:(double)arg1;
+ (void)universalSetAnimationStartDate:(id)arg1;
+ (void)universalSetAnimationCurve:(long long)arg1;
+ (void)universalSetAnimationRepeatCount:(float)arg1;
+ (void)universalSetAnimationRepeatAutoreverses:(BOOL)arg1;
+ (void)universalSetAnimationBeginsFromCurrentState:(BOOL)arg1;
+ (void)universalSetAnimationTransition:(long long)arg1 forView:(id)arg2 cache:(BOOL)arg3;
@end

