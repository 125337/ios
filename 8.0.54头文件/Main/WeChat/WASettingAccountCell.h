@interface WASettingAccountCell : MMMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    MMWebImageView * _avatarView; // +0x40
    UILabel * _nameLabel; // +0x48
    UILabel * _detailLabel; // +0x50
    UIImageView * _statusView; // +0x58
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (void).cxx_destruct;
@end

