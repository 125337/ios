@interface MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCell : UITableViewCell
{
    id <MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCellDelegate> _delegate; // +0x8
    UILabel * _bulletLabel; // +0x10
    UILabel * _titleLabel; // +0x18
    UISwitch * _toggleSwitch; // +0x20
    UIView * _separatorBar; // +0x28
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)separatorBarHidden;
- (void)setSeparatorBarHidden:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)onSwitchToggled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bulletLabel;
- (void)setBulletLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)toggleSwitch;
- (void)setToggleSwitch:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end

