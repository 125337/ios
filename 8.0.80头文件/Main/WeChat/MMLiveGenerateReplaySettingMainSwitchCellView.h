@interface MMLiveGenerateReplaySettingMainSwitchCellView : UITableViewCell
{
    MMLiveGenerateReplaySettingSwitchItem * _settingSwitchItem; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    UISwitch * _functionSwitch; // +0x20
    id <MMLiveGenerateReplaySettingSwitchCellDelegate> _actionDelegate; // +0x28
}
+ (id)ReuseIdentifier;
+ (double)calculateHeightForText:(id)arg1 descText:(id)arg2 cellWidth:(double)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (void)configCellWithItem:(id)arg1;
- (void)onFunctionSwitchValueChanged:(id)arg1;
- (id)settingSwitchItem;
- (void)setSettingSwitchItem:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)functionSwitch;
- (void)setFunctionSwitch:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (void).cxx_destruct;
@end
