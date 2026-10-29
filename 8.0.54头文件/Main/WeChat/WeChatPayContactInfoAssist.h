@interface WeChatPayContactInfoAssist : BrandBasedPluginContactInfoAssist <WCActionSheetDelegate, WCPayGetPluginCgiDelegate>
{
    BOOL _bHasGetPluginSectionData; // +0x64
    WCPayGetPluginCgi * _getPluginCgi; // +0x68
    PayPluginResponse * _payPluginResp; // +0x70
}
- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)enterHelpCenter;
- (void)callServicePhone;
- (void)installPlugin;
- (void)handleOnAddContactOk:(id)arg1;
- (void)uninstallPlugin;
- (void)clearPluginMessage;
- (void)reportEntryClick:(unsigned int)arg1;
- (void)onClickSvrRetCell:(id)arg1;
- (void)getPayPluginSectionFromSvr;
- (void)onGetPayPluginResponse:(id)arg1;
- (BOOL)bHasGetPluginSectionData;
- (void)setBHasGetPluginSectionData:(BOOL)arg1;
- (id)getPluginCgi;
- (void)setGetPluginCgi:(id)arg1;
- (id)payPluginResp;
- (void)setPayPluginResp:(id)arg1;
- (void).cxx_destruct;
@end

