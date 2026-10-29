@interface MMLiveBeautyPresetControlPanelItem : MMLiveBeautyControlPanelItem
{
    BOOL _fineTuningAvailable; // +0x8
    MMLiveBeautyBadgeCollection * _fineTuningItemsBadges; // +0x10
}
- (BOOL)fineTuningAvailable;
- (void)setFineTuningAvailable:(BOOL)arg1;
- (id)fineTuningItemsBadges;
- (void)setFineTuningItemsBadges:(id)arg1;
- (void).cxx_destruct;
@end
