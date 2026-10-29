@interface MMFinderLiveEnterSqaurePanGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _isInteracting; // +0x8
    BOOL _isAnimating; // +0x9
    BOOL _forbidTransition; // +0xa
    id <MMFinderLiveEnterSqaurePanGestureHandlerDelegate> _delegate; // +0x10
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0x18
    UIPanGestureRecognizer * _panGesutre; // +0x20
    CGPoint _gestureStartPoint; // +0x28
}
- (id)init;
- (void)setup;
- (void)onHandleGesture:(id)arg1;
- (void)setupGestureHandlerTarget:(id)arg1;
- (void)startGestureRecognizer;
- (void)updateGestureRecognizer:(double)arg1;
- (void)finishGestureRecognizer:(double)arg1 completeProgress:(double)arg2;
- (void)finishGestureRecognizer:(double)arg1;
- (BOOL)isInteracting;
- (id)interactiveTransition;
- (double)progressFromCurGesturer:(id)arg1;
- (double)progressFromPanGesture:(id)arg1 startY:(double)arg2;
- (void)animationEnd:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setInteractiveTransition:(id)arg1;
- (void)setIsInteracting:(BOOL)arg1;
- (id)panGesutre;
- (void)setPanGesutre:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)forbidTransition;
- (void)setForbidTransition:(BOOL)arg1;
- (CGPoint)gestureStartPoint;
- (void)setGestureStartPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end

