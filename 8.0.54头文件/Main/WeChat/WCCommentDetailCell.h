@interface WCCommentDetailCell : UITableViewCell <WCFinderHeadImageViewDelegate>
{
    BOOL _enableShowFinder; // +0x8
    WCFinderHeadImageView * _avatarImageView; // +0x10
    UILabel * _timeLabel; // +0x18
    UILabel * _nickNameLabel; // +0x20
    UILabel * _authorBadgeLabel; // +0x28
    UILabel * _authorLikeLabel; // +0x30
    long long _section; // +0x38
    WCCommentLikeView * _commentLikeView; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (CGSize)avatarSize;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)clickAvatar;
- (void)onClickLikeComment;
- (void)longPress:(id)arg1;
- (id)backgroundColorInNormalMode;
- (id)avatarImageView;
- (id)nickNameLabel;
- (id)authorBadgeLabel;
- (id)timeLabel;
- (id)commentLikeView;
- (id)authorLikeLabel;
- (void)setAvatarImageView:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setAuthorBadgeLabel:(id)arg1;
- (void)setAuthorLikeLabel:(id)arg1;
- (BOOL)enableShowFinder;
- (void)setEnableShowFinder:(BOOL)arg1;
- (long long)section;
- (void)setSection:(long long)arg1;
- (void)setCommentLikeView:(id)arg1;
- (void).cxx_destruct;
@end

