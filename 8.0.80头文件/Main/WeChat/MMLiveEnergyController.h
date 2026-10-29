@interface MMLiveEnergyController : NSObject
{
    NSArray * _lowPowerModeRules; // +0x8
    NSRecursiveLock * _lock; // +0x10
    long long _energyMode; // +0x18
    MMLiveEnergyRule * _hitRule; // +0x20
    MMLiveEnergyAdjuster * _adjuster; // +0x28
    MMLiveTask<MMLiveEnergyControllerDelegate> * _liveTaskDelegate; // +0x30
}
- (id)initWithLiveTaskDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)lowPowerModeAvailable;
- (long long)energyMode;
- (id)hitRule;
- (void)checkMetricsInfo:(id)arg1;
- (void)_changeEnergyModeWithRule:(id)arg1;
- (id)_getHitRuleForEvaluating;
- (void)CameraCapture_evaluateCaptureFPS:(int *)arg1;
- (void)CameraCapture_evaluateCaptureResolution:(long long *)arg1;
- (void)VideoEncode_evaluateEncodeParams:(id)arg1;
- (void)VideoEncode_evaluateEncodeFPS:(int *)arg1;
- (void)VideoEncode_evaluateEncodeResolution:(long long *)arg1;
- (void)VideoEncode_evaluateVideoBitrate:(int *)arg1;
- (void)WeEffect_evaluteSettings:(void *)arg1;
- (void)_WeEffect_evaluteFaceAlignmentSettings:(void *)arg1 withHitRule:(id)arg2;
- (void)_WeEffect_evaluteOcclusionSegmentSettings:(void *)arg1 withHitRule:(id)arg2;
- (void)Gift_evaluatePAGFrameRate:(float *)arg1;
- (void)Gift_evaluateFullScreenGiftDisplaySpacingTimeInterval:(double *)arg1;
- (void)BlurPowerMode_evaluateAdjustParamLevel:(int *)arg1;
- (id)liveTaskDelegate;
- (void).cxx_destruct;
@end
