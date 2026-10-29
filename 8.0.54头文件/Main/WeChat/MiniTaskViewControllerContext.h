@interface MiniTaskViewControllerContext : NSObject
{
    id <UIViewControllerInteractiveTransitioning> _pushInteractionController; // +0x8
    MiniTaskTransitionContext * _taskTransitionContext; // +0x10
    MiniTaskInteractionGuideTransitionContext * _guideTransitionContext; // +0x18
}
- (id)pushInteractionController;
- (void)setPushInteractionController:(id)arg1;
- (id)taskTransitionContext;
- (void)setTaskTransitionContext:(id)arg1;
- (id)guideTransitionContext;
- (void)setGuideTransitionContext:(id)arg1;
- (void).cxx_destruct;
@end

