@interface SettingGeneralViewController : MMUIViewController <MMTipsViewControllerDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
}
- (void)showChatBackgroundConfig;
- (void)showDiscoverEntranceView;
- (void)showPluginsView;
- (void)showClearLocalDataView;
- (void)onShakeToSightSwitch:(id)arg1;
- (void)onVoipRecentStatusConfig:(id)arg1;
- (void)onLoudModeSwitch:(id)arg1;
- (void)onSwitchSendButtonInChat:(id)arg1;
- (void)onClearData;
- (void)onSetAutoDownloadSight;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)showNotificationView;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(BOOL)arg2 bitset:(unsigned int)arg3;
- (void)onNearModeSwitchChanged:(id)arg1;
- (void)handleDarkMode;
- (void)handleLanguageChange;
- (void)handleTranslateLanguage;
- (void)handleFontSizeChange;
- (void)handleChatLog;
- (void)handelEmoticonSetting;
- (void)handleWCDBRecover;
- (void)handleTingSettings;
- (void)setupDeepLinkConfig;
- (void).cxx_destruct;
@end

