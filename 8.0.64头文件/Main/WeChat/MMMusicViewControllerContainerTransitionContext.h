@interface MMMusicViewControllerContainerTransitionContext : NSObject <UIViewControllerContextTransitioning>
{
    BOOL _animated; // +0x8
    BOOL _interactive; // +0x9
    id /* block */ _completionBlock; // +0x10
    NSDictionary * _viewControllers; // +0x18
    UIView * _containerView; // +0x20
    long long _presentationStyle; // +0x28
    CGAffineTransform _targetTransform; // +0x30
}
- (id)initWithFromVC:(id)arg1 toVC:(id)arg2;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;
- (void)completeTransition:(BOOL)arg1;
- (CGRect)initialFrameForViewController:(id)arg1;
- (CGRect)finalFrameForViewController:(id)arg1;
- (BOOL)transitionWasCancelled;
- (void)updateInteractiveTransition:(double)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)pauseInteractiveTransition;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (BOOL)isAnimated;
- (void)setAnimated:(BOOL)arg1;
- (BOOL)isInteractive;
- (void)setInteractive:(BOOL)arg1;
- (id)viewControllers;
- (void)setViewControllers:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (long long)presentationStyle;
- (void)setPresentationStyle:(long long)arg1;
- (CGAffineTransform)targetTransform;
- (void)setTargetTransform:(CGAffineTransform)arg1;
- (void).cxx_destruct;
@end
