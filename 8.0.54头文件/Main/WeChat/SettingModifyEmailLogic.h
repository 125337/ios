@interface SettingModifyEmailLogic : MMObject <PBMessageObserverDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    NSString * m_unbindOKTip; // +0x8
    id <SettingModifyEmailLogicDelegate> _delegate; // +0x10
    id /* block */ _bindEmailBlock; // +0x18
    id /* block */ _checkUnbindBlock; // +0x20
    id /* block */ _unbindEmailBlock; // +0x28
    id /* block */ _sendVerifyEmailBlock; // +0x30
}
- (void)dealloc;
- (void)bindEmail:(id)arg1 success:(id /* block */)arg2;
- (void)unbindEmail:(id /* block */)arg1;
- (void)sendVerifyEmail:(id /* block */)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)checkUnbind:(id /* block */)arg1;
- (void)handleBindEmailResponse:(id)arg1;
- (void)handleUnBindEmailResponse:(id)arg1;
- (void)handleCheckUnbindResponse:(id)arg1;
- (void)onSetPwd;
- (void)handleSendVerifyEmailResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)CgiFail:(id)arg1;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)bindEmailBlock;
- (void)setBindEmailBlock:(id /* block */)arg1;
- (id /* block */)checkUnbindBlock;
- (void)setCheckUnbindBlock:(id /* block */)arg1;
- (id /* block */)unbindEmailBlock;
- (void)setUnbindEmailBlock:(id /* block */)arg1;
- (id /* block */)sendVerifyEmailBlock;
- (void)setSendVerifyEmailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

