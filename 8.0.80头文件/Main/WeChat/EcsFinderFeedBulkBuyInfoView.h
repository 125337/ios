@interface EcsFinderFeedBulkBuyInfoView : EcsFinderFeedSingleProductBaseView
{
    MMWebImageView * _iconView; // +0x8
    EcsRichTextLabel * _iconDescLabel; // +0x10
    UICollectionView * _avatarView; // +0x18
    ZZFLEXAngel * _avatarAngel; // +0x20
    EcsRichTextLabel * _avatarDescLabel; // +0x28
}
- (void)onViewSizeChanged;
- (void)setDataVM:(id)arg1;
- (void)reloadAvatarData;
- (void)setupUI;
- (id)bulkBuyInfo;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)iconDescLabel;
- (void)setIconDescLabel:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)avatarAngel;
- (void)setAvatarAngel:(id)arg1;
- (id)avatarDescLabel;
- (void)setAvatarDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
