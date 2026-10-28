@interface MiniTaskPanGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    unsigned int _panGestureType; // +0x8
    UIPanGestureRecognizer * _panGesture; // +0x10
    id <MiniTaskPanGestureHandlerDelegate> _delegate; // +0x18
    UIViewController * _toVC; // +0x20
    double _resistanceParam; // +0x28
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0x30
}
- (id)initWithPanGestureType:(unsigned int)arg1;
- (void)internalInit;
- (BOOL)isInteracting;
- (id)interactiveTransition;
- (id)panGesture;
- (void)handlePanGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)progressFromPanGesture:(id)arg1;
- (BOOL)isSweepFastInVelocity:(CGPoint)arg1;
- (double)resistanceParam;
- (void)setPanGesture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)toVC;
- (void)setToVC:(id)arg1;
- (void)setResistanceParam:(double)arg1;
- (unsigned int)panGestureType;
- (void)setPanGestureType:(unsigned int)arg1;
- (void)setInteractiveTransition:(id)arg1;
- (void).cxx_destruct;
@end
