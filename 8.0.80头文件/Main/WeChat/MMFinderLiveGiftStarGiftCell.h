@interface MMFinderLiveGiftStarGiftCell : UICollectionViewCell
{
    BOOL _historyStyle; // +0x8
    MMWebImageView * _giftImageView; // +0x10
    UIView * _avatarContainer; // +0x18
    CAGradientLayer * _avatarBorderLayer; // +0x20
    CAShapeLayer * _avatarBorderMask; // +0x28
    MMWebImageView * _avatarImageView; // +0x30
    MMUILabel * _nameLabel; // +0x38
    MMUILabel * _countLabel; // +0x40
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithUnlockInfo:(id)arg1 style:(long long)arg2 theme:(id)arg3;
- (id)defaultAvatarImageWithLighted:(BOOL)arg1 theme:(id)arg2;
- (void)layoutSubviews;
- (id)giftImageView;
- (void)setGiftImageView:(id)arg1;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg1;
- (id)avatarBorderLayer;
- (void)setAvatarBorderLayer:(id)arg1;
- (id)avatarBorderMask;
- (void)setAvatarBorderMask:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (BOOL)historyStyle;
- (void)setHistoryStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
