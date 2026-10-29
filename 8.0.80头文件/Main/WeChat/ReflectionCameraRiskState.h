@interface ReflectionCameraRiskState : BaseCameraRiskState
{
    int poseType; // +0x8
    BOOL needForcePoseCheckFlag; // +0xc
    BOOL prepareTipsDisplaying; // +0xd
    int continuousPassCount; // +0x10
    YtTimerCounter * tipsTimeCounter; // +0x18
    BOOL _isChangeColorDone; // +0x20
}
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)handleEvent:(id)arg1;
- (void)enter;
- (void)update:(Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)moveToNextState;
- (void)changeCameraParams;
- (void)sendFailureEvent;
- (void)reset;
- (BOOL)isChangeColorDone;
- (void)setIsChangeColorDone:(BOOL)arg1;
- (void).cxx_destruct;
@end
