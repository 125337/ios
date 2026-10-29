@interface MMLiveFaceDecodeLogic : NSObject <MMFinderLiveSFBarrageViewExt>
{
    BOOL _needProcessFaceDetectData; // +0x8
    BOOL _detectedSegmentPersion; // +0x9
    BOOL _isOpenFaceDecode; // +0xa
    BOOL _lastNotifyInterrupt; // +0xb
    unsigned int _useClientMask; // +0xc
    int _maxProcessFPS; // +0x10
    double _lastFaceDetectProcessEndTime; // +0x18
    long long _maskTexRenderType; // +0x20
    MMLiveTask * _liveTask; // +0x28
    MMLiveFaceDecodeTask * _currDecodeTask; // +0x30
    NSMutableArray * _decodeTaskList; // +0x38
    NSObject<OS_dispatch_queue> * _decodingQueue; // +0x40
    double _lastFaceDetectProcessStartTime; // +0x48
    double _lastDataRecvTime; // +0x50
    double _lastDataDecodeTime; // +0x58
    long long _faceDetectDataSrc; // +0x60
    double _lastRefreshTime; // +0x68
    MMTimer * _scheduleCheckTimer; // +0x70
    long long _thermalState; // +0x78
    long long _fpsCounter; // +0x80
    unsigned long long _recvFrameCount; // +0x88
    unsigned long long _processFrameCount; // +0x90
    long long _recvFps; // +0x98
    long long _processFps; // +0xa0
    unsigned long long _recvFpsStatCnt; // +0xa8
    unsigned long long _processFpsStatCnt; // +0xb0
    id /* block */ _recvFpsReport; // +0xb8
    id /* block */ _processFpsReport; // +0xc0
    double _lastProcessTime; // +0xc8
}
+ (id /* block */)createReportTimer:(long long)arg1 block:(id /* block */)arg2;
- (void)initRecvStats;
- (void)updateRecvStats;
- (void)clearRecvStats;
- (void)initProcessStats;
- (void)updateProcessStats;
- (void)clearProcessStats;
- (void)updateLastProcessTime;
- (id /* block */)createRecvFpsReporter;
- (id /* block */)createProcessFpsReporter;
- (void)increaseRecvFrameCnt;
- (void)increaseProcessFrameCnt;
- (void)increaseRecvFpsStatCnt;
- (void)increaseProcessFpsStatCnt;
- (void)logForRecvStatIfNeed;
- (void)logForProcessStatIfNeed;
- (void)updateProcessFps:(int)arg1;
- (void)updateMaxProcessFPS;
- (BOOL)checkNeedSkipProcessFrame;
- (void)clearFPSControl;
- (long long)getFrameInterval;
- (BOOL)checkNeedSkipProcessFrameWithTimeInterval;
- (double)maxProcessTimeInterval;
- (int)getCurrMaxProcessFPS;
- (id)initWithLiveTask:(id)arg1;
- (void)initDefaultData;
- (void)dealloc;
- (void)registerExts;
- (void)unRegisterExts;
- (void)initNotifications;
- (void)startScheduleCheckTimer;
- (void)stopScheduleCheckTimer;
- (void)onScheduleCheck;
- (void)updateFaceDetectDataSrc;
- (void)processSEIPBForFaceDetect:(id)arg1;
- (void)openFaceDecode;
- (void)closeFaceDecode;
- (void)notifyDataInterrupt;
- (void)onNotifyHasBarrageDataChanged:(BOOL)arg1;
- (void)onNotifyHasBarrageMovingAtTrackIndex:(unsigned long long)arg1;
- (void)updateNeedProcessFaceDetectData;
- (void)statisticLastProcecssDuration;
- (unsigned long long)getTrackIndexForStartFaceDecode;
- (void)updateNoSegmentPersion:(BOOL)arg1;
- (void)addDecodeTask:(id)arg1;
- (id)getNextDecodeTask;
- (void)checkDecodeTasksOverMaxLimit;
- (void)clearDecodeTaskList;
- (void)tryDecodeNextTask;
- (BOOL)checkEnableDecodeNext;
- (void)notifyMaskTextureRefreshWithDecodeResult:(id)arg1;
- (void)notifyMaskTextureRefreshState;
- (void)notifySeiDataInterrupted;
- (void)onRefreshOverTimeCheck;
- (double)limitRefreshInterval;
- (void)delayCheckSeiDataInterrupted;
- (void)updateUseClientMask:(unsigned int)arg1;
- (long long)currFaceDetectDataSrc;
- (long long)getNewFaceDetectDataSrc;
- (void)startProcess;
- (void)stopProcess;
- (void)continueProcess;
- (void)pauseProcess;
- (void)initStats;
- (void)clearStats;
- (void)updateThermalState:(long long)arg1 forceUpdate:(BOOL)arg2;
- (unsigned long long)maxDecodeTaskCnt;
- (id)finderLiveTask;
- (void)onBarrageFaceDetectRenderModeChanged:(long long)arg1 taskId:(id)arg2;
- (void)onMatrixPerfWarning:(id)arg1;
- (BOOL)needProcessFaceDetectData;
- (void)setNeedProcessFaceDetectData:(BOOL)arg1;
- (double)lastFaceDetectProcessEndTime;
- (void)setLastFaceDetectProcessEndTime:(double)arg1;
- (long long)maskTexRenderType;
- (void)setMaskTexRenderType:(long long)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)currDecodeTask;
- (void)setCurrDecodeTask:(id)arg1;
- (id)decodeTaskList;
- (void)setDecodeTaskList:(id)arg1;
- (id)decodingQueue;
- (void)setDecodingQueue:(id)arg1;
- (BOOL)detectedSegmentPersion;
- (void)setDetectedSegmentPersion:(BOOL)arg1;
- (BOOL)isOpenFaceDecode;
- (void)setIsOpenFaceDecode:(BOOL)arg1;
- (double)lastFaceDetectProcessStartTime;
- (void)setLastFaceDetectProcessStartTime:(double)arg1;
- (double)lastDataRecvTime;
- (void)setLastDataRecvTime:(double)arg1;
- (double)lastDataDecodeTime;
- (void)setLastDataDecodeTime:(double)arg1;
- (unsigned int)useClientMask;
- (void)setUseClientMask:(unsigned int)arg1;
- (long long)faceDetectDataSrc;
- (void)setFaceDetectDataSrc:(long long)arg1;
- (BOOL)lastNotifyInterrupt;
- (void)setLastNotifyInterrupt:(BOOL)arg1;
- (double)lastRefreshTime;
- (void)setLastRefreshTime:(double)arg1;
- (id)scheduleCheckTimer;
- (void)setScheduleCheckTimer:(id)arg1;
- (int)maxProcessFPS;
- (void)setMaxProcessFPS:(int)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (long long)fpsCounter;
- (void)setFpsCounter:(long long)arg1;
- (unsigned long long)recvFrameCount;
- (void)setRecvFrameCount:(unsigned long long)arg1;
- (unsigned long long)processFrameCount;
- (void)setProcessFrameCount:(unsigned long long)arg1;
- (long long)recvFps;
- (void)setRecvFps:(long long)arg1;
- (long long)processFps;
- (void)setProcessFps:(long long)arg1;
- (unsigned long long)recvFpsStatCnt;
- (void)setRecvFpsStatCnt:(unsigned long long)arg1;
- (unsigned long long)processFpsStatCnt;
- (void)setProcessFpsStatCnt:(unsigned long long)arg1;
- (id /* block */)recvFpsReport;
- (void)setRecvFpsReport:(id /* block */)arg1;
- (id /* block */)processFpsReport;
- (void)setProcessFpsReport:(id /* block */)arg1;
- (double)lastProcessTime;
- (void)setLastProcessTime:(double)arg1;
- (void).cxx_destruct;
@end

