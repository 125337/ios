@interface WCStoryDismissInteractiveTransition : NSObject
{
    UIPercentDrivenInteractiveTransition * m_interactivePopTransition; // +0x8
    id <WCStoryDismissInteractiveTransitionDelegate> _delegate; // +0x10
}
- (BOOL)isInteracting;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (void)handleDragDownInteractivePopGesture:(id)arg1;
- (void)handlePopGesWithState:(long long)arg1 progress:(double)arg2 isSweepFastBlock:(id /* block */)arg3;
- (id)interactivePopTransition;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

