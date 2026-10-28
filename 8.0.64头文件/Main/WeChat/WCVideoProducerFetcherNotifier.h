@interface WCVideoProducerFetcherNotifier : NSObject
{
    id /* block */ _creationCompletionBlock; // +0x8
    id /* block */ _preprocCompletionBlock; // +0x10
}
- (id)_init;
- (void)dealloc;
- (void)notifyCreationCompleteWithResult:(BOOL)arg1;
- (void)notifyPreprocCompleteWithResult:(BOOL)arg1 templateSession:(id)arg2;
- (id /* block */)creationCompletionBlock;
- (void)setCreationCompletionBlock:(id /* block */)arg1;
- (id /* block */)preprocCompletionBlock;
- (void)setPreprocCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
