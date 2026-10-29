@interface WCFinderMinimizationMinTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSString * _taskBizName; // +0x8
    NSString * _taskBizKey; // +0x10
    MinimizeTaskData * _taskData; // +0x18
    id <MinimizeTransitionInterface> _transitionDelegate; // +0x20
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (CGRect)calculateNoScaleRectFromOriginRect:(CGRect)arg1 minimizeFrame:(CGRect)arg2;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (void).cxx_destruct;
@end

