@interface SettingGeneralViewController : MMUIViewController <MMTipsViewControllerDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    BOOL _shouldHighlightSpeakTextItem; // +0x78
    WCTableViewNormalCellManager * _speakTextCellInfo; // +0x80
}
- (void)showChatBackgroundConfig;
- (void)showDiscoverEntranceView;
- (void)showPluginsView;
- (void)showCloudRoamView;
- (void)showClearLocalDataView;
- (void)onShakeToSightSwitch:(id)arg1;
- (void)onVoipRecentStatusConfig:(id)arg1;
- (void)onLoudModeSwitch:(id)arg1;
- (void)onSwitchSpeakText:(id)arg1;
- (void)onSwitchSendButtonInChat:(id)arg1;
- (void)onClearData;
- (void)onSetAutoDownloadSight;
- (void)showDeviceListView;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
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
- (void)scrollToCellAnimated:(id)arg1;
- (void)highlightCellAnimated:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)registerYReportSdk;
- (BOOL)shouldHighlightSpeakTextItem;
- (void)setShouldHighlightSpeakTextItem:(BOOL)arg1;
- (id)speakTextCellInfo;
- (void)setSpeakTextCellInfo:(id)arg1;
- (void).cxx_destruct;
@end
