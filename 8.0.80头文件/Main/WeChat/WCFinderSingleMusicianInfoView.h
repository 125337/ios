@interface WCFinderSingleMusicianInfoView : MMUIView <WCFinderFittingWidthRichViewDelegate>
{
    id <WCFinderSingleMusicianInfoViewDelegate> _delegate; // +0x8
    UIView * _headerView; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UILabel * _nicknameLabel; // +0x20
    UILabel * _authInfoLabel; // +0x28
    WCFinderAuthInfoIconView * _authIconView; // +0x30
    UIImageView * _arrowImageView; // +0x38
    WCFinderFittingWidthRichView * _richTextView; // +0x40
    UILabel * _friendFollowLabel; // +0x48
    FinderContact * _contact; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (id)headerView;
- (id)arrowImageView;
- (id)avatarImageView;
- (id)nicknameLabel;
- (id)authInfoLabel;
- (id)authIconView;
- (id)richTextView;
- (id)friendFollowLabel;
- (id)signatureDisplayText:(id)arg1;
- (void)updateWithSingerInfo:(id)arg1 expand:(BOOL)arg2;
- (void)adjustAllSubviews;
- (void)onRichView:(id)arg1 expandChanged:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthInfoLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void)setFriendFollowLabel:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
