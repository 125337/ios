@interface MinishopAssistContactInfoAssist : BrandBasedPluginContactInfoAssist
- (id)getPluginIntro;
- (void)addSection:(id /* block */)arg1;
- (void)reloadInstalledTableViewData;
- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)enterHelpCenter;
- (void)onClickClearMessage:(id)arg1;
- (void)reportOperation:(unsigned int)arg1 type:(unsigned int)arg2;
@end
