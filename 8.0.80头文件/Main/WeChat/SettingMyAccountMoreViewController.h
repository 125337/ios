@interface SettingMyAccountMoreViewController : MMUIViewController <NewSettingModifyEmailViewControllerDelegate, IQQAccountMgrExt, IMMFacebookMgrExt, IUpdateProfileMgrExt, AppleIDBindViewControllerDelegate, GetSafetyInfoLogicDelegate, MMNewTipsMgrExt>
{
    GetSafetyInfoLogic * m_getSafetyInfoLogic; // +0x70
    SEL m_getSafetyInfoNextStepSEL; // +0x78
    MMTableViewInfo * m_tableViewInfo; // +0x80
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)startGetSafetyInfo:(SEL)arg1;
- (void)onGetSafetyInfoComplete:(BOOL)arg1;
- (void)dealloc;
- (void)doRegester;
- (void)undoRegester;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)initAccountCellData;
- (void)initDeleteAccountCellData;
- (void)showModifyQQView;
- (void)showApple;
- (void)showFacebook;
- (void)modifyEmail;
- (void)saveNewEmail;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)OnBindQQChange;
- (void)onProfileChange;
- (void)willShow;
- (void)onAppleIDBindStatusChange;
- (void)setupDeepLinkConfig;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)registerYReportSdk;
- (void).cxx_destruct;
@end
