@interface ScanAIIntentCandidateProductionSession : NSObject
{
    BOOL _resetting; // +0x8
    BOOL _ffeEngineReady; // +0x9
    BOOL _faceBranchReady; // +0xa
    long long _mode; // +0x10
    ScanAIIntentStrategyBundle * _strategyBundle; // +0x18
    NSSet * _enabledIntentTypes; // +0x20
    NSObject<OS_dispatch_queue> * _orchestrationQueue; // +0x28
    NSObject<OS_dispatch_queue> * _ffeQueue; // +0x30
    NSObject<OS_dispatch_queue> * _faceQueue; // +0x38
    NSRecursiveLock * _stateLock; // +0x40
    long long _state; // +0x48
    NSString * _ffeUnavailableReasonCode; // +0x50
    NSString * _faceUnavailableReasonCode; // +0x58
    unsigned long long _generation; // +0x60
    unsigned long long _completedBatchCount; // +0x68
    NSMutableArray * _prepareCompletions; // +0x70
    NSMutableDictionary * _textFilterResultCache; // +0x78
    CameraScanTextFilter * _textFilter; // +0x80
    ScanAIIntentRequestContext * _activeContext; // +0x88
    void * _focusEngine; // +0x90
    YTFaceFastDetector * _faceDetector; // +0x98
}
+ (CGRect)validNormalizedRect:(CGRect)arg1;
+ (double)clippedUnitValue:(double)arg1;
+ (id)productionErrorWithCode:(long long)arg1 reasonCode:(id)arg2;
+ (void)setReasonCode:(id)arg1 output:(id *)arg2;
- (id)initWithMode:(long long)arg1 strategyBundle:(id)arg2;
- (void)dealloc;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)startPrepare;
- (BOOL)shouldContinuePreparing;
- (void)completePrepareWithFFEReady:(BOOL)arg1 faceReady:(BOOL)arg2 ffeReasonCode:(id)arg3 faceReasonCode:(id)arg4;
- (BOOL)prepareSuccessWithFFEReady:(BOOL)arg1 faceReady:(BOOL)arg2;
- (BOOL)shouldLazyInitializeFaceDetector;
- (void)resetWithCompletion:(id /* block */)arg1;
- (void)invalidate;
- (void)produceCandidatesForInput:(id)arg1 completion:(id /* block */)arg2;
- (void)beginCandidateProductionForInput:(id)arg1 completion:(id /* block */)arg2;
- (void)launchCandidateBranchesForContext:(id)arg1;
- (void)handleFFEBranchResult:(id)arg1 context:(id)arg2;
- (void)handleFaceBranchResult:(id)arg1 context:(id)arg2;
- (void)handleTextProposal:(id)arg1 context:(id)arg2;
- (void)handleTextFilterResult:(id)arg1 proposal:(id)arg2 context:(id)arg3 costMS:(double)arg4;
- (void)tryCompleteContext:(id)arg1;
- (void)resolveWinner:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveWinnerOnOrchestrationQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)finishContext:(id)arg1;
- (BOOL)isContextCurrent:(id)arg1;
- (BOOL)setupFFEEngineWithReasonCode:(id *)arg1;
- (void)destroyFFEEngine;
- (id)ffeBranchResultForFrame:(id)arg1;
- (id)retrackIdForFaceRect:(CGRect)arg1 frame:(id)arg2;
- (BOOL)setupFaceDetectorWithReasonCode:(id *)arg1;
- (id)faceBranchResultForFrame:(id)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)strategyBundle;
- (void)setStrategyBundle:(id)arg1;
- (id)enabledIntentTypes;
- (void)setEnabledIntentTypes:(id)arg1;
- (id)orchestrationQueue;
- (void)setOrchestrationQueue:(id)arg1;
- (id)ffeQueue;
- (void)setFfeQueue:(id)arg1;
- (id)faceQueue;
- (void)setFaceQueue:(id)arg1;
- (id)stateLock;
- (void)setStateLock:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (BOOL)resetting;
- (void)setResetting:(BOOL)arg1;
- (BOOL)ffeEngineReady;
- (void)setFfeEngineReady:(BOOL)arg1;
- (BOOL)faceBranchReady;
- (void)setFaceBranchReady:(BOOL)arg1;
- (id)ffeUnavailableReasonCode;
- (void)setFfeUnavailableReasonCode:(id)arg1;
- (id)faceUnavailableReasonCode;
- (void)setFaceUnavailableReasonCode:(id)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (unsigned long long)completedBatchCount;
- (void)setCompletedBatchCount:(unsigned long long)arg1;
- (id)prepareCompletions;
- (void)setPrepareCompletions:(id)arg1;
- (id)textFilterResultCache;
- (void)setTextFilterResultCache:(id)arg1;
- (id)textFilter;
- (void)setTextFilter:(id)arg1;
- (id)activeContext;
- (void)setActiveContext:(id)arg1;
- (void *)focusEngine;
- (void)setFocusEngine:(void *)arg1;
- (id)faceDetector;
- (void)setFaceDetector:(id)arg1;
- (void).cxx_destruct;
@end
