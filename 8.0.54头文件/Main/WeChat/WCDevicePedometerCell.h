@interface WCDevicePedometerCell : MMTableViewCell
{
    MMDeviceHeadImageView * _headView; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (double)cellHeightForTitle:(id)arg1 detail:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initCell;
- (void)setTitle:(id)arg1;
- (void)setDeviceIconName:(id)arg1;
- (void)setDeviceIconUrl:(id)arg1;
- (void)resetIcon;
- (void)layoutSubviews;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

