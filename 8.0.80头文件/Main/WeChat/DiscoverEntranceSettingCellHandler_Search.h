@interface DiscoverEntranceSettingCellHandler_Search : DiscoverEntranceSettingAbstractCellHandler <MMWebViewDelegate>
- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)serviceAuthType;
- (BOOL)isWeixinServiceForOversea;
- (unsigned long long)settingEntranceSwitchType;
- (void)onEntranceSwitchChanged:(id)arg1;
@end
