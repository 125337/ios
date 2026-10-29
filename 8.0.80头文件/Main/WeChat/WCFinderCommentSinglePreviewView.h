@interface WCFinderCommentSinglePreviewView : UIView
{
    WCFinderHeadImageView * _avatarView; // +0x8
    UILabel * _nicknameLabel; // +0x10
    UILabel * _locationLabel; // +0x18
    UIImageView * _finderLogo; // +0x20
    UILabel * _likeCount; // +0x28
    UIImageView * _likeIcon; // +0x30
    WCFinderSizingRichTextView * _commentView; // +0x38
    WCFinderAuthInfoIconView * _authInfoView; // +0x40
    UILabel * _identityTagLabel; // +0x48
}
- (id)initWithComment:(id)arg1 limitContent:(BOOL)arg2 maskType:(long long)arg3 showReplyCnt:(BOOL)arg4;
- (void)positionAndLayoutAttachment:(id)arg1 preView:(id *)arg2;
- (void)setComment:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)finderLogo;
- (void)setFinderLogo:(id)arg1;
- (id)likeCount;
- (void)setLikeCount:(id)arg1;
- (id)likeIcon;
- (void)setLikeIcon:(id)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)authInfoView;
- (void)setAuthInfoView:(id)arg1;
- (id)identityTagLabel;
- (void)setIdentityTagLabel:(id)arg1;
- (void).cxx_destruct;
@end
