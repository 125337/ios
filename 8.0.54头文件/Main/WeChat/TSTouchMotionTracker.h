@interface TSTouchMotionTracker : NSObject <TSTouchMotionEventTracker>
{
    BOOL _didBeingOnTouch; // +0x8
    double _maximumMotionDuration; // +0x10
    double _minimiusMotionDuration; // +0x18
    UIView * _attachedView; // +0x20
    TSTouchTrackRecognizer * _trackRecognizer; // +0x28
    TSMotionTracker * _motionTracker; // +0x30
    id /* block */ _eventHandler; // +0x38
}
- (id)initWithInterval:(double)arg1 view:(id)arg2 trackEventHandler:(id /* block */)arg3;
- (void)controlOnTouchDown:(id)arg1 withEvent:(id)arg2;
- (void)controlOnTouchUp:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (double)maximumMotionDuration;
- (void)setMaximumMotionDuration:(double)arg1;
- (double)minimiusMotionDuration;
- (void)setMinimiusMotionDuration:(double)arg1;
- (id)attachedView;
- (void)setAttachedView:(id)arg1;
- (id)trackRecognizer;
- (void)setTrackRecognizer:(id)arg1;
- (id)motionTracker;
- (void)setMotionTracker:(id)arg1;
- (BOOL)didBeingOnTouch;
- (void)setDidBeingOnTouch:(BOOL)arg1;
- (id /* block */)eventHandler;
- (void)setEventHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

