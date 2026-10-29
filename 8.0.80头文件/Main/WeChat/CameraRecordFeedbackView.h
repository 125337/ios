@interface CameraRecordFeedbackView : UIView
{
    unsigned long long _pillarCount; // +0x8
    double _pillarWidth; // +0x10
    double _pillarMaxHeight; // +0x18
    UIColor * _pillarColor; // +0x20
    CADisplayLink * _displayLink; // +0x28
    NSMutableArray * _pillarLayers; // +0x30
    NSMutableArray * _currentPowerRatios; // +0x38
    NSMutableArray * _pillarWeights; // +0x40
    NSMutableArray * _pillarPhases; // +0x48
    double _targetPeakPower; // +0x50
    double _currentEnvelope; // +0x58
    double _lastFrameTimestamp; // +0x60
    double _waveElapsedTime; // +0x68
}
+ (double)normalizedPeakPower:(float)arg1;
+ (double)legacyStrokeWidthWithPillarWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 pillarCount:(unsigned long long)arg2 pillarColor:(id)arg3 pillarWidth:(double)arg4 maxHeight:(double)arg5;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (id)debugColorDescription:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)didMoveToWindow;
- (void)setPillarColor:(id)arg1;
- (void)setPillarCount:(unsigned long long)arg1;
- (void)setPillarWidth:(double)arg1;
- (void)setPillarMaxHeight:(double)arg1;
- (void)setPeakPower:(float)arg1;
- (void)resetWave;
- (void)setupPillarsIfNeeded;
- (void)layoutPillars;
- (void)startDisplayLinkIfNeeded;
- (void)stopDisplayLink;
- (void)onDisplayLink:(id)arg1;
- (void)updateEnvelopeWithDeltaTime:(double)arg1;
- (double)renderPillarsWithDeltaTime:(double)arg1;
- (double)targetPowerRatioForPillarAtIndex:(unsigned long long)arg1;
- (void)applyIdlePowerRatios;
- (void)applyPowerRatio:(double)arg1 toLayer:(id)arg2;
- (double)idlePowerRatio;
- (double)maxVisiblePillarHeight;
- (double)pointValueWithPixelValue:(double)arg1;
- (unsigned long long)pillarCount;
- (double)pillarWidth;
- (double)pillarMaxHeight;
- (id)pillarColor;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)pillarLayers;
- (void)setPillarLayers:(id)arg1;
- (id)currentPowerRatios;
- (void)setCurrentPowerRatios:(id)arg1;
- (id)pillarWeights;
- (void)setPillarWeights:(id)arg1;
- (id)pillarPhases;
- (void)setPillarPhases:(id)arg1;
- (double)targetPeakPower;
- (void)setTargetPeakPower:(double)arg1;
- (double)currentEnvelope;
- (void)setCurrentEnvelope:(double)arg1;
- (double)lastFrameTimestamp;
- (void)setLastFrameTimestamp:(double)arg1;
- (double)waveElapsedTime;
- (void)setWaveElapsedTime:(double)arg1;
- (void).cxx_destruct;
@end
