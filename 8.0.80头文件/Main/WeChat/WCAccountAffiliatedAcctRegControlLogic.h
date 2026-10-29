@interface WCAccountAffiliatedAcctRegControlLogic : WCAccountBaseControlLogic <WCAccountAffiliatedAcctDelegate, WCPrivacyPolicyControlLogicDelegate, MMWebViewDelegate>
{
    BOOL _withoutBeginVC; // +0x30
    int _affRegScene; // +0x34
    id /* block */ _onRegSuccessBlock; // +0x38
    WCPrivacyPolicyControlLogic * _privacyPolicyLogic; // +0x40
    NSString * _clientSessionId; // +0x48
}
- (void)startLogic;
- (void)openWebViewWithUrl:(id)arg1 presentModal:(BOOL)arg2;
- (void)precheckAffiliatedAcct;
- (void)showPrivacyPolicy;
- (void)regAffiliatedAcctWithHeadImageTaskInfo:(id)arg1 headImgData:(id)arg2;
- (BOOL)uploadHeadImgIfNeeded;
- (void)stopLogic;
- (void)reportWithPage:(unsigned int)arg1 action:(unsigned int)arg2 module:(unsigned int)arg3;
- (void)onErrorHandleLogicDone;
- (void)nextToRegUseNewPhone;
- (void)nextToH5;
- (void)nextToSetPassword;
- (void)nextToRegister;
- (void)end;
- (void)onShowHelpPage;
- (void)onLeaveViewController:(id)arg1;
- (BOOL)shouldKeepOldLogic;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)webViewDidReturn:(id)arg1;
- (id /* block */)onRegSuccessBlock;
- (void)setOnRegSuccessBlock:(id /* block */)arg1;
- (id)privacyPolicyLogic;
- (void)setPrivacyPolicyLogic:(id)arg1;
- (id)clientSessionId;
- (void)setClientSessionId:(id)arg1;
- (int)affRegScene;
- (void)setAffRegScene:(int)arg1;
- (BOOL)withoutBeginVC;
- (void)setWithoutBeginVC:(BOOL)arg1;
- (void).cxx_destruct;
@end
