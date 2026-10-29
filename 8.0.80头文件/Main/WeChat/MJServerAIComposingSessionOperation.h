@interface MJServerAIComposingSessionOperation : MJTemplateSessionOperation
{
    MJServerAITemplateComposingSession * _session; // +0x8
}
- (id)initWithSession:(id)arg1 sessionKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)boundTemplateId;
- (void)start;
- (void)_performOperation;
- (void)_completeWithError:(id)arg1;
- (id)session;
- (void).cxx_destruct;
@end
