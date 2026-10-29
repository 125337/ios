@interface SettingsTingViewController : MMUIViewController <ITingPlayCenterMgrExt>
{
    MMTableViewInfo * _tableViewInfo; // +0x68
    MMListenUserConfig * _userConfig; // +0x70
    SettingsTingSwitchConfig * _switchConfig; // +0x78
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initSettingConfig;
- (void)syncSettingConfig;
- (void)reloadSections;
- (void)viewWillLayoutSubviews;
- (void)syncConfigWithCompletion:(id /* block */)arg1;
- (void)onAutoPlayMvSwitch:(id)arg1;
- (void)onRecommendSwitch:(id)arg1;
- (void)onTaskBarConfigHideChanged:(id)arg1;
- (void)enEnableNetworkHighQualitySwitch:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)userConfig;
- (void)setUserConfig:(id)arg1;
- (id)switchConfig;
- (void)setSwitchConfig:(id)arg1;
- (void).cxx_destruct;
@end

