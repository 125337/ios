@interface WCAccountThirdAppRegisterControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, MMImageLoaderObserver, WCBaseControlMgrExt, MMKernelExt, PBMessageObserverDelegate>
{
    BOOL m_hasStartDownloadImage; // +0x30
    BOOL m_fromLoginToReg; // +0x31
    unsigned int m_lastPhoneRegLogicTag; // +0x34
}
+ (void)ReportThirdAppLoginRegWithType:(int)arg1 action:(unsigned long long)arg2;
- (void)dealloc;
- (void)startLogic;
- (void)callSuccessLogic;
- (void)callGotoLoginLogicWithToken:(id)arg1;
- (void)callFailLogicWithErrMsg:(id)arg1;
- (void)callCancelLogic;
- (void)reportAction:(unsigned long long)arg1;
- (void)startFacebookAuth;
- (void)onFBDidNotLogin:(BOOL)arg1;
- (void)onLoginFacebookBegan:(id)arg1;
- (void)startThirdVerifyToken:(id)arg1;
- (void)handleThirdAppVerifyReturn:(id)arg1;
- (void)startGetThirdAppInfo;
- (void)startDownloadHeadImageWithUrl:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewRegOK;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
@end

