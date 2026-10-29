@interface CdnWeEffectManager : MMWeEffectManager
{
    BOOL _needLimitFPS; // +0x8
    BOOL _isWeEffectProcessStart; // +0x9
    int _maxProcessFPS; // +0xc
    id /* block */ _getAverFootPrintCallback; // +0x10
    id /* block */ _surviveOverTimeCallback; // +0x18
    id /* block */ _checkNeedBeautyCallback; // +0x20
    id /* block */ _checkCanSurviveCallback; // +0x28
    long long _cdnAudienceWeEffectScene; // +0x30
    long long _fpsCounter; // +0x38
}
- (void)startSurviveCountDown;
- (void)cancelSurviveCountDown;
- (double)getSurviveDuration;
- (long long)getFrameIntervalWithTriggerFps:(int)arg1;
- (BOOL)checkNeedSkipProcessFrameWithTriggerFps:(int)arg1;
- (BOOL)checkNeedSkipProcessFrameWithTimeInterval;
- (double)maxProcessTimeInterval;
- (void)dealloc;
- (void)onWeEffectProcessedStart;
- (void)onWeEffectProcessedEnd;
- (void)onSurviveOverTime;
- (double)getRecentAverageFootPrintMemoryPercent;
- (BOOL)checkCanSurviveAfterRenderStop;
- (BOOL)checkNeedBeautyWithFaceTrackRet:(int)arg1;
- (void)checkNeedSkipProcess:(BOOL *)arg1 skipFaceTrack:(BOOL *)arg2 forFpsLimitWithTriggerFps:(int)arg3 lastProcessedFrame:(id)arg4;
- (id /* block */)getAverFootPrintCallback;
- (void)setGetAverFootPrintCallback:(id /* block */)arg1;
- (id /* block */)surviveOverTimeCallback;
- (void)setSurviveOverTimeCallback:(id /* block */)arg1;
- (id /* block */)checkNeedBeautyCallback;
- (void)setCheckNeedBeautyCallback:(id /* block */)arg1;
- (id /* block */)checkCanSurviveCallback;
- (void)setCheckCanSurviveCallback:(id /* block */)arg1;
- (BOOL)needLimitFPS;
- (void)setNeedLimitFPS:(BOOL)arg1;
- (int)maxProcessFPS;
- (void)setMaxProcessFPS:(int)arg1;
- (long long)cdnAudienceWeEffectScene;
- (void)setCdnAudienceWeEffectScene:(long long)arg1;
- (BOOL)isWeEffectProcessStart;
- (void)setIsWeEffectProcessStart:(BOOL)arg1;
- (long long)fpsCounter;
- (void)setFpsCounter:(long long)arg1;
- (void).cxx_destruct;
@end

