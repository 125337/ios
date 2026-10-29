@interface NewSettingViewController : MMUIViewController <WCAccountSwitchLogicDelegate, WCAccountLogoutLogicDelegate, MMTipsViewControllerDelegate, MMNewTipsMgrExt, ElderModeExt, MMLimitedModeExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    WCAccountSwitchLogic * m_switchLogic; // +0x70
    WCAccountLogoutLogic * m_logoutLogic; // +0x78
    MMTipsViewController * m_introView; // +0x80
    WCTableViewManager * m_tableViewMgr; // +0x88
    WCTableViewNormalCellManager * _pluginCellInfo; // +0x90
}
+ (void)handleJumpPlugin:(id)arg1 params:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)showNotificationView;
- (void)showPrivateConfigView;
- (void)showPrivateConfigViewWithContactVerify:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showDeviceListView;
- (void)showGeneralView;
- (void)showAboutMMView;
- (void)showWechatLabView;
- (void)reloadTableData;
- (void)addSectionForVisionOS;
- (void)showRepairView;
- (id)cellInfoForAbout;
- (id)cellInfoForNotifySetting;
- (void)showCollectionList;
- (void)showShareList;
- (void)showWebViewByUrl:(id)arg1;
- (void)showAccountView;
- (void)onShowElderMode;
- (void)onShowLimitedMode;
- (void)showPrivacySummaryPage;
- (void)willAppear;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)showQuitActionSheet:(id)arg1;
- (void)onAccountLogoutLogicCancel;
- (void)gotoSwitchAccount;
- (void)showLoginInfo;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showDebugViewController;
- (void)onAccountSwitchLogicCancel;
- (void)showFeedbackView;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onLimitedModeChanged;
- (void)registerYReportSdk;
- (void)onSetElderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (id)pluginCellInfo;
- (void)setPluginCellInfo:(id)arg1;
- (void).cxx_destruct;
@end

