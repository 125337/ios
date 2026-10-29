@interface MMLiveFaceDetectLogic : NSObject <MMFinderLiveSFBarrageViewExt>
{
    BOOL _isStartFaceDetect; // +0x8
    BOOL _isCurrNeedUseFaceDetectHandle; // +0x9
    BOOL _disableFaceDetect; // +0xa
    BOOL _isOpenFaceDetect; // +0xb
    BOOL _isPreparingStartFaceDetect; // +0xc
    BOOL _needEncodeDetectResult; // +0xd
    BOOL _needRenderDetectResult; // +0xe
    BOOL _detectedSegmentPersion; // +0xf
    int _faceDetectProcessFPS; // +0x10
    unsigned int _maskTexture; // +0x14
    int _faceDetectDesireProcessFPS; // +0x18
    int _faceDetectLimitProcessFPS; // +0x1c
    double _lastFaceDetectHandleEndTime; // +0x20
    id /* block */ _processFpsChangeCallback; // +0x28
    long long _maskTexRenderType; // +0x30
    MMLiveTask * _liveTask; // +0x38
    MMLiveFaceEncodeLogic * _faceEncodeLogic; // +0x40
    double _faceDetectRatio; // +0x48
    double _lastFaceDetectHandleStartTime; // +0x50
    unsigned long long _noSegmentPersionFrameCnt; // +0x58
    long long _thermalState; // +0x60
    long long _modelDevice; // +0x68
    double _lastRefreshTime; // +0x70
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0x78
    double _lastAnalyzeTime; // +0x80
    NSMutableArray * _recentProcessCostTimeList; // +0x88
    MMTimer * _fpsScheduleCheckTimer; // +0x90
    double _lastProcessBeginTime; // +0x98
    CGSize _maskTextureSize; // +0xa0
}
+ (id)baseResourceDir;
+ (id)imageFromRGBATexture:(int)arg1 width:(int)arg2 height:(int)arg3;
+ (void)searchEveryPixelFroImage:(id)arg1;
- (void)addFaceDetectProcessCostTime:(double)arg1;
- (double)fpsScheduleCheckInterval;
- (void)onFPSScheduleCheck;
- (void)cleaRecentProcessCostTimes;
- (double)maxAcceptPrcessCostTime;
- (void)analyzeRecentProcessCostTimesIfNeed;
- (void)tryIncreaseLimitProcessProcess;
- (void)tryDecreaseLimitProcessProcess;
- (BOOL)checkRecentCostTimeIsWorst;
- (BOOL)isRecentCostTimeWorst;
- (double)getAverageRecentCostTime;
- (double)analyzeTimeInterval;
- (unsigned long long)minProcessPeriodFrameCnt;
- (int)minAcceptFPS;
- (int)mistakeFPSRange;
- (float)worstCostTime;
- (unsigned long long)worstCollectCnt;
- (float)worstPercent;
- (void)recordCostTime:(double)arg1;
- (id)initWithLiveTask:(id)arg1;
- (void)initDefaultData;
- (void)dealloc;
- (void)registerExts;
- (void)unRegisterExts;
- (void)initNotifications;
- (void)openFaceDetect;
- (void)closeFaceDetect;
- (void)notifyDataInterrupt;
- (void)notifyWeeffectRenderFrameInterrupted;
- (void)onRefreshOverTimeCheck;
- (double)limitRefreshInterval;
- (void)startFaceDetect;
- (void)stopFaceDetect;
- (void)startFPSScheduleCheckTimer;
- (void)stopFPSScheduleCheckTimer;
- (void)onScheduleCheck;
- (void)onNotifyHasBarrageDataChanged:(BOOL)arg1;
- (void)onNotifyHasBarrageMovingAtTrackIndex:(unsigned long long)arg1;
- (void)onFaceDetectMaterialSrcAdded;
- (void)onWeEffectRenderFrameRefreshed:(id)arg1;
- (void)onWeEffectManagerDestroyed:(id)arg1;
- (void)checkCurNeedUseFaceDetectToHandle;
- (void)statisticLastHandleDuration;
- (BOOL)checkWeEffectNeedBeautyHandleWithFaceTrackRet:(int)arg1;
- (void)updateFaceDetectProcessCostTime:(double)arg1;
- (void)updateDisableFaceDetect:(BOOL)arg1 retry:(BOOL)arg2;
- (void)retryEnableFaceDetectIfNeed;
- (void)startWeEffectManagerIfNeed;
- (void)stopWeEffectManagerIfNeed;
- (void)updateNoSegmentPersion:(BOOL)arg1;
- (BOOL)isCurrentDetectedSegmentPersion;
- (void)checkWeEffectManagerExist;
- (void)updateThermalState:(long long)arg1 forceUpdate:(BOOL)arg2;
- (void)updateFaceDetectProcessFPS;
- (int)getCurrFaceDetectProcessFPS;
- (int)getCurrDesireProcessFPS;
- (int)minDesireProcessFPS;
- (id)currLiveTask;
- (void)updateDesireProcessFPS;
- (BOOL)tryAdjustLimitProcessFPS:(int)arg1;
- (int)currLimitProcessFPS;
- (long long)getFaceDetectModelDevice;
- (void)onFaceDetectProcessBegin;
- (void)onFaceDetectProcessEnd;
- (BOOL)updateMaskTexture;
- (void)notifyMaskTextureRefreshWithRenderFrame:(id)arg1;
- (void)notifyMaskTextureRefreshState;
- (void)initMaskTextureIfNeeded;
- (BOOL)addFaceDetectMaterialSrc;
- (id)getTemplateResourcePath;
- (id)getActualResourcePath;
- (id)weeffectManager;
- (id)finderLiveTask;
- (unsigned long long)noSegmentPersionFrameLimitCnt;
- (void)updateCurrNeedUseFaceDetectHandle;
- (unsigned long long)getTrackIndexForStartFaceDetect;
- (void)onBarrageFaceDetectRenderModeChanged:(long long)arg1 taskId:(id)arg2;
- (void)onMatrixPerfWarning:(id)arg1;
- (char *)getAlphaBufferFromRGBATexture:(int)arg1 width:(int)arg2 height:(int)arg3;
- (char *)extractAlphaBufferFromRGBATexture:(int)arg1 width:(int)arg2 height:(int)arg3;
- (id)transferMaskTextureToMaskImage;
- (BOOL)isStartFaceDetect;
- (void)setIsStartFaceDetect:(BOOL)arg1;
- (BOOL)isCurrNeedUseFaceDetectHandle;
- (void)setIsCurrNeedUseFaceDetectHandle:(BOOL)arg1;
- (double)lastFaceDetectHandleEndTime;
- (void)setLastFaceDetectHandleEndTime:(double)arg1;
- (BOOL)disableFaceDetect;
- (void)setDisableFaceDetect:(BOOL)arg1;
- (int)faceDetectProcessFPS;
- (void)setFaceDetectProcessFPS:(int)arg1;
- (id /* block */)processFpsChangeCallback;
- (void)setProcessFpsChangeCallback:(id /* block */)arg1;
- (long long)maskTexRenderType;
- (void)setMaskTexRenderType:(long long)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (BOOL)isOpenFaceDetect;
- (void)setIsOpenFaceDetect:(BOOL)arg1;
- (BOOL)isPreparingStartFaceDetect;
- (void)setIsPreparingStartFaceDetect:(BOOL)arg1;
- (unsigned int)maskTexture;
- (void)setMaskTexture:(unsigned int)arg1;
- (CGSize)maskTextureSize;
- (void)setMaskTextureSize:(CGSize)arg1;
- (BOOL)needEncodeDetectResult;
- (void)setNeedEncodeDetectResult:(BOOL)arg1;
- (BOOL)needRenderDetectResult;
- (void)setNeedRenderDetectResult:(BOOL)arg1;
- (id)faceEncodeLogic;
- (void)setFaceEncodeLogic:(id)arg1;
- (double)faceDetectRatio;
- (void)setFaceDetectRatio:(double)arg1;
- (BOOL)detectedSegmentPersion;
- (void)setDetectedSegmentPersion:(BOOL)arg1;
- (double)lastFaceDetectHandleStartTime;
- (void)setLastFaceDetectHandleStartTime:(double)arg1;
- (unsigned long long)noSegmentPersionFrameCnt;
- (void)setNoSegmentPersionFrameCnt:(unsigned long long)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (int)faceDetectDesireProcessFPS;
- (void)setFaceDetectDesireProcessFPS:(int)arg1;
- (int)faceDetectLimitProcessFPS;
- (void)setFaceDetectLimitProcessFPS:(int)arg1;
- (long long)modelDevice;
- (void)setModelDevice:(long long)arg1;
- (double)lastRefreshTime;
- (void)setLastRefreshTime:(double)arg1;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (double)lastAnalyzeTime;
- (void)setLastAnalyzeTime:(double)arg1;
- (id)recentProcessCostTimeList;
- (void)setRecentProcessCostTimeList:(id)arg1;
- (id)fpsScheduleCheckTimer;
- (void)setFpsScheduleCheckTimer:(id)arg1;
- (double)lastProcessBeginTime;
- (void)setLastProcessBeginTime:(double)arg1;
- (void).cxx_destruct;
@end

