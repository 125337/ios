@interface WASettingAccoutMaxTipsCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    UILabel * _titleLabel; // +0x8
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
