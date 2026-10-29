@interface CameraScanPressureOptimize : NSObject
{
    BOOL _hasTimelineObserver; // +0x8
    BOOL _hasMatrixPerfObserver; // +0x9
    BOOL _enablePressureOpt; // +0xa
    BOOL _hasSystemPressure; // +0xb
    BOOL _hasCameraPressure; // +0xc
    int _degreeFrameCount; // +0x10
    int _optimizeType; // +0x14
    id <CameraScanPressureOptimizeDelegate> _delegate; // +0x18
    long long _pressureRecoverMode; // +0x20
    long long _pressureType; // +0x28
    long long _dynamicFrameControl; // +0x30
}
- (id)init;
- (void)dealloc;
- (BOOL)needPressureRecover;
- (BOOL)isReInitDirect;
- (void)addCameraPressureObserver;
- (void)removeCameraPressureObserver;
- (void)addSystemPressureObserver;
- (void)removeSystemPressureObserver;
- (void)handleCameraStartTimeline:(id)arg1;
- (void)handlePerfWarningNotification:(id)arg1;
- (BOOL)isPressure;
- (long long)getPressureType;
- (long long)getRecoverMode;
- (int)getDegreeFrameCount;
- (void)resetPressureSign;
- (void)setupDynamicFrameDurationControl;
- (BOOL)enableDynamicFrameDuration;
- (long long)dynamicMinFrameRate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasTimelineObserver;
- (void)setHasTimelineObserver:(BOOL)arg1;
- (BOOL)hasMatrixPerfObserver;
- (void)setHasMatrixPerfObserver:(BOOL)arg1;
- (BOOL)enablePressureOpt;
- (void)setEnablePressureOpt:(BOOL)arg1;
- (long long)pressureRecoverMode;
- (void)setPressureRecoverMode:(long long)arg1;
- (BOOL)hasSystemPressure;
- (void)setHasSystemPressure:(BOOL)arg1;
- (BOOL)hasCameraPressure;
- (void)setHasCameraPressure:(BOOL)arg1;
- (int)degreeFrameCount;
- (void)setDegreeFrameCount:(int)arg1;
- (long long)pressureType;
- (void)setPressureType:(long long)arg1;
- (int)optimizeType;
- (void)setOptimizeType:(int)arg1;
- (long long)dynamicFrameControl;
- (void)setDynamicFrameControl:(long long)arg1;
- (void).cxx_destruct;
@end
