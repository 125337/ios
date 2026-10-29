@interface TencentLBSSensorManager : NSObject <CLLocationManagerDelegate>
{
    BOOL _hasMotionData; // +0x8
    BOOL _isMagUseful; // +0x9
    BOOL _isStart; // +0xa
    CMMotionManager * _manager; // +0x10
    CLLocationManager * _locmanager; // +0x18
    NSOperationQueue * _queue; // +0x20
    unsigned long long _maxSize; // +0x28
    double _motionTime; // +0x30
    CMPedometer * _pedometer; // +0x38
    NSNumber * _lastSteps; // +0x40
    id /* block */ _headingBlock; // +0x48
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setSensorUpdateInterval:(double)arg1;
- (void)startUpdatingAccelerationWithBlock:(id /* block */)arg1;
- (void)startUpdatingGryWithBlock:(id /* block */)arg1;
- (void)startUpdatingMagnetometerWithBlock:(id /* block */)arg1;
- (void)startUpdatingDeviceMotionWithBlock:(id /* block */)arg1;
- (void)startPedometerSinceNowWithHandler:(id /* block */)arg1;
- (void)startUpdatingHeadWithBlock:(id /* block */)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)stopHeadingUpdate;
- (void)stopPedometer;
- (void)stopUpdatingAcceleration;
- (void)stopUpdatingGry;
- (void)stopUpdatingMagnetometer;
- (void)stopUpdatingDeviceMotion;
- (BOOL)hasMotionData;
- (void)setHasMotionData:(BOOL)arg1;
- (BOOL)isMagUseful;
- (void)setIsMagUseful:(BOOL)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (id)locmanager;
- (void)setLocmanager:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (unsigned long long)maxSize;
- (void)setMaxSize:(unsigned long long)arg1;
- (double)motionTime;
- (void)setMotionTime:(double)arg1;
- (id)pedometer;
- (void)setPedometer:(id)arg1;
- (id)lastSteps;
- (void)setLastSteps:(id)arg1;
- (id /* block */)headingBlock;
- (void)setHeadingBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

