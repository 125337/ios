@interface WeCustomerHelperContactInfoAssist : BrandBasedPluginContactInfoAssist <ForwardMessageLogicDelegate, IWCDeviceBrandMgrExt>
{
    UrlController * m_urlController; // +0x68
    ForwardMessageLogicController * m_forwardLogic; // +0x70
    CContactVerifyLogic * _contactVerifyLogic; // +0x78
    id /* block */ _pluginPrepared; // +0x80
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (id)getPluginIntro;
- (id)getPrivacyInfos;
- (id)getFooterView;
- (void)showCustomerServiceExtentInfo:(id)arg1;
- (void)reloadInstalledTableViewData;
- (id)getCurrentViewController;
- (void)onClearMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (id)contactVerifyLogic;
- (void)installPlugin:(id)arg1 prepared:(id /* block */)arg2;
- (void)uninstallPlugin;
- (void)showCustomerHelperSessionIfNeeded;
- (void)contactAddContactOk:(id)arg1;
- (void)setContactVerifyLogic:(id)arg1;
- (id /* block */)pluginPrepared;
- (void)setPluginPrepared:(id /* block */)arg1;
- (void).cxx_destruct;
@end
