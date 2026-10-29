@interface WCAccountKidsWatchRegisterControlLogic : WCAccountBaseControlLogic <WCAccountBindPhoneForRegCGIDelegate, WCPrivacyPolicyControlLogicDelegate, KidsWatchBaseViewControllerDelegate, KidsWatchKidsRegisterFillFormViewControllerDelegate, KidsWatchKidsRegisterBindConfirmViewControllerDelegate, KidsWatchKidsRegisterDoneViewControllerDelegate, ICdnComMgrExt>
{
    BOOL _isRegistering; // +0x30
    unsigned int _checkPhoneNumberRetryCount; // +0x34
    unsigned int _adjustRet; // +0x38
    WCPrivacyPolicyControlLogic * _privacyPolicyControlLogic; // +0x40
    id /* block */ _privacyPolicyCompletionHandler; // +0x48
    WCAccountBindPhoneForRegCGI * _bindPhoneCGI; // +0x50
    NSString * _headImageUploadClientId; // +0x58
}
+ (id)countryCode;
+ (id)ISOCode;
+ (id)headImageUploadTempPath;
+ (id)headImageUploadClientId:(id)arg1;
- (void)startLogic;
- (void)checkPhoneNumberStatus;
- (void)getRegisterVerifyCode;
- (void)checkRegisterVerifyCode:(id)arg1;
- (void)startRegister;
- (BOOL)uploadHeadImage;
- (void)registerKidsAccount;
- (void)registerKidsAccountWithHeadImage:(id)arg1;
- (id)phoneNumber;
- (BOOL)checkViewController:(Class)arg1;
- (void)backToViewController:(Class)arg1 animated:(BOOL)arg2;
- (id)getRegSessionID;
- (void)onCheckRegPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onLeaveViewController:(id)arg1;
- (void)closeAndExit;
- (void)closeAndExitWithSuccess:(BOOL)arg1;
- (void)nextToPrivacyPolicyWithNickName:(id)arg1 rawPhoneNumber:(id)arg2 andHeadImage:(id)arg3;
- (void)nextToGetVerifyCode;
- (void)nextToCheckVerifyCode:(id)arg1;
- (void)nextToForceBindAndRegister;
- (void)backToRegisterBegin;
- (void)finishRegister;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (BOOL)onErrorHandleLogicAction:(id)arg1;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)privacyPolicyControlLogic;
- (void)setPrivacyPolicyControlLogic:(id)arg1;
- (id /* block */)privacyPolicyCompletionHandler;
- (void)setPrivacyPolicyCompletionHandler:(id /* block */)arg1;
- (id)bindPhoneCGI;
- (void)setBindPhoneCGI:(id)arg1;
- (unsigned int)checkPhoneNumberRetryCount;
- (void)setCheckPhoneNumberRetryCount:(unsigned int)arg1;
- (unsigned int)adjustRet;
- (void)setAdjustRet:(unsigned int)arg1;
- (id)headImageUploadClientId;
- (void)setHeadImageUploadClientId:(id)arg1;
- (BOOL)isRegistering;
- (void)setIsRegistering:(BOOL)arg1;
- (void).cxx_destruct;
@end

