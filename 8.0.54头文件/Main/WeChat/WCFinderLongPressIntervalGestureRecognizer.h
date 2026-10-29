@interface WCFinderLongPressIntervalGestureRecognizer : UILongPressGestureRecognizer
{
    id <WCFinderLongPressIntervalGestureRecognizerDelegate> _m_delegate; // +0x8
    MMTimer * _timer; // +0x10
    double _timeInterval; // +0x18
}
- (id)initWithInterval:(double)arg1;
- (void)dealloc;
- (void)onLongPressAction:(id)arg1;
- (void)triggerIntervalTimerAction;
- (BOOL)gestureIsOver;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (void).cxx_destruct;
@end

