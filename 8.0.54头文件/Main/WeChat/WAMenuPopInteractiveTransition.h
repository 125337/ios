@interface WAMenuPopInteractiveTransition : NSObject <UIGestureRecognizerDelegate>
{
    UIPercentDrivenInteractiveTransition * _interactivePopTransition; // +0x8
    BOOL _shouldForceCancel; // +0x10
    BOOL _isLeftEdge; // +0x11
    BOOL _shouldAutoComplete; // +0x12
    id <WAPopInteractiveTransitionDelegate> _delegate; // +0x18
    NSString * _debugInfo; // +0x20
    UIGestureRecognizer * _gesture; // +0x28
}
- (id)interactivePopTransition;
- (BOOL)isInteracting;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldForceCancel;
- (void)setShouldForceCancel:(BOOL)arg1;
- (BOOL)isLeftEdge;
- (void)setIsLeftEdge:(BOOL)arg1;
- (BOOL)shouldAutoComplete;
- (void)setShouldAutoComplete:(BOOL)arg1;
- (id)debugInfo;
- (void)setDebugInfo:(id)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (void).cxx_destruct;
@end

