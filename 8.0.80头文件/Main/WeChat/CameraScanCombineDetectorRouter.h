@interface CameraScanCombineDetectorRouter : MMObject <CameraScanGoodsExtensionDetectorDelegate, CameraScanMixDetectorProtocol, CameraStableDetectorDebugDelegate>
{
    BOOL _isDetectorsWorking; // +0x8
    BOOL _isRemoteDetectWorking; // +0x9
    id <CameraScanCombineDetectorRouterDelegate> _delegate; // +0x10
    unsigned long long _enterSession1970Ts; // +0x18
    NSRecursiveLock * _variablesLock; // +0x20
    CameraScanGoodsImageProcessResult * _lastImageProcessResult; // +0x28
    NSObject<OS_dispatch_queue> * _detectorsQueue; // +0x30
    NSRecursiveLock * _detectorsQueueStateLock; // +0x38
    CameraScanGoodsExtensionDetector * _extDetector; // +0x40
    CameraScanMixDetector * _tapDetector; // +0x48
    CameraScanTextFilter * _textFilter; // +0x50
    GoodsReqRemoteDetectLogic * _callRemoteDetectLogic; // +0x58
    unsigned long long _localDetectFailCount; // +0x60
    CameraScanCombineConfig * _combineConfig; // +0x68
    CameraScanGoodsPreFilter * _preFilter; // +0x70
    CSCScanSessionReportFFEInfo * _engineLogInfo; // +0x78
    long long _enterCombineFlowCount; // +0x80
    long long _skipFromWorkingCount; // +0x88
    long long _skipFromStrangyCount; // +0x90
    long long _skipFromStableDetCount; // +0x98
    long long _handleCombineFlowFrameCount; // +0xa0
    long long _ffeHandleCount; // +0xa8
    long long _ffeFailedCount; // +0xb0
    long long _ffeSuccessCount; // +0xb8
    long long _ffeFirstSuccessFrame; // +0xc0
    long long _ffeNoxBoxFilterCount; // +0xc8
    long long _ffeStableClearFilterCount; // +0xd0
    long long _ffeNoiseFilterCount; // +0xd8
    long long _ffeReSvrDetectCount; // +0xe0
    long long _ffeBarCodeFilterCount; // +0xe8
    long long _svrHandleCount; // +0xf0
    long long _svrFailedCount; // +0xf8
    long long _svrSuccessCount; // +0x100
    long long _svrFirstSuccessFrame; // +0x108
    long long _goodsDetectEnterCount; // +0x110
    long long _goodsDetectCodeFilterCount; // +0x118
    long long _goodsDetectFFEEnterCount; // +0x120
    long long _goodsDetectShadowFilterTotalCount; // +0x128
    long long _goodsDetectShadowSampleHitCount; // +0x130
    long long _goodsDetectShadowItemFoundCount; // +0x138
    NSMutableArray * _arrFrameIndexDetectedItem; // +0x140
}
- (void)resetReportCountInfo;
- (void)reportOnSkipFrameByStrangy;
- (void)reportOnSkipFrameByStableCount;
- (void)reportOnSkipFrameByQueueWorking;
- (void)reportOnHandleFrameByFFEWithResult:(BOOL)arg1 trackResult:(unsigned int)arg2;
- (void)reportOnHandleFrameBySvrWithResult:(BOOL)arg1;
- (void)doReportScanSessionInfoAndReset;
- (void)recordIndexOfFrameWhitchDetectedItem:(unsigned long long)arg1;
- (void)logSerialContextFrameInfoOfRedcordedIndex;
- (void)doReportGoodsDetectFilterInfo;
- (void)reportOnGoodsDetectEnter;
- (void)reportOnFFEDetectEnter;
- (void)reportOnSkipFrameByCodeFilter;
- (void)reportOnShadowFilterTotal;
- (void)reportOnShadowSampleHit;
- (void)reportOnShadowItemFound;
- (void)setEnterSession1970Ts:(unsigned long long)arg1;
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
- (void)handleImageProcessResultFromCodeCapureThread:(id)arg1;
- (void)submitImageProcessResultToDetectorQueue:(id)arg1;
- (void)checkDetectorsTaskInDetectorsQueue;
- (void)workQueue_handleImageResult:(id)arg1;
- (BOOL)handlePreFilterResult:(long long)arg1 scene:(long long)arg2;
- (void)handleImageProcessResultFromUserClicked:(id)arg1;
- (void)callUserSelectWithReqKey:(id)arg1 andExchangeInfo:(id)arg2;
- (void)callGoodsExposed:(id)arg1;
- (void)detector:(id)arg1 didDetectLocalItem:(id)arg2;
- (void)detector:(id)arg1 didUploadLocalItem:(id)arg2;
- (void)detector:(id)arg1 didRetrievalLocalItem:(id)arg2;
- (void)detector:(id)arg1 didAskPreloadForItem:(id)arg2;
- (void)detector:(id)arg1 didFailCgiTaskForItem:(id)arg2 errCode:(unsigned int)arg3;
- (void)detector:(id)arg1 didSvrReTrackWithResult:(BOOL)arg2;
- (void)detector:(id)arg1 didUploadEngineLog:(id)arg2;
- (void)detector:(id)arg1 needSvrTask:(id)arg2;
- (void)detector:(id)arg1 matchTextRuleAsync:(id)arg2 completion:(id /* block */)arg3;
- (void)pushLastImageProcessResult:(id)arg1;
- (id)popLastImageProcessResult;
- (void)clearLastImageProcessResult;
- (id)curCombineReportBaseInfo;
- (void)goodOrTextUploadFinished:(id)arg1 errCode:(unsigned int)arg2;
- (void)textUploadFinished:(id)arg1 errCode:(unsigned int)arg2;
- (id)retrack:(id)arg1;
- (void)uploadGoods:(id)arg1;
- (void)cancelGoods:(id)arg1;
- (BOOL)hasFace:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)enterSession1970Ts;
- (id)variablesLock;
- (void)setVariablesLock:(id)arg1;
- (id)lastImageProcessResult;
- (void)setLastImageProcessResult:(id)arg1;
- (BOOL)isDetectorsWorking;
- (void)setIsDetectorsWorking:(BOOL)arg1;
- (BOOL)isRemoteDetectWorking;
- (void)setIsRemoteDetectWorking:(BOOL)arg1;
- (id)detectorsQueue;
- (void)setDetectorsQueue:(id)arg1;
- (id)detectorsQueueStateLock;
- (void)setDetectorsQueueStateLock:(id)arg1;
- (id)extDetector;
- (void)setExtDetector:(id)arg1;
- (id)tapDetector;
- (void)setTapDetector:(id)arg1;
- (id)textFilter;
- (void)setTextFilter:(id)arg1;
- (id)callRemoteDetectLogic;
- (void)setCallRemoteDetectLogic:(id)arg1;
- (unsigned long long)localDetectFailCount;
- (void)setLocalDetectFailCount:(unsigned long long)arg1;
- (id)combineConfig;
- (void)setCombineConfig:(id)arg1;
- (id)preFilter;
- (void)setPreFilter:(id)arg1;
- (id)engineLogInfo;
- (void)setEngineLogInfo:(id)arg1;
- (long long)enterCombineFlowCount;
- (void)setEnterCombineFlowCount:(long long)arg1;
- (long long)skipFromWorkingCount;
- (void)setSkipFromWorkingCount:(long long)arg1;
- (long long)skipFromStrangyCount;
- (void)setSkipFromStrangyCount:(long long)arg1;
- (long long)skipFromStableDetCount;
- (void)setSkipFromStableDetCount:(long long)arg1;
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
- (long long)goodsDetectEnterCount;
- (void)setGoodsDetectEnterCount:(long long)arg1;
- (long long)goodsDetectCodeFilterCount;
- (void)setGoodsDetectCodeFilterCount:(long long)arg1;
- (long long)goodsDetectFFEEnterCount;
- (void)setGoodsDetectFFEEnterCount:(long long)arg1;
- (long long)goodsDetectShadowFilterTotalCount;
- (void)setGoodsDetectShadowFilterTotalCount:(long long)arg1;
- (long long)goodsDetectShadowSampleHitCount;
- (void)setGoodsDetectShadowSampleHitCount:(long long)arg1;
- (long long)goodsDetectShadowItemFoundCount;
- (void)setGoodsDetectShadowItemFoundCount:(long long)arg1;
- (id)arrFrameIndexDetectedItem;
- (void)setArrFrameIndexDetectedItem:(id)arg1;
- (void).cxx_destruct;
@end
