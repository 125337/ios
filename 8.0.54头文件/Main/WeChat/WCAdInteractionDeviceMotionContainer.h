@interface WCAdInteractionDeviceMotionContainer : NSObject
{
    BOOL _shouldResumeTimer; // +0x8
    BOOL _isTerminated; // +0x9
    id <WCAdInteractionDeviceMotionContainerDelegate> _delegate; // +0x10
    unsigned long long _monitorType; // +0x18
    CMDeviceMotion * _oriMotion; // +0x20
    CADisplayLink * _displayTimer; // +0x28
}
- (id)initWithMonitorType:(unsigned long long)arg1;
- (void)dealloc;
- (void)addNotificationObservers;
- (void)onViewWillResignActive:(id)arg1;
- (void)onViewDidBecomeActive:(id)arg1;
- (void)activateContainer;
- (void)suspendContainer;
- (void)terminateContainer;
- (BOOL)isContainerActive;
- (BOOL)isContainerTerminated;
- (BOOL)isContainerRunning;
- (void)resetContainer;
- (void)activateDeviceMotion;
- (void)deactivateDeviceMotion;
- (void)activateTimer;
- (void)deactivateTimer;
- (void)timerUpdateOrientation:(id)arg1;
- (void)updateOrientation;
- (void)updateOrientationWithCurMotion:(id)arg1 oriMotion:(id)arg2;
- (double)fetchAngleInDegreesFromOriAngle:(float)arg1 oriAxis:(_GLKVector3)arg2 orientationType:(unsigned long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)monitorType;
- (void)setMonitorType:(unsigned long long)arg1;
- (id)oriMotion;
- (void)setOriMotion:(id)arg1;
- (id)displayTimer;
- (void)setDisplayTimer:(id)arg1;
- (BOOL)shouldResumeTimer;
- (void)setShouldResumeTimer:(BOOL)arg1;
- (BOOL)isTerminated;
- (void)setIsTerminated:(BOOL)arg1;
- (void).cxx_destruct;
@end

