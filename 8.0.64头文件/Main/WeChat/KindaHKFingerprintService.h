@interface KindaHKFingerprintService : NSObject <SoterUpdateMPAuthKeyCgiDelegate, MMKHKFingerPrintService>
{
    NSString * _authResaon; // +0x8
    NSString * _authChallenge; // +0x10
    SoterSignHelper * _soterSignHelper; // +0x18
    SoterUpdateMPAuthKeyCgi * _soterUpdateKeyCgi; // +0x20
    MMVoidStringStringStringCallback * _succCallback; // +0x28
    MMVoidCallback * _failCallback; // +0x30
    MMVoidCallback * _cancelCallback; // +0x38
    MMVoidCallback * _forgetPwdCallback; // +0x40
}
- (long long)supportBioType;
- (void)showBioAuthViewImpl:(id)arg1 challenge:(id)arg2 successEvent:(id)arg3 failEvent:(id)arg4 cancelEvent:(id)arg5 forgetPwdEvent:(id)arg6;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (void)handleAuthSucc:(id)arg1;
- (id)resultJsonWithChallenge:(id)arg1;
- (void)handleAuthFallback;
- (void)handleAuthCancel;
- (void)handleAuthFail;
- (void)releaseService;
- (long long)getFingerType;
- (id)getFingerPosition;
- (void)showFaceIdAuthDialogImpl:(id)arg1 success:(id)arg2 fail:(id)arg3 cancel:(id)arg4;
- (void)authenticateImpl:(id)arg1 challenge:(id)arg2 extra:(id)arg3 success:(id)arg4 fail:(id)arg5 change2Pwd:(id)arg6 showErrThenChange2Pwd:(id)arg7;
- (id)authResaon;
- (void)setAuthResaon:(id)arg1;
- (id)authChallenge;
- (void)setAuthChallenge:(id)arg1;
- (id)soterSignHelper;
- (void)setSoterSignHelper:(id)arg1;
- (id)soterUpdateKeyCgi;
- (void)setSoterUpdateKeyCgi:(id)arg1;
- (id)succCallback;
- (void)setSuccCallback:(id)arg1;
- (id)failCallback;
- (void)setFailCallback:(id)arg1;
- (id)cancelCallback;
- (void)setCancelCallback:(id)arg1;
- (id)forgetPwdCallback;
- (void)setForgetPwdCallback:(id)arg1;
- (void).cxx_destruct;
@end
