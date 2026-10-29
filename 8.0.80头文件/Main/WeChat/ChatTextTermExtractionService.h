@interface ChatTextTermExtractionService : MMUserService <MMServiceProtocol>
{
    BOOL _acceptingRequests; // +0x8
    NSLock * _stateLock; // +0x10
    NSObject<OS_dispatch_queue> * _inferenceQueue; // +0x18
    XHotwords * _hotwords; // +0x20
    unsigned long long _lifecycleGeneration; // +0x28
    unsigned long long _streamingGeneration; // +0x30
}
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceClearMemoryCacheInBackground;
- (void)prewarmModel;
- (void)extractText:(id)arg1 completion:(id /* block */)arg2;
- (void)extractTexts:(id)arg1 completion:(id /* block */)arg2;
- (void)extractTexts:(id)arg1 timeoutMS:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (unsigned long long)extractTexts:(id)arg1 resultHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)cancelStreamingExtractionForGeneration:(unsigned long long)arg1;
- (id)hotwordCandidatesWithReadyModelOnInferenceQueueFromText:(id)arg1 error:(id *)arg2;
- (id)prepareText:(id)arg1 generation:(unsigned long long *)arg2;
- (id)validationErrorForText:(id)arg1;
- (id)extractionResultForInputText:(id)arg1 inputIndex:(unsigned long long)arg2;
- (id)extractionResultsForTexts:(id)arg1 generation:(unsigned long long)arg2;
- (id)extractionResultsForTexts:(id)arg1 generation:(unsigned long long)arg2 timeoutMS:(unsigned long long)arg3 startTimeMS:(unsigned long long)arg4;
- (void)populateExtractionResult:(id)arg1 generation:(unsigned long long)arg2;
- (BOOL)populateExtractionResult:(id)arg1 generation:(unsigned long long)arg2 timeoutMS:(unsigned long long)arg3 startTimeMS:(unsigned long long)arg4;
- (BOOL)populateExtractionResult:(id)arg1 generation:(unsigned long long)arg2 deadlineEnabled:(BOOL)arg3 timeoutMS:(unsigned long long)arg4 startTimeMS:(unsigned long long)arg5;
- (BOOL)populateExtractionResult:(id)arg1 generation:(unsigned long long)arg2 deadlineEnabled:(BOOL)arg3 timeoutMS:(unsigned long long)arg4 startTimeMS:(unsigned long long)arg5 streamingGeneration:(unsigned long long)arg6;
- (id)textFragmentsForText:(id)arg1;
- (BOOL)shouldShareModelError:(id)arg1;
- (id)resultByInvalidatingResult:(id)arg1 error:(id)arg2;
- (id)resultsByInvalidatingResults:(id)arg1 error:(id)arg2;
- (id)ensureHotwordsModelReadyOnInferenceQueue;
- (id)ensureHotwordsModelReadyOnInferenceQueueCheckingResourceIfUnavailable:(BOOL)arg1;
- (XHotwords *)createHotwordsOnInferenceQueueCheckingResourceIfUnavailable:(BOOL)arg1 error:(id *)arg2;
- (void)enqueueHotwordsModelRelease;
- (void)releaseHotwordsModelOnInferenceQueue;
- (id)extractionCandidatesFromHotwordResults:(const void *)arg1 error:(id *)arg2;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void)completeWithExtractionResult:(id)arg1 generation:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)completeWithExtractionResults:(id)arg1 generation:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)publishStreamingResult:(id)arg1 generation:(unsigned long long)arg2 streamingGeneration:(unsigned long long)arg3 resultHandler:(id /* block */)arg4;
- (void)completeStreamingExtraction:(id /* block */)arg1;
- (BOOL)isStreamingValidForGeneration:(unsigned long long)arg1;
- (BOOL)isLifecycleValidForGeneration:(unsigned long long)arg1;
- (id)lifecycleErrorForGeneration:(unsigned long long)arg1;
- (id)stateLock;
- (void)setStateLock:(id)arg1;
- (id)inferenceQueue;
- (void)setInferenceQueue:(id)arg1;
- (XHotwords *)hotwords;
- (void)setHotwords:(XHotwords *)arg1;
- (BOOL)acceptingRequests;
- (void)setAcceptingRequests:(BOOL)arg1;
- (unsigned long long)lifecycleGeneration;
- (void)setLifecycleGeneration:(unsigned long long)arg1;
- (unsigned long long)streamingGeneration;
- (void)setStreamingGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
