@interface WARelatedAppItemCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>
{
    MMWebImageView * _avatarView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

