@interface MMFinderLiveFansGroupAnchorEditSwitchCell : MMFinderLiveFansGroupAnchorEditTableCellBase
{
    id <MMFinderLiveFansGroupAnchorEditSwitchCellDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    UISwitch * _editSwitch; // +0x18
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)configWithTitle:(id)arg1 switchOn:(BOOL)arg2;
- (id)getTitle;
- (void)setSwitchOn:(BOOL)arg1;
- (void)layoutSubviews;
- (void)switchDidChanged:(id)arg1;
- (id)titleLabel;
- (id)editSwitch;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setEditSwitch:(id)arg1;
- (void).cxx_destruct;
@end

