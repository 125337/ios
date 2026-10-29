@interface WCPayJSApiVerifyPayPasswordControlLogic : WCPayControlLogic <WCPayNewPwdViewControllerDelegate, WCPayCheckUserAuthJSApiCgiDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate>
{
    JSEvent * m_jsEvent; // +0x38
    long long m_enWCPayCheckAuthorityScene; // +0x40
    NSString * m_nsAppToken; // +0x48
    NSString * m_nsResultToken; // +0x50
    NSString * m_nsRelationKey; // +0x58
    unsigned int m_verifyPayPwdStatus; // +0x60
    BOOL _m_bHasBiotricAuth; // +0x64
    id <WCPayJSApiVerifyDelegate> _paramDelegate; // +0x68
    WCPayCheckUserAuthJSApiCgi * _checkUserAuthJSApiCgi; // +0x70
    NSData * _m_lastAuthBiotricData; // +0x78
}
- (id)initWithJSEvent:(id)arg1;
- (void)startLogic;
- (void)OnGetCheckUserAuthJSApiResponseOK:(id)arg1;
- (void)OnGetCheckUserAuthJSApiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)stopLogic;
- (void)checkStopLogic;
- (void)OnWCPayNewPwdViewControllerBack;
- (void)verifyPayPwdNext:(id)arg1;
- (void)verifyPayBiotricNext:(id)arg1;
- (void)verifyPayBiotricNext:(id)arg1 signature:(id)arg2 signSrc:(id)arg3;
- (BOOL)isNewPwdLoading;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)onAlertResetPwdCancel:(id)arg1;
- (void)onAlertResetPwdConfirm:(id)arg1;
- (void)OnGetCheckPayPwdByToken:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)arg1 Error:(id)arg2;
- (id)paramDelegate;
- (void)setParamDelegate:(id)arg1;
- (id)checkUserAuthJSApiCgi;
- (void)setCheckUserAuthJSApiCgi:(id)arg1;
- (id)m_lastAuthBiotricData;
- (void)setM_lastAuthBiotricData:(id)arg1;
- (BOOL)m_bHasBiotricAuth;
- (void)setM_bHasBiotricAuth:(BOOL)arg1;
- (void).cxx_destruct;
@end

