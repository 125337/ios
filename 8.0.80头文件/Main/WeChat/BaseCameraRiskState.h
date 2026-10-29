@interface BaseCameraRiskState : BaseState
{
    BOOL _isFirstJumpNextState; // +0x8
    BOOL _currentStateHasRisk; // +0x9
    BOOL _isChangedColor; // +0xa
    int _runCameraRiskIndex; // +0xc
    int _beforeSendEndCount; // +0x10
    float _riskImageResizeScale; // +0x14
    float _riskImageResizeQuality; // +0x18
    int _nextStateName; // +0x1c
    YTCameraRiskData * _currentStateRiskData; // +0x20
    long long _lastMarkTime; // +0x28
    YTRiskData * _riskData; // +0x30
    long long _actualDelaySendEndTime; // +0x38
    NSString * _risk_stage; // +0x40
    double _currentBrightness; // +0x48
    long long _lastMarkReflectionTime; // +0x50
    long long _sendColorFilterDelayTime; // +0x58
}
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (BOOL)isShouldTakeImg;
- (void)computeTimeOffsetNode;
- (void)cameraRiskStartEvent:(id)arg1;
- (void)changeShapeViewColor;
- (void)resetShapeViewColor;
- (void)cameraRiskEndEvent:(id)arg1;
- (void)sendCameraRiskStartEvent:(id)arg1;
- (void)sendCameraRiskEndEvent:(id)arg1;
- (void)makeRiskFrameData:(Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)reset;
- (void)resetDeferringCameraParamsRestore:(BOOL)arg1;
- (void)unload;
- (int)runCameraRiskIndex;
- (void)setRunCameraRiskIndex:(int)arg1;
- (id)currentStateRiskData;
- (void)setCurrentStateRiskData:(id)arg1;
- (long long)lastMarkTime;
- (void)setLastMarkTime:(long long)arg1;
- (id)riskData;
- (void)setRiskData:(id)arg1;
- (int)beforeSendEndCount;
- (void)setBeforeSendEndCount:(int)arg1;
- (long long)actualDelaySendEndTime;
- (void)setActualDelaySendEndTime:(long long)arg1;
- (BOOL)isFirstJumpNextState;
- (void)setIsFirstJumpNextState:(BOOL)arg1;
- (float)riskImageResizeScale;
- (void)setRiskImageResizeScale:(float)arg1;
- (float)riskImageResizeQuality;
- (void)setRiskImageResizeQuality:(float)arg1;
- (id)risk_stage;
- (void)setRisk_stage:(id)arg1;
- (double)currentBrightness;
- (void)setCurrentBrightness:(double)arg1;
- (BOOL)currentStateHasRisk;
- (void)setCurrentStateHasRisk:(BOOL)arg1;
- (BOOL)isChangedColor;
- (void)setIsChangedColor:(BOOL)arg1;
- (int)nextStateName;
- (void)setNextStateName:(int)arg1;
- (long long)lastMarkReflectionTime;
- (void)setLastMarkReflectionTime:(long long)arg1;
- (long long)sendColorFilterDelayTime;
- (void)setSendColorFilterDelayTime:(long long)arg1;
- (void).cxx_destruct;
@end
