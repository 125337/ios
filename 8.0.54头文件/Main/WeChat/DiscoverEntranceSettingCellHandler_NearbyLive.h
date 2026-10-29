@interface DiscoverEntranceSettingCellHandler_NearbyLive : DiscoverEntranceSettingAbstractCellHandler
{
    BOOL _nearbyPeopleEntranceEnabled; // +0x8
    DiscoverEntranceSetSwitchInfo * _nearByPeopleSwitchInfo; // +0x10
}
- (id)init;
- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)settingEntranceSwitchType;
- (id)makeSettingSheetView;
- (void)onSheetDisppearWithSwitchChanged:(id)arg1;
- (void)commitNewNearbyPeopleEntranceValue:(BOOL)arg1;
- (id)statusDesc;
- (id)nearByPeopleSwitchInfo;
- (BOOL)nearbyPeopleEntranceEnabled;
- (void)setNearbyPeopleEntranceEnabled:(BOOL)arg1;
- (void)setNearByPeopleSwitchInfo:(id)arg1;
- (void).cxx_destruct;
@end

