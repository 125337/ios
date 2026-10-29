@interface WCFinderProfileRecommendFollowCell : UICollectionViewCell
{
    WCFinderAccoutItem * _item; // +0x8
    WCFinderHeadImageView * _avatarView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _authViewLabel; // +0x20
    WCFinderAuthInfoIconView * _authIconView; // +0x28
    UILabel * _descLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_doLayout;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (id)displayAuthInfoText:(id)arg1;
- (id)item;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)authViewLabel;
- (void)setAuthViewLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

