@interface CameraScanGoodsPreFilter : NSObject
{
    BOOL _enableCodeFilter; // +0x8
    BOOL _bEnableClickDetection; // +0x9
    CameraStableDetector * _stableDetector; // +0x10
    long long _clickDetectionInterval; // +0x18
    long long _commonDetectionInterval; // +0x20
    unsigned long long _shadowDetectSampleScore; // +0x28
    unsigned long long _lastClkDetTimestamp; // +0x30
    unsigned long long _lastDetPassTimestamp; // +0x38
}
- (id)initWithCombineConfig:(id)arg1;
- (void)setDebugDelegate:(id)arg1;
- (id)debugDelegate;
- (void)startDetection;
- (void)stopDetection;
- (void)resetState;
- (long long)filterFromScene:(long long)arg1 hasCode:(BOOL)arg2;
- (BOOL)shouldShadowDetectForFilterResult:(long long)arg1;
- (void)notifyScanResult;
- (id)stableDetector;
- (BOOL)enableCodeFilter;
- (void)setEnableCodeFilter:(BOOL)arg1;
- (BOOL)bEnableClickDetection;
- (void)setBEnableClickDetection:(BOOL)arg1;
- (long long)clickDetectionInterval;
- (void)setClickDetectionInterval:(long long)arg1;
- (long long)commonDetectionInterval;
- (void)setCommonDetectionInterval:(long long)arg1;
- (unsigned long long)shadowDetectSampleScore;
- (unsigned long long)lastClkDetTimestamp;
- (void)setLastClkDetTimestamp:(unsigned long long)arg1;
- (unsigned long long)lastDetPassTimestamp;
- (void)setLastDetPassTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
