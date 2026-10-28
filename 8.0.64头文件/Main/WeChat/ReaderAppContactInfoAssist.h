@interface ReaderAppContactInfoAssist : PluginContactInfoAssist
- (id)getPluginIntro;
- (id)getUnInstallTip;
- (id)getUnInstallBtnTitle;
- (void)reloadInstalledTableViewData;
- (void)onClickFeedback;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void)onMuteChange:(id)arg1;
- (void)onSessionTopStateChange:(id)arg1;
- (void)reportMuteOfNewsEnable:(BOOL)arg1;
- (void)reportTopOfNews:(BOOL)arg1;
@end
