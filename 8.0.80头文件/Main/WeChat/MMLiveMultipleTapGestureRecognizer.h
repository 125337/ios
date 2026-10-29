@interface MMLiveMultipleTapGestureRecognizer : UIGestureRecognizer
{
    BOOL _recordingTouch; // +0x8
    unsigned long long _maxClickCount; // +0x10
    double _clickTimeoutInterval; // +0x18
    double _clickCountResetTimeoutInterval; // +0x20
    unsigned long long _clickCount; // +0x28
    NSMutableDictionary * _touchInitialLocations; // +0x30
    CGPoint _lastTouchLocationInView; // +0x38
}
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tryFinishRecognize;
- (void)cancelFinishRecognize;
- (void)innerFinishRecognize;
- (void)resetClickCount;
- (unsigned long long)maxClickCount;
- (void)setMaxClickCount:(unsigned long long)arg1;
- (double)clickTimeoutInterval;
- (void)setClickTimeoutInterval:(double)arg1;
- (double)clickCountResetTimeoutInterval;
- (void)setClickCountResetTimeoutInterval:(double)arg1;
- (unsigned long long)clickCount;
- (void)setClickCount:(unsigned long long)arg1;
- (CGPoint)lastTouchLocationInView;
- (void)setLastTouchLocationInView:(CGPoint)arg1;
- (BOOL)recordingTouch;
- (void)setRecordingTouch:(BOOL)arg1;
- (id)touchInitialLocations;
- (void)setTouchInitialLocations:(id)arg1;
- (void).cxx_destruct;
@end
