@interface MMTemplateMsgGlobalSwitchCell : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UISwitch * _ctrlSwitch; // +0x10
    id <MMTemplateMsgGlobalSwitchCellDelegate> _delegate; // +0x18
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initTitleLabel;
- (void)initCtrlSwitch;
- (void)onCtrlSwitchChanged:(id)arg1;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 ctrlSwitch:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
