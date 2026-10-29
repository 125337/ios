@interface UIView (AnimateCurve)
+ (void)animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)animateWithToken:(long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
@end
