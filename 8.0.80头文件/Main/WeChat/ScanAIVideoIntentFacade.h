@interface ScanAIVideoIntentFacade : NSObject
{
    BOOL _videoIntentRecognitionDisabled; // +0x8
    BOOL _prepared; // +0x9
    BOOL _busy; // +0xa
    BOOL _resetting; // +0xb
    BOOL _invalidated; // +0xc
    BOOL _lastLoggedHadResult; // +0xd
    NSRecursiveLock * _stateLock; // +0x10
    ScanAIIntentStrategyBundle * _strategyBundle; // +0x18
    ScanAIIntentCandidateProductionSession * _productionSession; // +0x20
    unsigned long long _generation; // +0x28
    unsigned long long _completedRequestCount; // +0x30
    long long _lastLoggedIntentType; // +0x38
}
+ (BOOL)isVideoIntentRecognitionDisable;
+ (BOOL)isVideoIntentSelectionRectEnable;
+ (BOOL)isVideoIntentSubtitleEnable;
+ (BOOL)isVideoIntentGetAnimationAlwaysEnable;
+ (double)videoIntentGetAnimationInitialDelay;
- (id)initWithEnabledIntentTypes:(id)arg1;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (BOOL)submitImageBuffer:(__CVBuffer *)arg1 interfaceOrientation:(long long)arg2 completion:(id /* block */)arg3;
- (void)reset;
- (void)invalidate;
- (void)completeRequestWithGeneration:(unsigned long long)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (id)stateLock;
- (void)setStateLock:(id)arg1;
- (id)strategyBundle;
- (void)setStrategyBundle:(id)arg1;
- (id)productionSession;
- (void)setProductionSession:(id)arg1;
- (BOOL)videoIntentRecognitionDisabled;
- (void)setVideoIntentRecognitionDisabled:(BOOL)arg1;
- (BOOL)prepared;
- (void)setPrepared:(BOOL)arg1;
- (BOOL)busy;
- (void)setBusy:(BOOL)arg1;
- (BOOL)resetting;
- (void)setResetting:(BOOL)arg1;
- (BOOL)invalidated;
- (void)setInvalidated:(BOOL)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (unsigned long long)completedRequestCount;
- (void)setCompletedRequestCount:(unsigned long long)arg1;
- (BOOL)lastLoggedHadResult;
- (void)setLastLoggedHadResult:(BOOL)arg1;
- (long long)lastLoggedIntentType;
- (void)setLastLoggedIntentType:(long long)arg1;
- (void).cxx_destruct;
@end
