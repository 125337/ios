@interface PhoneAuthManagePhoneLogic : MMObject <PBMessageObserverDelegate, MMTipsViewControllerDelegate>
{
    id <PhoneAuthManagePhoneLogicDelegate> _delegate; // +0x8
    id <PhoneAuthManagePhoneLogicOperationDelegate> _operationDelegate; // +0x10
    NSString * _appid; // +0x18
}
- (void)dealloc;
- (void)sendConfirmCodeToPhoneNumber:(id)arg1;
- (void)verifyCode:(id)arg1 withPhoneNumber:(id)arg2 saveFlag:(BOOL)arg3;
- (void)addPhoneToSvrUsageList:(id)arg1;
- (void)deletePhoneFromSvrUsageList:(id)arg1;
- (void)updatePhoneToSvrWithPhoneNumber:(id)arg1 type:(unsigned int)arg2;
- (void)notifySendVerifyCodeFailMsg:(id)arg1;
- (void)notifyCheckVerifyCodeFailMsg:(id)arg1;
- (void)notifySendVerifyCodeSuccess;
- (void)notifyCheckVerifyCodeSuccess;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSendCustomPhoneVerifyCodeResponse:(id)arg1;
- (void)handleCheckVerifyCodeResponse:(id)arg1;
- (void)handleUpdateUserPhoneResponse:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (void).cxx_destruct;
@end

