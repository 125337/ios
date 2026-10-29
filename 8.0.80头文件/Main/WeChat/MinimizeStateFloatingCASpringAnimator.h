@interface MinimizeStateFloatingCASpringAnimator : NSObject <MinimizeStateFloatingSpringAnimating>
{
    NSMutableDictionary * _animationDelegateByKey; // +0x8
}
+ (id)animationKeyForLayer:(id)arg1 keyPath:(id)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)animateLayer:(id)arg1 keyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 parameters:(struct)arg5 delay:(double)arg6 completion:(id /* block */)arg7;
- (void)cancelAllAnimations;
- (void)cancelAnimationForKey:(id)arg1;
- (void)animationDelegate:(id)arg1 didStopWithFinished:(BOOL)arg2;
- (id)animationDelegateByKey;
- (void)setAnimationDelegateByKey:(id)arg1;
- (void).cxx_destruct;
@end
