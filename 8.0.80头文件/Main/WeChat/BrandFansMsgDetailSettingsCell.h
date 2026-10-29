@interface BrandFansMsgDetailSettingsCell : UITableViewCell
{
    UILabel * _settingTitleLabel; // +0x8
    UILabel * _settingSubTitleLabel; // +0x10
    UIImageView * _detailIcon; // +0x18
}
+ (id)reuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2;
- (id)settingTitleLabel;
- (void)setSettingTitleLabel:(id)arg1;
- (id)settingSubTitleLabel;
- (void)setSettingSubTitleLabel:(id)arg1;
- (id)detailIcon;
- (void)setDetailIcon:(id)arg1;
- (void).cxx_destruct;
@end
