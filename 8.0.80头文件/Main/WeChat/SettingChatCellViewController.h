@interface SettingChatCellViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    DelaySwitchSettingLogic * _delaySwitchLogic; // +0x78
}
- (void)showChatBackgroundConfig;
- (void)onLoudModeSwitch:(id)arg1;
- (void)onSwitchSendButtonInChat:(id)arg1;
- (void)onVoiceTransPressGuideSwitch:(id)arg1;
- (void)saveIntelligentImgChanged:(id)arg1;
- (void)silentDownloadChanged;
- (void)saveCleanOriginMsgChanged:(id)arg1;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)delaySwitchLogic;
- (void)setupDeepLinkConfig;
- (void)registerYReportSdk;
- (void)setDelaySwitchLogic:(id)arg1;
- (void).cxx_destruct;
@end
