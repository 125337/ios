@interface VoIPOrientationService : MMUserService <MMServiceProtocol>
{
    BOOL _isSystemLockActived; // +0x8
    double _deviceAngleDegree; // +0x10
    long long _deviceOrientation; // +0x18
    long long _motionOrientation; // +0x20
    CMMotionManager * _motion; // +0x28
}
+ (int)flagWithOrientation:(long long)arg1 isFrontCamera:(BOOL)arg2;
+ (BOOL)isEnable;
+ (BOOL)shouldUpdateDeviceAngleDegree;
+ (BOOL)isEnableWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2;
+ (BOOL)shouldShowSystemLockToastWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2;
+ (BOOL)isMiniInAppViewEnableWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2;
+ (long long)realtimeDeviceOrientation;
+ (long long)interfaceOrientation;
- (void)updateDeviceAngleDegree:(double)arg1;
- (void)updateDeviceOrientation:(long long)arg1;
- (BOOL)isMotionActived;
- (void)open;
- (void)close;
- (id)init;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)didChangeRotation:(id)arg1;
- (double)deviceAngleDegree;
- (void)setDeviceAngleDegree:(double)arg1;
- (long long)deviceOrientation;
- (void)setDeviceOrientation:(long long)arg1;
- (long long)motionOrientation;
- (void)setMotionOrientation:(long long)arg1;
- (BOOL)isSystemLockActived;
- (void)setIsSystemLockActived:(BOOL)arg1;
- (id)motion;
- (void)setMotion:(id)arg1;
- (void).cxx_destruct;
@end
