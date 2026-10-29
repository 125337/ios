@interface WCAccountForgetPasswordControlLogic : WCAccountBaseControlLogic <PasswordLogicDelegate, WCAccountBindPhoneControlLogicDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    BOOL _shouldQueryHasPasswd; // +0x30
    id <WCAccountForgetPasswordControlLogicDelegate> _delegate; // +0x38
    PasswordLogic * _passwordLogic; // +0x40
    WCAccountBindPhoneControlLogic * _bindLogic; // +0x48
}
- (void)startLogic;
- (void)startForgetPasswordLogic;
- (void)stopLogic;
- (void)resetBindLogic;
- (void)checkHaveSetPassword:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldQueryHasPasswd;
- (void)setShouldQueryHasPasswd:(BOOL)arg1;
- (id)passwordLogic;
- (void)setPasswordLogic:(id)arg1;
- (id)bindLogic;
- (void)setBindLogic:(id)arg1;
- (void).cxx_destruct;
@end

