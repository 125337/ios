@interface WASettingAccountAddCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    MMWebImageView * _iconView; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
