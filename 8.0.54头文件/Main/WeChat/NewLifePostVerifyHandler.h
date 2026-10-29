@interface NewLifePostVerifyHandler : NewLifeActionHandler
{
    SecurityInfoAuthrizeLogic * _authLogic; // +0x8
}
- (void)handleRequest:(id)arg1;
- (void)checkWxPay:(id)arg1 response:(id)arg2 contact:(id)arg3;
- (BOOL)shouldShowWxPayAlert:(id)arg1;
- (id)authLogic;
- (void)setAuthLogic:(id)arg1;
- (void).cxx_destruct;
@end

