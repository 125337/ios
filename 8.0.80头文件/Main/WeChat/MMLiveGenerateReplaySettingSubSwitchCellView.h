@interface MMLiveGenerateReplaySettingSubSwitchCellView : UITableViewCell
{
    MMLiveGenerateReplaySettingSwitchItem * _settingSwitchItem; // +0x8
    UIView * _topSeparatorLine; // +0x10
    UIView * _leftShortLine; // +0x18
    UILabel * _titleLabel; // +0x20
    UISwitch * _functionSwitch; // +0x28
    id <MMLiveGenerateReplaySettingSwitchCellDelegate> _actionDelegate; // +0x30
}
+ (id)ReuseIdentifier;
+ (double)calculateHeightForText:(id)arg1 cellWidth:(double)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (void)configCellWithItem:(id)arg1;
- (void)onFunctionSwitchValueChanged:(id)arg1;
- (id)settingSwitchItem;
- (void)setSettingSwitchItem:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)leftShortLine;
- (void)setLeftShortLine:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)functionSwitch;
- (void)setFunctionSwitch:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (void).cxx_destruct;
@end
