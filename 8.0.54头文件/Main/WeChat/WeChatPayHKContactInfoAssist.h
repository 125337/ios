@interface WeChatPayHKContactInfoAssist : BrandBasedPluginContactInfoAssist <WCPayHKGetPluginCgiDelegate>
{
    BOOL _hasPushedUninstallVC; // +0x64
    BOOL _hasRequestedPluginData; // +0x65
    WCPayHKGetPluginCgi * _getPluginCgi; // +0x68
    HKPayPluginResponse * _payPluginResp; // +0x70
}
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

