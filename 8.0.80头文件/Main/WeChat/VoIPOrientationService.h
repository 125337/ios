@interface VoIPOrientationService : MMUserService <MMServiceProtocol>
{
    BOOL _isSystemLockActived; // +0x8
    long long _interfaceOrientation; // +0x10
    double _deviceAngleDegree; // +0x18
    long long _deviceOrientation; // +0x20
    long long _motionOrientation; // +0x28
    CMMotionManager * _motion; // +0x30
}
+ (int)flagWithOrientation:(long long)arg1 isFrontCamera:(BOOL)arg2;
+ (BOOL)isEnable;
+ (BOOL)shouldUpdateDeviceAngleDegree;
+ (BOOL)isEnableWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2 remoteSupportAdaptiveRotate:(BOOL)arg3;
+ (BOOL)shouldShowSystemLockToastWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2 remoteSupportAdaptiveRotate:(BOOL)arg3;
+ (BOOL)isMiniInAppViewEnableWithRemoteClientVersion:(unsigned int)arg1 remoteDevice:(id)arg2 remoteSupportAdaptiveRotate:(BOOL)arg3;
+ (long long)realtimeDeviceOrientation;
+ (long long)orientationWithGravity:(struct)arg1;
- (void)updateDeviceAngleDegree:(double)arg1;
- (void)updateDeviceOrientation:(long long)arg1;
- (void)updateInterfaceOrientation;
- (BOOL)isMotionActived;
- (void)open;
- (void)close;
- (double)interfaceOrientationCompensationAngleDegree;
- (double)uiRotationDegreeRelativeToRealUserOrientation;
- (BOOL)isUIQuarterTurnRelativeToRealUserOrientation;
- (BOOL)isDeviceOrientationLandscape;
- (id)init;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)didChangeRotation:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (long long)interfaceOrientation;
- (void)setInterfaceOrientation:(long long)arg1;
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
