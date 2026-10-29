@interface WCSplitPropertyAnimator : UIViewPropertyAnimator
{
    id /* block */ _animation; // +0x8
    id /* block */ _complete; // +0x10
}
- (void)startWithoutAnimation;
- (void)startAnimation;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id /* block */)animation;
- (void)setAnimation:(id /* block */)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end

