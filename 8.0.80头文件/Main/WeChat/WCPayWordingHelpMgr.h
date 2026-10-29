@interface WCPayWordingHelpMgr : MMUserService <MMServiceProtocol, MMPackageDownloadMgrExt, IMMLanguageMgrExt>
{
    unsigned int _lastUpdateTime; // +0x8
    NSMutableDictionary * _serverDefaultWordingDict; // +0x10
    NSMutableDictionary * _validityDynamicWordingDict; // +0x18
    NSMutableDictionary * _phoneNumberDynamicWordingDict; // +0x20
    NSMutableDictionary * _cvvCodeDynamicWordingDict; // +0x28
}
- (id)init;
- (void)initData;
- (void)onLanguageChange;
- (void)receiveWordingContent:(id)arg1;
- (void)tryDownloadWCPayWording;
- (void)onPackageListUpdated:(id)arg1;
- (BOOL)loadAndUpdateWCPayWording;
- (void)saveWCPayWording:(id)arg1;
- (BOOL)writeToFile:(id)arg1 data:(id)arg2;
- (BOOL)isShowPersonalInfo;
- (id)getPersonalInfoWording;
- (BOOL)isShowValidity:(id)arg1;
- (id)getValidityWording:(id)arg1;
- (BOOL)isShowPhoneNumber:(id)arg1;
- (id)getPhoneNumberWordingWithBankCardInfo:(id)arg1;
- (id)getPhoneNumberWording:(id)arg1;
- (BOOL)isShowSmsVerifyCode;
- (id)getSmsVerifyCodeTipWording;
- (id)getSmsVerifyCodeWording;
- (BOOL)isShowCardNumberInputTip;
- (id)getCardNumberInputTipWording;
- (BOOL)isShowCardNumberInputSafetyTip;
- (id)getCardNumberInputSafetyInstructionDescWording;
- (BOOL)isShowCVVCode:(id)arg1;
- (id)getCVVCodeWoring:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (id)serverDefaultWordingDict;
- (void)setServerDefaultWordingDict:(id)arg1;
- (id)validityDynamicWordingDict;
- (void)setValidityDynamicWordingDict:(id)arg1;
- (id)phoneNumberDynamicWordingDict;
- (void)setPhoneNumberDynamicWordingDict:(id)arg1;
- (id)cvvCodeDynamicWordingDict;
- (void)setCvvCodeDynamicWordingDict:(id)arg1;
- (void).cxx_destruct;
@end
