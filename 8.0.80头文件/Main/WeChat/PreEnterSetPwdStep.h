@interface PreEnterSetPwdStep : PreEnterBaseStep <PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    CMessageWrap * m_wrapMsg; // +0x18
    PasswordLogic * m_setPasswdLogic; // +0x20
}
- (id)initWithMsg:(id)arg1;
- (void)startStep;
- (void)unknownFail:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)showSetPasswordView;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void).cxx_destruct;
@end
