@interface WCAccountKidsWatchControlLogic : WCAccountBaseControlLogic <KidsWatchMainViewControllerDelegate, KidsWatchNormalLoginViewControllerDelegate, KidsWatchKidsLoginViewControllerDelegate, WCAccountKidsWatchRegisterControlLogicDelegate>
{
    unsigned int _sessionListMaxCount; // +0x30
    ExtDeviceLoginConfirmOKRequest * _cachedConfirmOKRequest; // +0x38
    KidsWatchLoginReportObject * _reportObject; // +0x40
    WCAccountKidsWatchRegisterControlLogic * _registerLogic; // +0x48
}
- (void)startLogic;
- (void)confirmKidsWatchLogin;
- (void)confirmKidsWatchUserLogin:(unsigned long long)arg1 syncChat:(BOOL)arg2;
- (void)confirmKidsWatchKidLogin:(id)arg1;
- (void)kidsWatchConfirmLoginOKWithScene:(int)arg1 kidAccountInfo:(id)arg2;
- (void)kidsWatchConfirmLoginOKWithScene:(int)arg1 kidAccountInfo:(id)arg2 syncChat:(BOOL)arg3;
- (void)kidsWatchConfirmLoginOKWithRequest:(id)arg1;
- (void)cancelKidsWatchLoginConfirm;
- (BOOL)checkViewController:(Class)arg1;
- (void)onLeaveViewController:(id)arg1;
- (void)closeAndExit;
- (void)closeAndExitWithSuccess:(BOOL)arg1;
- (void)nextToNormalLogin;
- (void)nextToKidsRegister;
- (void)nextToLoginHelp;
- (void)nextToUserLoginWithMethod:(unsigned long long)arg1 syncChat:(BOOL)arg2;
- (void)nextToKidsLogin:(id)arg1;
- (void)onFinishedRegisterWithSnapShot:(id)arg1;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (id)cachedConfirmOKRequest;
- (void)setCachedConfirmOKRequest:(id)arg1;
- (unsigned int)sessionListMaxCount;
- (void)setSessionListMaxCount:(unsigned int)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (id)registerLogic;
- (void)setRegisterLogic:(id)arg1;
- (void).cxx_destruct;
@end

