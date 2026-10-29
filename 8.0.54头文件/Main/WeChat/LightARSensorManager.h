@interface LightARSensorManager : NSObject
{
    BOOL _isStarted; // +0x8
    id /* block */ _motionHandler; // +0x10
    id /* block */ _gyroHandler; // +0x18
    id /* block */ _accHandler; // +0x20
    double _deviceMotionUpdateInterval; // +0x28
    double _gyroUpdateInterval; // +0x30
    CMMotionManager * _motionManager; // +0x38
    NSOperationQueue * _motionUpdateQueue; // +0x40
    NSOperationQueue * _gyroUpdateQueue; // +0x48
    NSOperationQueue * _accUpdateQueue; // +0x50
}
- (id)init;
- (void)start;
- (void)stop;
- (id /* block */)motionHandler;
- (void)setMotionHandler:(id /* block */)arg1;
- (id /* block */)gyroHandler;
- (void)setGyroHandler:(id /* block */)arg1;
- (id /* block */)accHandler;
- (void)setAccHandler:(id /* block */)arg1;
- (double)deviceMotionUpdateInterval;
- (void)setDeviceMotionUpdateInterval:(double)arg1;
- (double)gyroUpdateInterval;
- (void)setGyroUpdateInterval:(double)arg1;
- (id)motionManager;
- (void)setMotionManager:(id)arg1;
- (id)motionUpdateQueue;
- (void)setMotionUpdateQueue:(id)arg1;
- (id)gyroUpdateQueue;
- (void)setGyroUpdateQueue:(id)arg1;
- (id)accUpdateQueue;
- (void)setAccUpdateQueue:(id)arg1;
- (BOOL)isStarted;
- (void)setIsStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end

