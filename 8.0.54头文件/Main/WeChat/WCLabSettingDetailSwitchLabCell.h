@interface WCLabSettingDetailSwitchLabCell : UITableViewCell
{
    UIView * _topLineView; // +0x8
    UIView * _bottomLineView; // +0x10
    MMUILabel * _label; // +0x18
    UISwitch * _labSwitch; // +0x20
}
+ (double)height;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithLabItem:(id)arg1;
- (void)initLines;
- (void)switchChanged:(id)arg1;
- (void)initSwitch;
- (void)initLabel;
- (id)labSwitch;
- (void)setLabSwitch:(id)arg1;
- (void).cxx_destruct;
@end

