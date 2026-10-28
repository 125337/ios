@interface SettingMyAccountInfoViewController : MMUIViewController <WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, IUpdateProfileMgrExt, GetSafetyInfoLogicDelegate, MMNewTipsMgrExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    WCAccountSetPasswordViewController * m_setPasswordViewController; // +0x78
    GetSafetyInfoLogic * m_getSafetyInfoLogic; // +0x80
    SEL m_getSafetyInfoNextStepSEL; // +0x88
}
- (void)initSecurityCellData;
- (void)reloadTableData;
- (void)doRegester;
- (void)undoRegester;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)startGetSafetyInfo:(SEL)arg1;
- (void)onGetSafetyInfoComplete:(BOOL)arg1;
- (void)setPassword;
- (void)setVoicePrint;
- (void)setPasskey;
- (void)setSaveDevice;
- (void)showMoreAccount;
- (void)setTrustedFriends;
- (void)openSecurityCenter;
- (void)ReloadData;
- (void)willShow;
- (id)rightValueForCellIsHas:(BOOL)arg1 IsOpen:(BOOL)arg2;
- (void)registerYReportSdk;
- (void)setupDeepLinkConfig;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void).cxx_destruct;
@end
