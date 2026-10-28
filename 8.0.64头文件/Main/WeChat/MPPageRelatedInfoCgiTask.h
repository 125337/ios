@interface MPPageRelatedInfoCgiTask : MMObject <PBMessageObserverDelegate>
{
    NSArray * _urlInfoArr; // +0x8
    NSMutableSet * _pageIdentifierSet; // +0x10
    id /* block */ _completion; // +0x18
}
- (id)initWithUrlInfoArr:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)startTask;
- (void)stopTask;
- (BOOL)isTaskContainUrlInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleAppMsgRelatedResp:(id)arg1;
- (void)callbackTaskFail;
- (void)callbackTaskSuccess:(id)arg1;
- (id)urlInfoArr;
- (void)setUrlInfoArr:(id)arg1;
- (id)pageIdentifierSet;
- (void)setPageIdentifierSet:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
