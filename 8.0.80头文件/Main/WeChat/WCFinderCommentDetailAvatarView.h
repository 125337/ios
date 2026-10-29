@interface WCFinderCommentDetailAvatarView : UIView
{
    id /* block */ _didTapAvatarViewAction; // +0x8
    WCFinderCommentDetailAvatarUpdateInfo * _info; // +0x10
    WCFinderHeadImageView * _activeAvatar; // +0x18
    WCFinderHeadImageView * _wechatAvatar; // +0x20
    WCFinderHeadImageView * _finderAvatar; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x30
}
- (void)layoutSubviews;
- (void)updateWithInfo:(id)arg1;
- (void)didTapAvatarView:(id)arg1;
- (void)__flipViewAnimationWithFromView:(id)arg1 toView:(id)arg2;
- (unsigned long long)currentAvatarIdentity;
- (id)tapGesture;
- (id)__createHeadImageView;
- (id /* block */)didTapAvatarViewAction;
- (void)setDidTapAvatarViewAction:(id /* block */)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)activeAvatar;
- (void)setActiveAvatar:(id)arg1;
- (id)wechatAvatar;
- (void)setWechatAvatar:(id)arg1;
- (id)finderAvatar;
- (void)setFinderAvatar:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
