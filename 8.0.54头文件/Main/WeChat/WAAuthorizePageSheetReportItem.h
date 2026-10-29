@interface WAAuthorizePageSheetReportItem : WAReportBaseItem
{
    unsigned int _isShowUserPrivacyUserAgreementView; // +0x8
    unsigned int _isUserPrivacyUserAgreementChecked; // +0xc
    unsigned int _triggeredUserUserAgreementAlert; // +0x10
    unsigned int _userAction; // +0x14
    NSString * _scope; // +0x18
}
- (id)initWithScope:(id)arg1;
- (int)reportID;
- (id)reportString;
- (id)scope;
- (void)setScope:(id)arg1;
- (unsigned int)isShowUserPrivacyUserAgreementView;
- (void)setIsShowUserPrivacyUserAgreementView:(unsigned int)arg1;
- (unsigned int)isUserPrivacyUserAgreementChecked;
- (void)setIsUserPrivacyUserAgreementChecked:(unsigned int)arg1;
- (unsigned int)triggeredUserUserAgreementAlert;
- (void)setTriggeredUserUserAgreementAlert:(unsigned int)arg1;
- (unsigned int)userAction;
- (void)setUserAction:(unsigned int)arg1;
- (void).cxx_destruct;
@end

