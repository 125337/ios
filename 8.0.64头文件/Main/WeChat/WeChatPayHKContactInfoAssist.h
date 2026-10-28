@interface WeChatPayHKContactInfoAssist : BrandBasedPluginContactInfoAssist <WCPayHKGetPluginCgiDelegate>
{
    BOOL _hasPushedUninstallVC; // +0x64
    BOOL _hasRequestedPluginData; // +0x65
    UIButton * _payEntryButton; // +0x68
    SettingPayEntranceViewController * _payEntryViewController; // +0x70
    WCPayHKGetPluginCgi * _getPluginCgi; // +0x78
    HKPayPluginResponse * _payPluginResp; // +0x80
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)updatePayEntryButton;
- (id)getPluginIntro;
- (void)addSection:(id /* block */)arg1;
- (void)reloadInstalledTableViewData;
- (void)promptUninstall:(id)arg1;
- (void)doUninstall;
- (void)enterHelpCenter;
- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)onClickClearMessage:(id)arg1;
- (void)onClickSvrRetCell:(id)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)requestPluginDataFromSvrIfNeeded;
- (void)onGetHKPayPluginResponse:(id)arg1;
- (void)onClickPayEntryButton;
- (void)realShowEntryCloseView;
- (id)payEntryButton;
- (void)setPayEntryButton:(id)arg1;
- (id)payEntryViewController;
- (void)setPayEntryViewController:(id)arg1;
- (BOOL)hasPushedUninstallVC;
- (void)setHasPushedUninstallVC:(BOOL)arg1;
- (BOOL)hasRequestedPluginData;
- (void)setHasRequestedPluginData:(BOOL)arg1;
- (id)getPluginCgi;
- (void)setGetPluginCgi:(id)arg1;
- (id)payPluginResp;
- (void)setPayPluginResp:(id)arg1;
- (void).cxx_destruct;
@end
