@interface CameraScanGoodsExtensionDetector : MMObject <CameraScanGoodsExtCGITaskDelegate>
{
    BOOL _isActive; // +0x8
    id <CameraScanGoodsExtensionDetectorDelegate> _delegate; // +0x10
    CameraScanGoodsExtensionDetectorConfig * _config; // +0x18
    NSObject<OS_dispatch_queue> * _engineQueue; // +0x20
    void * _focusEngine; // +0x28
    RerankStrategy * _rerankStrategy; // +0x30
    long long _fullImageTrackID; // +0x38
    unsigned long long _sessionId; // +0x40
    MMTimer * _checkQueueTimer; // +0x48
    NSMutableSet * _setTrackIdDetected; // +0x50
    NSMutableArray * _arrTaskActiveRecord; // +0x58
    NSMutableArray * _arrWaitingCGITask; // +0x60
    NSMutableDictionary * _dictActiveCGITasks; // +0x68
    NSMutableDictionary * _dictTrackId2ReqKey; // +0x70
    NSMutableDictionary * _dictTrackId2ExchangeInfo; // +0x78
    unsigned long long _popAndRequestTaskCount; // +0x80
    CSCScanSessionReportFFEInfo * _engineLogInfo; // +0x88
    NSRecursiveLock * _detectedTrackIdLock; // +0x90
}
+ (void)logInfoFFEConfig:(Config)arg1 prefix:(id)arg2;
- (id)initWithDetectorWorkQueue:(id)arg1 sessionId:(unsigned long long)arg2 config:(id)arg3;
- (void)dealloc;
- (void)setupFocusEngine;
- (void)setupRerankStrategy;
- (void)setupCoreMembers;
- (void)clearCoreMembers;
- (void)destroyCoreMembers;
- (void)becomeActive;
- (void)resignActive;
- (void)renew;
- (void)clear;
- (void)stopProcessIncomingResult;
- (void)recoverProcessIncomingResult;
- (void)callDetectLocalItemInMainThread:(id)arg1;
- (id)handleDetectImageProcessResult:(id)arg1;
- (void)remoteHandleDetectImageProcessResult:(id)arg1 localDetectResult:(id)arg2;
- (void)retrackRemoteObject:(id)arg1 completion:(id /* block */)arg2;
- (void)resetNoBoxesCnt;
- (id)curFFEReportInfo;
- (void)handleResumeDetectedLocalItems:(id)arg1;
- (void)handleDetectItemViewModelsWithCGITask:(id)arg1 shouldNotifyUI:(BOOL)arg2;
- (void)pushCGITaskToQueue:(id)arg1;
- (void)checkQueue;
- (void)cancelTaskWithTaskId:(unsigned int)arg1;
- (void)cancelAllDetectTask;
- (unsigned long long)headRequestingTaskDurantionBeforeNow;
- (unsigned long long)maxRequestingTaskCount;
- (unsigned long long)minTaskRequestingInterval;
- (void)onCameraScanGoodsExtCGITaskFailed:(id)arg1 errCode:(unsigned int)arg2;
- (void)onCameraScanGoodsExtCGITaskSuccess:(id)arg1;
- (void)onCameraScanGoodsExtCGITaskAskForPreload:(id)arg1;
- (void)onCameraScanGoodsExtCGITaskUploadSuccess:(id)arg1;
- (void)onCameraScanGoodsExtCGITaskExchangedSuccess:(id)arg1;
- (void)callTrackGoodsWhenExtCGITaskDidReceiveUploadResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)onCameraScanGoodsExtCGITaskRetrackFinish:(id)arg1 result:(BOOL)arg2;
- (double)uploadTimeout;
- (double)exchangeTimeout;
- (unsigned long long)uploadImageDataEncodeType;
- (BOOL)enableMotionDetectors;
- (BOOL)isTrackIdDetected:(id)arg1;
- (void)addTrackIdToDetectedSet:(id)arg1;
- (void)removeAllTranckIds;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)engineQueue;
- (void)setEngineQueue:(id)arg1;
- (void *)focusEngine;
- (void)setFocusEngine:(void *)arg1;
- (RerankStrategy *)rerankStrategy;
- (void)setRerankStrategy:(RerankStrategy *)arg1;
- (long long)fullImageTrackID;
- (void)setFullImageTrackID:(long long)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (id)checkQueueTimer;
- (void)setCheckQueueTimer:(id)arg1;
- (id)setTrackIdDetected;
- (void)setSetTrackIdDetected:(id)arg1;
- (id)arrTaskActiveRecord;
- (void)setArrTaskActiveRecord:(id)arg1;
- (id)arrWaitingCGITask;
- (void)setArrWaitingCGITask:(id)arg1;
- (id)dictActiveCGITasks;
- (void)setDictActiveCGITasks:(id)arg1;
- (id)dictTrackId2ReqKey;
- (void)setDictTrackId2ReqKey:(id)arg1;
- (id)dictTrackId2ExchangeInfo;
- (void)setDictTrackId2ExchangeInfo:(id)arg1;
- (unsigned long long)popAndRequestTaskCount;
- (void)setPopAndRequestTaskCount:(unsigned long long)arg1;
- (id)engineLogInfo;
- (void)setEngineLogInfo:(id)arg1;
- (id)detectedTrackIdLock;
- (void)setDetectedTrackIdLock:(id)arg1;
- (void).cxx_destruct;
@end

