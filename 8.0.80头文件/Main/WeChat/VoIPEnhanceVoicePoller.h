@interface VoIPEnhanceVoicePoller : NSObject
{
    BOOL _queryInFlight; // +0x8
    id /* block */ _ambientQuery; // +0x10
    id /* block */ _matchedHandler; // +0x18
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x20
    NSObject<OS_dispatch_source> * _timer; // +0x28
    unsigned long long _generation; // +0x30
}
+ (id)experimentConfig;
+ (BOOL)isExperimentEnabled;
- (id)initWithAmbientQuery:(id /* block */)arg1;
- (void)dealloc;
- (void)startWithMatchedHandler:(id /* block */)arg1;
- (void)stop;
- (void)pollWithGeneration:(unsigned long long)arg1;
- (long long)configuredShowCount;
- (void)stopOnWorkerQueue;
- (id /* block */)ambientQuery;
- (void)setAmbientQuery:(id /* block */)arg1;
- (id /* block */)matchedHandler;
- (void)setMatchedHandler:(id /* block */)arg1;
- (id)workerQueue;
- (void)setWorkerQueue:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)queryInFlight;
- (void)setQueryInFlight:(BOOL)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
