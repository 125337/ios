@interface TSMotionTracker : NSObject <TSMotionEventTracker>
{
    unsigned long long _numberOfMotionsKept; // +0x8
    NSOperationQueue * _workQueue; // +0x10
    CMMotionManager * _motionManager; // +0x18
    NSMutableArray * _accelerationItems; // +0x20
    NSMutableArray * _gyroItems; // +0x28
    NSMutableArray * _motionItems; // +0x30
    double _timeBeganTracking; // +0x38
    id /* block */ _eventHandler; // +0x40
}
+ (void)preflightTrack;
+ (void)postflightTrack;
- (id)initWithInterval:(double)arg1 trackEventHandler:(id /* block */)arg2;
- (void)dealloc;
- (BOOL)startAccelerationMonitoringWithEventHandler:(id /* block */)arg1;
- (void)stopAccelerationMonitoring;
- (BOOL)startGyroMonitoringWithEventHandler:(id /* block */)arg1;
- (void)stopGyroMonitoring;
- (BOOL)startMotionMonitoringWithEventHandler:(id /* block */)arg1;
- (void)stopMotionMonitoring;
- (unsigned long long)numberOfMotionsKept;
- (void)setNumberOfMotionsKept:(unsigned long long)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (id)motionManager;
- (void)setMotionManager:(id)arg1;
- (id)accelerationItems;
- (void)setAccelerationItems:(id)arg1;
- (id)gyroItems;
- (void)setGyroItems:(id)arg1;
- (id)motionItems;
- (void)setMotionItems:(id)arg1;
- (double)timeBeganTracking;
- (void)setTimeBeganTracking:(double)arg1;
- (id /* block */)eventHandler;
- (void)setEventHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
