@interface MinimizeStateFloatingSpringAnimationDelegate : NSObject <CAAnimationDelegate>
{
    CALayer * _layer; // +0x8
    MinimizeStateFloatingCASpringAnimator * _animator; // +0x10
    NSString * _animationKey; // +0x18
    NSString * _keyPath; // +0x20
    id /* block */ _completion; // +0x28
}
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)animationKey;
- (void)setAnimationKey:(id)arg1;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
