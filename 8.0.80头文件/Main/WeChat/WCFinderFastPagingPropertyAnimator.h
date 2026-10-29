@interface WCFinderFastPagingPropertyAnimator : NSObject <WCFinderFastPagingAnimationProtocol>
{
    BOOL _isRunning; // +0x8
    UIViewPropertyAnimator * _animator; // +0x10
    id /* block */ _completionBlock; // +0x18
    id /* block */ _animationProgressBlock; // +0x20
    double _fromValue; // +0x28
    double _toValue; // +0x30
}
- (void)animateFromValue:(double)arg1 toValue:(double)arg2 duration:(double)arg3 animationBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)stopAnimation;
- (BOOL)isAnimating;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)animationProgressBlock;
- (void)setAnimationProgressBlock:(id /* block */)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (double)fromValue;
- (void)setFromValue:(double)arg1;
- (double)toValue;
- (void)setToValue:(double)arg1;
- (void).cxx_destruct;
@end
