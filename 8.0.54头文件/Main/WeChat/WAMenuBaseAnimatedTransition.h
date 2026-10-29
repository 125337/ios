@interface WAMenuBaseAnimatedTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    id <WAMenuAnimatedTransitionProtocol> _transitionDelegate; // +0x8
    long long _operationType; // +0x10
}
- (double)transitionDuration:(id)arg1;
- (void)innerTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (long long)operationType;
- (void)setOperationType:(long long)arg1;
- (void).cxx_destruct;
@end

