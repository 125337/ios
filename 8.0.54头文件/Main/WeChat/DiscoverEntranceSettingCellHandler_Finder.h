@interface DiscoverEntranceSettingCellHandler_Finder : DiscoverEntranceSettingAbstractCellHandler
- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)serviceAuthType;
- (unsigned long long)settingEntranceSwitchType;
- (void)onSheetDisppearWithSwitchChanged:(id)arg1;
- (BOOL)isWeixinServiceForOversea;
- (void)onEntranceSwitchChanged:(id)arg1;
@end

