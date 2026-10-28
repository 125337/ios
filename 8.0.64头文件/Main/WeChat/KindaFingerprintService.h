@interface KindaFingerprintService : NSObject <WCPayBioPayV2UpdateAuthKeyCgiDelegate, MMKFingerprintService>
{
    WCPayBioPayV2UpdateAuthKeyCgi * _updateAuthKeyCgi; // +0x8
}
- (void)tryInitBiometricImpl:(id)arg1;
- (long long)supportBioType;
- (void)authenticateImpl:(id)arg1 challenge:(id)arg2 success:(id)arg3 fail:(id)arg4 change2Pwd:(id)arg5 showErrThenChange2Pwd:(id)arg6;
- (void)releaseService;
- (void)reGenFpRsaKeyImpl:(BOOL)arg1 fid:(int)arg2 reqKey:(id)arg3 success:(id)arg4 fail:(id)arg5;
- (void)showFaceIdAuthDialogImpl:(id)arg1 success:(id)arg2 fail:(id)arg3 cancel:(id)arg4;
- (void)userCancel;
- (void)setNeedChangeAuthKey:(BOOL)arg1;
- (BOOL)isNeedChangeAuthKey;
- (void)changeAuthKey:(BOOL)arg1 isPayOk:(BOOL)arg2 pwd:(id)arg3;
- (void)showBioAuthViewImpl:(id)arg1 challenge:(id)arg2 successEvent:(id)arg3 failEvent:(id)arg4 cancelEvent:(id)arg5 forgetPwdEvent:(id)arg6;
- (void)authenticateImpl:(id)arg1 challenge:(id)arg2 extra:(id)arg3 success:(id)arg4 fail:(id)arg5 change2Pwd:(id)arg6 showErrThenChange2Pwd:(id)arg7;
- (id)getFingerPosition;
- (long long)getFingerType;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiResponseOK:(id)arg1;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)updateAuthKeyCgi;
- (void)setUpdateAuthKeyCgi:(id)arg1;
- (void).cxx_destruct;
@end
