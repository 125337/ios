@interface BrandFansMsgSettingsCell : UITableViewCell
{
    UILabel * _settingTitleLabel; // +0x8
    UISwitch * _settingSwitch; // +0x10
    id /* block */ _onToggled; // +0x18
}
+ (id)reuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)arg1 isOn:(BOOL)arg2 onToggled:(id /* block */)arg3;
- (void)updateSwitchState:(BOOL)arg1;
- (void)onToggleSwitch;
- (id)settingTitleLabel;
- (void)setSettingTitleLabel:(id)arg1;
- (id)settingSwitch;
- (void)setSettingSwitch:(id)arg1;
- (id /* block */)onToggled;
- (void)setOnToggled:(id /* block */)arg1;
- (void).cxx_destruct;
@end
