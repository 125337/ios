@interface WAAuthManagerItemCell : MMBaseMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    WAAuthManagerItemViewModel * _viewDataModel; // +0x38
    MMWebImageView * _iconView; // +0x40
    UIButton * _deleteButton; // +0x48
    UILabel * _titleLabel; // +0x50
    UILabel * _subTitleLabel; // +0x58
    UILabel * _hasDeleteLabel; // +0x60
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)viewDataModel;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)hasDeleteLabel;
- (void)setHasDeleteLabel:(id)arg1;
- (void).cxx_destruct;
@end
