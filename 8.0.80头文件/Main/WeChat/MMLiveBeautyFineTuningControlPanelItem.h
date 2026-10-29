@interface MMLiveBeautyFineTuningControlPanelItem : MMLiveBeautyControlPanelItem
{
    BOOL _reverseValueDisplay; // +0x8
    BOOL _settingsAvailable; // +0x9
    UIImage * _icon; // +0x10
    double _maxValue; // +0x18
    double _minValue; // +0x20
    double _defaultValue; // +0x28
    double _value; // +0x30
    MMLiveBeautyBadgeCollection * _settingsBadges; // +0x38
}
- (id)icon;
- (void)setIcon:(id)arg1;
- (double)maxValue;
- (void)setMaxValue:(double)arg1;
- (double)minValue;
- (void)setMinValue:(double)arg1;
- (double)defaultValue;
- (void)setDefaultValue:(double)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (BOOL)reverseValueDisplay;
- (void)setReverseValueDisplay:(BOOL)arg1;
- (BOOL)settingsAvailable;
- (void)setSettingsAvailable:(BOOL)arg1;
- (id)settingsBadges;
- (void)setSettingsBadges:(id)arg1;
- (void).cxx_destruct;
@end
