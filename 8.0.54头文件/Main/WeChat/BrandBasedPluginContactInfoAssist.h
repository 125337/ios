@interface BrandBasedPluginContactInfoAssist : PluginContactInfoAssist <contactVerifyLogicDelegate>
{
    CContactVerifyLogic * _contactVerifyLogic; // +0x68
}
- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)installPlugin;
- (void)uninstallPlugin;
- (id)contactVerifyLogic;
- (void)handleOnAddContactOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)setContactVerifyLogic:(id)arg1;
- (void).cxx_destruct;
@end

