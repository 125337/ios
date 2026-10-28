@interface DiscoverEntranceSettingCellHandler_AppBrand : DiscoverEntranceSettingAbstractCellHandler
- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)settingEntranceSwitchType;
- (unsigned long long)serviceAuthType;
- (BOOL)isWeixinServiceForOversea;
- (void)onEntranceSwitchChanged:(id)arg1;
- (void)onSheetDisppearWithSwitchChanged:(id)arg1;
@end
