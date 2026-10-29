@interface TextStateBaseCommentCell : UITableViewCell <WCFinderHeadImageViewDelegate>
{
    BOOL _enableShowFinder; // +0x8
    BOOL _isSelfCard; // +0x9
    WCFinderHeadImageView * _avatarImageView; // +0x10
    UILabel * _timeLabel; // +0x18
    UILabel * _nickNameLabel; // +0x20
    UILabel * _authorLikeLabel; // +0x28
    long long _section; // +0x30
    UIView * _bottomView; // +0x38
    TextStateItemView * _stateView; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (CGSize)avatarSize;
- (void)prepareForReuse;
- (id)bottomViewBackgroundColor;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)clickAvatar;
- (void)onClickLikeComment;
- (void)longPress:(id)arg1;
- (id)backgroundColorInNormalMode;
- (id)avatarImageView;
- (id)nickNameLabel;
- (id)timeLabel;
- (id)stateView;
- (id)authorLikeLabel;
- (void)setAvatarImageView:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setAuthorLikeLabel:(id)arg1;
- (BOOL)enableShowFinder;
- (void)setEnableShowFinder:(BOOL)arg1;
- (BOOL)isSelfCard;
- (void)setIsSelfCard:(BOOL)arg1;
- (long long)section;
- (void)setSection:(long long)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void)setStateView:(id)arg1;
- (void).cxx_destruct;
@end
