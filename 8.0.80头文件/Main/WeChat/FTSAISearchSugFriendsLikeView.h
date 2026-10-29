@interface FTSAISearchSugFriendsLikeView : UIView
{
    BOOL _isMultipleFriends; // +0x8
    MMWebImageView * _firstAvatarView; // +0x10
    MMWebImageView * _secondAvatarView; // +0x18
    UILabel * _nameLabel; // +0x20
    UIImageView * _heartIconView; // +0x28
}
- (id)initWithFriendsInfo:(id)arg1;
- (void)setupViews;
- (void)setupConstraints;
- (void)updateWithFriendsInfo:(id)arg1;
- (id)truncateName:(id)arg1 maxLength:(long long)arg2;
- (CGSize)intrinsicContentSize;
- (id)firstAvatarView;
- (void)setFirstAvatarView:(id)arg1;
- (id)secondAvatarView;
- (void)setSecondAvatarView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)heartIconView;
- (void)setHeartIconView:(id)arg1;
- (BOOL)isMultipleFriends;
- (void)setIsMultipleFriends:(BOOL)arg1;
- (void).cxx_destruct;
@end
