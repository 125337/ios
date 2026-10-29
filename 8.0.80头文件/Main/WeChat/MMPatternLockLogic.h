@interface MMPatternLockLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, MMPatternLockViewControllerDelegate, MMPatternLockMgrExt>
{
    BOOL _isNeedOut2BizMain; // +0x38
    BOOL _isPresent; // +0x39
    BOOL _isCancel; // +0x3a
    id <MMPatternLockLogicDelegate> _delegate; // +0x40
    long long _curScene; // +0x48
    NSString * _userToken; // +0x50
    NSString * _oldHash; // +0x58
    MMPatternLockViewController * _lockViewController; // +0x60
    MMUINavigationController * _enteranceViewController; // +0x68
}
- (void)cancel;
- (id)initWithPatternLockScene:(long long)arg1 andDelegate:(id)arg2 isPresent:(BOOL)arg3;
- (void)initDataWithPatternScene:(long long)arg1;
- (void)startLogic;
- (BOOL)checkIsPatternLockBlock;
- (void)showWCPayPwdViewController;
- (void)onVerifyPayPwdSuccess;
- (void)showPatternLockViewControllerIsPresnet:(BOOL)arg1;
- (void)handlePatternLockSetup;
- (void)handlePatternLockForget;
- (void)handlePatternLockModify;
- (void)handlePatterLockClose;
- (void)handlePatternLockEnterance;
- (void)handlePatternLockBlock;
- (void)handlePatternLockEnterUnNeedPwd;
- (void)showGiveUpLogicAlert;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnAlertGiveUpLogic;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)onPayPasswordErrorAlertViewDismiss:(id)arg1;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)goBack2EnteranceViewController;
- (void)onPatternLockViewControllerDidOperateCancel;
- (void)onPatternLockViewControllerDidOperateSuccess;
- (void)onPatternLockViewControllerDidOperateError;
- (void)onPatternLockViewControllerDidForgetPwd;
- (void)onPatternLockViewControllerDidErrorBeyondLimit;
- (void)onPatternLockSetupNewWithPatternHash:(id)arg1;
- (void)onPatternLockVerifyPatternLockPwdWithPatternHash:(id)arg1;
- (void)onModifyPatternLockWithNewPatternHash:(id)arg1;
- (void)onClosePatternLockPwdWithPatternHash:(id)arg1;
- (BOOL)isNeedSvrVerify;
- (BOOL)needBlockViewControllerLeftBarbuttonItemInEnteranceScene;
- (void)onSetupNewPatternLockPwdSuccess;
- (void)onSetupNewPatternLockPwdFail;
- (void)onClosePatternLockPwdSuccess;
- (void)onClosePatternLockPwdFail;
- (void)onModifyPatternLockPwdSuccess;
- (void)onModifyPatternLockPwdFail;
- (void)onVerifyPatternLockPwdCorrect;
- (void)onVerifyPatternLockPwdError;
- (void)onVerifyPatternLockPwdFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)curScene;
- (void)setCurScene:(long long)arg1;
- (id)userToken;
- (void)setUserToken:(id)arg1;
- (BOOL)isNeedOut2BizMain;
- (void)setIsNeedOut2BizMain:(BOOL)arg1;
- (id)oldHash;
- (void)setOldHash:(id)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (id)lockViewController;
- (void)setLockViewController:(id)arg1;
- (id)enteranceViewController;
- (void)setEnteranceViewController:(id)arg1;
- (void).cxx_destruct;
@end
