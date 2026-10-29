@interface InteractiveImplicitView : ImplicitView
{
    double _shakeDistanceBetween; // +0x8
    UITapGestureRecognizer * _tapGesture; // +0x10
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x18
    double _nextShakeCoordinate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateFrameWithBottomBoundaryY:(double)arg1;
- (void)onWillStartWithOrigin:(CGPoint *)arg1 bounds:(CGRect)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)tap;
- (void)setShakeDistanceBetween:(double)arg1;
- (void)shake;
- (double)shakeDistanceBetween;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)feedbackGenerator;
- (void)setFeedbackGenerator:(id)arg1;
- (double)nextShakeCoordinate;
- (void)setNextShakeCoordinate:(double)arg1;
- (void).cxx_destruct;
@end

