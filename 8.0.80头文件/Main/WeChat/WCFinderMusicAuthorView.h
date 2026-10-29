@interface WCFinderMusicAuthorView : UIView
{
    id <WCFinderMusicAuthorViewDelegate> _delegate; // +0x8
    WCFinderHeadImageView * _avatarImageView; // +0x10
    UILabel * _nicknameLabel; // +0x18
    WCFinderAuthInfoIconView * _authIconView; // +0x20
    UILabel * _friendViewInfoLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
    MMUIButton * _followBtn; // +0x38
    UIView * _topSeparateLine; // +0x40
    UIView * _bottomSeparateLine; // +0x48
}
+ (id)buildFriendDescLabel:(double)arg1;
+ (id)getFriendDataStringByFriendData:(id)arg1;
+ (double)heightOfAuthorView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)topSeparateLine;
- (id)bottomSeparateLine;
- (id)avatarImageView;
- (id)nicknameLabel;
- (id)authIconView;
- (id)friendViewInfoLabel;
- (id)arrowImageView;
- (id)followBtn;
- (void)updateFollowBtnState:(BOOL)arg1;
- (void)updateAuthorViewWithTopicInfo:(id)arg1;
- (void)layoutAllSubviews;
- (void)onClickOutterFollowBtn;
- (void)onClickTagAuthorView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setFriendViewInfoLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setFollowBtn:(id)arg1;
- (void)setTopSeparateLine:(id)arg1;
- (void)setBottomSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end
