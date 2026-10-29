@interface NewSettingViewController : MMUIViewController <WCAccountSwitchLogicDelegate, WCAccountLogoutLogicDelegate, MMTipsViewControllerDelegate, MMNewTipsMgrExt>
{
    WCTableViewManager * m_tableViewMgr; // +0x70
    WCAccountSwitchLogic * m_switchLogic; // +0x78
    WCAccountLogoutLogic * m_logoutLogic; // +0x80
    MMTipsViewController * m_introView; // +0x88
    BOOL _initialContentOffsetSet; // +0x90
    WCSearchBar * _searchBar; // +0x98
    WCTableViewNormalCellManager * _pluginCellInfo; // +0xa0
}
+ (void)handleJumpPlugin:(id)arg1 params:(id)arg2;
- (void)setSettingIndexRootNode:(id)arg1;
- (id)settingIndexRootNode;
- (void)setupSearchRelatedFeatures;
- (id)getSettingIndexTree;
- (void)clearSettingIndexTree;
- (void)setupSearchBar;
- (void)handleSearchBarTapped:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)showNotificationView;
- (void)showPrivateConfigView;
- (void)showPrivateConfigViewWithContactVerify:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showSettingGeneralUserInterface;
- (void)showChatCell;
- (void)showVoipCell;
- (void)showOtherFunctionCell;
- (void)showGeneralView;
- (void)showCloudRoamView;
- (void)onClearData;
- (void)handleChatLog;
- (void)showClearLocalDataView;
- (void)handleWCDBRecover;
- (void)showAboutMMView;
- (void)showWechatLabView;
- (void)reloadTableData;
- (double)maxWidthForBottomViews;
- (void)addBottomView;
- (id)genFooterButtonListViewWithMaxWidth:(double)arg1;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (void)addSectionForVisionOS;
- (void)showRepairView;
- (id)cellInfoForAbout;
- (id)cellInfoForNotifySetting;
- (void)showWebViewByUrl:(id)arg1;
- (void)showAccountView;
- (void)showProfileView;
- (void)showPrivacySummaryPage;
- (void)willAppear;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showQuitActionSheet:(id)arg1;
- (void)onAccountLogoutLogicCancel;
- (void)gotoSwitchAccount;
- (void)showLoginInfo;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showDebugViewController;
- (void)openChatBotDebugToolsViewController;
- (void)onAccountSwitchLogicCancel;
- (void)showFeedbackView;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onLimitedModeChanged;
- (void)registerYReportSdk;
- (void)onSetElderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)pluginCellInfo;
- (void)setPluginCellInfo:(id)arg1;
- (void).cxx_destruct;
@end
