@interface EcsFinderFeedSingleProductCardView : EcsFinderFeedSingleProductBaseView
{
    id /* block */ _onClickFriends; // +0x8
    id /* block */ _onClickTitle; // +0x10
    id /* block */ _onClickPrice; // +0x18
    UICollectionView * _avatarView; // +0x20
    ZZFLEXAngel * _avatarAngel; // +0x28
    EcsRichTextLabel * _avatarDescLabel; // +0x30
    EcsRichTextLabel * _titleLabel; // +0x38
    EcsTagsView * _tagsView; // +0x40
    EcsRichTextLabel * _priceLabel; // +0x48
    EcsTagsView * _priceDescTagsView; // +0x50
}
- (void)setDataVM:(id)arg1;
- (void)reloadAvatarData;
- (void)setupUI;
- (id /* block */)onClickFriends;
- (void)setOnClickFriends:(id /* block */)arg1;
- (id /* block */)onClickTitle;
- (void)setOnClickTitle:(id /* block */)arg1;
- (id /* block */)onClickPrice;
- (void)setOnClickPrice:(id /* block */)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)avatarAngel;
- (void)setAvatarAngel:(id)arg1;
- (id)avatarDescLabel;
- (void)setAvatarDescLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tagsView;
- (void)setTagsView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)priceDescTagsView;
- (void)setPriceDescTagsView:(id)arg1;
- (void).cxx_destruct;
@end
