@interface MMFinderLiveFansGroupUpgradeInfoTableCell : MMFinderLiveFansGroupDetailBaseTableViewCell
{
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _upgradeConditionLabel; // +0x18
    MMUILabel * _intimacyIncCountLabel; // +0x20
    MMUILabel * _upgradeStatusLabel; // +0x28
    MMFinderLiveFansGroupUpgradeInfo * _upgradeInfo; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)updateWithUpgradeInfo:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)upgradeConditionLabel;
- (void)setUpgradeConditionLabel:(id)arg1;
- (id)intimacyIncCountLabel;
- (void)setIntimacyIncCountLabel:(id)arg1;
- (id)upgradeStatusLabel;
- (void)setUpgradeStatusLabel:(id)arg1;
- (id)upgradeInfo;
- (void)setUpgradeInfo:(id)arg1;
- (void).cxx_destruct;
@end

