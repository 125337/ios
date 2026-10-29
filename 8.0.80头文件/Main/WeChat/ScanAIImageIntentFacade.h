@interface ScanAIImageIntentFacade : NSObject
{
    BOOL _prepared; // +0x8
    BOOL _busy; // +0x9
    BOOL _invalidated; // +0xa
    NSRecursiveLock * _stateLock; // +0x10
    ScanAIIntentStrategyBundle * _strategyBundle; // +0x18
    ScanAIIntentCandidateProductionSession * _productionSession; // +0x20
    unsigned long long _generation; // +0x28
}
+ (BOOL)isImageIntentRecognitionEnabled;
- (id)initWithEnabledIntentTypes:(id)arg1;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (BOOL)detectImage:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (void)completeRequestWithGeneration:(unsigned long long)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (id)stateLock;
- (void)setStateLock:(id)arg1;
- (id)strategyBundle;
- (void)setStrategyBundle:(id)arg1;
- (id)productionSession;
- (void)setProductionSession:(id)arg1;
- (BOOL)prepared;
- (void)setPrepared:(BOOL)arg1;
- (BOOL)busy;
- (void)setBusy:(BOOL)arg1;
- (BOOL)invalidated;
- (void)setInvalidated:(BOOL)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
