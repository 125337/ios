@interface WCFinderSelfLikeTipsBannerView : UIView
{
    UIButton * _cancelLikeButton; // +0x8
    MMUIButton * _likeActionButton; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UILabel * _nickNameLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configIconByContentVM:(id)arg1;
- (void)updateUIByIsLike:(BOOL)arg1;
- (void)layoutAllSubviews;
- (void)setUpUI;
- (id)cancelLikeButton;
- (void)setCancelLikeButton:(id)arg1;
- (id)likeActionButton;
- (void)setLikeActionButton:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
