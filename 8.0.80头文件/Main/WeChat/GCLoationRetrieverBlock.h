@interface GCLoationRetrieverBlock : NSObject <LocationRetrieveDelegate>
{
    id /* block */ _completionBlock; // +0x8
    LocationRetriever * _retriever; // +0x10
    GCLoationRetrieverBlock * _selfRef; // +0x18
}
- (id)initWithRetriveComplectionBlock:(id /* block */)arg1;
- (void)retrieve;
- (void)endWithLocation:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)retriever;
- (void)setRetriever:(id)arg1;
- (id)selfRef;
- (void)setSelfRef:(id)arg1;
- (void).cxx_destruct;
@end
