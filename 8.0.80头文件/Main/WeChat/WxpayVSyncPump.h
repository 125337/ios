@interface WxpayVSyncPump : NSObject
{
    WxpayFrameCadence * _cadence; // +0x8
    CADisplayLink * _link; // +0x10
    id /* block */ _dispatch; // +0x18
    id /* block */ _readinessProbe; // +0x20
    long long _preferredHz; // +0x28
    double _lastFrameTimestamp; // +0x30
    double _nextReadinessProbeTimestamp; // +0x38
    unsigned long long _frameJankCount; // +0x40
    unsigned long long _maxFrameGapUs; // +0x48
    unsigned long long _firstFrameGapAfterUpUs; // +0x50
    BOOL _probeFirstFrameAfterUp; // +0x58
    BOOL _interactingRequested; // +0x59
    CADisplayLink * _touchRateLink; // +0x60
    atomic<unsigned int> _surfaceGeneration; // +0x68
    atomic<bool> _readinessPending; // +0x6c
    atomic<bool> _readinessProbeInFlight; // +0x6d
    os_unfair_lock_s _statsLock; // +0x70
    struct _stats; // +0x78
}
- (id)init;
- (void)dealloc;
- (unsigned int)surfaceGeneration;
- (void)setSurfaceGeneration:(unsigned int)arg1;
- (BOOL)readinessPending;
- (void)setReadinessPending:(BOOL)arg1;
- (void)resetCadence;
- (void)bindDispatch:(id /* block */)arg1 readinessProbe:(id /* block */)arg2;
- (void)unbind;
- (void)installWithScreenMaximumHz:(long long)arg1;
- (void)uninstall;
- (void)requestWake;
- (void)setAnimationActive:(BOOL)arg1;
- (void)setInteracting:(BOOL)arg1;
- (void)markPointerUp;
- (void)pauseForBackground;
- (void)resumeFromBackground;
- (struct)stats;
- (void)applyCadence;
- (void)publishStats;
- (void)onDisplayLink:(id)arg1;
- (void)postReadinessProbe;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
