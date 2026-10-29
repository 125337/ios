@interface SettingMyAccountInfoViewController : MMUIViewController <VerifyPhoneDelegate, WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, IUpdateProfileMgrExt, GetSafetyInfoLogicDelegate, SettingModifyAliasViewControllerDelegate, MMNewTipsMgrExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    WCAccountSetPasswordViewController * m_setPasswordViewController; // +0x70
    GetSafetyInfoLogic * m_getSafetyInfoLogic; // +0x78
    SEL m_getSafetyInfoNextStepSEL; // +0x80
}
- (void)showModifyUserNameProtocol;
- (void)initWeChatIDView;
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
- (id)makeBindPhoneView;
- (void)showBindPhone;
- (void)bindPhoneReturn;
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
- (void)setupDeepLinkConfig;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void).cxx_destruct;
@end

