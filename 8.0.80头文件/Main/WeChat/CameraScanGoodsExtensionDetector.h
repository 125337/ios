@interface CameraScanGoodsExtensionDetector : MMObject
{
    BOOL _isActive; // +0x8
    BOOL _useMergeModel; // +0x9
    BOOL _hasReportedFirstDetectCost; // +0xa
    id <CameraScanGoodsExtensionDetectorDelegate> _delegate; // +0x10
    unsigned long long _enterSession1970Ts; // +0x18
    CameraScanGoodsExtensionDetectorConfig * _config; // +0x20
    NSObject<OS_dispatch_queue> * _engineQueue; // +0x28
    void * _focusEngine; // +0x30
    RerankStrategy * _rerankStrategy; // +0x38
    long long _detectByServerFrame; // +0x40
    long long _fullImageTrackID; // +0x48
    long long _fullImageSvrTrackID; // +0x50
    long long _clickImageTrackId; // +0x58
    unsigned long long _sessionId; // +0x60
    MMTimer * _checkQueueTimer; // +0x68
    NSMutableSet * _setTrackIdDetected; // +0x70
    NSMutableDictionary * _dictTrackId2ReqKey; // +0x78
    NSMutableDictionary * _dictTrackId2ExchangeInfo; // +0x80
    unsigned long long _popAndRequestTaskCount; // +0x88
    CSCScanSessionReportFFEInfo * _engineLogInfo; // +0x90
    NSRecursiveLock * _detectedTrackIdLock; // +0x98
    NSString * _lastSvrImageHash; // +0xa0
    long long _hammingDistanceThreshold; // +0xa8
    NSString * _lastSvrPostImageHash; // +0xb0
    long long _hammingDistancePostThreshold; // +0xb8
    CameraScanOpticalFlowTracker * _opticalFlowTracker; // +0xc0
    FFEExperimentManager * _experimentManager; // +0xc8
    NSMutableDictionary * _dictOpticalFlowTrackId2PHash; // +0xd0
    long long _opticalFlowPHashThreshold; // +0xd8
}
+ (void)logInfoFFEConfig:(Config)arg1 prefix:(id)arg2;
- (id)initWithDetectorWorkQueue:(id)arg1 sessionId:(unsigned long long)arg2 config:(id)arg3;
- (void)dealloc;
- (id)needDetectByServerFallback:(id)arg1;
- (id)getPHASHVale:(Mat)arg1;
- (BOOL)isPostSimlarWithLastImage:(id)arg1;
- (BOOL)isSimlarWithLastImage:(id)arg1;
- (void)setupFocusEngine;
- (void)setupRerankStrategy;
- (void)setupCoreMembers;
- (void)setupScanCombineService;
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
- (BOOL)isBoxInCenter:(const TrackObject *)arg1;
- (void)remoteHandleDetectImageProcessResult:(id)arg1 localDetectResult:(id)arg2;
- (void)handleClickImageProcessResult:(id)arg1 tapPoint:(CGPoint)arg2;
- (id)retrackObject:(id)arg1;
- (id)retrackObjectWithFFE:(id)arg1;
- (id)retrackObjectWithOpticalFlow:(id)arg1;
- (id)getOpticalFlowROIPHash:(id)arg1;
- (id)findDuplicateTrackIdByPHash:(id)arg1;
- (BOOL)isNormalizeRectValid:(CGRect)arg1;
- (void)resetNoBoxesCnt;
- (id)curFFEReportInfo;
- (void)handleDetectItemViewModelsWithCGITask:(id)arg1 shouldNotifyUI:(BOOL)arg2;
- (void)processItemViewModelsWithTextFilterAndDedupe:(id)arg1 shouldNotifyUI:(BOOL)arg2;
- (void)processSingleTextOrMixItem:(id)arg1 shouldNotifyUI:(BOOL)arg2;
- (long long)getFirstDetectCost;
- (void)processItemViewModelAfterTextFilter:(id)arg1 shouldNotifyUI:(BOOL)arg2;
- (BOOL)isTrackIdDetected:(id)arg1;
- (void)addTrackIdToDetectedSet:(id)arg1;
- (void)removeAllTranckIds;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)enterSession1970Ts;
- (void)setEnterSession1970Ts:(unsigned long long)arg1;
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
- (long long)detectByServerFrame;
- (void)setDetectByServerFrame:(long long)arg1;
- (long long)fullImageTrackID;
- (void)setFullImageTrackID:(long long)arg1;
- (long long)fullImageSvrTrackID;
- (void)setFullImageSvrTrackID:(long long)arg1;
- (long long)clickImageTrackId;
- (void)setClickImageTrackId:(long long)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (id)checkQueueTimer;
- (void)setCheckQueueTimer:(id)arg1;
- (id)setTrackIdDetected;
- (void)setSetTrackIdDetected:(id)arg1;
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
- (id)lastSvrImageHash;
- (void)setLastSvrImageHash:(id)arg1;
- (long long)hammingDistanceThreshold;
- (void)setHammingDistanceThreshold:(long long)arg1;
- (id)lastSvrPostImageHash;
- (void)setLastSvrPostImageHash:(id)arg1;
- (long long)hammingDistancePostThreshold;
- (void)setHammingDistancePostThreshold:(long long)arg1;
- (BOOL)useMergeModel;
- (void)setUseMergeModel:(BOOL)arg1;
- (id)opticalFlowTracker;
- (void)setOpticalFlowTracker:(id)arg1;
- (id)experimentManager;
- (void)setExperimentManager:(id)arg1;
- (BOOL)hasReportedFirstDetectCost;
- (void)setHasReportedFirstDetectCost:(BOOL)arg1;
- (id)dictOpticalFlowTrackId2PHash;
- (void)setDictOpticalFlowTrackId2PHash:(id)arg1;
- (long long)opticalFlowPHashThreshold;
- (void)setOpticalFlowPHashThreshold:(long long)arg1;
- (void).cxx_destruct;
@end
