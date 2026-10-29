@interface WebGetWxaTranslateResultCGIHandler : NSObject <PBMessageObserverDelegate>
{
    id /* block */ _completion; // +0x8
    WebGetWxaTranslateResultCGIHandler * _selfRetain; // +0x10
}
+ (void)sendRequestWithSendPack:(id)arg1 wxaContext:(id)arg2 webUrl:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithCompletion:(id /* block */)arg1;
- (void)asyncReleaseSelf;
- (void)dealloc;
- (void)sendRequest:(id)arg1 wxaContext:(id)arg2 webUrl:(id)arg3;
- (void)handleGetWxaTranslatedMsgResp:(id)arg1;
- (void)callbackCompletionIsSuccess:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)selfRetain;
- (void)setSelfRetain:(id)arg1;
- (void).cxx_destruct;
@end
