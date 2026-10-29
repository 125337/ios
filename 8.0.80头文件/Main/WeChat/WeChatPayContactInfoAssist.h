@interface WeChatPayContactInfoAssist : BrandBasedPluginContactInfoAssist <WCActionSheetDelegate, WCPayGetPluginCgiDelegate>
{
    BOOL _bHasGetPluginSectionData; // +0x64
    UIButton * _payEntryButton; // +0x68
    SettingPayEntranceViewController * _payEntryViewController; // +0x70
    WCPayGetPluginCgi * _getPluginCgi; // +0x78
    PayPluginResponse * _payPluginResp; // +0x80
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)updatePayEntryButton;
- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)enterHelpCenter;
- (void)enterCustomerSupport;
- (void)callServicePhone;
- (void)installPlugin;
- (void)handleOnAddContactOk:(id)arg1;
- (void)uninstallPlugin;
- (void)clearPluginMessage;
- (void)reportEntryClick:(unsigned int)arg1;
- (void)onClickSvrRetCell:(id)arg1;
- (void)getPayPluginSectionFromSvr;
- (void)onGetPayPluginResponse:(id)arg1;
- (void)onClickPayEntryButton;
- (void)realShowEntryCloseView;
- (id)payEntryButton;
- (void)setPayEntryButton:(id)arg1;
- (id)payEntryViewController;
- (void)setPayEntryViewController:(id)arg1;
- (BOOL)bHasGetPluginSectionData;
- (void)setBHasGetPluginSectionData:(BOOL)arg1;
- (id)getPluginCgi;
- (void)setGetPluginCgi:(id)arg1;
- (id)payPluginResp;
- (void)setPayPluginResp:(id)arg1;
- (void).cxx_destruct;
@end
