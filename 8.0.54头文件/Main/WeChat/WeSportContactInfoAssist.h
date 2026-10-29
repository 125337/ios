@interface WeSportContactInfoAssist : BrandBasedPluginContactInfoAssist <ForwardMessageLogicDelegate, IWCDeviceBrandMgrExt>
{
    UrlController * m_urlController; // +0x68
    ForwardMessageLogicController * m_forwardLogic; // +0x70
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)goWeSportCenter;
- (void)goWeSportSessionFrame;
- (void)inviteFriend;
- (id)getCurrentViewController;
- (void)goToCommonQuestion;
- (void)onShowDataSource;
- (void)onSetPrivacy;
- (void)onClearMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)handleTopSwitchChange:(id)arg1;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)cancelFocus;
- (void).cxx_destruct;
@end

