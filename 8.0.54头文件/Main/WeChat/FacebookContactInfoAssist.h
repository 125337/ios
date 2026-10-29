@interface FacebookContactInfoAssist : PluginContactInfoAssist <IMMFacebookMgrExt>
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)reloadInstalledTableViewData;
- (id)getPluginIntro;
- (void)showBindView;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
@end

