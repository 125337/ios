@interface WAAuthorizeTableViewCell : MMBaseMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    WAAuthorizeTableViewCellInfo * _viewDataModel; // +0x38
    MMWebImageView * _iconView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _subTitleLabel; // +0x50
    UIImageView * _selectImageView; // +0x58
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
+ (double)viewHeight;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (id)accessibilityLabel;
- (id)viewDataModel;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)selectImageView;
- (void)setSelectImageView:(id)arg1;
- (void).cxx_destruct;
@end

