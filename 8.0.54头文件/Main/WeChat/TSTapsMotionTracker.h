@interface TSTapsMotionTracker : NSObject <TSTouchMotionEventTracker>
{
    double _motionMonitoringDuration; // +0x8
    double _motionMonitoryingDelay; // +0x10
    UIView * _attachedView; // +0x18
    TSTouchTrackRecognizer * _trackRecognizer; // +0x20
    TSMotionTracker * _motionTracker; // +0x28
    NSObject<OS_dispatch_source> * _motionTrackerTimer; // +0x30
    id /* block */ _eventHandler; // +0x38
    double _intervalForMotionTracker; // +0x40
    NSMutableArray * _touches; // +0x48
}
- (id)initWithInterval:(double)arg1 view:(id)arg2 trackEventHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)startMonitoringMotions;
- (void)scheduleMonitoringMotionsOnPress;
- (void)stopMonitoringMotions;
- (void)scheduleDelayedStoppingMonitoring;
- (void)fireMotionMonitoringWithTouch:(id)arg1;
- (double)motionMonitoringDuration;
- (void)setMotionMonitoringDuration:(double)arg1;
- (double)motionMonitoryingDelay;
- (void)setMotionMonitoryingDelay:(double)arg1;
- (id)attachedView;
- (void)setAttachedView:(id)arg1;
- (id)trackRecognizer;
- (void)setTrackRecognizer:(id)arg1;
- (id)motionTracker;
- (void)setMotionTracker:(id)arg1;
- (id)motionTrackerTimer;
- (void)setMotionTrackerTimer:(id)arg1;
- (id /* block */)eventHandler;
- (void)setEventHandler:(id /* block */)arg1;
- (double)intervalForMotionTracker;
- (void)setIntervalForMotionTracker:(double)arg1;
- (id)touches;
- (void)setTouches:(id)arg1;
- (void).cxx_destruct;
@end

