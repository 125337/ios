@interface WeChatPayCollAssistContactInfoAssist : BrandBasedPluginContactInfoAssist <WCActionSheetDelegate, WCPayGetCollAssistPluginCgiDelegate, WCPayGetCollAssistMenuCgiDelegate>
{
    BOOL _bHasGetPluginSectionData; // +0x64
    WCPayGetCollAssistPluginCgi * _getPluginCgi; // +0x68
    GetReceiptAssisPluginResponse * _collAssistPluginResp; // +0x70
    WCPayGetCollAssistMenuCgi * _getCollAssistMenuCgi; // +0x78
}
- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)enterHelpCenter;
- (void)installPlugin;
- (void)handleOnAddContactOk:(id)arg1;
- (void)uninstallPlugin;
- (void)clearPluginMessage;
- (void)onClickSvrRetCell:(id)arg1;
- (void)getCollAssistPluginSectionFromSvr;
- (void)onGetCollAssistPluginResponse:(id)arg1;
- (void)reportLocalEntryClickWithScene:(unsigned int)arg1;
- (void)reportSvrEntryClickWithName:(id)arg1;
- (void)updateCollAssistMenuFromSvr;
- (void)onGetCollAssistMenuCgiResponse:(id)arg1;
- (BOOL)bHasGetPluginSectionData;
- (void)setBHasGetPluginSectionData:(BOOL)arg1;
- (id)getPluginCgi;
- (void)setGetPluginCgi:(id)arg1;
- (id)collAssistPluginResp;
- (void)setCollAssistPluginResp:(id)arg1;
- (id)getCollAssistMenuCgi;
- (void)setGetCollAssistMenuCgi:(id)arg1;
- (void).cxx_destruct;
@end
