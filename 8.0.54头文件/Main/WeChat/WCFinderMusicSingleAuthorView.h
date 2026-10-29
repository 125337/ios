@interface WCFinderMusicSingleAuthorView : UIView
{
    int _commentScene; // +0x8
    id <WCFinderMusicSingleAuthorViewDelegate> _delegate; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UILabel * _nicknameLabel; // +0x20
    UIImageView * _iconView; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UIView * _topSeparateLine; // +0x38
    UIView * _bottomSeparateLine; // +0x40
}
+ (id)buildFriendDescLabel:(double)arg1;
+ (id)getFriendDataStringByFriendData:(id)arg1;
+ (double)heightOfSingleAuthorView;
- (id)initWithFrame:(CGRect)arg1;
- (id)topSeparateLine;
- (id)bottomSeparateLine;
- (id)avatarImageView;
- (id)nicknameLabel;
- (id)iconView;
- (id)arrowImageView;
- (void)updateAuthorViewWithSignerInfo:(id)arg1 isLastFinderContact:(BOOL)arg2;
- (void)layoutAllSubviewsByIsLastFinderContact:(BOOL)arg1;
- (void)onClickTagAuthorView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setTopSeparateLine:(id)arg1;
- (void)setBottomSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end

