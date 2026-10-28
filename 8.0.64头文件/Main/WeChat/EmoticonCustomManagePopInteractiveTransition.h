@interface EmoticonCustomManagePopInteractiveTransition : NSObject
{
    id <EmoticonCustomManagePopInteractiveTransitionDelegate> _delegate; // +0x8
    UIPercentDrivenInteractiveTransition * _interactivePopTransition; // +0x10
}
- (BOOL)isInteracting;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)interactivePopTransition;
- (void)setInteractivePopTransition:(id)arg1;
- (void).cxx_destruct;
@end
