@interface CameraStableDetector : MMObject
{
    BOOL _enableMotionDetector; // +0x8
    BOOL _enableRotationDetector; // +0x9
    BOOL _debouncedStableState; // +0xa
    double _motionThreshold; // +0x10
    double _rotationThreshold; // +0x18
    unsigned long long _debounceDurationMs; // +0x20
    id <CameraStableDetectorDebugDelegate> _debugDelegate; // +0x28
    CMMotionManager * _motionManager; // +0x30
    unsigned long long _firstStableTimeMs; // +0x38
}
- (id)initWithConfig:(id)arg1;
- (void)setupMotionManager;
- (void)startDetection;
- (void)stopDetection;
- (void)resetState;
- (BOOL)isMotionAvailable;
- (BOOL)isStable;
- (BOOL)enableMotionDetector;
- (void)setEnableMotionDetector:(BOOL)arg1;
- (double)motionThreshold;
- (void)setMotionThreshold:(double)arg1;
- (BOOL)enableRotationDetector;
- (void)setEnableRotationDetector:(BOOL)arg1;
- (double)rotationThreshold;
- (void)setRotationThreshold:(double)arg1;
- (unsigned long long)debounceDurationMs;
- (void)setDebounceDurationMs:(unsigned long long)arg1;
- (id)debugDelegate;
- (void)setDebugDelegate:(id)arg1;
- (id)motionManager;
- (void)setMotionManager:(id)arg1;
- (unsigned long long)firstStableTimeMs;
- (void)setFirstStableTimeMs:(unsigned long long)arg1;
- (BOOL)debouncedStableState;
- (void)setDebouncedStableState:(BOOL)arg1;
- (void).cxx_destruct;
@end
