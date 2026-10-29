@interface CameraScanCombineDetectorRouter : MMObject <CameraScanGoodsRemoteDetectorDelegate, CameraScanGoodsExtensionDetectorDelegate>
{
    BOOL _isDetectorsWorking; // +0x8
    id <CameraScanCombineDetectorRouterDelegate> _delegate; // +0x10
    NSRecursiveLock * _variablesLock; // +0x18
    CameraScanGoodsImageProcessResult * _lastImageProcessResult; // +0x20
    NSObject<OS_dispatch_queue> * _detectorsQueue; // +0x28
    NSRecursiveLock * _detectorsQueueStateLock; // +0x30
    CameraScanGoodsRemoteDetector * _remoteDetector; // +0x38
    CameraScanGoodsExtensionDetector * _extDetector; // +0x40
    GoodsReqRemoteDetectLogic * _callRemoteDetectLogic; // +0x48
    unsigned long long _localDetectFailCount; // +0x50
    CameraScanCombineConfig * _combineConfig; // +0x58
    CMMotionManager * _motionManager; // +0x60
    CSCScanSessionReportFFEInfo * _engineLogInfo; // +0x68
    long long _enterCombineFlowCount; // +0x70
    long long _skipFromWorkingCount; // +0x78
    long long _skipFromStrangyCount; // +0x80
    long long _handleCombineFlowFrameCount; // +0x88
    long long _ffeHandleCount; // +0x90
    long long _ffeFailedCount; // +0x98
    long long _ffeSuccessCount; // +0xa0
    long long _ffeFirstSuccessFrame; // +0xa8
    long long _ffeNoxBoxFilterCount; // +0xb0
    long long _ffeStableClearFilterCount; // +0xb8
    long long _ffeNoiseFilterCount; // +0xc0
    long long _ffeReSvrDetectCount; // +0xc8
    long long _ffeBarCodeFilterCount; // +0xd0
    long long _svrHandleCount; // +0xd8
    long long _svrFailedCount; // +0xe0
    long long _svrSuccessCount; // +0xe8
    long long _svrFirstSuccessFrame; // +0xf0
    NSMutableArray * _arrFrameIndexDetectedItem; // +0xf8
}
- (void)resetReportCountInfo;
- (void)reportOnSkipFrameByStrangy;
- (void)reportOnSkipFrameByQueueWorking;
- (void)reportOnHandleFrameByFFEWithResult:(BOOL)arg1 trackResult:(unsigned int)arg2;
- (void)reportOnHandleFrameBySvrWithResult:(BOOL)arg1;
- (void)doReportScanSessionInfoAndReset;
- (void)recordIndexOfFrameWhitchDetectedItem:(unsigned long long)arg1;
- (void)logSerialContextFrameInfoOfRedcordedIndex;
- (id)initWithCombineConfig:(id)arg1;
- (void)setupDetectors;
- (void)createWorkQueue;
- (BOOL)isOnDetectorQueue;
- (BOOL)scanOnePictureFromAlbum:(id)arg1;
- (void)startDetectorScanSession;
- (void)stopDetectorScanSession;
- (void)enableDetectors;
- (void)renewDetectors;
- (void)resetDetectors;
- (void)stopDetectorsProcessIncomingResult;
- (void)recoverDetectorsProcessIncomingResult;
- (void)handleResumeDetectedLocalItems:(id)arg1;
- (void)handleImageProcessResultFromCodeCapureThread:(id)arg1;
- (void)checkDetectorsTaskInDetectorsQueue;
- (void)workQueue_handleImageResult:(id)arg1;
- (void)callUserSelectWithReqKey:(id)arg1 andExchangeInfo:(id)arg2;
- (void)detector:(id)arg1 didDetectRemoteItemFromAlbum:(id)arg2;
- (void)onSendImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(BOOL)arg4;
- (void)detector:(id)arg1 didDetectLocalItem:(id)arg2;
- (void)detector:(id)arg1 didUploadLocalItem:(id)arg2;
- (void)detector:(id)arg1 didRetrievalLocalItem:(id)arg2;
- (void)detector:(id)arg1 didAskPreloadForItem:(id)arg2;
- (void)detector:(id)arg1 didFailCgiTaskForItem:(id)arg2 errCode:(unsigned int)arg3;
- (void)detector:(id)arg1 didSvrReTrackWithResult:(BOOL)arg2;
- (void)detector:(id)arg1 didUploadEngineLog:(id)arg2;
- (void)pushLastImageProcessResult:(id)arg1;
- (id)popLastImageProcessResult;
- (void)clearLastImageProcessResult;
- (id)curCombineReportBaseInfo;
- (void)setupMotionDetector;
- (void)beginMotionDetector;
- (void)endMotionDetector;
- (BOOL)isCameraStable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)variablesLock;
- (void)setVariablesLock:(id)arg1;
- (id)lastImageProcessResult;
- (void)setLastImageProcessResult:(id)arg1;
- (BOOL)isDetectorsWorking;
- (void)setIsDetectorsWorking:(BOOL)arg1;
- (id)detectorsQueue;
- (void)setDetectorsQueue:(id)arg1;
- (id)detectorsQueueStateLock;
- (void)setDetectorsQueueStateLock:(id)arg1;
- (id)remoteDetector;
- (void)setRemoteDetector:(id)arg1;
- (id)extDetector;
- (void)setExtDetector:(id)arg1;
- (id)callRemoteDetectLogic;
- (void)setCallRemoteDetectLogic:(id)arg1;
- (unsigned long long)localDetectFailCount;
- (void)setLocalDetectFailCount:(unsigned long long)arg1;
- (id)combineConfig;
- (void)setCombineConfig:(id)arg1;
- (id)motionManager;
- (void)setMotionManager:(id)arg1;
- (id)engineLogInfo;
- (void)setEngineLogInfo:(id)arg1;
- (long long)enterCombineFlowCount;
- (void)setEnterCombineFlowCount:(long long)arg1;
- (long long)skipFromWorkingCount;
- (void)setSkipFromWorkingCount:(long long)arg1;
- (long long)skipFromStrangyCount;
- (void)setSkipFromStrangyCount:(long long)arg1;
- (long long)handleCombineFlowFrameCount;
- (void)setHandleCombineFlowFrameCount:(long long)arg1;
- (long long)ffeHandleCount;
- (void)setFfeHandleCount:(long long)arg1;
- (long long)ffeFailedCount;
- (void)setFfeFailedCount:(long long)arg1;
- (long long)ffeSuccessCount;
- (void)setFfeSuccessCount:(long long)arg1;
- (long long)ffeFirstSuccessFrame;
- (void)setFfeFirstSuccessFrame:(long long)arg1;
- (long long)ffeNoxBoxFilterCount;
- (void)setFfeNoxBoxFilterCount:(long long)arg1;
- (long long)ffeStableClearFilterCount;
- (void)setFfeStableClearFilterCount:(long long)arg1;
- (long long)ffeNoiseFilterCount;
- (void)setFfeNoiseFilterCount:(long long)arg1;
- (long long)ffeReSvrDetectCount;
- (void)setFfeReSvrDetectCount:(long long)arg1;
- (long long)ffeBarCodeFilterCount;
- (void)setFfeBarCodeFilterCount:(long long)arg1;
- (long long)svrHandleCount;
- (void)setSvrHandleCount:(long long)arg1;
- (long long)svrFailedCount;
- (void)setSvrFailedCount:(long long)arg1;
- (long long)svrSuccessCount;
- (void)setSvrSuccessCount:(long long)arg1;
- (long long)svrFirstSuccessFrame;
- (void)setSvrFirstSuccessFrame:(long long)arg1;
- (id)arrFrameIndexDetectedItem;
- (void)setArrFrameIndexDetectedItem:(id)arg1;
- (void).cxx_destruct;
@end

