@interface WCFinderMinimizationMaximizeTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSString * _taskBizName; // +0x8
    NSString * _taskBizKey; // +0x10
    MinimizeTaskData * _taskData; // +0x18
    id <MinimizeTransitionInterface> _transitionDelegate; // +0x20
    id <MinimizationMaximizeTransitionDelegate> _delegate; // +0x28
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

