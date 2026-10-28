@interface MinimizationWinMinTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSString * _taskBizName; // +0x8
    NSString * _taskBizKey; // +0x10
    id <MinimizeTransitionInterface> _transitionDelegate; // +0x18
}
+ (void)performWinMinAnimationWithTaskName:(id)arg1 taskKey:(id)arg2 containerView:(id)arg3 fromView:(id)arg4 transitionDelegate:(id)arg5 completion:(id /* block */)arg6;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (void).cxx_destruct;
@end
