@interface FTSHijackLongPressGestureRecognizer : UIGestureRecognizer
{
    NSObject<OS_dispatch_source> * _timer; // +0x8
    BOOL _timerFired; // +0x10
    double _lastChangedLogTime; // +0x18
    BOOL _hijackEnabled; // +0x20
    double _minimumPressDuration; // +0x28
    UIView * _coordinateReferenceView; // +0x30
    CGRect _hotRegion; // +0x38
}
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)startTimer;
- (void)timerFired;
- (void)cancelTimer;
- (double)minimumPressDuration;
- (void)setMinimumPressDuration:(double)arg1;
- (CGRect)hotRegion;
- (void)setHotRegion:(CGRect)arg1;
- (BOOL)hijackEnabled;
- (void)setHijackEnabled:(BOOL)arg1;
- (id)coordinateReferenceView;
- (void)setCoordinateReferenceView:(id)arg1;
- (void).cxx_destruct;
@end
