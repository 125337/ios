@interface WCAdInteractionDeviceMotionView : WCAdInteractionContentView
{
    BOOL _shouldResumeTimer; // +0x68
    CMDeviceMotion * _oriMotion; // +0x70
    CADisplayLink * _displayTimer; // +0x78
}
- (void)dealloc;
- (void)addNotificationObservers;
- (void)onViewWillResignActive:(id)arg1;
- (void)onViewDidBecomeActive:(id)arg1;
- (BOOL)activeContentViews;
- (BOOL)suspendContentViews;
- (BOOL)terminateContentViews;
- (void)deactivateItems;
- (void)activeDeviceMotion;
- (void)deactivateDeviceMotion;
- (void)activeTimer;
- (void)deactivateTimer;
- (void)timerUpdateOrientation:(id)arg1;
- (void)updateOrientation;
- (void)updateOrientationWithCurMotion:(id)arg1 oriMotion:(id)arg2;
- (double)fetchAngleInDegreesFromOriAngle:(float)arg1 oriAxis:(_GLKVector3)arg2 orientationType:(unsigned long long)arg3;
- (id)oriMotion;
- (void)setOriMotion:(id)arg1;
- (id)displayTimer;
- (void)setDisplayTimer:(id)arg1;
- (BOOL)shouldResumeTimer;
- (void)setShouldResumeTimer:(BOOL)arg1;
- (void).cxx_destruct;
@end

