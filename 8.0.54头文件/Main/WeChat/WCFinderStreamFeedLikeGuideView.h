@interface WCFinderStreamFeedLikeGuideView : UICollectionReusableView
{
    id /* block */ _actionBlock; // +0x8
    id /* block */ _cancelLikeBlock; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UILabel * _nickNameLabel; // +0x20
    UIButton * _cancelLikeButton; // +0x28
    MMUIButton * _likeActionButton; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)buttonAction;
- (void)cancelLikeAction;
- (void)updateContentVM:(id)arg1;
- (void)updateLikeGuideViewIsLike:(BOOL)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)cancelLikeBlock;
- (void)setCancelLikeBlock:(id /* block */)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)cancelLikeButton;
- (void)setCancelLikeButton:(id)arg1;
- (id)likeActionButton;
- (void)setLikeActionButton:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end

