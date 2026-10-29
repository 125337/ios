@interface SettingMyAccountInfoViewController : MMUIViewController <WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, IUpdateProfileMgrExt, GetSafetyInfoLogicDelegate, MMNewTipsMgrExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    WCAccountSetPasswordViewController * m_setPasswordViewController; // +0x78
    GetSafetyInfoLogic * m_getSafetyInfoLogic; // +0x80
    NSString * highlightItemId; // +0x88
    WCTableViewNormalCellManager * highlightCellInfo; // +0x90
    SEL m_getSafetyInfoNextStepSEL; // +0x98
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
- (void)setNoPwdLogin;
- (void)setPasskey;
- (void)setSaveDevice;
- (void)showMoreAccount;
- (void)setTrustedFriends;
- (void)helpUnfrozen;
- (void)openSecurityCenter;
- (void)ReloadData;
- (void)setHighlightItem:(id)arg1;
- (void)willShow;
- (id)rightValueForCellIsHas:(BOOL)arg1 IsOpen:(BOOL)arg2;
- (void)registerYReportSdk;
- (void)setupDeepLinkConfig;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)tryHighlightItem;
- (void)setCellItemBackgroundColor:(id)arg1;
- (void)unhighlightCellItemAfterDelay;
- (void).cxx_destruct;
@end
