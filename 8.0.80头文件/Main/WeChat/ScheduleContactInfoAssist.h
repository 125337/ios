@interface ScheduleContactInfoAssist : BrandBasedPluginContactInfoAssist
- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)onClearMsg;
- (BOOL)forbidShowInstallOrUninstall;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@end
