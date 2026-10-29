@interface MMForgetPasswordHandler : PrivateCommonApiHandler <WCAccountForgetPasswordControlLogicDelegate>
{
    WCAccountForgetPasswordControlLogic * _forgetPwdLogic; // +0x8
}
- (void)handleCommonApiWithParams:(id)arg1;
- (void)onWCAccountForgetPasswordControlLogicStop:(id)arg1;
- (void)onWCAccountForgetPasswordControlLogic:(id)arg1 continueWithTicket:(id)arg2 ticketType:(unsigned int)arg3 handled:(BOOL *)arg4;
- (id)forgetPwdLogic;
- (void)setForgetPwdLogic:(id)arg1;
- (void).cxx_destruct;
@end
