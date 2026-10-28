@interface MMUIHalfScreenViewDismissInteractiveTransition : NSObject
{
    UIPercentDrivenInteractiveTransition * m_interactivePopTransition; // +0x8
    double _interactivePopProgress; // +0x10
    id <MMUIHalfScreenViewDismissInteractiveTransitionDelegate> _delegate; // +0x18
}
- (BOOL)isInteracting;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (void)handlePopGesWithState:(long long)arg1 progress:(double)arg2 isSweepFastBlock:(id /* block */)arg3;
- (id)interactivePopTransition;
- (double)interactivePopProgress;
- (void)setInteractivePopProgress:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
