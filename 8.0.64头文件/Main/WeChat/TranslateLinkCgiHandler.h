@interface TranslateLinkCgiHandler : MMObject <PBMessageObserverDelegate>
{
    TranslateLinkParameter * _parameter; // +0x8
    id /* block */ _completion; // +0x10
    id /* block */ _asyncCompletion; // +0x18
    TranslateLinkCgiHandler * _selfRetain; // +0x20
}
+ (void)requestWithParamter:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestWithParamter:(id)arg1 completion:(id /* block */)arg2 asyncCompletion:(id /* block */)arg3;
+ (void)reportRequestTranslateLinkAsync:(BOOL)arg1;
+ (void)removeCachedResultWithParam:(id)arg1;
+ (id)genCacheKeyWithParam:(id)arg1;
+ (void)cacheResult:(id)arg1 withParam:(id)arg2;
+ (id)getCachedResultWithParam:(id)arg1;
- (id)initWithParameter:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)asyncReleaseSelf;
- (void)callbackCompleteFail:(id)arg1 error:(id)arg2;
- (void)callbackCompleteSuccessWithResult:(id)arg1;
- (void)sendRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onTranslateLinkResp:(id)arg1;
- (void)reportTranslateLinkFailWithResult:(id)arg1;
- (void)reportTranslateLinkSuccWithResult:(id)arg1;
- (void)reportSendRequest:(id)arg1;
- (void)reportReceiveResponse:(id)arg1 resp:(id)arg2;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)asyncCompletion;
- (void)setAsyncCompletion:(id /* block */)arg1;
- (id)selfRetain;
- (void)setSelfRetain:(id)arg1;
- (void).cxx_destruct;
@end
