@interface MiniTaskNavEdgeGestureHandler : NSObject <UIGestureRecognizerDelegate, MiniTaskNavEdgeInteractiveTransitionDelegate, MiniTaskEdgeGestureHandlerInterface>
{
    BOOL _shouldAutoComplete; // +0x8
    BOOL _disableInteractiveAnimation; // +0x9
    unsigned int _edgeGestureType; // +0xc
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x10
    id <MiniTaskEdgeGestureHandlerDelegate> _delegate; // +0x18
    UIViewController * _toVC; // +0x20
    MiniTaskTransitionContext * _transitionContext; // +0x28
    MiniTaskNavEdgeInteractiveTransition * _interactiveTransition; // +0x30
    CGPoint _gestureStartPoint; // +0x38
}
- (id)initWithEdgeGestureType:(unsigned int)arg1;
- (void)initEdgeGestureWithEdgeGestureType:(unsigned int)arg1;
- (BOOL)isInteracting;
- (id)interactiveTransition;
- (id)screenEdgeGesture;
- (void)initInteractiveTransition;
- (void)handlerScreenEdgeGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onMiniTaskNavInteractiveTransitionDidFinish;
- (void)onMiniTaskNavInteractiveTransitionDidCancel;
- (double)progressFromCurGesturer:(id)arg1;
- (BOOL)isSweepFastInVelocity:(CGPoint)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)toVC;
- (void)setToVC:(id)arg1;
- (BOOL)shouldAutoComplete;
- (void)setShouldAutoComplete:(BOOL)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (BOOL)disableInteractiveAnimation;
- (void)setDisableInteractiveAnimation:(BOOL)arg1;
- (unsigned int)edgeGestureType;
- (void)setEdgeGestureType:(unsigned int)arg1;
- (void)setInteractiveTransition:(id)arg1;
- (CGPoint)gestureStartPoint;
- (void)setGestureStartPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
