@interface WCSetPasswordDoorKeeper : NSObject <PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    BOOL _isNewFlow; // +0x8
    PasswordLogic * _passwordLogic; // +0x10
    NSObject * _selfHolder; // +0x18
    WCAccountSetPasswordViewController * _setPasswordVC; // +0x20
    MMUIViewController * _contentVC; // +0x28
}
- (id)pwdModifyOptService;
- (void)tryGoToSetPasswordPageFrom:(id)arg1;
- (void)checkIfshowSetPasswordPage:(BOOL)arg1;
- (void)showSetPasswordPage:(BOOL)arg1;
- (void)passwordLogicCancel:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicPause:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (id)passwordLogic;
- (void)setPasswordLogic:(id)arg1;
- (id)selfHolder;
- (void)setSelfHolder:(id)arg1;
- (id)setPasswordVC;
- (void)setSetPasswordVC:(id)arg1;
- (id)contentVC;
- (void)setContentVC:(id)arg1;
- (BOOL)isNewFlow;
- (void)setIsNewFlow:(BOOL)arg1;
- (void).cxx_destruct;
@end
