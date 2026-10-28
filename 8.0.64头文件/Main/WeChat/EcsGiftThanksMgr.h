@interface EcsGiftThanksMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failureBlock; // +0x10
    id /* block */ _sendResultCallback; // +0x18
}
- (void)requestThanksInfo:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)reportSendThanks:(id)arg1 resultCallback:(id /* block */)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRequestThanksInfoCallback:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (id /* block */)sendResultCallback;
- (void)setSendResultCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
