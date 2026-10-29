@interface WeGameContactInfoAssist : BrandBasedPluginContactInfoAssist <ForwardMessageLogicDelegate, IWCDeviceBrandMgrExt>
{
    ForwardMessageLogicController * m_forwardLogic; // +0x68
}
- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)goWeGameSessionFrame;
- (void)inviteFriend;
- (void)setPushSetting;
- (id)getCurrentViewController;
- (void)onClearMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)handleTopSwitchChange:(id)arg1;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void).cxx_destruct;
@end

