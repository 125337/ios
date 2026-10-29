@interface DiscoverEntranceSettingsCellHandler_Ting : DiscoverEntranceSettingAbstractCellHandler
- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)settingEntranceSwitchType;
- (unsigned long long)reddotCtrlFlagMask;
- (void)sendEntranceValueToServer:(BOOL)arg1;
- (void)commitEntranceValue:(BOOL)arg1;
@end
