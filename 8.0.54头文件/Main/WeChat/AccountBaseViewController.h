@interface AccountBaseViewController : MMUIViewController <PBMessageObserverDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    unsigned int m_uiAccountID; // +0x68
    NSString * m_unbindOKTip; // +0x70
}
- (void)onCheckUnbindFail;
- (void)checkUnbindAccount;
- (void)prepareToUnbindAccount:(unsigned int)arg1;
- (void)onUnBindAccount;
- (void)OnUnBindAccountOKConfirm;
- (void)OnUnBindAccountOK;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)onSetPwd;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
@end

