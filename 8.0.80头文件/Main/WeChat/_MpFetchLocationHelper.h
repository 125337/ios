@interface _MpFetchLocationHelper : NSObject <LocationRetrieveDelegate>
{
    LocationRetriever * _retriever; // +0x8
    id _retainCycle; // +0x10
    id /* block */ _completion; // +0x18
}
- (void)start;
- (void)finishWithInfo:(id)arg1 error:(id)arg2;
- (id)infoFromLocation:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (id)retriever;
- (void)setRetriever:(id)arg1;
- (id)retainCycle;
- (void)setRetainCycle:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
