@interface MMLiveFaceDetectStatisticLogic : NSObject
{
    int _maxFrameProcessTime; // +0x8
    int _maxDesireProcessFps; // +0xc
    int _minDesireProcessFps; // +0x10
    int _maxLimitProcessFps; // +0x14
    int _minLimitProcessFps; // +0x18
    int _maxLimitDesireDiffFps; // +0x1c
    int _minLimitDesireDiffFps; // +0x20
    int _processDuration; // +0x24
    int _disableFaceDetectTimes; // +0x28
    int _disableCanRetryFaceDetectTimes; // +0x2c
    MMLiveTaskId * _taskId; // +0x30
    long long _dataSrc; // +0x38
    double _frameProcessTimeSum; // +0x40
    unsigned long long _frameProcessCnt; // +0x48
    unsigned long long _processFpsSum; // +0x50
    unsigned long long _processFpsCnt; // +0x58
    unsigned long long _renderFpsSum; // +0x60
    unsigned long long _renderFpsCnt; // +0x68
    unsigned long long _srcRenderFpsSum; // +0x70
    unsigned long long _srcRenderFpsCnt; // +0x78
    unsigned long long _srcDecodeFpsSum; // +0x80
    unsigned long long _srcDecodeFpsCnt; // +0x88
    long long _thermalState; // +0x90
    long long _startThermalState; // +0x98
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)initNotifications;
- (void)updateFaceDetectDataSrc:(long long)arg1;
- (void)addFrameProcessTime:(double)arg1;
- (void)updateFrameProcessFps:(int)arg1;
- (void)updateFaceMaskRenderFps:(int)arg1;
- (void)updateDesireProcessFps:(int)arg1 LimitProcessFPS:(int)arg2;
- (void)updateSrcRenderFps:(int)arg1;
- (void)updateSrcDecodeFps:(int)arg1;
- (void)addFaceDetectProcessDuration:(double)arg1;
- (void)notifyDisableFaceDetectWithCanRetry:(BOOL)arg1;
- (void)onExitLive;
- (void)onFaceDetectStatisticStart;
- (void)addFps:(int)arg1 toSumFps:(unsigned long long *)arg2 sumCnt:(unsigned long long *)arg3;
- (void)updateThermalState:(long long)arg1;
- (double)getFaceDetectPersistTimePercent;
- (void)reportStatistic;
- (BOOL)isStartStatistic;
- (int)avgFrameProcessTime;
- (int)avgProcessFps;
- (int)avgRenderFps;
- (int)avgSrcRenderFps;
- (int)avgSrcDecodeFps;
- (id)liveTask;
- (void)onMatrixPerfWarning:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)dataSrc;
- (void)setDataSrc:(long long)arg1;
- (int)maxFrameProcessTime;
- (void)setMaxFrameProcessTime:(int)arg1;
- (double)frameProcessTimeSum;
- (void)setFrameProcessTimeSum:(double)arg1;
- (unsigned long long)frameProcessCnt;
- (void)setFrameProcessCnt:(unsigned long long)arg1;
- (unsigned long long)processFpsSum;
- (void)setProcessFpsSum:(unsigned long long)arg1;
- (unsigned long long)processFpsCnt;
- (void)setProcessFpsCnt:(unsigned long long)arg1;
- (unsigned long long)renderFpsSum;
- (void)setRenderFpsSum:(unsigned long long)arg1;
- (unsigned long long)renderFpsCnt;
- (void)setRenderFpsCnt:(unsigned long long)arg1;
- (int)maxDesireProcessFps;
- (void)setMaxDesireProcessFps:(int)arg1;
- (int)minDesireProcessFps;
- (void)setMinDesireProcessFps:(int)arg1;
- (int)maxLimitProcessFps;
- (void)setMaxLimitProcessFps:(int)arg1;
- (int)minLimitProcessFps;
- (void)setMinLimitProcessFps:(int)arg1;
- (int)maxLimitDesireDiffFps;
- (void)setMaxLimitDesireDiffFps:(int)arg1;
- (int)minLimitDesireDiffFps;
- (void)setMinLimitDesireDiffFps:(int)arg1;
- (unsigned long long)srcRenderFpsSum;
- (void)setSrcRenderFpsSum:(unsigned long long)arg1;
- (unsigned long long)srcRenderFpsCnt;
- (void)setSrcRenderFpsCnt:(unsigned long long)arg1;
- (unsigned long long)srcDecodeFpsSum;
- (void)setSrcDecodeFpsSum:(unsigned long long)arg1;
- (unsigned long long)srcDecodeFpsCnt;
- (void)setSrcDecodeFpsCnt:(unsigned long long)arg1;
- (int)processDuration;
- (void)setProcessDuration:(int)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (long long)startThermalState;
- (void)setStartThermalState:(long long)arg1;
- (int)disableFaceDetectTimes;
- (void)setDisableFaceDetectTimes:(int)arg1;
- (int)disableCanRetryFaceDetectTimes;
- (void)setDisableCanRetryFaceDetectTimes:(int)arg1;
- (void).cxx_destruct;
@end
