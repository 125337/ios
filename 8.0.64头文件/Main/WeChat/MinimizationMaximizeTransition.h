@interface MinimizationMaximizeTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSString * _taskBizName; // +0x8
    NSString * _taskBizKey; // +0x10
    id <MinimizeTransitionInterface> _transitionDelegate; // +0x18
    id <MinimizationMaximizeTransitionDelegate> _delegate; // +0x20
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
