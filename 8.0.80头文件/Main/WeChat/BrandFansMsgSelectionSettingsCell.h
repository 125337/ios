@interface BrandFansMsgSelectionSettingsCell : UITableViewCell
{
    UILabel * _settingTitleLabel; // +0x8
    UIImageView * _checkIcon; // +0x10
}
+ (id)reuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)arg1 checked:(BOOL)arg2;
- (void)setChecked:(BOOL)arg1;
- (id)settingTitleLabel;
- (void)setSettingTitleLabel:(id)arg1;
- (id)checkIcon;
- (void)setCheckIcon:(id)arg1;
- (void).cxx_destruct;
@end
