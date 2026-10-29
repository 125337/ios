@interface MMFinderLiveConnectMicModePageSheetSwitchCell : UITableViewCell
{
    UISwitch * _toggleSwitch; // +0x8
    id <MMFinderLiveConnectMicModePageSheetSwitchCellDelegate> _delegate; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _separatorBar; // +0x20
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)onSwitchToggled;
- (id)toggleSwitch;
- (void)setToggleSwitch:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end
