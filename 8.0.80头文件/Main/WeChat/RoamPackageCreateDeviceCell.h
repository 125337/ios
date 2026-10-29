@interface RoamPackageCreateDeviceCell : UITableViewCell
{
    UILabel * _uiNameLabel; // +0x8
    UILabel * _uiSubTitleLabel; // +0x10
    UIImageView * _uiDeviceIcon; // +0x18
    UIView * _uiSeparator; // +0x20
    NSString * _deviceName; // +0x28
    NSString * _subTitle; // +0x30
    NSString * _iconName; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 width:(double)arg3;
- (void)setupViewsWith:(double)arg1;
- (void)updateViews;
- (void)setupDeviceName:(id)arg1 subTitle:(id)arg2 iconName:(id)arg3;
- (void)setupDeviceName:(id)arg1;
- (void)setupSubTitle:(id)arg1;
- (void)setupIcon:(id)arg1;
- (void)setShowSeperator:(BOOL)arg1;
- (id)uiNameLabel;
- (void)setUiNameLabel:(id)arg1;
- (id)uiSubTitleLabel;
- (void)setUiSubTitleLabel:(id)arg1;
- (id)uiDeviceIcon;
- (void)setUiDeviceIcon:(id)arg1;
- (id)uiSeparator;
- (void)setUiSeparator:(id)arg1;
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (void).cxx_destruct;
@end
