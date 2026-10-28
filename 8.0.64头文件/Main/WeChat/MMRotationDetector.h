@interface MMRotationDetector : NSObject
{
    BOOL _shouldDisableAccelerationDetectLog; // +0x8
    long long _orientation; // +0x10
    double _dividingWhenPortraitOrientation; // +0x18
    double _dividingWhenLandscapeOrientation; // +0x20
    CMAccelerometerData * _accelerometerData; // +0x28
    CMMotionManager * _motionMgr; // +0x30
}
+ (id)sharedDetector;
- (id)init;
- (void)resetOptions;
- (void)beginRotationDetection;
- (void)endRotationDetection;
- (long long)orientationFromAccelerometerData:(struct)arg1;
- (long long)safeGetCurrentDeviceOrientation;
- (BOOL)shouldDisableAccelerationDetectLog;
- (void)setShouldDisableAccelerationDetectLog:(BOOL)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (double)dividingWhenPortraitOrientation;
- (void)setDividingWhenPortraitOrientation:(double)arg1;
- (double)dividingWhenLandscapeOrientation;
- (void)setDividingWhenLandscapeOrientation:(double)arg1;
- (id)accelerometerData;
- (void)setAccelerometerData:(id)arg1;
- (id)motionMgr;
- (void)setMotionMgr:(id)arg1;
- (void).cxx_destruct;
@end
