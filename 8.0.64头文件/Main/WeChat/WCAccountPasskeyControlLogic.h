@interface WCAccountPasskeyControlLogic : WCAccountBaseControlLogic <WCAccountManualAuthControlLogicDelegate>
{
    WCAccountManualAuthControlLogic * _manualAuthLogic; // +0x30
    PasskeyEntitlementProvider * _passkeyProvider; // +0x38
    PassKeyVerifyInfo * _passkeyVerifyInfo; // +0x40
    NSString * _username; // +0x48
    NSString * _randomPwd; // +0x50
    NSString * _reportSessionId; // +0x58
}
- (void)startLogic;
- (void)requestChallenge;
- (void)signInWithChallenge:(id)arg1 preferImmediatelyAvailableCredentials:(BOOL)arg2 ignoreFail:(BOOL)arg3;
- (void)showNoCredentialsPageSheetWithChallenge:(id)arg1;
- (unsigned int)cgiRequestScene;
- (void)passkeyAuthorize;
- (void)passkeyAuthorizaWithIDCRedirectCount:(unsigned long long)arg1;
- (void)startManualAuth;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)reportAction:(unsigned long long)arg1;
- (void)reportSysAuthEndWithResult:(int)arg1;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2;
- (id)manualAuthLogic;
- (void)setManualAuthLogic:(id)arg1;
- (id)passkeyProvider;
- (void)setPasskeyProvider:(id)arg1;
- (id)passkeyVerifyInfo;
- (void)setPasskeyVerifyInfo:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)randomPwd;
- (void)setRandomPwd:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (void).cxx_destruct;
@end
